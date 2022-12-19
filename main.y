%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>

	int yylex();
	int yyerror(char *s);
	char valname[1000][1000];
	int store[1000];
	int cnt=1;
	int isDeclared(char *now){
		for(int i=1;i<cnt;i++){
			if(strcmp(valname[i],now)==0){
				return i; 
			}
		}
		return 0;
	}
	int addNewVal(char *now){
		if(isDeclared(now)!=0)return 0;
		strcpy(valname[cnt],now);
		store[cnt]=0;
		cnt++;
	}
	int getVal(char *now){
		return store[isDeclared(now)];
	}
	int setVal(char *now,int v){
		int id = isDeclared(now);
		store[id] = v;
	}
	int flag,cvar;
%}


%union{
	char string[1000];
	int val;
}

%token<val> INTEGER
%type<val>expression
%type<val>statement
%token<string>VARIABLE STRING
%token SQRT FACT LOG LN POW SIN COS TAN OCCASSION DEFAULT NOTEQ SM_EQ GR_EQ MAIN HEADER RETURN BREAK IF ELSE ELSEIF SWITCH CASE FOR WHILE LB RB LP RP ASSIGN PRINT SCAN NOT PLUS MINUS MULT DIV INCREMENT DECREMENT OR AND CONTINUE MODULUS COMMENT EQUAL ST GT DS INT FLT FLOAT CHAR CHARACTER VOID
%left SIN COS TAN
%left AND OR NOT
%left ST GT SM_EQ GR_EQ NOTEQ EQUAL
%left PLUS MINUS
%left MULT DIV MODULUS

%%

program: function program
		|HEADER program {printf("Header file added");}
		|MAIN LB RB LP line RP {printf("Main function END\n");}
		;

line:
	| declaration DS		{  printf("\nVariable declared\n" );}
	| line statement
	;



statement: DS	
	

	| expression DS 			{   printf("\nValue of expression: %d\n", $1); $$=$1;
		}
	| VARIABLE ASSIGN expression DS { 
							if(isDeclared($1) != 0 ){
								setVal($1,$3);
								$$=$3;
							}
							else{
								printf("\nVariable not declared\n");
							}
						}
	| IF LB expression RB LP statement RP {
							if($3){
								printf("\nIn If condition\n\n");
							}
							else{
								printf("\nCondition didn't match\n");
							}
		}
	| IF LB expression RB LP statement RP ELSE LP statement RP{
							if($3){
								printf("\nIn If condition\n\n");
							}
							else{
								printf("\nIn else condition.\n\n" );
							}
	}

	| IF LB expression RB LP statement RP ELSEIF LB expression RB LP statement RP ELSE LP statement RP{
							if($3){
								printf("\nIn If condition\n\n");
							}
							else if($10){
								printf("\nIn elseif condition\n\n" );
							}
							else{
								printf("\nIn else condition\n\n");
							}
	}

	| WHILE LB expression RB LP statement RP {
							if($3){
								printf("\n\nWhile loop is executing\n\n");	
							}
							

	}

	| FOR LB VARIABLE ASSIGN INTEGER  '|' VARIABLE RELOP INTEGER '|' VARIABLE PLUS INTEGER RB LP statement RP{
							int i;
							for(i=$5 ; i<=$9 ; i=i+$13 ) 
	                            {
									printf("\nExpression value : %d\n",i);
								}
	}

	| COMMENT {
			printf("\n\nThis is a comment\n");
		}
	| PRINT LP expression RP DS{
			printf("\nPrint expression %d\n",$3);
		}
	| PRINT LP STRING RP DS{
			printf("\nString is:  %s\n",$3);
		}
	| SWITCH LB caseval RB LP SCASE RP{
		printf("\nSwitch case is declared\n\n\n");
	}
	;

caseval:
	INTEGER{
		flag = 0;
		cvar = $1;
	}
	;

SCASE:
	  grammar
	| grammar d_grammar
	;

grammar:
	| grammar cnumber
	;

cnumber: OCCASSION INTEGER ':' expression DS BREAK DS{
							if(cvar == $2){
								printf("\nMatched for Case: %d\n",$2);
								flag = 1;
							}
	}
	;
d_grammar: DEFAULT ':' expression DS{
							if(flag == 0){
								printf("\nIn default segement\n");
							}
}
	

RELOP:
	ST
	|GT
	|SM_EQ
	|GR_EQ
	|EQUAL
	|NOTEQ
	;

function:
	TYPE VARIABLE LB param RB LP line RP {
		printf("\n\nUser defined function declared\n\n\n");
}
	;

param:
	param ',' func_declare
	| func_declare
	;

func_declare:
	|TYPE VARIABLE
	;
declaration: 
	TYPE ID1
	;

TYPE: INT
	| FLT
	| CHAR 
	| VOID
	;

ID1: ID1 ',' VARIABLE {
	int res = addNewVal($3);
	if(res == 0){
		printf("Variable already declared\n");
		exit(-1);
	}
	}

	| VARIABLE {
	int res = addNewVal($1);
	if(res == 0){
		printf("Variable already declared\n");
		exit(-1);
	}
}
	;

expression:
	INTEGER { $$ = $1; }
	
	| VARIABLE { $$ = getVal($1); }
	
	| expression PLUS expression	{ printf("\nAddition of %d+%d = %d \n",$1,$3,$1+$3 ); $$ = $1 + $3; }
	
	| expression MINUS expression	{ printf("\nMinus of %d-%d = %d \n",$1,$3,$1-$3 );$$ = $1 - $3; }
	
	| expression MULT expression	{ printf("\nMultiplication of %d*%d = %d \n",$1,$3,$1*$3 );$$ = $1 * $3; }
	
	| expression DIV expression	{ if($3){
									printf("\nDivision of %d/%d = %d\n",$1,$3,$1/$3 ); $$ = $1 / $3;
								}
								else{
									$$ = 0;
									printf("\nDivisor is zero\n");
								}
		
	 }
	| expression MODULUS expression	{ if($3){
									printf("\nModulus of %d %% %d = %d\n",$1,$3,$1%$3 ); $$ = $1 % $3;
								}
								else{
									$$ = 0;
									printf("\nMod by zero\n");
								}
		
	}
	| expression POW expression {int ans = pow($1, $3);
								printf("\nPower of: %d^%d is: %d", $1, $3, ans); $$ = pow($1, $3);}

	| expression ST expression {printf("\nSmaller than: %d<%d\n",$1,$3, $1<$3); $$ = $1<$3;}

	| expression GT expression {printf("\nGreater than: %d>%d\n",$1,$3, $1>$3); $$ = $1>$3;}

	| expression EQUAL expression {printf("\nEqual: %d==%d\n",$1,$3, $1==$3); $$ = $1==$3;}

	| expression SM_EQ expression {printf("\nSmaller or Equal: %d<=%d\n",$1,$3, $1<=$3); $$ = $1<=$3;}

	| expression GR_EQ expression {printf("\nGreater or Equal: %d<=%d\n",$1,$3, $1>=$3); $$ = $1>=$3;}

	| expression NOTEQ expression {printf("\nNot Equal: %d<=%d\n",$1,$3, $1!=$3); $$ = $1!=$3;}

	| expression INCREMENT {
		$$ = $1 + 1;
	}
	| expression DECREMENT{
		$$ = $1 - 1;
	}
	| SIN LB expression RB { printf("\nThe value of Sin(%d) is: %.2lf ", $3, sin($3*3.1416/180)); $$ = sin($3*3.1416/180);}

	| COS LB expression RB { printf("\nThe value of Cos(%d) is: %.2lf", $3, cos($3*3.1416/180)); $$ = cos($3*3.1416/180);}

	| TAN LB expression RB { printf("\nThe value of Tan(%d) is: %.2lf", $3, tan($3*3.1416/180)); $$ = cos($3*3.1416/180);}

	| LOG LB expression RB {printf("Value of Log(%d) is %lf\n",$3,(log($3*1.0)/log(10.0))); $$=(log($3*1.0)/log(10.0));}

	| LN LB expression RB {printf("Value of ln(%d) is %lf\n",$3,(log($3))); $$=(log($3));}

	| FACT LB expression RB {int ans = 1; 
							for(int i=1; i<=$3; i++)
							{
								ans*=i;
							}
							printf("\n\nFactorial of %d is %d\n",$3,ans);
							$$ = ans;
	}

	| SQRT LB expression RB {   printf("\n\nSquare root of the value = %lf\n",sqrt($3 * 1.0)); $$ = sqrt($3 * 1.0); }

	|LP expression RP { $$ = $2;}
	;

%%

int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();

    
	return 0;
}
