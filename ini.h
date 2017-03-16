/************************************************************************************

                                  smb Utility

  File: ini.h
  Description:
  History:

 ************************************************************************************/
#ifndef INI_H
#define INI_H

//
#define REGROOTPATH TEXT("Software\\smbUtil")
//
#define INI_MDIFRAME_WINDOW            TEXT("MDIFRAME_WNDPL")
#define INI_OBJECTLIST_WINDOW          TEXT("OBJLIST_WNDPL")
#define INI_MDIFRAME_OTHERSETTING      TEXT("MDIFRAME_OTHER")
#define INI_MDIFRAME_FILEPATH          TEXT("MDIFRAME_FILEPATH")
#define MDIFRAME_OTHERSETTING_TOOLBAR    0x00000001
#define MDIFRAME_OTHERSETTING_STATUSBAR  0x00000002
#define MDIFRAME_OTHERSETTING_MSGONSAVE  0x00010000
#define INI_OBJECTLIST_COLUMNWIDTH0   TEXT("OBJLIST_COLWIDTH0")
#define INI_OBJECTLIST_COLUMNWIDTH1   TEXT("OBJLIST_COLWIDTH1")
#define INI_OBJECTLIST_COLUMNWIDTH2   TEXT("OBJLIST_COLWIDTH2")
#define INI_OBJECTLIST_COLUMNWIDTH3   TEXT("OBJLIST_COLWIDTH3")
#define INI_OBJECTVIEW_WINDOW         TEXT("OBJVIEW_WNDPL")
#define INI_EMULATOR_WINDOW           TEXT("EMULATOR_WNDPL")
#define INI_EMULATOR_SETTING          TEXT("EMULATOR_SETTING")
#define INI_EMULATOR_KEYS             TEXT("EMULATOR_KEYS")
#define INI_EMULATOR_JOYBUTTONS       TEXT("EMULATOR_JOYBUTTONS")
#define INI_EDITOR_KEYS               TEXT("EDITOR_KEYS")
#define INI_EDITOR_WHEEL              TEXT("EDITOR_WHEEL")
#define INI_OBJECTVIEW_SETTING        TEXT("OBJVIEW_SETTING")
// HIWORD(N):高さ LOWORD(N):設定
#define LOGVIEW_SHOWLOGVIEW            0x00000001
#define INI_LOGVIEW_SETTING            TEXT("LOGVIEW_SETTING")
//#define INI_LOGVIEW_BORDER             TEXT("LOGVIEW_BORDERPL")
//#define INI_LOGVIEW_LOGVIEW            TEXT("LOGVIEW_LOGVIEWPL")

#define INI_APP_ORIGINALROMPATH       TEXT("APP_ORIGINALROMPATH")

#define INI_INSTALL_DIR                TEXT("INSTALL_DIR")

BOOL WriteToRegistry(LPTSTR lpValueName,DWORD dwType,LPVOID lpData,DWORD dwSize);
BOOL ReadFromRegistry(LPTSTR lpValueName,DWORD dwType,LPVOID lpData,DWORD dwSize);
// アンインストール時に呼び出す
BOOL DeleteRegistryEntries();

#define INIFILE_FILENAME              TEXT("smbutil.ini")
#define INIFILE_TESTPLAY              TEXT("TESTPLAY")
#define INIFILE_TESTPLAY_HARD         TEXT("HARD")
#define INIFILE_TESTPLAY_STATE        TEXT("STATE")
#define INIFILE_TESTPLAY_BADGUYS      TEXT("BADGUYS")
#define INIFILE_TESTPLAY_PAGE         TEXT("PAGE")
#define INIFILE_TESTPLAY_INVINCIBLE   TEXT("INVINCIBLE")
#define INIFILE_EDITOR                TEXT("EDITOR")
#define INIFILE_EDITOR_PROTECT        TEXT("PROTECT")

UINT  GetIntegerFromINI(LPCTSTR,LPCTSTR,INT);

#endif /* INI_H */
