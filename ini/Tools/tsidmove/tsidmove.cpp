// tsidmove: EDCB�̗\��AEPG�����\��A�v���O���������\��Ɋ܂܂��TransportStreamID�̏���ύX���� (2018-04-18)
// ���\��t�@�C�����ɂ��̃t�H�[�N�Ɣ�݊��̍��ڒǉ������ꂽ�t�H�[�N�ł͎g���܂킵�s�\
#include "stdafx.h"
#include "../../../Common/CommonDef.h"
#include "../../../Common/ParseTextInstances.h"
#include "../../../Common/PathUtil.h"

int wmain(int argc, wchar_t **argv)
{
	_wsetlocale(LC_ALL, L"");

	// --dray-run���͏������݂���؂��Ȃ�
	const bool dryrun = (argc == 5 && wcscmp(argv[1], L"--dry-run") == 0);
	if (argc != 4 && !dryrun) {
		_putws(L"Usage: tsidmove [--dry-run] {NetworkID} {before_TSID} {after_TSID}");
		return 2;
	}
	argv += (dryrun ? 2 : 1);
	const WORD beforeONID = static_cast<WORD>(wcstol(*(argv++), nullptr, 0));
	const WORD beforeTSID = static_cast<WORD>(wcstol(*(argv++), nullptr, 0));
	const WORD afterTSID = static_cast<WORD>(wcstol(*(argv++), nullptr, 0));

	// ���̃c�[����EDCB�t�H���_�����̒����̃t�H���_�ɒu����Ă���͂�
	fs_path iniPath = GetModulePath().replace_filename(L"Common.ini");
	if (GetFileAttributes(iniPath.c_str()) == INVALID_FILE_ATTRIBUTES) {
		iniPath = iniPath.parent_path().replace_filename(L"Common.ini");
		if (GetFileAttributes(iniPath.c_str()) == INVALID_FILE_ATTRIBUTES) {
			_putws(L"Error: Common.ini��������܂���B");
			return 1;
		}
	}

	// �u�ݒ�֌W�ۑ��t�H���_�v
	fs_path settingPath = GetPrivateProfileToFolderPath(L"SET", L"DataSavePath", iniPath.c_str());
	if (settingPath.empty()) {
		settingPath = fs_path(iniPath).replace_filename(L"Setting");
	}
	wprintf_s(L"\"%s\"�t�H���_���`�F�b�N���Ă��܂�...\n", settingPath.c_str());

	fs_path chSet5Path = fs_path(settingPath).append(L"ChSet5.txt");
	if (GetFileAttributes(chSet5Path.c_str()) == INVALID_FILE_ATTRIBUTES) {
		_putws(L"Error: ChSet5.txt��������܂���B");
		return 1;
	}
	CParseChText5 chText5;
	if (!chText5.ParseText(chSet5Path.c_str())) {
		_putws(L"Error: ChSet5.txt���J���܂���B");
		return 1;
	}

	// ChSet5.txt�͗\�ߍX�V����Ă���Ɖ���B�������`�F�b�N
	LPCWSTR targetName = nullptr;
	for (auto itr = chText5.GetMap().cbegin(); itr != chText5.GetMap().end(); itr++) {
		if (itr->second.originalNetworkID == beforeONID && itr->second.transportStreamID == beforeTSID) {
			wprintf_s(L"Warning: �ړ�����TSID=%d(0x%04x)�u%s�v���܂�ChSet5.txt�ɑ��݂��܂��B\n", beforeTSID, beforeTSID, itr->second.networkName.c_str());
		}
		if (itr->second.originalNetworkID == beforeONID && itr->second.transportStreamID == afterTSID) {
			targetName = itr->second.networkName.c_str();
		}
	}
	if (!targetName) {
		wprintf_s(L"Error: �ړ����TSID=%d(0x%04x) ��ChSet5.txt�ɑ��݂��܂���B\n", afterTSID, afterTSID);
		return 1;
	}

	HANDLE hMutex = CreateMutex(nullptr, FALSE, EPG_TIMER_BON_SRV_MUTEX);
	if (hMutex) {
		if (GetLastError() == ERROR_ALREADY_EXISTS) {
			CloseHandle(hMutex);
			hMutex = nullptr;
		}
	}
	if (!hMutex) {
		_putws(L"Error: EpgTimerSrv.exe���I�������Ă��������B");
		return 1;
	}
	CloseHandle(hMutex);

	wprintf_s(L"NetworkID=%d(0x%04x) �̈ړ���TSID=%d(0x%04x) ���ړ���TSID=%d(0x%04x) �ɕύX���܂��B\n",
	          beforeONID, beforeONID, beforeTSID, beforeTSID, afterTSID, afterTSID);
	wprintf_s(L"�`�����l�����́u%s�v�B\n\n", targetName);

	wprintf_s(RESERVE_TEXT_NAME L"(�\��t�@�C��)");
	{
		CParseReserveText text;
		if (!text.ParseText(fs_path(settingPath).append(RESERVE_TEXT_NAME).c_str())) {
			_putws(L"���X�L�b�v���܂��B");
		} else {
			int n = 0;
			for (size_t i = 0; i < text.GetMap().size(); i++) {
				auto itr = text.GetMap().cbegin();
				std::advance(itr, i);
				RESERVE_DATA r = itr->second;
				if (r.originalNetworkID == beforeONID && r.transportStreamID == beforeTSID) {
					r.transportStreamID = afterTSID;
					text.ChgReserve(r);
					n++;
				}
			}
			if (n == 0) {
				_putws(L"�ɕύX�͂���܂���B");
			} else {
				wprintf_s(L"��%d���ڕύX���܂�...\n", n);
				if (!dryrun) {
					if (text.SaveText()) {
						_putws(L"�����B");
					} else {
						_putws(L"Error: ���s�B");
					}
				}
			}
		}
	}

	wprintf_s(EPG_AUTO_ADD_TEXT_NAME L"(EPG�����\��t�@�C��)");
	{
		CParseEpgAutoAddText text;
		if (!text.ParseText(fs_path(settingPath).append(EPG_AUTO_ADD_TEXT_NAME).c_str())) {
			_putws(L"���X�L�b�v���܂��B");
		} else {
			int n = 0;
			for (size_t i = 0; i < text.GetMap().size(); i++) {
				auto itr = text.GetMap().cbegin();
				std::advance(itr, i);
				EPG_AUTO_ADD_DATA a = itr->second;
				bool modified = false;
				for (auto jtr = a.searchInfo.serviceList.begin(); jtr != a.searchInfo.serviceList.end(); jtr++) {
					if (((*jtr >> 32) & 0xFFFF) == beforeONID && ((*jtr >> 16) & 0xFFFF) == beforeTSID) {
						*jtr = (*jtr & 0xFFFF0000FFFFLL) | (static_cast<DWORD>(afterTSID) << 16);
						modified = true;
					}
				}
				if (modified) {
					text.ChgData(a);
					n++;
				}
			}
			if (n == 0) {
				_putws(L"�ɕύX�͂���܂���B");
			} else {
				wprintf_s(L"��%d���ڕύX���܂�...\n", n);
				if (!dryrun) {
					if (text.SaveText()) {
						_putws(L"�����B");
					} else {
						_putws(L"Error: ���s�B");
					}
				}
			}
		}
	}

	wprintf_s(MANUAL_AUTO_ADD_TEXT_NAME L"(�v���O���������\��t�@�C��)");
	{
		CParseManualAutoAddText text;
		if (!text.ParseText(fs_path(settingPath).append(MANUAL_AUTO_ADD_TEXT_NAME).c_str())) {
			_putws(L"���X�L�b�v���܂��B");
		} else {
			int n = 0;
			for (size_t i = 0; i < text.GetMap().size(); i++) {
				auto itr = text.GetMap().cbegin();
				std::advance(itr, i);
				MANUAL_AUTO_ADD_DATA m = itr->second;
				if (m.originalNetworkID == beforeONID && m.transportStreamID == beforeTSID) {
					m.transportStreamID = afterTSID;
					text.ChgData(m);
					n++;
				}
			}
			if (n == 0) {
				_putws(L"�ɕύX�͂���܂���B");
			} else {
				wprintf_s(L"��%d���ڕύX���܂�...\n", n);
				if (!dryrun) {
					if (text.SaveText()) {
						_putws(L"�����B");
					} else {
						_putws(L"Error: ���s�B");
					}
				}
			}
		}
	}

	_putws(L"�I���B");
	return 0;
}
