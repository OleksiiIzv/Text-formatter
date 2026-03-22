#include <stdio.h>
#include "fmt.h"
void skip(int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
         putchar(_NEWLINE_);
    }
}