#include <windows.h>
#include <tchar.h>
#include <stdio.h>

int CDECL MessageBoxPrintf(TCHAR* szCaption, TCHAR* szFormat, ...)
{
    TCHAR  szBuffer[1024];
    va_list pArgList;

    va_start(pArgList, szFormat);
    
    _vsntprintf(szBuffer, sizeof(szBuffer) / sizeof(TCHAR), szFormat, pArgList);

    va_end(pArgList);

    return MessageBox(NULL, szBuffer, szCaption, 0);
}