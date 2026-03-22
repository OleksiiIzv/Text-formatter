#include <stdlib.h>
#include "fmt.h"
void command( char* buf )
{
    int val;
    int argtype;
    enum CmdType cmd = getcmd( buf );
    if ( cmd != _UNKNOWN_ )
    {
        val = getval( buf, &argtype );
    }
    switch ( cmd )
    {
        case _FI_:
            break1();
            fill = TRUE;
            break;
        case _NF_:
            break1();
            fill = FALSE;
            break;
        case _BR_:
            break1();
            break;
        case _LS_:
            setparam( &lsval, val, argtype, 1 , 1, _HUGE_ );
            break;
        case _CE_:
            break1();
            setparam( &ceval, val, argtype, 1 , 0, _HUGE_ );
            break;
        case _UL_:
            setparam( &ulval, val, argtype, 1, 0, _HUGE_ );
            break;
        case _HE_:
            gettl( buf, header );
            break;
        case _FO_:
            gettl( buf, footer );
            break;
        case _BP_:
            page();
            setparam( &curpage, val, argtype, curpage + 1, _HUGE_, _HUGE_ );
            newpage = curpage;
            break;
        case _SP_:
            setparam( &spval, val, argtype, 1, 0, _HUGE_ );
            space( spval );
            break;
        case _IN_:
            setparam( &inval, val, argtype, 0, 0, rmval - 1 );
            break;
        case _RM_:
            setparam( &rmval, val, argtype, _PAGEWIDTH_, inval + tival, _HUGE_ );
            break;
        case _TI_:
            break1();
            setparam(&tival, val, argtype, 0, _HUGE_, rmval );
            break;
        case _PL_:
            setparam( &plval, val, argtype, _PAGELEN_, m1val + m2val + m3val + m4val + 1, _HUGE_ );
            bottom = plval - m3val - m4val;
            break;
        case _UNKNOWN_:
            break;
        default: 
            break;
    } 
}