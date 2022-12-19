
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     VARIABLE = 259,
     STRING = 260,
     SQRT = 261,
     FACT = 262,
     LOG = 263,
     LN = 264,
     POW = 265,
     SIN = 266,
     COS = 267,
     TAN = 268,
     OCCASSION = 269,
     DEFAULT = 270,
     NOTEQ = 271,
     SM_EQ = 272,
     GR_EQ = 273,
     MAIN = 274,
     HEADER = 275,
     RETURN = 276,
     BREAK = 277,
     IF = 278,
     ELSE = 279,
     ELSEIF = 280,
     SWITCH = 281,
     CASE = 282,
     FOR = 283,
     WHILE = 284,
     LB = 285,
     RB = 286,
     LP = 287,
     RP = 288,
     ASSIGN = 289,
     PRINT = 290,
     SCAN = 291,
     NOT = 292,
     PLUS = 293,
     MINUS = 294,
     MULT = 295,
     DIV = 296,
     INCREMENT = 297,
     DECREMENT = 298,
     OR = 299,
     AND = 300,
     CONTINUE = 301,
     MODULUS = 302,
     COMMENT = 303,
     EQUAL = 304,
     ST = 305,
     GT = 306,
     DS = 307,
     INT = 308,
     FLT = 309,
     FLOAT = 310,
     CHAR = 311,
     CHARACTER = 312,
     VOID = 313
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 37 "main.y"

	char string[1000];
	int val;



/* Line 1676 of yacc.c  */
#line 117 "main.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


