#include <string.h>
#include <stdio.h>
#include "fmt.h"
void gettl(char* buf, char* ttl)
{
    int i = 1;
    while (!(buf[i] == _BLANK_ || buf[i] == _TAB_ || buf[i] == _NEWLINE_))
    {
        i++;
    }
    skipbl (buf, &i);

    if (buf[i] == _SQUOTE_ || buf[i] == _DQUOTE_)
    {
        i++;
    }
    strcpy (ttl, buf + i);
    // -2 тому що потрібно врахувати кінцевий символ \n
    if(ttl[strlen(ttl)-2] == _SQUOTE_ || ttl[strlen(ttl)-2] == _DQUOTE_)
    {
        ttl[strlen(ttl)-2] = '\0';
    }
}
