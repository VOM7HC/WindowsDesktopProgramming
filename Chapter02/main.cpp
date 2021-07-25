#include <wchar.h>
#include <windows.h>
#include <stdio.h>

#include "scrnsize.hpp"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nShowCmd)
{
    // Unicode 
    wchar_t* p1 = L"Hello!";
    int iLength1 = wcslen(p1);

    // Windows String
    int iLength2 = lstrlen(p1);

    wchar_t* p2 = new wchar_t[iLength1 + 1];
    wchar_t* p3 = lstrcpy(p2, p1);

    wchar_t* p4 = new wchar_t[iLength1 + 1];
    wchar_t* p5 = lstrcpyn(p4, p1, iLength1 + 1);

    wchar_t* p6 = new wchar_t[iLength1 + 1];
    wchar_t* p7 = lstrcat(p6, p1);

    wchar_t* p8 = L"hello!";
    int p9 = lstrcmp(p1, p8);
    int p10 = lstrcmpi(p1, p8);
    
    // Printf
    char szBuffer[100];
    sprintf(szBuffer, "The sum of %i and %i is %i", 5, 3, 5 + 3);
    puts(szBuffer);

    // Call destructor;
    delete[] p2;
    delete[] p4;
    delete[] p6;

    // ScrnSize formatting Message Box
    int cxScreen, cyScreen;
    cxScreen = GetSystemMetrics(SM_CXSCREEN);
    cyScreen = GetSystemMetrics(SM_CYSCREEN);

    MessageBoxPrintf(TEXT("ScrnSize"), TEXT("The screen is %i pixels wide by %i pixel high"), cxScreen, cyScreen);

    return 0;
}