#include "fmt.h"
void break1 ()
{
    if (outp1 > 0)
    {
        outbuf[outp1-1] = _NEWLINE_;
        outbuf[outp1] = _ENDSTR_;
        put( outbuf );
    }
    outp1 = 0;
    outw = 0;
    outwds = 0;
}