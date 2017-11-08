%{
	#include <cstdlib>
	#include <cmath>
	#include <map>
	#include <string>
	#include <iostream>

	std::map <std::string,double> var;

	extern int yylex ();
	void yyerror(std::string s) {
		std::cout << s << std::endl;
	}
%}

%skeleton "lalr1.cc"

%union
{
	double dval;
	std::string sval;
}

%type <dval> expr

%token <dval> NUM
%token <sval> VAR

%left '+' '-'
%left '*' '/'
%left '^'

%token SIN
%token ASIN
%token SINH

%token COS
%token ACOS
%token COSH

%token TAN
%token ATAN
%token TANH

%token EXP
%token LN
%token LOG

%token POW
%token SQRT


%%
program:
	/* empty */
	| program line
	;

line:
	'\n'
	| expr '\n' 				{ std::cout << std::endl << "Result : " << $1 << std::endl; }
	| VAR '=' expr				{ var.insert(std::pair($1,$3)); }
	;

expr:
	NUM								{ $$ = $1;				/* std::cout << $1 << std::endl; */ }
	| VAR							{ $$ = var[$1]; }
	| '(' expr ')'					{ $$ = $2; }
	| expr '+' expr					{ $$ = $1 + $3;			std::cout << $1 << "+" << $3 << "=" << $$ << std::endl; }
	| expr '-' expr					{ $$ = $1 - $3;			std::cout << $1 << "-" << $3 << "=" << $$ << std::endl; }
	| expr '*' expr					{ $$ = $1 * $3;			std::cout << $1 << "*" << $3 << "=" << $$ << std::endl; }
	| expr '/' expr					{ $$ = $1 / $3;			std::cout << $1 << "/" << $3 << "=" << $$ << std::endl; }
	| expr '^' expr					{ $$ = $1 ^ $3;			std::cout << $1 << "^" << $3 << "=" << $$ << std::endl; }
	| POW  '(' expr ',' expr ')'	{ $$ = pow($3, $5);		std::cout << $3 << "^" << $5 << "=" << $$ << std::endl; }
	| SIN  '(' expr ')'				{ $$ = sin($3);			std::cout <<  "sin (" << $3 << ") = " << $$ << std::endl; }
	| ASIN '(' expr ')'				{ $$ = asin($3);		std::cout << "asin (" << $3 << ") = " << $$ << std::endl; }
	| SINH '(' expr ')'				{ $$ = sinh($3);		std::cout << "sinh (" << $3 << ") = " << $$ << std::endl; }
	| COS  '(' expr ')'				{ $$ = cos($3);			std::cout <<  "cos (" << $3 << ") = " << $$ << std::endl; }
	| ACOS '(' expr ')'				{ $$ = acos($3);		std::cout << "acos (" << $3 << ") = " << $$ << std::endl; }
	| COSH '(' expr ')'				{ $$ = cosh($3);		std::cout << "cosh (" << $3 << ") = " << $$ << std::endl; }
	| TAN  '(' expr ')'				{ $$ = tan($3);			std::cout <<  "tan (" << $3 << ") = " << $$ << std::endl; }
	| ATAN '(' expr ')'				{ $$ = atan($3);		std::cout << "atan (" << $3 << ") = " << $$ << std::endl; }
	| TANH '(' expr ')'				{ $$ = tanh($3);		std::cout << "tanh (" << $3 << ") = " << $$ << std::endl; }
	| EXP  '(' expr ')'				{ $$ = exp($3);			std::cout <<  "exp (" << $3 << ") = " << $$ << std::endl; }
	| SQRT '(' expr ')'				{ $$ = sqrt($3);		std::cout << "sqrt (" << $3 << ") = " << $$ << std::endl; }
	| LN   '(' expr ')'				{ $$ = log($3);			std::cout <<   "ln (" << $3 << ") = " << $$ << std::endl; }
	| LOG  '(' expr ')'				{ $$ = log10($3);		std::cout <<  "log (" << $3 << ") = " << $$ << std::endl; }
	;
%%


int main(void) {
	yyparse();
	return 0;
}
