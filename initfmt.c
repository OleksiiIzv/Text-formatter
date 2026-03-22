#include "fmt.h"
void initfmt()
{
    fill      = TRUE;
    dir       = 0;
    inval     = 0;
    rmval     = _PAGEWIDTH_;
    tival     = 0;
    lsval     = 1;
    spval     = 0;
    ceval     = 0;
    ulval     = 0;
    lineno    = 0;
    curpage   = 0;
    newpage   = 1;
    plval     = _PAGELEN_;
    m1val     = 3;
    m2val     = 2;
    m3val     = 2;
    m4val     = 4;
    bottom    = plval - m3val - m4val;
    header[0] = _NEWLINE_;
    header[1] = _ENDSTR_;
    footer[0] = _NEWLINE_;
    footer[1] = _ENDSTR_;
    outp1     = 0;
    outw      = 0;
    outwds    = 0;
}