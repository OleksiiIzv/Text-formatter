#include <stdlib.h>
#include "fmt.h"
int getval (char* buf, int* argtype)
{
    int i;
    i = 0;
    while (!(buf[i] == _BLANK_ || buf[i] == _TAB_ || buf[i] == _NEWLINE_))
    {
        i++;
    }
    skipbl (buf, &i);
    *argtype = buf[i];
    if (*argtype == _PLUS_  || *argtype == _MINUS_)
    {
        i++;
    }
    return atoi(buf + i);
}