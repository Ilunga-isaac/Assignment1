#include <stdio.h>
#include <windows.h>
#include <windef.h>
#include <stdint.h>
#include "i2d.h"
#include "espace_libre.h"
#include "username.h"

int main() {

    freespace();
    char res[10];
    DWORD z;
    z = i2d(res,245);
    WriteConsole(stdout, z, lstrlen(z), &z, NULL);
    Sleep(20);

    DWORD startTime = GetTickCount();
    DWORD i, c=0;
    for (i=0; i<1000000000; i++){

        c++;

    }
    DWORD endTime = GetTickCount();
    DWORD timeSpent = endTime - startTime;
    printf("Time spent = %d\n",timeSpent);
    unsigned int idpid = GetCurrentProcessId();
    printf("ID of my process = %d\n",idpid);
    UserName();

    return 0;

}
