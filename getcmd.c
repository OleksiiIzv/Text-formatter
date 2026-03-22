#include <string.h>
#include "fmt.h"
enum CmdType getcmd ( char* buf )
{
    if (strncmp(buf + 1, "FI", 2) == 0)
    {
        return _FI_;
    }
    else if (strncmp(buf + 1, "NF", 2) == 0)
    {
        return _NF_;
    }
    else if (strncmp(buf + 1, "BR", 2) == 0)
    {
        return _BR_;
    }
    else if (strncmp(buf + 1, "LS", 2) == 0)
    {
        return _LS_;
    }
    else if (strncmp(buf + 1, "BP", 2) == 0)
    {
        return _BP_;
    }
    else if (strncmp(buf + 1, "SP", 2) == 0)
    {
        return _SP_;
    }
    else if (strncmp(buf + 1, "IN", 2) == 0)
    {
        return _IN_;
    }
    else if (strncmp(buf + 1, "RM", 2) == 0)
    {
        return _RM_;
    }
    else if (strncmp(buf + 1, "TI", 2) == 0)
    {
        return _TI_;
    }
    else if (strncmp(buf + 1, "CE", 2) == 0)
    {
        return _CE_;
    }
    else if (strncmp(buf + 1, "UL", 2) == 0)
    {
        return _UL_;
    }
    else if (strncmp(buf + 1, "HE", 2) == 0)
    {
        return _HE_;
    }
    else if (strncmp(buf + 1, "FO", 2) == 0)
    {
        return _FO_;
    }
    else if (strncmp(buf + 1, "PL", 2) == 0)
    {
        return _PL_;
    }
    else 
    {
        return _UNKNOWN_;
    }
}