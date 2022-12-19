%{
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include "main.tab.h"
%}

digit [0-9]*[.]?[0-9]*
var [a-z][a-zA-Z0-9]*

%%

"#shamil ".*".h" {return HEADER;}

"naam "{var}" "{digit}+ {printf("Define detected\n");}

"number" {return INT;}

"decimal" {return FLT;}

[0-9]+ {yylval.val = atoi(yytext); return INTEGER;}

["].*["]    {yytext++;
            int len=strlen(yytext);
            strcpy(yylval.string,yytext);
            yylval.string[len-1]='\0';
            return STRING;
            }

"getback" {return RETURN;}

"getout" {return BREAK;}

"character" {return CHAR;}

"condition" {return IF;}

"ifnot" {return ELSE;}

"ifnot_cond" {return ELSEIF;}

"measure"[[].*[]] {printf("Size of something\n");}

"change" {return SWITCH;}

"ocassion" {return CASE;}

"blank" {return VOID;}

"number main" {return MAIN;}

"jab" {return FOR;}

"jabki" {return WHILE;}

"<" {return LB;}

[>] {return RB;}

[[] {return LP;}

[]] {return RP;}

"~" {return ASSIGN;}

"display" {return PRINT;}

"input" {return SCAN;}

"not" {return NOT;}

"!~" {return NOTEQ;}

"plus" {return PLUS;}

"minus" {return MINUS;}

"mult" {return MULT;}

"div" {return DIV;}

"incr" {return INCREMENT;}

"decr" {return DECREMENT;}

"alt" {return OR;}

"and" {return AND;}

"carryon" {return CONTINUE;}

"mod" {return MODULUS;}

"//".*"\\" {return COMMENT;}

"~~" {return EQUAL;}

"<<" {return ST;}

">>" {return GT;}

"<~" {return SM_EQ;}

">~" {return GR_EQ;}

"occassion" {return OCCASSION;}

"default" {return DEFAULT;}

"ssin" {return SIN;}

"ccos" {return COS;}

"ttan" {return TAN;}

"pow" {return POW;}

"log" {return LOG;}

"ln" {return LN;}

"factorial" {return FACT;}

"root" {return SQRT;}

"right" {printf("Boolean true");}

"wrong" {printf("Boolean false");}

[a][r][r][ ]("number "|"full_number "|"decimal "|"d_decimal "|"character "){var}[[]{digit}+[]] {printf("Array\n");}


[-+/*=,(){}:;%|^]     {	return yytext[0];	}

[$] {return DS;}

{var} {strcpy(yylval.string,yytext); return VARIABLE;} //check

[ ]*	    			{}
[\n]*					{}
[\t]*					{}

. {printf("Not defined in the compiler\n");}

%%

