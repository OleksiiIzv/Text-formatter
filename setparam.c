#include "fmt.h"
void setparam (int* param, int val, int argtype, int defval, int minval, int maxval)
{
    if (argtype == _NEWLINE_)
    {
        *param = defval;
    }
    else if (argtype == _PLUS_)
    {
        *param += val;
    }
    else if (argtype == _MINUS_)
    {
        *param -= val;
    }
    else 
    {
        *param = val;
    }
    *param = min (*param, maxval);
    *param = max (*param, minval);
}