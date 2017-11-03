%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "calculette.tab.h"
%}

%%

[0-9]+(\.[0-9]*)?([Ee][0-9]+)? {  yylval = atof(yytext); return NUM; }
sin|sinus|Sin|Sinus|SINUS|SIN {  return SIN; }
cos|cosinus|Cos|Cosinus|COSINUS|COS { return COS ; }
tan|tangente|Tan|Tangente|TANGENTE|TAN { return TAN ; }
Pi|PI|pi    {  yylval = 3.14159265359; return NUM; }
e|exp|Exp|EXP {return EXP ; }
\n     {  return '\n'; }
plus   { return '+'; }
fois   { return '*'; }
" "    {}
.      {  return yytext[0]; }

%%

int yywrap(){}
