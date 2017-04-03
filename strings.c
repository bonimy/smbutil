#include "strings.h"

#define _IDS_MIN 179
#define _IDS_MAX 521
#define _IDS_SIZE (_IDS_MAX-_IDS_MIN+1)

LPTSTR rsStrings[_IDS_SIZE];
#define _GET_IDS(ids) rsStrings[ids-_IDS_MIN]

void InitializeResourceStrings(HINSTANCE hInstance)
{
    TCHAR buffer[10000];

    for (int i = 0, j = _IDS_MIN; i < _IDS_SIZE; i++, j++)
    {
        int len = LoadString(hInstance, j, buffer, sizeof(buffer) / sizeof(TCHAR));

        rsStrings[i] = (TCHAR*)malloc((len + 1) * sizeof(TCHAR));
        memcpy(rsStrings[i], buffer, len * sizeof(TCHAR));
        rsStrings[i][len] = 0;
    }
}

const TCHAR* GetResourceString(const int id)
{
    if (id < _IDS_MIN || id > _IDS_MAX)
        return NULL;
    return _GET_IDS(id);
}

#undef _IDS_MIN
#undef _IDS_MAX
#undef _IDS_SIZE
#undef _GET_IDS
