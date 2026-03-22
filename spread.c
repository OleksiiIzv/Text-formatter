#include "fmt.h"
void spread (char* buf, int outp1, int nextra, int outwds)
{
    int i;
    int j;
    int nb;
    int nholes;
    // nholes - number of holes between words
    // nb - number of needed spaces for each hole
    // nextra - number of needed spaces in current string
    if ( nextra > 0 && outwds > 1 )
    {
        dir = 1 - dir;
        nholes = outwds - 1;
        i = outp1 - 1;
        j = min( _MAXSTR_ - 2, i + nextra );
        while ( i < j )
        {
            buf[j] = buf[i];        
            if ( buf[i] == _BLANK_ )
            {
                if ( dir == 0 )
                {
                    nb = (nextra - 1) / nholes + 1;
                }
                else
                {
                    nb = nextra / nholes;
                }
                nextra -= nb;
                nholes -= 1;
                while ( nb > 0 )
                {
                    j -= 1;
                    buf[j] = _BLANK_;
                    nb -= 1;
                } 
            }
            i -= 1;
            j -= 1;
        }
    }
}   
