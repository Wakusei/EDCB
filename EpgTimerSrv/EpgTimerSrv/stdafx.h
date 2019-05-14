// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���̃C���N���[�h �t�@�C���A�܂���
// �Q�Ɖ񐔂������A�����܂�ύX����Ȃ��A�v���W�F�N�g��p�̃C���N���[�h �t�@�C��
// ���L�q���܂��B
//

#pragma once

#include "targetver.h"

#define WRAP_OUTPUT_DEBUG_STRING
#include "../../Common/Common.h"
#include <commctrl.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "comctl32.lib")
#pragma comment(lib, "Ws2_32.lib")

static inline FILE* secure_wfopen(const wchar_t* name, const wchar_t* mode)
{
	FILE* fp;
	return _wfopen_s(&fp, name, mode) == 0 ? fp : NULL;
}

static inline FILE* shared_wfopen(const wchar_t* name, const wchar_t* mode)
{
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable : 4996)
#endif
	return _wfopen(name, mode);
#ifdef __clang__
#pragma clang diagnostic pop
#else
#pragma warning(pop)
#endif
}
