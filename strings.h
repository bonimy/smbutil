/************************************************************************************

smb Utility

File: string.h
Description: strings for international version
History:
Contributors: Chezzman1, Insectduel, MirracleMXX, Yy, spel werdz rite

************************************************************************************/

#ifndef STRINGS_H
#define STRINGS_H
#include "resrc1.h"
#include <Windows.h>

void InitializeResourceStrings(HINSTANCE hInstance);
const LPTSTR GetResourceString(const int id);

#endif /* STRINGS_H */
