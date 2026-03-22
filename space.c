#include "fmt.h"
void space (int n)
{
    if ( lineno <= bottom )
    {
        if ( lineno <= 0 )
        {
            puthead();
        }
        skip(min(n, bottom + 1 - lineno));
        lineno += n;
        if ( lineno > bottom )
        {
            putfoot();
        }
    }
}