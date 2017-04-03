#ifndef STRINGS_H
#define STRINGS_H
#include "resrc1.h"
#include "string_i.h"
#include <Windows.h>

void InitializeResourceStrings(HINSTANCE hInstance);
const TCHAR* GetResourceString(const int id);

#endif /* STRING_H */
