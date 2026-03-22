#include <stdio.h>
#include <string.h>
#include "fmt.h"
void puttl (char* buf, int pageno)
{
    int i;
    for ( i = 0; i < strlen(buf); i++)
    {
        if(buf[i] == _PAGENUM_)
        {
            printf("%d", pageno);
        }
        else
        {
            putchar(buf[i]);
        }
    }
}