#include <stdio.h>
#include "fmt.h"
void skipbl (char* s, int* i)
{
    //printf("S[%d]=[%c]\n", *i, s[*i]);
    while( s[*i] == _BLANK_  || s[*i] == _TAB_ ) 
    {
        *i = *i + 1;
        //printf("S[%d]=[%c]\n", *i, s[*i]);
    }
        //printf("S[%d]=[%c]\n", *i, s[*i]);

}