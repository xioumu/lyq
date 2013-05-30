#include "stdafx.h"

LPCTSTR GameName = "零用钱大作战";
HWND gameh;
DWORD ProcessId;
HANDLE ProcessH;
RECT r1;

bool ReadGame()
{
	gameh = ::FindWindow(NULL,GameName);
	if(gameh == 0) return 0;
 	::GetWindowThreadProcessId(gameh,&ProcessId);
	ProcessH = OpenProcess(PROCESS_ALL_ACCESS,false,ProcessId);
	return 1;
}
byte nopcode[12]={0x90,0x90,0x90,0x90,0x90,
                  0x90,0x90,0x90,0x90,0x90};
void UnlimitedEat()
{
	if(ReadGame() == 0) { AfxMessageBox("无法读取游戏。"); return;}
	DWORD bywrite;
	//AfxMessageBox("ok1");
	::WriteProcessMemory(ProcessH,(LPVOID)(0x00402E65),(LPVOID)(nopcode),10,&bywrite);
}
void RecoveEat()
{
	 byte oldcode[12]={0xC7,0x87,0x5C,0x21,0x00,0x00,0x01,0x00,0x00,0x00}; 
	 if(ReadGame() == 0) { AfxMessageBox("无法读取游戏。"); return;}
	 DWORD bywrite;
	 //AfxMessageBox("ok1");
	 ::WriteProcessMemory(ProcessH,(LPVOID)(0x00402E65),(LPVOID)(oldcode),10,&bywrite);
}

void UnlimitedSpit()
{
	if(ReadGame() == 0) { AfxMessageBox("无法读取游戏。"); return;}
	DWORD bywrite;
///	AfxMessageBox("ok1");
	::WriteProcessMemory(ProcessH,(LPVOID)(0x00403b87),(LPVOID)(nopcode),10,&bywrite);
}
void RecoveSpit()
{
	byte oldcode[12]={0xC7,0x86,0x5C,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
	if(ReadGame() == 0) { AfxMessageBox("无法读取游戏。"); return;}
	DWORD bywrite;
//	AfxMessageBox("ok1");
	::WriteProcessMemory(ProcessH,(LPVOID)(0x00403b87),(LPVOID)(oldcode),10,&bywrite);
}