#include <stdio.h>
#include <stdlib.h>
#include "fmt.h"
char inbuf[_MAXSTR_];
char header[_MAXSTR_];
char footer [_MAXSTR_];
char outbuf[_MAXSTR_];
int fill;
int lsval;
int spval;
int inval;
int rmval;
int tival;
int ceval;
int ulval;
int lineno;
int plval;
int m1val;
int m2val;
int m3val;
int m4val;
int curpage;
int newpage;
int bottom;
int outp1;
int outw;
int outwds;
int dir;
int main()
{
    initfmt();
    while ( fgets ((char*)&inbuf, _MAXSTR_, stdin ) != NULL )
    {
        if ( inbuf[0] == _CMD_ )
        {
            command( inbuf );
        }
        else
        {
            text( inbuf );
        }
    }
}