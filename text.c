#include <stdio.h>
#include "fmt.h"
void text (char* inbuf)
{
    int i;
    char wordbuf[_MAXSTR_];
    if ( ceval > 0 )
    {
        center( inbuf );
        put( inbuf );
        ceval -= 1;
    }
    if ( inbuf[0] == _NEWLINE_ )
    {
        put( inbuf );
    }
    else if ( !fill )
    {
        put( inbuf );
    }
    else
    {
         i = 0;
         do
         {
            i = getword( inbuf, i, wordbuf );
            //printf("getword returns: %d %s\n", i, wordbuf);
            if ( i > 0 )
            {
                putword( wordbuf );
            }
         }
         while ( i != 0 );
    }
    
}