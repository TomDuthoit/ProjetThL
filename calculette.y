%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  extern int yylex ();
%}

%code requires
  {
    #define YYSTYPE double
  }

%token NUM
%token SIN
%token COS
%token TAN
%token EXP
%left '+' '-'
%left '*' '/'

%%
program: /* empty */
       | program line
	   ;

line: '\n'
	| expr '\n' { printf("\nResult : %g\n", $1); }
	;

expr:
     NUM                 { $$ = $1;  /* printf("%g ", $1); */ }
     | expr '+' expr     { $$ = $1 + $3;  printf("%g + %g = %g\n", $1, $3, $$); }
     | expr '-' expr     { $$ = $1 - $3;  printf("%g - %g = %g\n", $1, $3, $$); }
     | expr '*' expr     { $$ = $1 * $3;  printf("%g * %g = %g\n", $1, $3, $$);}
     | '(' expr ')'      { $$ = $2;  }
     | SIN '(' expr ')'  { $$ = sin($3);  printf("sin (%g) = %g\n", $3, $$); };
     | COS '(' expr ')'  { $$ = cos($3);  printf("cos (%g) = %g\n", $3, $$); };
     | TAN '(' expr ')'  { $$ = tan($3);  printf("tan(%g) = %g\n", $3, $$); };
     | EXP '(' expr ')'  { $$ = exp($3);  printf("exp(%g) = %g\n", $3, $$); };

%%

yyerror(char *s) {
    printf("%s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}
