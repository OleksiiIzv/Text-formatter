// getword.c
#include "fmt.h"
int getword( char* s, int i, char* out )
{
    //printf("Value of inbuf is: %s\n", s);
    int j;
    j = 0;

    while ( s[i] == _BLANK_ || s[i] == _TAB_ || s[i] == _NEWLINE_ )
    {
        i++;
    }
   
    while ( s[i] != _BLANK_ && s[i] != _ENDSTR_ && s[i] != _TAB_ && s[i] != _NEWLINE_ )
    {
        out[j] = s[i];
        //printf("The character is: %c\n", s[i]);
        i++;
        j++;
    }

    out[j] = _ENDSTR_;

    if ( s[i] == _ENDSTR_ )
    {
        return 0;
    }    
    else
    {
        return i;
    }
}

// EOF getword.c
