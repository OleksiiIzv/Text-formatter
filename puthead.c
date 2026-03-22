#include "fmt.h"
void puthead ()
{
    curpage = newpage;
    newpage ++;
    if (m1val > 0)
    {
        skip(m1val - 1);
        puttl (header, curpage);
    }
    skip(m2val);
    lineno = m1val + m2val + 1;
}