#include <string.h>
#include "fmt.h"
void putword (char* wordbuf)
{

    // outp1 - індекс наступного вільногг місця у вихідному буфері
    int last;
    int llval;
    int nextra;
    int w;
    w =  width( wordbuf );
    last = strlen( wordbuf ) + outp1 + 1;
    llval = rmval - tival - inval;
    if ( outp1 > 0 && (outw + w > llval || last >= _MAXSTR_) )
    {
        last -= outp1;
        nextra = llval - outw + 1;
        if ( nextra > 0 && outwds > 1)
        {
            spread( outbuf, outp1, nextra, outwds);
            outp1 += nextra;
        }
        break1();
    }
    strcpy ( outbuf + outp1, wordbuf );
    outp1 = last;
    outbuf[outp1-1] = _BLANK_;
    outbuf[outp1] = _ENDSTR_;
    outw += w + 1;
    outwds += 1;
}