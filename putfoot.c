#include "fmt.h"
void putfoot()
{
    skip(m3val);
    if(m4val > 0)
    {
        puttl(footer, curpage);
        skip (m4val - 1);
    }
}