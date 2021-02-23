#include <stdio.h>
#include <windows.h>
#include <windef.h>
#include <stdint.h>
#include <username.h>
#define INFO_BUFFER_SIZE 32767




DWORD  bufCharCount = INFO_BUFFER_SIZE;
TCHAR  infoBuf[INFO_BUFFER_SIZE];

void UserName()
{
    bufCharCount = INFO_BUFFER_SIZE;
    if (GetUserName(infoBuf, &bufCharCount)){

        printf("User name:          %s \n", infoBuf);
    }

}
