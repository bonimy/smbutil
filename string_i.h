/************************************************************************************


                                  smb Utility

  File: string.h
  Description: strings for international version
  History:
  Contributors: Chezzman1, Insectduel, MirracleMXX, Yy

 ************************************************************************************/
#ifndef STRING_J_H
#define STRING_J_H

#define PROGRAMNAME  TEXT("SMB Utility")

#define STRING_VERSION_CONTRIBUTION TEXT("Multi-6502 CPU emulator by Neil Bradley (neil@synthcom.com)")

#define STRING_NULL    TEXT("")
#define STRING_UNKNOWN TEXT("Unknown")

#define STRING_LOGVIEW_FILESAVE TEXT("Saved as %s.")//"%sに保存しました。"
#define STRING_LOGVIEW_FILEOPEN TEXT("Loaded %s.")//"%sを開きました。"
#define STRING_LOGVIEW_LOADCHR  TEXT("Imported CHR-ROM from %s.(%.4xH bytes)")//"%sから%.4xHﾊﾞｲﾄのCHRROMを読み込みました。"

//
//
#define STRING_FILEOPENDIALOG_CHRLOAD TEXT("Import CHR-ROM from file")
#define STRING_WINDOW_EMULATOR        TEXT("Emulator")
#define STRING_WINDOW_OBJLIST         TEXT("Object List")
#define STRING_WINDOW_OBJVIEW         TEXT("Object View")

//
#define STRING_OBJVIEW_TITLE          TEXT("%s <%dpage>")
#define STRING_OBJVIEW_TITLE2         TEXT("%s <%d-%dpage>")
#define STRING_OBJVIEW_TOOLTIP        TEXT("%d,(%d,%d) %s")

//
#define STRING_STATUSBAR_EMULOAD  TEXT("Loaded state.")
#define STRING_STATUSBAR_EMUSAVE  TEXT("Saved state.")
#define STRING_STATUSBAR_FILESAVE TEXT("Saved file.")

//
#define STRING_FILEERROR_SAVE       TEXT("Failed to save.")
#define STRING_FILEERROR_SAVEAS     TEXT("Failed to save as.")
#define STRING_FILEERROR_FILEFORMAT TEXT("Found file format(file type) error.")
#define STRING_FILEERROR_NOTFOUND   TEXT("Not found file.")

//
#define STRING_CONFIRM_SAVE         TEXT("Overwrite file?")//"上書き保存しますか？"
#define STRING_CONFIRM_EXIT         TEXT("Save and exit?")
#define STRING_CONFIRM_RELOAD       TEXT("File has been changed by another editor.\nReload?")
#define STRING_CONFIRM_DEMORECORD   TEXT("Start recording demonstration?")
#define STRING_CONFIRM_DEMORECORD2  TEXT("Stoped recording demonstration.")
#define STRING_CONFIRM_UPDATEWORLD  TEXT("Refresh world data?")

//
#define STRING_OPTIONDIALOG_TITLE       TEXT("Option")
#define STRING_OPTIONDIALOG_EMULATOR    TEXT("Emulator")
#define STRING_OPTIONDIALOG_EDITOR      TEXT("Editor")
#define STRING_OPTIONDIALOG_APPLICATION TEXT("Application")
#define STRING_OPTIONDIALOG_OBJECTVIEW  TEXT("Object View")

//
#define STRING_TOOLTIP_OPEN              TEXT("Open")
#define STRING_TOOLTIP_SAVE              TEXT("Save")
#define STRING_TOOLTIP_ROOM              TEXT("Choose Room")
#define STRING_TOOLTIP_BADGUYS           TEXT("Badguys Mode")
#define STRING_TOOLTIP_MAP               TEXT("Map Mode")
#define STRING_TOOLTIP_TESTPLAY          TEXT("Start of Room")
#define STRING_TOOLTIP_PAGETESTPLAY      TEXT("Current Page")
#define STRING_TOOLTIP_HALFPOINTTESTPLAY TEXT("Halfway Point")
#define STRING_TOOLTIP_STOP              TEXT("End")
#define STRING_TOOLTIP_TESTPLAYSETTING   TEXT("Test Configuration")

//
#define STRING_SENDOBJECT_SRCERROR TEXT("Can't send source object.")
#define STRING_SENDOBJECT_DSTERROR TEXT("There are no objects in destination page.")
#define STRING_SENDOBJECT_OVEROBJ  TEXT("Can't send any more objects to the destination room.")//"送り先のﾙｰﾑには、これ以上ｵﾌﾞｼﾞｪｸﾄを送ることができません。"

#define STRING_UNDO_MENUTEXT              TEXT("&Undo \"%s\"")
#define STRING_UNDONAME_KEYEDIT           TEXT("Keyboard Input")
#define STRING_UNDONAME_DLGEDIT           TEXT("Dialog Input")
#define STRING_UNDONAME_SENDOBJ           TEXT("Send Object")
#define STRING_UNDONAME_HEADDLG           TEXT("Edit Header")
#define STRING_UNDONAME_CHRLOAD           TEXT("Import CHR-ROM")
#define STRING_UNDONAME_TOOLSTR           TEXT("Edit Text")
#define STRING_UNDONAME_TOOLLOOPBIN       TEXT("Edit Looping")
#define STRING_UNDONAME_TOOLWORLD         TEXT("World Data Update")//"Auto Refresh World Data"
#define STRING_UNDONAME_TOOLAREAROOM      TEXT("Sort Areas")
#define STRING_UNDONAME_TOOLDEMORECORDER  TEXT("Record Intro Demo")//"Demo Recording"
#define STRING_UNDONAME_TOOLOTHER         TEXT("Edit Some Game Stuff")
//#define STRING_UNDONAME_TOOLGLOBAL        TEXT("General Setting")


#define STRING_POLEGFX_DEFAULT TEXT("Default")
#define STRING_POLEGFX_ROPE    TEXT("Rope")
#define STRING_POLEGFX_TREE    TEXT("Tree")
#define STRING_POLEGFX_OTHER   TEXT("Other")

#define STRING_SETTING_WORLDX   TEXT("World%d")
#define STRING_SETTING_WARPZONE TEXT("Warp Zone")
#define STRING_SETTING_1UP      TEXT("1UP Mushroom")
#define STRING_SETTING_KOOPA    TEXT("Bowser")
#define STRING_SETTING_WORLD    TEXT("World")
#define STRING_SETTING_OTHER    TEXT("Other")
#define STRING_SETTING_TITLE    TEXT("Edit Some Game Stuff")


#define STRING_STRINGDATA_01 TEXT("MARIO(Status bar)")
#define STRING_STRINGDATA_02 TEXT("MARIO(Time up at two players mode)")
#define STRING_STRINGDATA_03 TEXT("MARIO(Game over)")
#define STRING_STRINGDATA_04 TEXT("LUIGI(Status bar/Time up/Game over)")
#define STRING_STRINGDATA_05 TEXT("WORLD  TIME(Status Bar)")
#define STRING_STRINGDATA_06 TEXT("WORLD(On the World 1-1 ect screen)")
#define STRING_STRINGDATA_07 TEXT("TIME UP")
#define STRING_STRINGDATA_08 TEXT("GAME OVER")
#define STRING_STRINGDATA_09 TEXT("WELCOME TO WARP ZONE!")
#define STRING_STRINGDATA_10 TEXT("THANK YOU MARIO!")
#define STRING_STRINGDATA_11 TEXT("THANK YOU LUIGI!")
#define STRING_STRINGDATA_12 TEXT("BUT OUR PRINCESS IS IN")
#define STRING_STRINGDATA_13 TEXT("ANOTHER CASTLE!")
#define STRING_STRINGDATA_14 TEXT("YOUR QUEST IS OVER.")
#define STRING_STRINGDATA_15 TEXT("WE PRESENT YOU A NEW QUEST.")
#define STRING_STRINGDATA_16 TEXT("PUSH BUTTON B")
#define STRING_STRINGDATA_17 TEXT("TO SELECT A WORLD")
#define STRING_STRINGDATA_18 TEXT("Copyright notice(Title screen)")
#define STRING_STRINGDATA_19 TEXT("1 PLAYER GAME(Title screen)")
#define STRING_STRINGDATA_20 TEXT("2 PLAYER GAME(Title screen)")

#define STRING_TESTPLAYSETTING_MARIO      TEXT("Regular Mario")
#define STRING_TESTPLAYSETTING_SUPERMARIO TEXT("Super Mario")
#define STRING_TESTPLAYSETTING_FIREMARIO  TEXT("Fiery Mario")
#define STRING_TESTPLAYSETTING_NONE       TEXT("Default") //"無効"
#define STRING_TESTPLAYSETTING_POS        TEXT("Position")//"位置"
#define STRING_TESTPLAYSETTING_DOT        TEXT("Pixel")//"ﾄﾞｯﾄ"

#define STRING_EMULATOROPTION_JOYSTICK   TEXT("Pad")//"ｼﾞｮｲｽﾃｨｯｸ"

#define STRING_KEYCONFIG_EMU_A              TEXT("A")
#define STRING_KEYCONFIG_EMU_B              TEXT("B")
#define STRING_KEYCONFIG_EMU_SELECT         TEXT("Select")
#define STRING_KEYCONFIG_EMU_START          TEXT("Start")
#define STRING_KEYCONFIG_EMU_UP             TEXT("Up")
#define STRING_KEYCONFIG_EMU_DOWN           TEXT("Down")
#define STRING_KEYCONFIG_EMU_LEFT           TEXT("Left")
#define STRING_KEYCONFIG_EMU_RIGHT          TEXT("Right")
#define STRING_KEYCONFIG_EDIT_ADD1          TEXT("Object value +1")
#define STRING_KEYCONFIG_EDIT_DEC1          TEXT("Object value -1")
#define STRING_KEYCONFIG_EDIT_ADD16         TEXT("Object value +16")
#define STRING_KEYCONFIG_EDIT_DEC16         TEXT("Object value -16")
#define STRING_KEYCONFIG_EDIT_UP            TEXT("Object position to up")
#define STRING_KEYCONFIG_EDIT_DOWN          TEXT("Object position to down")
#define STRING_KEYCONFIG_EDIT_LEFT          TEXT("Object position to left")
#define STRING_KEYCONFIG_EDIT_RIGHT         TEXT("Object position to right")
#define STRING_KEYCONFIG_EDIT_NEXTPAGE      TEXT("Next page")
#define STRING_KEYCONFIG_EDIT_PREVPAGE      TEXT("Previous page")
#define STRING_KEYCONFIG_EDIT_NEXTOBJ       TEXT("Next object")
#define STRING_KEYCONFIG_EDIT_PREVOBJ       TEXT("Previous object")
#define STRING_KEYCONFIG_EDIT_SAVEFILE      TEXT("File:Save")
#define STRING_KEYCONFIG_EDIT_UNDO          TEXT("Edit:Undo")
#define STRING_KEYCONFIG_EDIT_ROOM          TEXT("Edit:Choose Room")
#define STRING_KEYCONFIG_EDIT_BADGUYS       TEXT("Edit:Badguys Mode")
#define STRING_KEYCONFIG_EDIT_MAP           TEXT("Edit:Map Mode")
#define STRING_KEYCONFIG_EDIT_TESTPLAY      TEXT("Emulator:Title Screen")
#define STRING_KEYCONFIG_EDIT_PAGETESTPLAY  TEXT("Emulator:Current Page")
#define STRING_KEYCONFIG_EDIT_PAGETESTPLAY2 TEXT("Emulator:Halfway Point")
#define STRING_KEYCONFIG_EDIT_STOP          TEXT("Emulator:End")
#define STRING_KEYCONFIG_EDIT_SAVEEMU       TEXT("Emulator:Save")
#define STRING_KEYCONFIG_EDIT_LOADEMU       TEXT("Emulator:Load")
#define STRING_KEYCONFIG_EDIT_EMUSETTING    TEXT("Emulator:Test Configuration")
#define STRING_KEYCONFIG_EDIT_NEXTWIN       TEXT("Window:Next")
#define STRING_KEYCONFIG_EDIT_PREVWIN       TEXT("Window:Previous")
#define STRING_KEYCONFIG_KEYACCEL           TEXT("Keyboard accelerator")
#define STRING_KEYCONFIG_EMULATOR           TEXT("Emulator")
#define STRING_KEYCONFIG_OVERLAPPED         TEXT("It is overlapped at %s - \"%s\".")
#define STRING_KEYCONFIG_INITIALIZE         TEXT("Load preset-key?")
#define STRING_KEYCONFIG_NOTIFY             TEXT("It is enabled at next start.")

#define STRING_KEYCONFIG_PRESET_DESKTOP     TEXT("Desktop PC(Ten key)")
#define STRING_KEYCONFIG_PRESET_NOTE        TEXT("Note PC")

#define STRING_KEYCONFIG_WHEEL_NONE         TEXT("None")//"なし"
#define STRING_KEYCONFIG_WHEEL_SHIFT        TEXT("+Shift")//"+ｼﾌﾄ"
#define STRING_KEYCONFIG_WHEEL_CTRL         TEXT("+Ctrl")//"+ｺﾝﾄﾛｰﾙ"
#define STRING_KEYCONFIG_WHEEL_SHIFTCTRL    TEXT("+Shift+Ctrl")//"+ｼﾌﾄ+ｺﾝﾄﾛｰﾙ"
#define STRING_KEYCONFIG_WHEEL_TYPE1        TEXT("Change object value by 1")//"種類を増減1"
#define STRING_KEYCONFIG_WHEEL_TYPE16       TEXT("Change object value by 16")//"種類を増減16"
#define STRING_KEYCONFIG_WHEEL_PAGE         TEXT("Select object on next page")//"ﾍﾟｰｼﾞごとの移動"
#define STRING_KEYCONFIG_WHEEL_OBJ          TEXT("Select object")//"ｵﾌﾞｼﾞｪｸﾄごとの移動"

#define STRING_KEYCONFIG_BUTTONX            TEXT("Button%d")//"ﾎﾞﾀﾝ%d"


#define STRING_OBJLIST_LENNAME   TEXT("Length:%d, %s")
#define STRING_OBJLIST_UNKNOWN   TEXT("Unknown object")
#define STRING_OBJLIST_CRASH     TEXT("*Freezes")
#define STRING_OBJLIST_BACK      TEXT("Background:%s")
#define STRING_OBJLIST_VIEWBLOCK TEXT("Scene:%s Block:%s")
#define STRING_OBJLIST_ROPE      TEXT("Lift's vertical rope")
#define STRING_OBJLIST_LENCASTLE TEXT("Castle, Length:%d")
#define STRING_OBJLIST_STEP      TEXT("Staircase, Length:%d, Height:%d")
#define STRING_OBJLIST_STEP98    TEXT("Staircase, Length:9 Height:8")
#define STRING_OBJLIST_STEP98_2  TEXT("*Staircase, Length:9, Height:8")
#define STRING_OBJLIST_NONE      TEXT("*Nothing")

#define STRING_OBJLIST_ROOM        TEXT("Room change[%.2xH(%s), w=%d, p=%d]")
#define STRING_OBJLIST_PAGECOMMAND TEXT("Page skip:%.2d")
#define STRING_OBJLIST_HARD        TEXT(" (Only after 5-3)")

#define STRING_AREASORT_TITLE TEXT("Choose Room")

#define STRING_SEA         TEXT("Sea")
#define STRING_SKY         TEXT("Ground")
#define STRING_UNDERGROUND TEXT("Underground")
#define STRING_CASTLE      TEXT("Castle")

#define STRING_OBJLIST_COLUMN_BIN  TEXT("Hex")
#define STRING_OBJLIST_COLUMN_PAGE TEXT("Page")
#define STRING_OBJLIST_COLUMN_POS  TEXT("Position")
#define STRING_OBJLIST_COLUMN_TYPE TEXT("Type")

#define STRING_OBJDATA_MAP_B_01 TEXT("?Block(Mushroom)")
#define STRING_OBJDATA_MAP_B_02 TEXT("?Block(Coin)")
#define STRING_OBJDATA_MAP_B_03 TEXT("Hidden block(Coin)")
#define STRING_OBJDATA_MAP_B_04 TEXT("Hidden block(1UP mushroom)")
#define STRING_OBJDATA_MAP_B_05 TEXT("Brick(Mushroom)")
#define STRING_OBJDATA_MAP_B_06 TEXT("Brick(Vine)")
#define STRING_OBJDATA_MAP_B_07 TEXT("Brick(Star)")
#define STRING_OBJDATA_MAP_B_08 TEXT("Brick(10 coins)")
#define STRING_OBJDATA_MAP_B_09 TEXT("Brick(1UP mushroom)")
#define STRING_OBJDATA_MAP_B_10 TEXT("Sideways pipe")
#define STRING_OBJDATA_MAP_B_11 TEXT("Used block")
#define STRING_OBJDATA_MAP_B_12 TEXT("Jumping board")
#define STRING_OBJDATA_MAP_B_13 TEXT("Reverse L pipe")
#define STRING_OBJDATA_MAP_B_14 TEXT("Flagpole")
#define STRING_OBJDATA_MAP_B_15 TEXT("*Nothing")
#define STRING_OBJDATA_MAP_B_16 TEXT("*Nothing")
#define STRING_OBJDATA_MAP_B_17 TEXT("Island(Cannon)")
#define STRING_OBJDATA_MAP_B_18 TEXT("Horizontal bricks(corals)")
#define STRING_OBJDATA_MAP_B_19 TEXT("Horizontal blocks")
#define STRING_OBJDATA_MAP_B_20 TEXT("Horizontal coins")
#define STRING_OBJDATA_MAP_B_21 TEXT("Vertical bricks(corals)")
#define STRING_OBJDATA_MAP_B_22 TEXT("Vertical blocks")
#define STRING_OBJDATA_MAP_B_23 TEXT("Pipe(Player can't enter.)")
#define STRING_OBJDATA_MAP_B_24 TEXT("Pipe(Player can enter.)")

#define STRING_OBJDATA_HELP_B12 TEXT("")//"ｷｬﾗｸﾀの１つ。ｷｬﾗｸﾀｵｰﾊﾞｰで表示されなくなると、ﾏﾘｵが挟まって出れなくなるので注意。"
#define STRING_OBJDATA_HELP_B13 TEXT("")//"高さ9固定。横からでも上からでも入れる。(横位置＋2)から2ｷｬﾗ分は、先に指定された障害物を消す。"
#define STRING_OBJDATA_HELP_B14 TEXT("")//"やたらと使用しないこと。1ﾙｰﾑに2回以上使用すると暴走しやすくなるので注意。"
#define STRING_OBJDATA_HELP_B23 TEXT("")//"長さを1にしても必ず2になる。"

#define STRING_OBJDATA_MAP_C_01 TEXT("Hole")
#define STRING_OBJDATA_MAP_C_02 TEXT("Balance's horizontal rope")
#define STRING_OBJDATA_MAP_C_03 TEXT("Bridge(V=7)")
#define STRING_OBJDATA_MAP_C_04 TEXT("Bridge(V=8)")
#define STRING_OBJDATA_MAP_C_05 TEXT("Bridge(V=10)")
#define STRING_OBJDATA_MAP_C_06 TEXT("Hole filled with water")
#define STRING_OBJDATA_MAP_C_07 TEXT("Horizontal ?Blocks(Coin, V=3)")
#define STRING_OBJDATA_MAP_C_08 TEXT("Horizontal ?Blocks(Coin, V=7)")

#define STRING_OBJDATA_HELP_C01 TEXT("")//"縦位置8から12の先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"
#define STRING_OBJDATA_HELP_C02 TEXT("")//"縦位置0固定"
#define STRING_OBJDATA_HELP_C06 TEXT("")//"縦位置10から12の先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"

#define STRING_OBJDATA_MAP_D_01 TEXT("Page skip")
#define STRING_OBJDATA_MAP_D_02 TEXT("Reverse L pipe")
#define STRING_OBJDATA_MAP_D_03 TEXT("Flagpole")
#define STRING_OBJDATA_MAP_D_04 TEXT("Axe")
#define STRING_OBJDATA_MAP_D_05 TEXT("Rope")
#define STRING_OBJDATA_MAP_D_06 TEXT("Bridge")
#define STRING_OBJDATA_MAP_D_07 TEXT("Scroll stop(warp zone)")
#define STRING_OBJDATA_MAP_D_08 TEXT("Scroll stop")
#define STRING_OBJDATA_MAP_D_10 TEXT("Cheep-cheep(red, fly)")
#define STRING_OBJDATA_MAP_D_11 TEXT("Bullet Bill(Cheep-cheep) continuation")
#define STRING_OBJDATA_MAP_D_12 TEXT("Stop continuation")
#define STRING_OBJDATA_MAP_D_13 TEXT("Loop command")
#define STRING_OBJDATA_MAP_D_14 TEXT("?")
#define STRING_OBJDATA_MAP_D_15 TEXT("*Freeze")

#define STRING_OBJDATA_HELP_D01 TEXT("")
#define STRING_OBJDATA_HELP_D03 TEXT("")//"やたらと使用しない事。1ﾙｰﾑに2回以上使用すると暴走しやすくなるので注意。"
#define STRING_OBJDATA_HELP_D04 TEXT("")//"縦位置6固定"
#define STRING_OBJDATA_HELP_D05 TEXT("")//"縦位置7固定"
#define STRING_OBJDATA_HELP_D06 TEXT("")//"縦位置8、長さ13固定"
#define STRING_OBJDATA_HELP_D12 TEXT("")//"連続出現ｷｬﾗを出した後、暴走を防ぐためにﾎﾟｰﾙを出す前に指定。"
#define STRING_OBJDATA_HELP_D13 TEXT("")//"ﾍﾟｰｼﾞ送りｺﾏﾝﾄﾞとｾｯﾄでﾙｰﾌﾟを形成する。"

#define STRING_OBJDATA_MAP_E_01 TEXT("Basic brick & scenery")
#define STRING_OBJDATA_MAP_E_02 TEXT("Change background")

#define STRING_OBJDATA_MAP_F_01 TEXT("Rope of lift")
#define STRING_OBJDATA_MAP_F_02 TEXT("Vertical rope of balance lift")
#define STRING_OBJDATA_MAP_F_03 TEXT("Castle")
#define STRING_OBJDATA_MAP_F_04 TEXT("Staircase(length:n, height:n)")
#define STRING_OBJDATA_MAP_F_05 TEXT("Staircase(length:9, height:8)")
#define STRING_OBJDATA_MAP_F_06 TEXT("Long reverse L pipe")
#define STRING_OBJDATA_MAP_F_07 TEXT("Vertical balls")
#define STRING_OBJDATA_MAP_F_08 TEXT("Nothing")

#define STRING_OBJDATA_HELP_F01 TEXT("")//"縦位置0、長さ13固定。指定横位置において、先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"
#define STRING_OBJDATA_HELP_F02 TEXT("")//"縦位置1固定。指定横位置において、先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"
#define STRING_OBJDATA_HELP_F03 TEXT("")//"やたらと使用しないこと。多く使用すると暴走しやすくなる。"
#define STRING_OBJDATA_HELP_F05 TEXT("")//"長さ0～3 問題なし。\n長さ4～6 ｸﾞﾗﾌｨｯｸｽが潰れる。長さ7 ｸﾞﾗﾌｨｯｸｽが潰れる。(横位置+16)の位置に縦位置7の壊せないﾌﾞﾛｯｸ1個。"
#define STRING_OBJDATA_HELP_F07 TEXT("")//"ﾂﾀのようにつかまって上下移動が可能。縦位置2固定"

#define STRING_OBJDATA_BB_01 TEXT("Brick:None")
#define STRING_OBJDATA_BB_02 TEXT("Brick:Surface")
#define STRING_OBJDATA_BB_03 TEXT("Brick:Surface&ceiling")
#define STRING_OBJDATA_BB_04 TEXT("Brick:Surface&ceiling(3)")
#define STRING_OBJDATA_BB_05 TEXT("Brick:Surface&ceiling(4)")
#define STRING_OBJDATA_BB_06 TEXT("Brick:Surface&ceiling(8)")
#define STRING_OBJDATA_BB_07 TEXT("Brick:Surface(4)&ceiling")
#define STRING_OBJDATA_BB_08 TEXT("Brick:Surface(4)&ceiling(3)")
#define STRING_OBJDATA_BB_09 TEXT("Brick:Surface(4)&ceiling(4)")
#define STRING_OBJDATA_BB_10 TEXT("Brick:Surface(5)&ceiling")
#define STRING_OBJDATA_BB_11 TEXT("Brick:Ceiling")
#define STRING_OBJDATA_BB_12 TEXT("Brick:Surface(5)&ceiling(4)")
#define STRING_OBJDATA_BB_13 TEXT("Brick:Surface(8)&ceiling")
#define STRING_OBJDATA_BB_14 TEXT("Brick:Surface&ceiling&middle(5)")
#define STRING_OBJDATA_BB_15 TEXT("Brick:Surface&ceiling&middle(4)")
#define STRING_OBJDATA_BB_16 TEXT("Brick:All")

#define STRING_OBJDATA_T_01 TEXT("Not set")
#define STRING_OBJDATA_T_02 TEXT("400")
#define STRING_OBJDATA_T_03 TEXT("300")
#define STRING_OBJDATA_T_04 TEXT("200")

#define STRING_OBJDATA_P_01 TEXT("V=-1, H=1.5")
#define STRING_OBJDATA_P_02 TEXT("Start of area:X, from another room; V=-1, H=1.5")
#define STRING_OBJDATA_P_03 TEXT("V=10, H=1.5")
#define STRING_OBJDATA_P_04 TEXT("V=4, H=1.5")
#define STRING_OBJDATA_P_07 TEXT("V=10, H=1.5(walking)")

#define STRING_OBJDATA_BC_01 TEXT("Nothing")
#define STRING_OBJDATA_BC_02 TEXT("In water")
#define STRING_OBJDATA_BC_03 TEXT("Wall")
#define STRING_OBJDATA_BC_04 TEXT("Over water")
#define STRING_OBJDATA_BC_05 TEXT("Night")
#define STRING_OBJDATA_BC_06 TEXT("Snow")
#define STRING_OBJDATA_BC_07 TEXT("Night and snow")
#define STRING_OBJDATA_BC_08 TEXT("Castle")

#define STRING_OBJDATA_MT_01 TEXT("Green and tree")
#define STRING_OBJDATA_MT_02 TEXT("Orange and mushroom")
#define STRING_OBJDATA_MT_03 TEXT("Guns")
#define STRING_OBJDATA_MT_04 TEXT("Clouds")

#define STRING_OBJDATA_V_01 TEXT("Nothing")
#define STRING_OBJDATA_V_02 TEXT("Clouds")
#define STRING_OBJDATA_V_03 TEXT("Mountain")
#define STRING_OBJDATA_V_04 TEXT("Fence")


#define STRING_OBJDATA_BADGUYS_01 TEXT("Koopa Troopa(green)")
#define STRING_OBJDATA_BADGUYS_02 TEXT("Koopa Troopa(red)")
#define STRING_OBJDATA_BADGUYS_03 TEXT("Buzzy Beetle")
#define STRING_OBJDATA_BADGUYS_04 TEXT("Koopa Troopa(red, patrol)")
#define STRING_OBJDATA_BADGUYS_05 TEXT("Koopa Troopa(green, stopped)")
#define STRING_OBJDATA_BADGUYS_06 TEXT("The Hammer Brothers")
#define STRING_OBJDATA_BADGUYS_07 TEXT("Little Goomba")
#define STRING_OBJDATA_BADGUYS_08 TEXT("Bloober")
#define STRING_OBJDATA_BADGUYS_09 TEXT("Bullet Bill")
#define STRING_OBJDATA_BADGUYS_10 TEXT("Koopa Paratroopa(green, stopped)")
#define STRING_OBJDATA_BADGUYS_11 TEXT("Cheep-cheep(green)")
#define STRING_OBJDATA_BADGUYS_12 TEXT("Cheep-cheep(red)")
#define STRING_OBJDATA_BADGUYS_13 TEXT("Podoboo")
#define STRING_OBJDATA_BADGUYS_14 TEXT("Pirana plants")
#define STRING_OBJDATA_BADGUYS_15 TEXT("Koopa Paratroopa(green, leaping)")
#define STRING_OBJDATA_BADGUYS_16 TEXT("Koopa Paratroopa(red, up&down)")
#define STRING_OBJDATA_BADGUYS_17 TEXT("Koopa Paratroopa(green, right&left)")
#define STRING_OBJDATA_BADGUYS_18 TEXT("Lakitu")
#define STRING_OBJDATA_BADGUYS_19 TEXT("Spiny")
#define STRING_OBJDATA_BADGUYS_20 TEXT("*Unknown")
#define STRING_OBJDATA_BADGUYS_21 TEXT("Cheep-cheep(fly)")
#define STRING_OBJDATA_BADGUYS_22 TEXT("Bowser's fire")
#define STRING_OBJDATA_BADGUYS_23 TEXT("*Crash")
#define STRING_OBJDATA_BADGUYS_24 TEXT("Bullet Bill(Cheep-cheep) continuation")
#define STRING_OBJDATA_BADGUYS_25 TEXT("*None")
#define STRING_OBJDATA_BADGUYS_28 TEXT("Fire Bar(right)")
#define STRING_OBJDATA_BADGUYS_29 TEXT("Fire Bar(right, fast)")
#define STRING_OBJDATA_BADGUYS_30 TEXT("Fire Bar(left)")
#define STRING_OBJDATA_BADGUYS_31 TEXT("Fire Bar(left, fast)")
#define STRING_OBJDATA_BADGUYS_32 TEXT("Long Fire Bar(right)")
#define STRING_OBJDATA_BADGUYS_33 TEXT("Fire Bar")
#define STRING_OBJDATA_BADGUYS_37 TEXT("Lift(balance)")
#define STRING_OBJDATA_BADGUYS_38 TEXT("Lift(up&down)")
#define STRING_OBJDATA_BADGUYS_39 TEXT("Lift(up)")
#define STRING_OBJDATA_BADGUYS_40 TEXT("Lift(down)")
#define STRING_OBJDATA_BADGUYS_41 TEXT("Lift(right&left)")
#define STRING_OBJDATA_BADGUYS_42 TEXT("Lift(fall)")
#define STRING_OBJDATA_BADGUYS_43 TEXT("Lift(surfing)")
#define STRING_OBJDATA_BADGUYS_44 TEXT("Short lift(up)")
#define STRING_OBJDATA_BADGUYS_45 TEXT("Short lift(down)")
#define STRING_OBJDATA_BADGUYS_46 TEXT("Bowser, King of the Koopa")
#define STRING_OBJDATA_BADGUYS_47 TEXT("*Unknown")
#define STRING_OBJDATA_BADGUYS_48 TEXT("*Unknown")
#define STRING_OBJDATA_BADGUYS_51 TEXT("Jumping board(fake)")
#define STRING_OBJDATA_BADGUYS_53 TEXT("Warp Zone")
#define STRING_OBJDATA_BADGUYS_54 TEXT("Mushroom retainers")
#define STRING_OBJDATA_BADGUYS_56 TEXT("2 Little Goomba(V=10)")
#define STRING_OBJDATA_BADGUYS_57 TEXT("3 Little Goomba(V=10)")
#define STRING_OBJDATA_BADGUYS_58 TEXT("2 Little Goomba(V=6)")
#define STRING_OBJDATA_BADGUYS_59 TEXT("3 Little Goomba(V=6)")
#define STRING_OBJDATA_BADGUYS_60 TEXT("2 Koopa Troopa(green, V=10)")
#define STRING_OBJDATA_BADGUYS_61 TEXT("3 Koopa Troopa(green, V=10)")
#define STRING_OBJDATA_BADGUYS_62 TEXT("2 Koopa Troopa(green, V=6)")
#define STRING_OBJDATA_BADGUYS_63 TEXT("3 Koopa Troopa(green, V=6)")

// delreg.exe
#define STRING_DELREG_TITLE    TEXT("Deleting registry entries of SMB Utility")//ダイアログのタイトル "SMB Utility ﾚｼﾞｽﾄﾘの削除"
#define STRING_DELREG_CONFIRM  TEXT("You are about to delete registry keys that were used in SMB Utility. Are you sure?")//"SMB Utilityで使用したﾚｼﾞｽﾄﾘのｷｰを削除しますか？"
#define STRING_DELREG_COMPLETE TEXT("Deleted registry keys that were used in SMB Utility.")//"SMB Utilityで使用したﾚｼﾞｽﾄﾘのｷｰを削除しました。"
#define STRING_DELREG_ERROR_01 TEXT("Registry keys that were used in SMB Utility don't exist.")//"SMB Utilityのﾚｼﾞｽﾄﾘのｷｰは、存在しません。"

#endif
