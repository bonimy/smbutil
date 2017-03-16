#ifndef LOGVIEW_H
#define LOGVIEW_H

#define LOGVIEW_DEFAULTHEIGHT 512
#define LOGVIEW_BORDERWIDTH   5

#define LOGVIEW_FONTHEIGHT    12

#ifdef INTERNATIONAL
#define LOGVIEW_CHARSET     ANSI_CHARSET
#define LOGVIEW_FONTNAME    TEXT("MS Sans Serif")
#else
#define LOGVIEW_CHARSET     SHIFTJIS_CHARSET
#define LOGVIEW_FONTNAME    TEXT("ＭＳ Ｐゴシック")
#endif

#define LOGVIEW_OUTPUTSTRING_CR    0x00000001
#define LOGVIEW_OUTPUTSTRING_BEEP  0x00000002

BOOL lv_OutputDebugString(LPTSTR);

HWND lv_GetBorderWnd();
HWND lv_GetLogViewWnd();
BOOL lv_OutputString(LPTSTR, DWORD);
BOOL lv_ShowLogView();
VOID lv_AdjustLogView();
BOOL lv_Initialize();
VOID lv_Trash();
VOID lv_DestroyLogView();
HWND lv_CreateLogView(HWND hWndParent, int nHeight);

#endif