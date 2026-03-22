#include "fmt.h"
int width( char* buf)
{
    int i = 0;
    int w = 0;
    while ( buf[i] != _ENDSTR_ )
    {
        if ( buf[i] == _BACKSPACE_ )
        {
            w --;
        }
        else if ( buf[i] != _NEWLINE_ )
        {
            w ++;
        }
        i++;
    }
    return w;
}