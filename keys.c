﻿/************************************************************************************

                                  smb Utility

  File: keys.c
  Description:
  History:

 ************************************************************************************/
#include "smbutil.h"
#include "emulator.h"
#include "keyaccel.h"
#include "ini.h"
#include "keys.h"
#include "objeditcom.h"

// none, +shift, +ctrl, +shift+ctrl
#define CUSTOMIZE_WHEEL_NUMFUNCS 4

#define CUSTOMIZE_WHEEL_TYPE_NONE      0
#define CUSTOMIZE_WHEEL_TYPE_CTRL      1
#define CUSTOMIZE_WHEEL_TYPE_SHIFT     2
#define CUSTOMIZE_WHEEL_TYPE_CTRLSHIFT 3

WHEELFUNC g_wfWheelFunc[CUSTOMIZE_WHEEL_NUMFUNCS];
const WHEELFUNC g_wfWheelFuncDefault[CUSTOMIZE_WHEEL_NUMFUNCS] = {PAGE, TYPE16, TYPE1, OBJ};

static void ExecuteWheelCommand(WHEELFUNC wf, short zDelta)
{
	switch(wf)
	{
	case TYPE1:
		if (zDelta > 0)
			MapEditCommand(IDM_EDITCOMMAND_ADD1TOTYPE);
		else if (zDelta)
			MapEditCommand(IDM_EDITCOMMAND_DEC1TOTYPE);
		break;
	case TYPE16:
		if (zDelta > 0)
			MapEditCommand(IDM_EDITCOMMAND_ADD16TOTYPE);
		else if (zDelta)
			MapEditCommand(IDM_EDITCOMMAND_DEC16TOTYPE);
		break;
	case PAGE:
		if (zDelta > 0)
			MapEditCommand(IDM_EDITCOMMAND_REWPAGE);
		else if (zDelta)
			MapEditCommand(IDM_EDITCOMMAND_FWDPAGE);
		break;
	case OBJ:
		if (zDelta > 0)
			MapEditCommand(IDM_EDITCOMMAND_PREVOBJ);
		else if (zDelta)
			MapEditCommand(IDM_EDITCOMMAND_NEXTOBJ);
		break;
	}
}

VOID ky_WM_MOUSEWHEEL(WPARAM wParam, LPARAM lParam)
{
	DWORD fwKeys = LOWORD(wParam);
	short zDelta = (short) HIWORD(wParam);

	if ((fwKeys & MK_CONTROL)
		&&(fwKeys & MK_SHIFT)) {
		ExecuteWheelCommand(g_wfWheelFunc[CUSTOMIZE_WHEEL_TYPE_CTRLSHIFT], zDelta);
	}
	else if (fwKeys & MK_CONTROL) {
		ExecuteWheelCommand(g_wfWheelFunc[CUSTOMIZE_WHEEL_TYPE_CTRL], zDelta);
	}
	else if (fwKeys & MK_SHIFT){
		ExecuteWheelCommand(g_wfWheelFunc[CUSTOMIZE_WHEEL_TYPE_SHIFT], zDelta);
	}
	else{
		ExecuteWheelCommand(g_wfWheelFunc[CUSTOMIZE_WHEEL_TYPE_NONE], zDelta);
	}
}

HANDLE ky_Initialize()
{
	if(!ReadFromRegistry(INI_EDITOR_WHEEL,
						 REG_BINARY,
						 g_wfWheelFunc,
						 CUSTOMIZE_WHEEL_NUMFUNCS * sizeof(WHEELFUNC))) {
		CopyMemory(g_wfWheelFunc, g_wfWheelFuncDefault, CUSTOMIZE_WHEEL_NUMFUNCS * sizeof(WHEELFUNC));
	}

	return CreateEditCommandAccel();
}

#define NUM_VKEYINFO 83

const struct {
	BYTE   bVKey;
	LPTSTR lpKeyName;
}g_VKeyInfo[NUM_VKEYINFO] = 
{
VK_BACK,	TEXT("Back Space"),
VK_TAB,		TEXT("Tab"),
VK_CLEAR,	TEXT("Clear"),
VK_RETURN,	TEXT("Enter"),
VK_PAUSE,	TEXT("Pause"),
VK_CAPITAL,	TEXT("Caps Lock"),
VK_ESCAPE,	TEXT("Esc"),
VK_SPACE,	TEXT("Space"),
VK_PRIOR,	TEXT("Page Up"),
VK_NEXT,	TEXT("Page Down"),

VK_END,		TEXT("End"),
VK_HOME,	TEXT("Home"),
VK_LEFT,	TEXT("Left"),
VK_UP,		TEXT("Up"),
VK_RIGHT,	TEXT("Right"),
VK_DOWN,	TEXT("Down"),
VK_SELECT,	TEXT("Select"),
VK_SNAPSHOT,TEXT("Print Screen"),
VK_INSERT,	TEXT("Insert"),
VK_DELETE,	TEXT("Delete"),

0x30,		TEXT("0"),
0x31,		TEXT("1"),
0x32,		TEXT("2"),
0x33,		TEXT("3"),
0x34,		TEXT("4"),
0x35,		TEXT("5"),
0x36,		TEXT("6"),
0x37,		TEXT("7"),
0x38,		TEXT("8"),
0x39,		TEXT("9"),

0x41,		TEXT("a"),
0x42,		TEXT("b"),
0x43,		TEXT("c"),
0x44,		TEXT("d"),
0x45,		TEXT("e"),
0x46,		TEXT("f"),
0x47,		TEXT("g"),
0x48,		TEXT("h"),
0x49,		TEXT("i"),
0x4A,		TEXT("j"),

0x4B,		TEXT("k"),
0x4C,		TEXT("l"),
0x4D,		TEXT("m"),
0x4E,		TEXT("n"),
0x4F,		TEXT("o"),
0x50,		TEXT("p"),
0x51,		TEXT("q"),
0x52,		TEXT("r"),
0x53,		TEXT("s"),
0x54,		TEXT("t"),

0x55,		TEXT("u"),
0x56,		TEXT("v"),
0x57,		TEXT("w"),
0x58,		TEXT("x"),
0x59,		TEXT("y"),
0x5A,		TEXT("z"),
VK_NUMPAD0,	TEXT("Numpad 0"),
VK_NUMPAD1, TEXT("Numpad 1"),
VK_NUMPAD2, TEXT("Numpad 2"),
VK_NUMPAD3, TEXT("Numpad 3"),

VK_NUMPAD4, TEXT("Numpad 4"),
VK_NUMPAD5, TEXT("Numpad 5"),
VK_NUMPAD6, TEXT("Numpad 6"),
VK_NUMPAD7, TEXT("Numpad 7"),
VK_NUMPAD8, TEXT("Numpad 8"),
VK_NUMPAD9, TEXT("Numpad 9"),
VK_MULTIPLY,TEXT("Numpad *"),
VK_ADD,		TEXT("Numpad +"),
VK_SUBTRACT, TEXT("Numpad -"),
VK_DECIMAL,  TEXT("Numpad ."),

VK_DIVIDE,	TEXT("Numpad /"),
VK_F1,		TEXT("f1"),
VK_F2,		TEXT("f2"),
VK_F3,		TEXT("f3"),
VK_F4,		TEXT("f4"),
VK_F5,		TEXT("f5"),
VK_F6,		TEXT("f6"),
VK_F7,		TEXT("f7"),
VK_F8,		TEXT("f8"),
VK_F9,		TEXT("f9"),

VK_F10,		TEXT("f10"),
VK_F11,		TEXT("f11"),
VK_F12,		TEXT("f12")
};

static UINT FindVkeyIndex(BYTE bVkey)
{
	INT h,l,m;

	l = 0;
	h = NUM_VKEYINFO;

	while(l <= h){
		m = (l + h) / 2;
		if(g_VKeyInfo[m].bVKey <= bVkey) l = m + 1;
		if(g_VKeyInfo[m].bVKey >= bVkey) h = m - 1;
	}

	if(l - h == 2)
		return (l - 1);

	return -1L;
}


// A, B, SELECT, START, UP, DOWN, LEFT, RIGHTの順
// NOTE : A, B, SELECT, STARTが最初にくることを前提にして、
//        ジョイスティックのボタン設定を実装している
//        (UP, DOWN, LEFT, RIGHTは未使用)
LPTSTR g_szEmuKeyName[EMULATOR_NUM_BUTTONS];

LPTSTR g_szEditKeyName[KEYACCEL_NUM_COMMANDS];

void InitializeKeyNames()
{
    LPTSTR temp1[EMULATOR_NUM_BUTTONS] =
    {
        GetResourceString(IDS_KEYCONFIG_EMU_A),//"A",
        GetResourceString(IDS_KEYCONFIG_EMU_B),//"B",
        GetResourceString(IDS_KEYCONFIG_EMU_SELECT),//"ｾﾚｸﾄ",
        GetResourceString(IDS_KEYCONFIG_EMU_START),//"ｽﾀｰﾄ",
        GetResourceString(IDS_KEYCONFIG_EMU_UP),//"上",
        GetResourceString(IDS_KEYCONFIG_EMU_DOWN),//"下",
        GetResourceString(IDS_KEYCONFIG_EMU_LEFT),//"左",
        GetResourceString(IDS_KEYCONFIG_EMU_RIGHT)//"右"
    };
    memcpy(g_szEmuKeyName, temp1, sizeof(temp1));

    LPTSTR temp2[KEYACCEL_NUM_COMMANDS] =
    {
        GetResourceString(IDS_KEYCONFIG_EDIT_ADD1),//"種類を+1",
        GetResourceString(IDS_KEYCONFIG_EDIT_DEC1),//"種類を-1",
        GetResourceString(IDS_KEYCONFIG_EDIT_ADD16),//"種類を+16",
        GetResourceString(IDS_KEYCONFIG_EDIT_DEC16),//"種類を-16",
        GetResourceString(IDS_KEYCONFIG_EDIT_UP),//"位置を上へ",
        GetResourceString(IDS_KEYCONFIG_EDIT_DOWN),//"位置を下へ",
        GetResourceString(IDS_KEYCONFIG_EDIT_LEFT),//"位置を左へ",
        GetResourceString(IDS_KEYCONFIG_EDIT_RIGHT),//"位置を右へ",
        GetResourceString(IDS_KEYCONFIG_EDIT_NEXTPAGE),//"次のﾍﾟｰｼﾞへ",
        GetResourceString(IDS_KEYCONFIG_EDIT_PREVPAGE),//"前のﾍﾟｰｼﾞへ",
        GetResourceString(IDS_KEYCONFIG_EDIT_NEXTOBJ),//"次のｵﾌﾞｼﾞｪｸﾄへ",
        GetResourceString(IDS_KEYCONFIG_EDIT_PREVOBJ),//"前のｵﾌﾞｼﾞｪｸﾄへ",
        GetResourceString(IDS_KEYCONFIG_EDIT_SAVEFILE),//"ﾌｧｲﾙ: 上書き保存",
        GetResourceString(IDS_KEYCONFIG_EDIT_UNDO),//"編集: 元に戻す",
        GetResourceString(IDS_KEYCONFIG_EDIT_ROOM),//"編集: ﾙｰﾑを開く",
        GetResourceString(IDS_KEYCONFIG_EDIT_BADGUYS),//"編集: 敵",
        GetResourceString(IDS_KEYCONFIG_EDIT_MAP),//"編集: 地形",
        GetResourceString(IDS_KEYCONFIG_EDIT_TESTPLAY),//"ｴﾐｭﾚｰﾀ: ﾃｽﾄﾌﾟﾚｲ",
        GetResourceString(IDS_KEYCONFIG_EDIT_PAGETESTPLAY),//"ｴﾐｭﾚｰﾀ: ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ",
        GetResourceString(IDS_KEYCONFIG_EDIT_PAGETESTPLAY2),//"ｴﾐｭﾚｰﾀ: 途中ﾍﾟｰｼﾞﾃｽﾄﾌﾟﾚｲ",
        GetResourceString(IDS_KEYCONFIG_EDIT_STOP),//"ｴﾐｭﾚｰﾀ: 停止",
        GetResourceString(IDS_KEYCONFIG_EDIT_SAVEEMU),//"ｴﾐｭﾚｰﾀ: ｾｰﾌﾞ",
        GetResourceString(IDS_KEYCONFIG_EDIT_LOADEMU),//"ｴﾐｭﾚｰﾀ: ﾛｰﾄﾞ",
        GetResourceString(IDS_KEYCONFIG_EDIT_EMUSETTING),//"ｴﾐｭﾚｰﾀ: ﾃｽﾄﾌﾟﾚｲの設定",
        GetResourceString(IDS_KEYCONFIG_EDIT_NEXTWIN),//"ｳｲﾝﾄﾞｳ: 次へ",
        GetResourceString(IDS_KEYCONFIG_EDIT_PREVWIN),//"ｳｲﾝﾄﾞｳ: 前へ"
    };
    memcpy(g_szEditKeyName, temp2, sizeof(temp2));
}

#define CUSTOMIZE_KEYIDS 2

#define CUSTOMIZE_KEYS_ID_INVALID 0
#define CUSTOMIZE_KEYS_ID_EDIT    1
#define CUSTOMIZE_KEYS_ID_EMU     2

static void EnableAccessoryKey(HWND hDlg,BOOL blEnable)
{
	CheckDlgButton(hDlg,IDC_CTRL,FALSE);
	EnableWindow(GetDlgItem(hDlg,IDC_CTRL),blEnable);
	CheckDlgButton(hDlg,IDC_ALT,FALSE);
	EnableWindow(GetDlgItem(hDlg,IDC_ALT),blEnable);
	CheckDlgButton(hDlg,IDC_SHIFT,FALSE);
	EnableWindow(GetDlgItem(hDlg,IDC_SHIFT),blEnable);
}

static DWORD FindOverlappedKeyDefinition(WORD wVkey,LPWORD lpwEditVKeys,LPWORD lpbEmuVKeys)
{
	int N;

	for(N=0;N<KEYACCEL_NUM_COMMANDS;N++)
	{
		if(lpwEditVKeys[N] == wVkey)
			return ((CUSTOMIZE_KEYS_ID_EDIT<<16)|N);
	}

	for(N=0;N<EMULATOR_NUM_BUTTONS;N++)
	{
		if(lpbEmuVKeys[N] == wVkey)
			return ((CUSTOMIZE_KEYS_ID_EMU<<16)|N);
	}

	return 0;
}

static LPTSTR FormatOverlappedKeyInformation(LPTSTR szBuf,DWORD dwResult)
{
	switch(dwResult >> 16)
	{
	case CUSTOMIZE_KEYS_ID_EDIT:
		wsprintf(szBuf, GetResourceString(IDS_KEYCONFIG_OVERLAPPED), GetResourceString(IDS_KEYCONFIG_KEYACCEL), g_szEditKeyName[dwResult & 0xFFFF]);
		break;
	case CUSTOMIZE_KEYS_ID_EMU:
		wsprintf(szBuf, GetResourceString(IDS_KEYCONFIG_OVERLAPPED), GetResourceString(IDS_KEYCONFIG_EMULATOR), g_szEmuKeyName[dwResult & 0xFFFF]);
		break;
	}
	return szBuf;
}

#define WM_UPDATEKEYVALUE (WM_USER + 1)

// ジョイスティック
DWORD g_adwJoyButtonFlags[JOYSTICK_MAX_BUTTONS] = {JOY_BUTTON1,  JOY_BUTTON2,  JOY_BUTTON3, JOY_BUTTON4,   JOY_BUTTON5,  JOY_BUTTON6, JOY_BUTTON7,   JOY_BUTTON8,
												   JOY_BUTTON9,  JOY_BUTTON10, JOY_BUTTON11, JOY_BUTTON12, JOY_BUTTON13, JOY_BUTTON14, JOY_BUTTON15, JOY_BUTTON16,
												   JOY_BUTTON17, JOY_BUTTON18, JOY_BUTTON19, JOY_BUTTON20, JOY_BUTTON21, JOY_BUTTON22, JOY_BUTTON23, JOY_BUTTON24, 
												   JOY_BUTTON25, JOY_BUTTON26, JOY_BUTTON27, JOY_BUTTON28, JOY_BUTTON29, JOY_BUTTON30, JOY_BUTTON31, JOY_BUTTON32 };

// ジョイスティックの一つのボタンフラグビットからコンボボックスでのインデックスを得る
static UINT FindJoyButtonIndex(DWORD dwJoyButton)
{
	DWORD n;

	for (n = 0;n < JOYSTICK_MAX_BUTTONS;n++) {
		if (g_adwJoyButtonFlags[n] == dwJoyButton)
			return n;
	}

	return (UINT)-1;
}

LRESULT CALLBACK CustomizeDlgProc( HWND hDlg,UINT message,WPARAM wParam,LPARAM lParam)
{
	static WORD bEmuVKeys[EMULATOR_NUM_BUTTONS];
	static WORD bEditVKeys[KEYACCEL_NUM_COMMANDS];
	static DWORD dwEmuJoyButtons[EMULATOR_NUM_JOYBUTTONS];
	static WHEELFUNC wfWheelFunc[CUSTOMIZE_WHEEL_NUMFUNCS];
	static UINT uKeyID,uKey,uKeyValue;
	switch (message)
	{
	case WM_INITDIALOG:
		{
			UINT N;
			LPTSTR lpKeyID[CUSTOMIZE_KEYIDS] = {GetResourceString(IDS_KEYCONFIG_KEYACCEL), GetResourceString(IDS_KEYCONFIG_EMULATOR)};
			LPTSTR lpPreset[KEYACCEL_NUM_PRESETS] = {GetResourceString(IDS_KEYCONFIG_PRESET_DESKTOP), GetResourceString(IDS_KEYCONFIG_PRESET_NOTE)};
			LPTSTR lpWheel[CUSTOMIZE_WHEEL_NUMFUNCS] = {GetResourceString(IDS_KEYCONFIG_WHEEL_NONE), GetResourceString(IDS_KEYCONFIG_WHEEL_CTRL), GetResourceString(IDS_KEYCONFIG_WHEEL_SHIFT), GetResourceString(IDS_KEYCONFIG_WHEEL_SHIFTCTRL)};
			LPTSTR lpWheelFunc[CUSTOMIZE_WHEEL_NUMFUNCS] = {GetResourceString(IDS_KEYCONFIG_WHEEL_TYPE1), GetResourceString(IDS_KEYCONFIG_WHEEL_TYPE16), GetResourceString(IDS_KEYCONFIG_WHEEL_PAGE), GetResourceString(IDS_KEYCONFIG_WHEEL_OBJ)};
			LPTSTR  szButtonName = GetTempStringBuffer();

			//---------------
			//  初期化
			//---------------
			//
			GetEditorVKeys(&bEditVKeys[0]);
			GetEmulatorVKeys(&bEmuVKeys[0]);
			GetEmulatorJoyButtons(&dwEmuJoyButtons[0]);
			CopyMemory(wfWheelFunc, g_wfWheelFunc, sizeof(WHEELFUNC) * CUSTOMIZE_WHEEL_NUMFUNCS);

			// キーボード
			for(N=0;N<CUSTOMIZE_KEYIDS;N++)
				SendDlgItemMessage(hDlg,IDC_KEYID,CB_ADDSTRING,0,(LPARAM)lpKeyID[N]);
			for(N=0;N<NUM_VKEYINFO;N++)
				SendDlgItemMessage(hDlg,IDC_KEYVALUE,CB_ADDSTRING,0,(LPARAM)g_VKeyInfo[N].lpKeyName);
			for(N=0;N<KEYACCEL_NUM_PRESETS;N++)
				SendDlgItemMessage(hDlg,IDC_PRESET,CB_ADDSTRING,0,(LPARAM)lpPreset[N]);
			SendDlgItemMessage(hDlg, IDC_PRESET, CB_SETCURSEL, 0, 0);
			// マウスホイール
			for(N=0;N<CUSTOMIZE_WHEEL_NUMFUNCS;N++)
				SendDlgItemMessage(hDlg,IDC_WHEELLIST,LB_ADDSTRING,0,(LPARAM)lpWheel[N]);
			for(N=0;N<CUSTOMIZE_WHEEL_NUMFUNCS;N++)
				SendDlgItemMessage(hDlg,IDC_WHEELCOMMAND,CB_ADDSTRING,0,(LPARAM)lpWheelFunc[N]);
			// ジョイスティックのボタン
			// リストにコントローラーのボタン名を追加
			for(N=0;N<EMULATOR_NUM_JOYBUTTONS;N++)
				SendDlgItemMessage(hDlg,IDC_JOYBUTTONLIST,LB_ADDSTRING,0,(LPARAM)g_szEmuKeyName[N]);
			// コンボボックスにジョイスティックのボタン名を追加
			for(N=0;N<JOYSTICK_MAX_BUTTONS;N++) {
				wsprintf(szButtonName, GetResourceString(IDS_KEYCONFIG_BUTTONX), N + 1);
				SendDlgItemMessage(hDlg,IDC_JOYBUTTONVALUE,CB_ADDSTRING,0,(LPARAM)szButtonName);
			}
			

			//-----------
			//
			//-----------
			uKeyID = uKey = uKeyValue = 0;
			//
			SendDlgItemMessage(hDlg, IDC_KEYID, CB_SETCURSEL, uKeyID, 0);
			SendMessage(hDlg, WM_COMMAND, MAKEWPARAM(IDC_KEYID,CBN_SELCHANGE), 0);
			//
			SendDlgItemMessage(hDlg, IDC_WHEELLIST, LB_SETCURSEL, 0, 0);
			SendMessage(hDlg, WM_COMMAND, MAKEWPARAM(IDC_WHEELLIST, LBN_SELCHANGE), 0);
			//
			SendDlgItemMessage(hDlg, IDC_JOYBUTTONLIST, LB_SETCURSEL, 0, 0);
			SendMessage(hDlg, WM_COMMAND, MAKEWPARAM(IDC_JOYBUTTONLIST, LBN_SELCHANGE), 0);
		}
		break;
	case WM_UPDATEKEYVALUE:
		{
			BYTE bVKey = 0;
			//----------------
			//
			//----------------
			uKey = SendDlgItemMessage(hDlg,IDC_KEYLIST,LB_GETCURSEL,0,0);
			if(uKey==LB_ERR){
				EndDialog(hDlg,FALSE);
				return TRUE;
			}
			switch(uKeyID)
			{
			case CUSTOMIZE_KEYS_ID_EDIT:
				{
					WORD wVKey = bEditVKeys[uKey];
					
					bVKey = GETVKEY(wVKey);
					CheckDlgButton(hDlg,IDC_CTRL,GETCTRL(wVKey));
					CheckDlgButton(hDlg,IDC_ALT,GETALT(wVKey));
					CheckDlgButton(hDlg,IDC_SHIFT,GETSHIFT(wVKey));
				}
				break;
			case CUSTOMIZE_KEYS_ID_EMU:
				bVKey = GETVKEY(bEmuVKeys[uKey]);
				break;
			}

			uKeyValue = FindVkeyIndex(bVKey);
			SendDlgItemMessage(hDlg,IDC_KEYVALUE,CB_SETCURSEL,uKeyValue,0);
		}
		return TRUE;
	case WM_COMMAND:
		{
			WORD wNotifyCode = HIWORD(wParam);
			WORD wID = LOWORD(wParam);
			switch(wID)
			{
			case IDC_KEYID:
				{
					if(wNotifyCode == CBN_SELCHANGE)
					{
						UINT N;
						//----------------
						//
						//----------------
						uKeyID = SendDlgItemMessage(hDlg,IDC_KEYID,CB_GETCURSEL,0,0);
						if(uKeyID == CB_ERR){
							EndDialog(hDlg,FALSE);
							return TRUE;
						}
						// キーIDは、1から始まる
						uKeyID++;
						//
						SendDlgItemMessage(hDlg,IDC_KEYLIST,LB_RESETCONTENT,0,0);
						switch(uKeyID)
						{
						case CUSTOMIZE_KEYS_ID_EDIT:
							for(N=0;N<KEYACCEL_NUM_COMMANDS;N++)
								SendDlgItemMessage(hDlg,IDC_KEYLIST,LB_ADDSTRING,0,(LPARAM)g_szEditKeyName[N]);
							EnableAccessoryKey(hDlg,TRUE);
							break;
						case CUSTOMIZE_KEYS_ID_EMU:
							for(N=0;N<EMULATOR_NUM_BUTTONS;N++)
								SendDlgItemMessage(hDlg,IDC_KEYLIST,LB_ADDSTRING,0,(LPARAM)g_szEmuKeyName[N]);
							EnableAccessoryKey(hDlg,FALSE);
							break;
						}
						//---------------
						//
						//---------------
						uKey = 0;
						SendDlgItemMessage(hDlg,IDC_KEYLIST,LB_SETCURSEL,uKey,0);

						SendMessage(hDlg,WM_COMMAND,MAKEWPARAM(IDC_KEYLIST,LBN_SELCHANGE),0);
						return TRUE;
					}
					
				} //　IDC_KEYID
				break;
			case IDC_KEYLIST:
				{
					if(wNotifyCode == LBN_SELCHANGE)
					{
						SendMessage(hDlg,WM_UPDATEKEYVALUE,0,0);
					}
				} // IDC_KEYLIST
				break;
			case IDC_KEYVALUE:
				{
					if(wNotifyCode == CBN_SELCHANGE)
					{
						BYTE bNewVKey;
						WORD wCurVKey;
						WORD wNewKey;
						DWORD dwResult;
						LPTSTR szBuf = GetTempStringBuffer();

						uKeyValue = SendDlgItemMessage(hDlg,IDC_KEYVALUE,CB_GETCURSEL,0,0);
						if(uKeyValue==CB_ERR){
							EndDialog(hDlg,FALSE);
							return TRUE;
						}
						bNewVKey = g_VKeyInfo[uKeyValue].bVKey;
						switch(uKeyID)
						{
						case CUSTOMIZE_KEYS_ID_EDIT:
							wCurVKey = bEditVKeys[uKey];
							wNewKey = GETASSISTKEY(wCurVKey);
							SETVKEY(wNewKey,bNewVKey);
							dwResult = FindOverlappedKeyDefinition(wNewKey,bEditVKeys,bEmuVKeys);
							if(dwResult
								&& (CUSTOMIZE_KEYS_ID_EDIT != HIWORD(dwResult) || uKey != LOWORD(dwResult)) // 新たに選択した項目が選択されていたものと同じ項目でなければ
							  ){
								FormatOverlappedKeyInformation(szBuf, dwResult);
								Msg(szBuf, MB_OK | MB_ICONEXCLAMATION);
								SendMessage(hDlg,WM_UPDATEKEYVALUE,0,0);
								return TRUE;
							}
							bEditVKeys[uKey] = wNewKey;
							break;
						case CUSTOMIZE_KEYS_ID_EMU:
							wCurVKey = bEmuVKeys[uKey];
							wNewKey = (WORD)bNewVKey;
							dwResult = FindOverlappedKeyDefinition(wNewKey,bEditVKeys,bEmuVKeys);
							if(dwResult
								&& (CUSTOMIZE_KEYS_ID_EMU != HIWORD(dwResult) || uKey != LOWORD(dwResult)) // 新たに選択した項目が選択されていたものと同じ項目でなければ
							  ){
								FormatOverlappedKeyInformation(szBuf, dwResult);
								Msg(szBuf, MB_OK | MB_ICONEXCLAMATION);
								SendMessage(hDlg,WM_UPDATEKEYVALUE,0,0);
								return TRUE;
							}
							bEmuVKeys[uKey] = wNewKey;
							break;
						}
						return TRUE;
					}

				}
				break;
			case IDC_SHIFT:
			case IDC_ALT:
			case IDC_CTRL:
				{
					if(wNotifyCode == BN_CLICKED)
					{
						if(uKeyID==CUSTOMIZE_KEYS_ID_EDIT)
						{
							WORD wMask, wNewKey;
							DWORD dwResult;
							LPTSTR szBuf = GetTempStringBuffer();

							switch(wID)
							{
							case IDC_SHIFT:
								wMask=SHIFTBIT;
								break;
							case IDC_ALT:
								wMask=ALTBIT;
								break;
							case IDC_CTRL:
								wMask=CTRLBIT;
								break;
							}
							wNewKey = bEditVKeys[uKey];
							if(IsDlgButtonChecked(hDlg,wID))
								wNewKey|=wMask;
							else
								wNewKey&=~wMask;

							dwResult = FindOverlappedKeyDefinition(wNewKey,bEditVKeys,bEmuVKeys);
							if (dwResult) { // チェックボックスの状態の変化によって同じキー入力になることはない
								FormatOverlappedKeyInformation(szBuf, dwResult);
								Msg(szBuf, MB_OK | MB_ICONEXCLAMATION);
								SendMessage(hDlg,WM_UPDATEKEYVALUE,0,0);
								return TRUE;
							}

							bEditVKeys[uKey] = wNewKey;
						}
					}
				}
				break;
			case IDC_RESET:
				{
					if(wNotifyCode == BN_CLICKED)
					{
						if(IDNO==Msg(GetResourceString(IDS_KEYCONFIG_INITIALIZE), MB_YESNO | MB_ICONQUESTION))
							break;

						GetPresetEditorKeys(&bEditVKeys[0], SendDlgItemMessage(hDlg, IDC_PRESET, CB_GETCURSEL, 0, 0));
						GetDefaultEmulatorKeys(&bEmuVKeys[0]);
						
						uKey = 0;
						SendDlgItemMessage(hDlg,IDC_KEYLIST,LB_SETCURSEL,uKey,0);
						SendMessage(hDlg,WM_COMMAND,MAKEWPARAM(IDC_KEYLIST,LBN_SELCHANGE),0);
					}
				}
				break;
			case IDC_WHEELLIST:
				{
					int L;
					if(wNotifyCode == LBN_SELCHANGE)
					{
						L = SendDlgItemMessage(hDlg, IDC_WHEELLIST, LB_GETCURSEL, 0, 0);
						if(L != LB_ERR){
							SendDlgItemMessage(hDlg, IDC_WHEELCOMMAND, CB_SETCURSEL, wfWheelFunc[L], 0);
						}
					}
				}
				break;
			case IDC_WHEELCOMMAND:
				{
					int L, C, N;
					WHEELFUNC T;
					if(wNotifyCode == CBN_SELCHANGE)
					{
						L = SendDlgItemMessage(hDlg, IDC_WHEELLIST, LB_GETCURSEL, 0, 0);
						if(L != LB_ERR){
							C = SendDlgItemMessage(hDlg, IDC_WHEELCOMMAND, CB_GETCURSEL, 0, 0);
							if(C != CB_ERR){
								//現在設定されている操作を見つける
								for(N = 0;N < CUSTOMIZE_WHEEL_NUMFUNCS;N++){
									if(wfWheelFunc[N] == (WHEELFUNC)C)
										break;
								}
								if(N == CUSTOMIZE_WHEEL_NUMFUNCS){
									wfWheelFunc[L] = (WHEELFUNC)C;
								}
								else{
									T = wfWheelFunc[N];
									wfWheelFunc[N] = wfWheelFunc[L];
									wfWheelFunc[L] = T;
								}
							}
						}
					}
				}
				break;
			case IDC_JOYBUTTONLIST:
				{
					int L;
					if (wNotifyCode == LBN_SELCHANGE)
					{
						L = SendDlgItemMessage(hDlg, IDC_JOYBUTTONLIST, LB_GETCURSEL, 0, 0);
						// コンボボックスを更新
						if (L != LB_ERR)
							SendDlgItemMessage(hDlg, IDC_JOYBUTTONVALUE, CB_SETCURSEL, FindJoyButtonIndex(dwEmuJoyButtons[L]), 0);
					}
				}
				break;
			case IDC_JOYBUTTONVALUE:
				{
					int L, V, N;
					DWORD dwNewButton, T;
					if (wNotifyCode == CBN_SELCHANGE)
					{
						L = SendDlgItemMessage(hDlg, IDC_JOYBUTTONLIST, LB_GETCURSEL, 0, 0);
						if (L != LB_ERR){
							V = SendDlgItemMessage(hDlg, IDC_JOYBUTTONVALUE, CB_GETCURSEL, 0, 0);
							if (V != CB_ERR){
								// ボタンの新しい値
								dwNewButton = g_adwJoyButtonFlags[V];
								// 重複設定を検出
								for (N = 0;N < EMULATOR_NUM_JOYBUTTONS;N++) {
									if (dwEmuJoyButtons[N] == dwNewButton)
										break;
								}
								if (N != EMULATOR_NUM_JOYBUTTONS) { // 重複がある場合、
									// 重複したボタン設定と新しいボタン設定を入れ替える
									T = dwEmuJoyButtons[N];
									dwEmuJoyButtons[N] = dwEmuJoyButtons[L];
									dwEmuJoyButtons[L] = T;
								}
								else { // 重複がなければ、
									// ジョイスティックのボタンフラグ定数がセットされた
									// 配列に新しいデータをセット
									dwEmuJoyButtons[L] = dwNewButton;
								}
							}
						}
					}
				}
				break;
			case IDOK:
				WriteToRegistry(INI_EMULATOR_KEYS,
								REG_BINARY,
								bEmuVKeys,
								EMULATOR_NUM_BUTTONS * sizeof(WORD));
				WriteToRegistry(INI_EDITOR_KEYS,
								REG_BINARY,
								bEditVKeys,
								KEYACCEL_NUM_COMMANDS * sizeof(WORD));
				WriteToRegistry(INI_EDITOR_WHEEL,
								REG_BINARY,
								wfWheelFunc,
								CUSTOMIZE_WHEEL_NUMFUNCS * sizeof(WHEELFUNC));
				WriteToRegistry(INI_EMULATOR_JOYBUTTONS,
								REG_BINARY,
								dwEmuJoyButtons,
								EMULATOR_NUM_JOYBUTTONS * sizeof(DWORD));
				Msg(GetResourceString(IDS_KEYCONFIG_NOTIFY), MB_OK | MB_ICONINFORMATION);
			case IDCANCEL:
				EndDialog(hDlg,FALSE);
				return TRUE;
			} //switch(LOWORD(wParam))
		}//case WM_COMMAND:
	}

	return FALSE;
}
