// Hello Windows

#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nShowCmd)
{
    MessageBox(NULL, TEXT("Hello Windows Win32"), TEXT("HelloMsg"), 0);
    return 0;
}