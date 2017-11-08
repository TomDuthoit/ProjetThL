%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "mathlobster.tab.h"

%}


%%
[0-9]+(\.[0-9]*)?([Ee][0-9]+)? { yylval = atof(yytext); return NUM; }
x|X														 {return VAR ;}
sin|sinus|Sin|Sinus|SINUS|SIN { return SIN; }
asin|asinus|Asin|ASinus|ASINUS|ASIN|arcsin|ARCSIN { return ASIN; }
sinh|sinush|Sinh|Sinush|SINUSH|SINH|sinushyperbolique|SINUSHYPERBOLIQUE { return SINH; }
cos|cosinus|Cos|Cosinus|COSINUS|COS { return COS ; }
acos|acosinus|aCos|Acosinus|ACOSINUS|ACOS|arccos|ARCCOS { return ACOS ; }
cosh|cosinush|Cosh|Cosinush|COSINUSH|COSH|cosinushyperbolique|COSINUSHYPERBOLIQUE { return COSH ; }
tan|tangente|Tan|Tangente|TANGENTE|TAN { return TAN ; }
atan|atangente|Atan|Atangente|ATANGENTE|ATAN|arctan|ARCTAN { return ATAN ; }
tanh|tangenteh|Tanh|Tangenteh|TANGENTEH|TANH|tangentehyperbolique|TANGENTEHYPERBOLIQUE { return TANH ; }
Pi|PI|pi { yylval = 3.14159265359; return NUM; }
e|exp|Exp|EXP {return EXP ; }
ln|log|LN|Ln|LOG|Log {return LOG ; }
log10|LOG10|Log10 {return LOG10 ; }
pow|POW|Pow {return POW ; }
sqrt|SQRT|racine|RACINE|Racine|Sqrt {return SQRT ; }
\n { return '\n'; }
" " {}
. { return yytext[0]; }
%%


int yywrap(){}
