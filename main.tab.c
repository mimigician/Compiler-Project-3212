
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "main.y"

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


/* Line 189 of yacc.c  */
#line 109 "main.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 37 "main.y"

	char string[1000];
	int val;



/* Line 214 of yacc.c  */
#line 210 "main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 222 "main.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   604

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    16,    17,    20,    23,    25,
      28,    33,    41,    53,    72,    80,    98,   100,   106,   112,
     120,   122,   124,   127,   128,   131,   139,   144,   146,   148,
     150,   152,   154,   156,   165,   169,   171,   172,   175,   178,
     180,   182,   184,   186,   190,   192,   194,   196,   200,   204,
     208,   212,   216,   220,   224,   228,   232,   236,   240,   244,
     247,   250,   255,   260,   265,   270,   275,   280,   285
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    72,    63,    -1,    20,    63,    -1,    19,
      30,    31,    32,    64,    33,    -1,    -1,    75,    52,    -1,
      64,    65,    -1,    52,    -1,    78,    52,    -1,     4,    34,
      78,    52,    -1,    23,    30,    78,    31,    32,    65,    33,
      -1,    23,    30,    78,    31,    32,    65,    33,    24,    32,
      65,    33,    -1,    23,    30,    78,    31,    32,    65,    33,
      25,    30,    78,    31,    32,    65,    33,    24,    32,    65,
      33,    -1,    29,    30,    78,    31,    32,    65,    33,    -1,
      28,    30,     4,    34,     3,    59,     4,    71,     3,    59,
       4,    38,     3,    31,    32,    65,    33,    -1,    48,    -1,
      35,    32,    78,    33,    52,    -1,    35,    32,     5,    33,
      52,    -1,    26,    30,    66,    31,    32,    67,    33,    -1,
       3,    -1,    68,    -1,    68,    70,    -1,    -1,    68,    69,
      -1,    14,     3,    60,    78,    52,    22,    52,    -1,    15,
      60,    78,    52,    -1,    50,    -1,    51,    -1,    17,    -1,
      18,    -1,    49,    -1,    16,    -1,    76,     4,    30,    73,
      31,    32,    64,    33,    -1,    73,    61,    74,    -1,    74,
      -1,    -1,    76,     4,    -1,    76,    77,    -1,    53,    -1,
      54,    -1,    56,    -1,    58,    -1,    77,    61,     4,    -1,
       4,    -1,     3,    -1,     4,    -1,    78,    38,    78,    -1,
      78,    39,    78,    -1,    78,    40,    78,    -1,    78,    41,
      78,    -1,    78,    47,    78,    -1,    78,    10,    78,    -1,
      78,    50,    78,    -1,    78,    51,    78,    -1,    78,    49,
      78,    -1,    78,    17,    78,    -1,    78,    18,    78,    -1,
      78,    16,    78,    -1,    78,    42,    -1,    78,    43,    -1,
      11,    30,    78,    31,    -1,    12,    30,    78,    31,    -1,
      13,    30,    78,    31,    -1,     8,    30,    78,    31,    -1,
       9,    30,    78,    31,    -1,     7,    30,    78,    31,    -1,
       6,    30,    78,    31,    -1,    32,    78,    33,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    56,    57,    60,    61,    62,    67,    70,
      72,    81,    89,    98,   110,   118,   126,   129,   132,   135,
     141,   148,   149,   152,   153,   156,   163,   171,   172,   173,
     174,   175,   176,   180,   186,   187,   190,   191,   194,   197,
     198,   199,   200,   203,   211,   221,   223,   225,   227,   229,
     231,   240,   249,   252,   254,   256,   258,   260,   262,   264,
     267,   270,   272,   274,   276,   278,   280,   289,   291
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "VARIABLE", "STRING", "SQRT",
  "FACT", "LOG", "LN", "POW", "SIN", "COS", "TAN", "OCCASSION", "DEFAULT",
  "NOTEQ", "SM_EQ", "GR_EQ", "MAIN", "HEADER", "RETURN", "BREAK", "IF",
  "ELSE", "ELSEIF", "SWITCH", "CASE", "FOR", "WHILE", "LB", "RB", "LP",
  "RP", "ASSIGN", "PRINT", "SCAN", "NOT", "PLUS", "MINUS", "MULT", "DIV",
  "INCREMENT", "DECREMENT", "OR", "AND", "CONTINUE", "MODULUS", "COMMENT",
  "EQUAL", "ST", "GT", "DS", "INT", "FLT", "FLOAT", "CHAR", "CHARACTER",
  "VOID", "'|'", "':'", "','", "$accept", "program", "line", "statement",
  "caseval", "SCASE", "grammar", "cnumber", "d_grammar", "RELOP",
  "function", "param", "func_declare", "declaration", "TYPE", "ID1",
  "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   124,
      58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    67,    67,    68,    68,    69,    70,    71,    71,    71,
      71,    71,    71,    72,    73,    73,    74,    74,    75,    76,
      76,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     6,     0,     2,     2,     1,     2,
       4,     7,    11,    18,     7,    17,     1,     5,     5,     7,
       1,     1,     2,     0,     2,     7,     4,     1,     1,     1,
       1,     1,     1,     8,     3,     1,     0,     2,     2,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     4,     4,     4,     4,     4,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    39,    40,    41,    42,     0,     0,     0,
       0,     3,     1,     2,     0,     0,    36,     5,     0,    35,
       0,     0,     0,     0,     0,    36,    37,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,    16,     8,     7,     0,     6,    44,    38,
       5,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,    68,     0,     0,
      52,    58,    56,    57,    47,    48,    49,    50,    51,    55,
      53,    54,    43,    33,    10,    67,    66,    64,    65,    61,
      62,    63,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,    18,    17,     0,     0,    21,     0,     0,    11,
      19,     0,     0,    24,    22,     0,    14,     0,     0,     0,
       0,    32,    29,    30,    31,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    12,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    21,    45,    94,   135,   136,   143,   144,   157,
       8,    18,    19,    22,     9,    49,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -124
static const yytype_int16 yypact[] =
{
      36,   -26,    36,  -124,  -124,  -124,  -124,     6,    36,    18,
      10,  -124,  -124,  -124,    14,    25,    58,    58,    32,  -124,
      56,    39,     9,    60,    34,    58,  -124,  -124,    35,    40,
      43,    45,    48,    53,    65,    67,    68,    70,    74,    77,
     572,  -124,    71,  -124,  -124,  -124,   124,  -124,  -124,    27,
      58,  -124,   572,   572,   572,   572,   572,   572,   572,   572,
     572,   106,   109,   572,  -124,   231,   561,   572,   572,   572,
     572,   572,   572,   572,   572,  -124,  -124,   572,   572,   572,
     572,  -124,   111,    73,   140,   245,   281,   298,   334,   351,
     387,   404,   440,  -124,    86,    84,   457,  -124,    89,   476,
     495,   159,   159,   159,   315,   315,    11,    11,    11,   159,
     159,   159,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,    98,   103,   133,   105,    87,    92,   120,  -124,
      79,   120,  -124,  -124,   112,   114,    -5,   147,   121,     0,
    -124,   150,    99,  -124,  -124,   284,  -124,   128,   131,   110,
     572,  -124,  -124,  -124,  -124,  -124,  -124,   174,   120,   572,
     572,   178,   125,   152,   512,   193,  -124,   182,  -124,   161,
     183,   166,   120,   155,   205,   179,  -124,   184,   189,   190,
     191,   120,   120,   181,   204,  -124,  -124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,    -1,   176,  -123,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,   199,  -124,   -14,  -124,   -40
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      65,    11,    20,    23,    10,   134,    12,    13,   138,   141,
     142,    20,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    67,    14,    96,   147,   148,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   163,    23,   108,   109,   110,
     111,    15,    27,    28,    16,    29,    30,    31,    32,   175,
      33,    34,    35,    75,    76,     1,     2,    17,   183,   184,
      26,    47,    36,    24,    48,    37,    50,    38,    39,    52,
      53,    40,    41,    54,    42,    55,    27,    28,    56,    29,
      30,    31,    32,    57,    33,    34,    35,    43,    82,     3,
       4,    44,     5,    25,     6,    58,    36,    59,    60,    37,
      61,    38,    39,    66,    62,    40,   113,    63,    42,    93,
     161,     3,     4,    95,     5,   112,     6,   123,   124,   164,
     165,    43,   126,    27,    28,    44,    29,    30,    31,    32,
     128,    33,    34,    35,    67,   129,   130,   131,   137,   132,
      68,    69,    70,    36,   133,   139,    37,   140,    38,    39,
      67,   145,    40,   149,   146,    42,    68,    69,    70,   150,
     158,   159,    71,    72,    73,    74,    75,    76,    43,    67,
     160,    77,    44,    78,    79,    80,    81,   162,    71,    72,
      73,    74,    75,    76,   167,   168,   171,    77,    67,    78,
      79,    80,   114,   172,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    67,   174,   173,    77,   176,   177,    68,
      69,    70,   178,   180,   185,   179,    71,    72,    73,    74,
      75,    76,   181,   182,    51,    77,    83,    78,    79,    80,
     166,    71,    72,    73,    74,    75,    76,   186,     0,     0,
      77,    67,    78,    79,    80,   170,     0,    68,    69,    70,
       0,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,    68,    69,    70,    97,     0,     0,     0,     0,    71,
      72,    73,    74,    75,    76,     0,   115,     0,    77,     0,
      78,    79,    80,    71,    72,    73,    74,    75,    76,     0,
       0,    67,    77,     0,    78,    79,    80,    68,    69,    70,
     151,   152,   153,     0,     0,     0,     0,     0,    67,     0,
       0,     0,   116,     0,    68,    69,    70,     0,     0,    71,
      72,    73,    74,    75,    76,    67,     0,     0,    77,   117,
      78,    79,    80,   154,   155,   156,    71,    72,    73,    74,
      75,    76,     0,     0,    67,    77,     0,    78,    79,    80,
      68,    69,    70,     0,     0,    73,    74,    75,    76,     0,
       0,    67,    77,     0,     0,   118,     0,    68,    69,    70,
       0,     0,    71,    72,    73,    74,    75,    76,     0,     0,
       0,    77,   119,    78,    79,    80,     0,     0,     0,    71,
      72,    73,    74,    75,    76,     0,     0,    67,    77,     0,
      78,    79,    80,    68,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    67,     0,     0,     0,   120,     0,
      68,    69,    70,     0,     0,    71,    72,    73,    74,    75,
      76,     0,     0,     0,    77,   121,    78,    79,    80,     0,
       0,     0,    71,    72,    73,    74,    75,    76,     0,     0,
      67,    77,     0,    78,    79,    80,    68,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
       0,   122,     0,    68,    69,    70,     0,     0,    71,    72,
      73,    74,    75,    76,     0,     0,    67,    77,   125,    78,
      79,    80,    68,    69,    70,    71,    72,    73,    74,    75,
      76,     0,     0,     0,    77,    67,    78,    79,    80,   127,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     0,    67,    77,     0,    78,    79,    80,    68,    69,
      70,     0,     0,    71,    72,    73,    74,    75,    76,     0,
       0,     0,    77,   169,    78,    79,    80,     0,     0,     0,
      71,    72,    73,    74,    75,    76,     0,     0,     0,    77,
       0,    78,    79,    80,    27,    64,    98,    29,    30,    31,
      32,     0,    33,    34,    35,    27,    64,     0,    29,    30,
      31,    32,     0,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
      40,     2,    16,    17,    30,   128,     0,     8,   131,    14,
      15,    25,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    10,     4,    63,    24,    25,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   158,    50,    77,    78,    79,
      80,    31,     3,     4,    30,     6,     7,     8,     9,   172,
      11,    12,    13,    42,    43,    19,    20,    32,   181,   182,
       4,    52,    23,    31,     4,    26,    32,    28,    29,    34,
      30,    32,    33,    30,    35,    30,     3,     4,    30,     6,
       7,     8,     9,    30,    11,    12,    13,    48,    61,    53,
      54,    52,    56,    61,    58,    30,    23,    30,    30,    26,
      30,    28,    29,    32,    30,    32,    33,    30,    35,     3,
     150,    53,    54,     4,    56,     4,    58,    31,    34,   159,
     160,    48,    33,     3,     4,    52,     6,     7,     8,     9,
      32,    11,    12,    13,    10,    32,     3,    32,    59,    52,
      16,    17,    18,    23,    52,    33,    26,    33,    28,    29,
      10,     4,    32,     3,    33,    35,    16,    17,    18,    60,
      32,    30,    38,    39,    40,    41,    42,    43,    48,    10,
      60,    47,    52,    49,    50,    51,    52,     3,    38,    39,
      40,    41,    42,    43,    59,    33,     4,    47,    10,    49,
      50,    51,    52,    32,    16,    17,    18,    38,    39,    40,
      41,    42,    43,    10,    38,    22,    47,    52,     3,    16,
      17,    18,    33,    24,    33,    31,    38,    39,    40,    41,
      42,    43,    32,    32,    25,    47,    50,    49,    50,    51,
      52,    38,    39,    40,    41,    42,    43,    33,    -1,    -1,
      47,    10,    49,    50,    51,    52,    -1,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    33,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    -1,    31,    -1,    47,    -1,
      49,    50,    51,    38,    39,    40,    41,    42,    43,    -1,
      -1,    10,    47,    -1,    49,    50,    51,    16,    17,    18,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    31,    -1,    16,    17,    18,    -1,    -1,    38,
      39,    40,    41,    42,    43,    10,    -1,    -1,    47,    31,
      49,    50,    51,    49,    50,    51,    38,    39,    40,    41,
      42,    43,    -1,    -1,    10,    47,    -1,    49,    50,    51,
      16,    17,    18,    -1,    -1,    40,    41,    42,    43,    -1,
      -1,    10,    47,    -1,    -1,    31,    -1,    16,    17,    18,
      -1,    -1,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    47,    31,    49,    50,    51,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    -1,    -1,    10,    47,    -1,
      49,    50,    51,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    31,    -1,
      16,    17,    18,    -1,    -1,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    47,    31,    49,    50,    51,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    -1,    -1,
      10,    47,    -1,    49,    50,    51,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    31,    -1,    16,    17,    18,    -1,    -1,    38,    39,
      40,    41,    42,    43,    -1,    -1,    10,    47,    31,    49,
      50,    51,    16,    17,    18,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    47,    10,    49,    50,    51,    33,
      -1,    16,    17,    18,    38,    39,    40,    41,    42,    43,
      -1,    -1,    10,    47,    -1,    49,    50,    51,    16,    17,
      18,    -1,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    47,    31,    49,    50,    51,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    47,
      -1,    49,    50,    51,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,     3,     4,    -1,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    20,    53,    54,    56,    58,    63,    72,    76,
      30,    63,     0,    63,     4,    31,    30,    32,    73,    74,
      76,    64,    75,    76,    31,    61,     4,     3,     4,     6,
       7,     8,     9,    11,    12,    13,    23,    26,    28,    29,
      32,    33,    35,    48,    52,    65,    78,    52,     4,    77,
      32,    74,    34,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,     4,    78,    32,    10,    16,    17,
      18,    38,    39,    40,    41,    42,    43,    47,    49,    50,
      51,    52,    61,    64,    78,    78,    78,    78,    78,    78,
      78,    78,    78,     3,    66,     4,    78,    33,     5,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,     4,    33,    52,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    34,    31,    33,    33,    32,    32,
       3,    32,    52,    52,    65,    67,    68,    59,    65,    33,
      33,    14,    15,    69,    70,     4,    33,    24,    25,     3,
      60,    16,    17,    18,    49,    50,    51,    71,    32,    30,
      60,    78,     3,    65,    78,    78,    52,    59,    33,    31,
      52,     4,    32,    22,    38,    65,    52,     3,    33,    31,
      24,    32,    32,    65,    65,    33,    33
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 56 "main.y"
    {printf("Header file added");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 57 "main.y"
    {printf("Main function END\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 61 "main.y"
    {  printf("\nVariable declared\n" );;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 70 "main.y"
    {   printf("\nValue of expression: %d\n", (yyvsp[(1) - (2)].val)); (yyval.val)=(yyvsp[(1) - (2)].val);
		;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 72 "main.y"
    { 
							if(isDeclared((yyvsp[(1) - (4)].string)) != 0 ){
								setVal((yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].val));
								(yyval.val)=(yyvsp[(3) - (4)].val);
							}
							else{
								printf("\nVariable not declared\n");
							}
						;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 81 "main.y"
    {
							if((yyvsp[(3) - (7)].val)){
								printf("\nIn If condition\n\n");
							}
							else{
								printf("\nCondition didn't match\n");
							}
		;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 89 "main.y"
    {
							if((yyvsp[(3) - (11)].val)){
								printf("\nIn If condition\n\n");
							}
							else{
								printf("\nIn else condition.\n\n" );
							}
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 98 "main.y"
    {
							if((yyvsp[(3) - (18)].val)){
								printf("\nIn If condition\n\n");
							}
							else if((yyvsp[(10) - (18)].val)){
								printf("\nIn elseif condition\n\n" );
							}
							else{
								printf("\nIn else condition\n\n");
							}
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 110 "main.y"
    {
							if((yyvsp[(3) - (7)].val)){
								printf("\n\nWhile loop is executing\n\n");	
							}
							

	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 118 "main.y"
    {
							int i;
							for(i=(yyvsp[(5) - (17)].val) ; i<=(yyvsp[(9) - (17)].val) ; i=i+(yyvsp[(13) - (17)].val) ) 
	                            {
									printf("\nExpression value : %d\n",i);
								}
	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 126 "main.y"
    {
			printf("\n\nThis is a comment\n");
		;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 129 "main.y"
    {
			printf("\nPrint expression %d\n",(yyvsp[(3) - (5)].val));
		;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 132 "main.y"
    {
			printf("\nString is:  %s\n",(yyvsp[(3) - (5)].string));
		;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 135 "main.y"
    {
		printf("\nSwitch case is declared\n\n\n");
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 141 "main.y"
    {
		flag = 0;
		cvar = (yyvsp[(1) - (1)].val);
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 156 "main.y"
    {
							if(cvar == (yyvsp[(2) - (7)].val)){
								printf("\nMatched for Case: %d\n",(yyvsp[(2) - (7)].val));
								flag = 1;
							}
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 163 "main.y"
    {
							if(flag == 0){
								printf("\nIn default segement\n");
							}
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 180 "main.y"
    {
		printf("\n\nUser defined function declared\n\n\n");
;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 203 "main.y"
    {
	int res = addNewVal((yyvsp[(3) - (3)].string));
	if(res == 0){
		printf("Variable already declared\n");
		exit(-1);
	}
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 211 "main.y"
    {
	int res = addNewVal((yyvsp[(1) - (1)].string));
	if(res == 0){
		printf("Variable already declared\n");
		exit(-1);
	}
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 221 "main.y"
    { (yyval.val) = (yyvsp[(1) - (1)].val); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 223 "main.y"
    { (yyval.val) = getVal((yyvsp[(1) - (1)].string)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 225 "main.y"
    { printf("\nAddition of %d+%d = %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)+(yyvsp[(3) - (3)].val) ); (yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 227 "main.y"
    { printf("\nMinus of %d-%d = %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)-(yyvsp[(3) - (3)].val) );(yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 229 "main.y"
    { printf("\nMultiplication of %d*%d = %d \n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)*(yyvsp[(3) - (3)].val) );(yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 231 "main.y"
    { if((yyvsp[(3) - (3)].val)){
									printf("\nDivision of %d/%d = %d\n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)/(yyvsp[(3) - (3)].val) ); (yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
								}
								else{
									(yyval.val) = 0;
									printf("\nDivisor is zero\n");
								}
		
	 ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 240 "main.y"
    { if((yyvsp[(3) - (3)].val)){
									printf("\nModulus of %d %% %d = %d\n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),(yyvsp[(1) - (3)].val)%(yyvsp[(3) - (3)].val) ); (yyval.val) = (yyvsp[(1) - (3)].val) % (yyvsp[(3) - (3)].val);
								}
								else{
									(yyval.val) = 0;
									printf("\nMod by zero\n");
								}
		
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 249 "main.y"
    {int ans = pow((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));
								printf("\nPower of: %d^%d is: %d", (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val), ans); (yyval.val) = pow((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 252 "main.y"
    {printf("\nSmaller than: %d<%d\n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)<(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val)<(yyvsp[(3) - (3)].val);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 254 "main.y"
    {printf("\nGreater than: %d>%d\n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)>(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val)>(yyvsp[(3) - (3)].val);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 256 "main.y"
    {printf("\nEqual: %d==%d\n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)==(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val)==(yyvsp[(3) - (3)].val);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 258 "main.y"
    {printf("\nSmaller or Equal: %d<=%d\n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)<=(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val)<=(yyvsp[(3) - (3)].val);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 260 "main.y"
    {printf("\nGreater or Equal: %d<=%d\n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)>=(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val)>=(yyvsp[(3) - (3)].val);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 262 "main.y"
    {printf("\nNot Equal: %d<=%d\n",(yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val), (yyvsp[(1) - (3)].val)!=(yyvsp[(3) - (3)].val)); (yyval.val) = (yyvsp[(1) - (3)].val)!=(yyvsp[(3) - (3)].val);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 264 "main.y"
    {
		(yyval.val) = (yyvsp[(1) - (2)].val) + 1;
	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 267 "main.y"
    {
		(yyval.val) = (yyvsp[(1) - (2)].val) - 1;
	;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 270 "main.y"
    { printf("\nThe value of Sin(%d) is: %.2lf ", (yyvsp[(3) - (4)].val), sin((yyvsp[(3) - (4)].val)*3.1416/180)); (yyval.val) = sin((yyvsp[(3) - (4)].val)*3.1416/180);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 272 "main.y"
    { printf("\nThe value of Cos(%d) is: %.2lf", (yyvsp[(3) - (4)].val), cos((yyvsp[(3) - (4)].val)*3.1416/180)); (yyval.val) = cos((yyvsp[(3) - (4)].val)*3.1416/180);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 274 "main.y"
    { printf("\nThe value of Tan(%d) is: %.2lf", (yyvsp[(3) - (4)].val), tan((yyvsp[(3) - (4)].val)*3.1416/180)); (yyval.val) = cos((yyvsp[(3) - (4)].val)*3.1416/180);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 276 "main.y"
    {printf("Value of Log(%d) is %lf\n",(yyvsp[(3) - (4)].val),(log((yyvsp[(3) - (4)].val)*1.0)/log(10.0))); (yyval.val)=(log((yyvsp[(3) - (4)].val)*1.0)/log(10.0));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 278 "main.y"
    {printf("Value of ln(%d) is %lf\n",(yyvsp[(3) - (4)].val),(log((yyvsp[(3) - (4)].val)))); (yyval.val)=(log((yyvsp[(3) - (4)].val)));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 280 "main.y"
    {int ans = 1; 
							for(int i=1; i<=(yyvsp[(3) - (4)].val); i++)
							{
								ans*=i;
							}
							printf("\n\nFactorial of %d is %d\n",(yyvsp[(3) - (4)].val),ans);
							(yyval.val) = ans;
	;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 289 "main.y"
    {   printf("\n\nSquare root of the value = %lf\n",sqrt((yyvsp[(3) - (4)].val) * 1.0)); (yyval.val) = sqrt((yyvsp[(3) - (4)].val) * 1.0); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 291 "main.y"
    { (yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;



/* Line 1455 of yacc.c  */
#line 2063 "main.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 294 "main.y"


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

