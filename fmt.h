#define _MAXSTR_ 300
#define _CMD_ '.'
#define _HUGE_ 10000
#define _PAGEWIDTH_ 60
#define _PAGELEN_ 66
#define TRUE 1
#define FALSE 0
#define _PLUS_ '+'
#define _MINUS_ '-'
#define _BLANK_ ' '
#define _TAB_ 0x09
#define _NEWLINE_ 0x0A
#define _ENDSTR_ '\0'
#define _SQUOTE_ '\''
#define _DQUOTE_ '"'
#define _PAGENUM_ '#'
#define _BACKSPACE_ '\b'
#ifndef min
#define min(x, y) ((x) < (y) ? (x) : (y))
#endif
#ifndef max
#define max(x, y) ((x) > (y) ? (x) : (y))
#endif
enum CmdType { _FI_, _NF_, _BR_, _LS_, _CE_, _UL_, _HE_, _FO_, _BP_, _SP_, _IN_, _RM_, _TI_, _PL_, _UNKNOWN_ };

extern int fill;
extern int lsval;
extern int spval;
extern int inval;
extern int rmval;
extern int tival;
extern int ceval;
extern int ulval;
extern int lineno;
extern int plval;
extern int m1val;
extern int m2val;
extern int m3val;
extern int m4val;
extern int curpage;
extern int newpage;
extern int bottom;
extern int outp1;
extern int outw;
extern int outwds;
extern int dir;
extern char header[_MAXSTR_];
extern char footer[_MAXSTR_];
extern char outbuf[_MAXSTR_];

enum CmdType getcmd ( char* buf );
int getval (char* buf, int* argtype);
void setparam (int* param, int val, int argtype, int defval, int minval, int maxval);
void put (char* buf);
void command( char* buf );
void skipbl (char* s, int* i);
void gettl(char* buf, char* ttl);
void initfmt();
void break1 ();
void space (int n);
void text (char* inbuf);
void page ();
void skip(int n);
void puthead ();
void putfoot();
void puttl (char* buf, int pageno);
int getword( char* s, int i, char* out );
void putword( char* wordbuf);
int width( char* buf);
void spread (char* buf, int outp1, int nextra, int outwds);
void center (char* buf);