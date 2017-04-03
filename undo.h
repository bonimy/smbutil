/************************************************************************************

                                  smb Utility

  File: undo.h
  Description:
  History:

 ************************************************************************************/
#ifndef UNDO_H
#define UNDO_H

#define UNDO_MENUTEXT              GetResourceString(IDS_UNDO_MENUTEXT)
#define UNDO_MENUTEXT_BUFFERSIZE   50

#define UNDONAME_KEYEDIT           GetResourceString(IDS_UNDONAME_KEYEDIT)
#define UNDONAME_DLGEDIT           GetResourceString(IDS_UNDONAME_DLGEDIT)
#define UNDONAME_SENDOBJ           GetResourceString(IDS_UNDONAME_SENDOBJ)
#define UNDONAME_HEADDLG           GetResourceString(IDS_UNDONAME_HEADDLG)
#define UNDONAME_CHRLOAD           GetResourceString(IDS_UNDONAME_CHRLOAD)
#define UNDONAME_TOOLSTR           GetResourceString(IDS_UNDONAME_TOOLSTR)
#define UNDONAME_TOOLLOOPBIN       GetResourceString(IDS_UNDONAME_TOOLLOOPBIN)
#define UNDONAME_TOOLWORLD         GetResourceString(IDS_UNDONAME_TOOLWORLD)
#define UNDONAME_TOOLAREAROOM      GetResourceString(IDS_UNDONAME_TOOLAREAROOM)
#define UNDONAME_TOOLDEMORECORDER  GetResourceString(IDS_UNDONAME_TOOLDEMORECORDER)
#define UNDONAME_TOOLOTHER         GetResourceString(IDS_UNDONAME_TOOLOTHER)
#define UNDONAME_TOOLGLOBAL        GetResourceString(IDS_UNDONAME_TOOLGLOBAL)

void undoPrepare(LPCTSTR lpUndoName);
void undoRestore();
void undoReset();
BOOL undoIsEnabled();
LPTSTR undoGetNameBuffer();

extern BOOL g_blKeyCommandUndo;

#endif