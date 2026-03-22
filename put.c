#include <stdio.h>
#include "fmt.h"
void put (char* buf) 
{
    int i;
    if (lineno <= 0 || lineno > bottom)
    {
        puthead();
    }
    for (i = 1; i <= inval + tival; i++)
    {
        putchar(_BLANK_);
    }
    tival = 0;
    puts(buf);
    skip(min(lsval-1, bottom - lineno));
    lineno += lsval;
    if (lineno > bottom)
    {
        putfoot();
    }
}