#pragma once

#include "StructDef.h"
#include "ThreadUtil.h"
#include <functional>

class CPipeServer
{
public:
	CPipeServer(void);
	~CPipeServer(void);

	BOOL StartServer(
		const wstring& pipeName,
		const std::function<void(CMD_STREAM*, CMD_STREAM*)>& cmdProc_,
		BOOL insecureFlag = FALSE
		);
	BOOL StopServer(BOOL checkOnlyFlag = FALSE);

	//SERVICE_NAME�̃T�[�r�X�Z�L�����e�B���ʎq(Service-specific SID)�ɑ΂���A�N�Z�X����ǉ�����
	static BOOL GrantServerAccessToKernelObject(HANDLE handle, DWORD permissions);

protected:
	std::function<void(CMD_STREAM*, CMD_STREAM*)> cmdProc;
	atomic_bool_ exitingFlag;
	CAutoResetEvent stopEvent;
	HANDLE hEventConnect;
	HANDLE hPipe;
	thread_ workThread;

protected:
	static BOOL GrantAccessToKernelObject(HANDLE handle, WCHAR* trusteeName, DWORD permissions);
	static void ServerThread(CPipeServer* pSys);

};
