
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
#line 2 "analyse_syntaxique.y"


    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>

    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);
    int yylex(void);

    extern int line;

    int class_id = 0;
    int level = 0;
    bool isParam = false;
    int method_call_index = -1;
    int expression_level = 0;

    //other

    int address = 0;
    int code_index = -1;
    char* method_name = "";
    char* class_name = "";
    char* math_op = "";
    char* com_op = "";
    int retour = 0;

    #define YYERROR_VERBOSE 0




/* Line 189 of yacc.c  */
#line 110 "analyse_syntaxique.tab.c"

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
     _PUBLIC = 258,
     _STATIC = 259,
     _CLASS = 260,
     _VOID = 261,
     _MAIN = 262,
     _EXTENDS = 263,
     _RETURN = 264,
     _SOP = 265,
     _LENGTH = 266,
     _THIS = 267,
     _NEW = 268,
     _IF = 269,
     _ELSE = 270,
     _WHILE = 271,
     _INTEGER = 272,
     _STRING = 273,
     _DATATYPE = 274,
     _OPENPARENT = 275,
     _CLOSEPARENT = 276,
     _OPENSQRBRACK = 277,
     _CLOSESQRBRACK = 278,
     _OPENBRAC = 279,
     _CLOSEBRAC = 280,
     _AND = 281,
     _OR = 282,
     _DOT = 283,
     _SEMICOLON = 284,
     _COMMA = 285,
     _DOUBLEQUOTE = 286,
     _SINGLEQUOTE = 287,
     _PLUS = 288,
     _MINUS = 289,
     _MULTIPLY = 290,
     _NOT = 291,
     _EQUAL = 292,
     _DIV = 293,
     _COMPOP = 294,
     _BOOLVALUE = 295,
     _INTEGERVALUE = 296,
     _IDENT = 297,
     _STRINGVALUE = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 195 "analyse_syntaxique.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNRULES -- Number of states.  */
#define YYNSTATES  423

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    11,    16,    21,    26,    31,    45,
      59,    73,    87,   101,   115,   129,   143,   157,   171,   185,
     199,   202,   203,   206,   209,   212,   215,   222,   230,   238,
     246,   247,   250,   253,   256,   259,   262,   265,   268,   271,
     274,   277,   281,   282,   286,   290,   294,   295,   298,   299,
     312,   326,   340,   354,   368,   382,   396,   410,   411,   416,
     421,   426,   436,   444,   452,   460,   468,   474,   480,   486,
     492,   499,   506,   513,   520,   527,   532,   538,   544,   550,
     559,   568,   577,   586,   595,   604,   605,   609,   613,   614,
     616,   618,   620,   622,   624,   626,   629,   630,   633,   636,
     639,   643,   647,   651,   656,   661,   666,   670,   674,   678,
     684,   690,   696,   698,   701,   703,   705,   707,   709,   715,
     721,   727,   733,   739,   744,   749,   754,   759,   764,   767,
     771,   775,   779
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    47,    50,    -1,    18,    22,    23,    42,
      -1,     1,    22,    23,    42,    -1,    18,     1,    23,    42,
      -1,    18,    22,     1,    42,    -1,    18,    22,    23,     1,
      -1,    49,    24,     3,     4,     6,     7,    20,    46,    21,
      24,    57,    25,    25,    -1,    49,     1,     3,     4,     6,
       7,    20,    46,    21,    24,    57,    25,    25,    -1,    49,
      24,     1,     4,     6,     7,    20,    46,    21,    24,    57,
      25,    25,    -1,    49,    24,     3,     1,     6,     7,    20,
      46,    21,    24,    57,    25,    25,    -1,    49,    24,     3,
       4,     1,     7,    20,    46,    21,    24,    57,    25,    25,
      -1,    49,    24,     3,     4,     6,     1,    20,    46,    21,
      24,    57,    25,    25,    -1,    49,    24,     3,     4,     6,
       7,     1,    46,    21,    24,    57,    25,    25,    -1,    49,
      24,     3,     4,     6,     7,    20,    46,     1,    24,    57,
      25,    25,    -1,    49,    24,     3,     4,     6,     7,    20,
      46,    21,     1,    57,    25,    25,    -1,    49,    24,     3,
       4,     6,     7,    20,    46,    21,    24,     1,    25,    25,
      -1,    49,    24,     3,     4,     6,     7,    20,    46,    21,
      24,    57,     1,    25,    -1,    49,    24,     3,     4,     6,
       7,    20,    46,    21,    24,    57,    25,     1,    -1,     8,
      42,    -1,    -1,     8,     1,    -1,     5,    42,    -1,     1,
      42,    -1,     5,     1,    -1,    49,    48,    24,    53,    56,
      25,    -1,     1,    48,    24,    53,    56,    25,    50,    -1,
      49,    48,     1,    53,    56,    25,    50,    -1,    49,    48,
      24,    53,    56,     1,    50,    -1,    -1,    19,    42,    -1,
      17,    42,    -1,     1,    42,    -1,    19,     1,    -1,    17,
       1,    -1,    19,    42,    -1,    17,    42,    -1,     1,    42,
      -1,    19,     1,    -1,    17,     1,    -1,    51,    29,    53,
      -1,    -1,    51,     1,    53,    -1,    30,    51,    54,    -1,
       1,    51,    54,    -1,    -1,    51,    54,    -1,    -1,     3,
      52,    20,    55,    21,    24,    53,    57,     9,    63,    29,
      25,    -1,     1,    52,    20,    55,    21,    24,    53,    57,
       9,    63,    29,    25,    56,    -1,     3,     1,     1,    55,
      21,    24,    53,    57,     9,    63,    29,    25,    56,    -1,
       3,    52,    20,    55,     1,    24,    53,    57,     9,    63,
      29,    25,    56,    -1,     3,    52,    20,    55,    21,     1,
      53,    57,     9,    63,    29,    25,    56,    -1,     3,    52,
      20,    55,    21,    24,    53,    57,     1,    63,    29,    25,
      56,    -1,     3,    52,    20,    55,    21,    24,    53,    57,
       9,    63,     1,    25,    56,    -1,     3,    52,    20,    55,
      21,    24,    53,    57,     9,    63,    29,     1,    56,    -1,
      -1,    24,    57,    57,    25,    -1,     1,    57,    57,    25,
      -1,    24,    57,    57,     1,    -1,    14,    20,    63,    21,
      57,    57,    15,    57,    57,    -1,     1,    20,    63,    21,
      57,    15,    57,    -1,    14,     1,    63,    21,    57,    15,
      57,    -1,    14,    20,    63,     1,    57,    15,    57,    -1,
      14,    20,    63,    21,    57,     1,    57,    -1,    16,    20,
      63,    21,    57,    -1,     1,    20,    63,    21,    57,    -1,
      16,     1,    63,    21,    57,    -1,    16,    20,    63,     1,
      57,    -1,    10,    20,    63,    21,    29,    57,    -1,     1,
      20,    63,    21,    29,    57,    -1,    10,     1,    63,    21,
      29,    57,    -1,    10,    20,    63,     1,    29,    57,    -1,
      10,    20,    63,    21,     1,    57,    -1,    42,    37,    63,
      29,    -1,     1,    37,    63,    29,    57,    -1,    42,     1,
      63,    29,    57,    -1,    42,    37,    63,     1,    57,    -1,
      42,    22,    63,    23,    37,    63,    29,    57,    -1,     1,
      22,    63,    23,    37,    63,    29,    57,    -1,    42,     1,
      63,    23,    37,    63,    29,    57,    -1,    42,    22,    63,
       1,    37,    63,    29,    57,    -1,    42,    22,    63,    23,
       1,    63,    29,    57,    -1,    42,    22,    63,    23,    37,
      63,     1,    57,    -1,    -1,    30,    63,    58,    -1,     1,
      63,    58,    -1,    -1,    26,    -1,    39,    -1,    33,    -1,
      34,    -1,    35,    -1,    38,    -1,    63,    58,    -1,    -1,
      28,    42,    -1,     1,    42,    -1,    28,     1,    -1,    63,
      60,    63,    -1,    63,    59,    63,    -1,    63,     1,    63,
      -1,    63,    22,    63,    23,    -1,    63,     1,    63,    23,
      -1,    63,    22,    63,     1,    -1,    63,    28,    11,    -1,
      63,     1,    11,    -1,    63,    28,     1,    -1,    63,    62,
      20,    61,    21,    -1,    63,    62,     1,    61,    21,    -1,
      63,    62,    20,    61,     1,    -1,    41,    -1,    34,    41,
      -1,    40,    -1,    43,    -1,    42,    -1,    12,    -1,    13,
      17,    22,    63,    25,    -1,     1,    17,    22,    63,    25,
      -1,    13,     1,    22,    63,    25,    -1,    13,    17,     1,
      63,    25,    -1,    13,    17,    22,    63,     1,    -1,    13,
      42,    20,    21,    -1,     1,    42,    20,    21,    -1,    13,
       1,    20,    21,    -1,    13,    42,     1,    21,    -1,    13,
      42,    20,     1,    -1,    36,    63,    -1,    20,    63,    21,
      -1,     1,    63,    21,    -1,    20,    63,     1,    -1,     1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    85,    85,    88,    89,    90,    91,    92,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     109,   110,   112,   115,   116,   117,   120,   121,   122,   123,
     124,   127,   128,   129,   131,   132,   135,   136,   137,   139,
     140,   143,   144,   145,   148,   149,   150,   153,   154,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   198,   199,   200,   203,
     204,   207,   208,   209,   210,   213,   214,   217,   218,   219,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   252,
     253,   254,   255
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_PUBLIC", "_STATIC", "_CLASS", "_VOID",
  "_MAIN", "_EXTENDS", "_RETURN", "_SOP", "_LENGTH", "_THIS", "_NEW",
  "_IF", "_ELSE", "_WHILE", "_INTEGER", "_STRING", "_DATATYPE",
  "_OPENPARENT", "_CLOSEPARENT", "_OPENSQRBRACK", "_CLOSESQRBRACK",
  "_OPENBRAC", "_CLOSEBRAC", "_AND", "_OR", "_DOT", "_SEMICOLON", "_COMMA",
  "_DOUBLEQUOTE", "_SINGLEQUOTE", "_PLUS", "_MINUS", "_MULTIPLY", "_NOT",
  "_EQUAL", "_DIV", "_COMPOP", "_BOOLVALUE", "_INTEGERVALUE", "_IDENT",
  "_STRINGVALUE", "$accept", "program", "MainMethodParam", "MainClass",
  "SectionE_I", "ClassScope", "ClassDeclaration", "Type", "MethodType",
  "VarDeclaration", "SectionC_T", "SectionT_SCT", "MethodDeclaration",
  "Statement", "SectionC_E", "LogicOperator", "MathOperator",
  "SectionE_SCE", "UseFunction", "Expression", 0
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
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    46,    46,    46,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      48,    48,    48,    49,    49,    49,    50,    50,    50,    50,
      50,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      52,    53,    53,    53,    54,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    58,    58,    59,
      59,    60,    60,    60,    60,    61,    61,    62,    62,    62,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     4,     4,     4,     4,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
       2,     0,     2,     2,     2,     2,     6,     7,     7,     7,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     0,     3,     3,     3,     0,     2,     0,    12,
      13,    13,    13,    13,    13,    13,    13,     0,     4,     4,
       4,     9,     7,     7,     7,     7,     5,     5,     5,     5,
       6,     6,     6,     6,     6,     4,     5,     5,     5,     8,
       8,     8,     8,     8,     8,     0,     3,     3,     0,     1,
       1,     1,     1,     1,     1,     2,     0,     2,     2,     2,
       3,     3,     3,     4,     4,     4,     3,     3,     3,     5,
       5,     5,     1,     2,     1,     1,     1,     1,     5,     5,
       5,     5,     5,     4,     4,     4,     4,     4,     2,     3,
       3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    24,    25,    23,     1,
      21,    21,     2,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    35,    32,    34,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,    38,
      40,    37,    39,    36,     0,     0,     0,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,     6,     7,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,   114,   112,   116,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     8,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,    89,     0,    91,    92,    93,    94,    90,
       0,     0,     0,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    58,     0,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     0,     0,     0,     0,     0,     0,     0,   129,
     107,   116,     0,     0,    67,     0,   108,   106,    97,     0,
       0,     0,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    66,     0,    77,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,   126,   127,   123,   104,
      71,     0,     0,   103,     0,     0,     0,     0,    72,    73,
      74,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
     119,   120,   121,     0,   118,    62,   110,     0,     0,    95,
     111,   109,     0,    63,     0,    64,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    52,    53,    54,    55,    56,
       0,     0,    80,     0,     0,    81,    82,    83,    84,    79,
      87,    86,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    92,     4,    16,    11,    12,    33,    65,    34,
     116,   100,    51,   172,   389,   260,   261,   354,   262,   302
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -300
static const yytype_int16 yypact[] =
{
     197,   114,    28,   157,   196,    16,  -300,  -300,  -300,  -300,
      23,   179,  -300,   221,   332,    67,   201,    90,   230,   242,
     304,  -300,  -300,   115,   115,   115,   241,   294,   312,   291,
     310,    68,    81,    86,    10,    10,    10,   251,   329,   350,
     353,    18,  -300,  -300,  -300,  -300,  -300,   613,   613,    17,
     331,   339,   340,    13,   358,   363,   364,   365,   366,   169,
    -300,  -300,   345,    83,    84,   368,    88,   373,   196,   196,
     196,  -300,   141,   141,   141,   141,   141,   141,   141,  -300,
    -300,  -300,  -300,  -300,   330,   330,   330,  -300,  -300,  -300,
     374,   187,   379,   380,   392,   393,   394,   398,    92,    87,
     399,   400,   214,   401,   406,    14,   408,   412,   413,   425,
     434,   435,   436,   152,   461,   461,  -300,   439,   440,   443,
     183,   381,   426,   427,    89,   247,   247,   247,   247,   247,
     247,   247,   247,   698,    87,    87,   679,   679,   679,   679,
     679,  -300,  -300,  -300,  -300,  -300,   625,   239,   240,   250,
     247,    82,   397,   445,   446,   447,   448,   449,   454,   467,
     632,    96,  -300,  -300,   727,   727,   727,   727,   727,   550,
     550,   550,   247,   550,   550,   550,   550,   550,   550,   247,
     550,   550,   550,   468,   469,   471,   472,   473,   476,   478,
     479,   480,   481,   153,   491,   498,   499,   511,    21,   281,
    -300,    11,   550,   482,   550,  -300,  -300,  -300,  -300,   959,
     981,   995,   485,  1010,  1025,  1040,  1055,  1070,  1085,   166,
     917,  1099,  1113,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,   550,   550,   550,   550,   550,
     550,   500,   504,  1128,   357,   204,   261,  1143,  -300,   770,
     518,   662,   550,  -300,    15,  -300,  -300,  -300,  -300,  -300,
     550,   550,   263,   488,   691,  -300,   503,   170,    91,   743,
     475,   743,   691,   441,   691,  -300,  -300,   490,   691,   132,
      85,   441,  -300,  1157,  1171,  1186,  1200,  1215,  1229,   550,
     507,  -300,   512,   550,   550,   550,   513,   229,   333,  -300,
    -300,   267,   789,   691,   524,  1251,   279,  -300,  -300,   812,
     831,   535,   535,   550,  -300,   691,   691,   691,   691,   525,
      38,   854,   530,   746,  -300,  -300,  -300,   550,  -300,   550,
     550,   550,  -300,   521,   528,   532,   539,   540,   501,   178,
    1269,  -300,  -300,  1287,  1305,  1323,  -300,  -300,  -300,  -300,
    -300,   691,   369,  -300,   529,   940,   232,  1341,  -300,  -300,
    -300,  -300,   691,   550,   877,   691,   207,   534,  1359,  1377,
    1395,  1413,    10,    10,    10,    10,    10,    10,    10,  -300,
    -300,  -300,  -300,   405,  -300,  -300,  -300,   518,   550,  -300,
    -300,  -300,   691,  -300,  1435,  -300,   710,   691,   691,   691,
     691,   441,   691,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
     899,   940,  -300,   573,   691,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,   252,  -300,   555,   567,   216,   181,   522,    -1,
    -114,   -53,   -35,  -123,  -299,  -300,  -300,   256,  -300,   -75
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -133
static const yytype_int16 yytable[] =
{
      52,    53,   152,   153,   154,   155,   156,   157,   158,   159,
     161,    49,   244,    50,    70,   123,   306,    13,    62,    58,
     162,   163,   239,    35,    36,    59,   307,   179,   245,     7,
     240,    15,   101,   102,    63,   -57,    64,   124,    71,   320,
      14,   194,   195,   196,   197,   198,    60,    61,   147,   212,
     200,   201,   148,   246,   149,   241,   219,   308,   363,  -132,
     170,  -132,   150,   -85,  -132,     6,  -132,  -132,    21,    43,
       8,  -132,   203,  -132,   204,   171,  -132,  -132,   205,   206,
     364,   208,    45,   180,    80,    82,   330,    47,   114,    85,
     144,    24,   317,   112,   209,   210,   211,   192,   213,   214,
     215,   216,   217,   218,   181,   220,   221,   222,   -46,    22,
      44,   420,   421,   113,    25,    48,    30,   115,   -42,   182,
     318,   193,   331,    46,   243,    81,    83,   247,   304,   249,
      79,   145,    31,   199,    32,   164,   165,   166,   167,   168,
     -42,   314,    90,   300,   200,   201,   319,   322,   323,   324,
     325,   326,   202,   132,   233,   328,     6,     9,   332,    91,
     283,   284,   285,   286,   287,   288,   203,   275,   204,   329,
      77,   199,   205,   206,   301,   208,   133,   305,   234,   378,
     350,   300,   200,   201,   139,   309,   310,    15,   104,    78,
     202,   276,   358,   359,   360,   361,   -30,    10,     1,   316,
     367,     2,     2,   379,   203,   294,   204,   140,   146,   105,
     205,   206,   301,   208,   340,   119,   -85,   147,   343,   344,
     345,   148,   -85,   149,    18,    23,   295,   169,   385,   170,
     347,   150,   -85,   390,    26,   120,   355,   355,   357,   393,
     173,   175,   395,   396,   171,   243,    27,    37,   146,   151,
     348,   177,   368,   391,   369,   370,   371,   147,    54,   174,
     176,   148,   296,   149,   311,    99,    99,    99,   -98,   412,
     178,   150,   -85,   212,   414,   415,   416,   417,   418,   419,
     -99,   297,   199,   312,    87,    88,    89,   -98,   394,   151,
     304,   422,    40,   200,   201,   134,   135,    41,   241,   -99,
      38,   202,  -132,  -132,  -132,    28,  -132,  -132,    29,  -132,
    -132,  -132,   410,   411,  -132,   203,  -132,   204,    39,  -132,
    -132,   205,   206,   242,   208,    93,    94,    95,    96,    97,
      98,    30,    66,    19,   199,    20,    55,   403,   404,   405,
     406,   407,   408,   409,   300,   200,   201,    31,    63,    32,
      64,   -48,    42,   202,  -131,  -131,  -131,    56,  -131,  -131,
      57,  -131,  -131,  -131,    68,    69,  -131,   203,  -131,   204,
     199,  -131,  -131,   205,   206,   301,   208,   292,    72,   293,
     300,   200,   201,    73,    74,    75,    76,    79,    84,   202,
    -105,  -105,  -105,    86,  -105,  -105,   103,  -105,  -105,  -105,
     106,   107,  -105,   203,  -105,   204,   199,  -105,  -105,   205,
     206,   301,   208,   108,   109,   110,   300,   200,   201,   111,
     117,   118,   183,   141,   121,   202,  -122,  -122,  -122,   122,
    -122,  -122,   125,  -122,  -122,  -122,   126,   127,  -122,   203,
    -122,   204,   320,  -122,  -122,   205,   206,   301,   208,   128,
     -85,   147,   300,   200,   201,   148,   -85,   149,   129,   130,
     131,   202,    30,   136,   137,   150,   -85,   138,   142,   143,
     184,   185,   186,   187,   188,   203,   320,   204,    31,   189,
      32,   205,   206,   321,   208,   147,   300,   200,   201,   148,
     -85,   149,   190,   223,   224,   202,   225,   226,   227,   150,
     235,   228,   199,   229,   230,   231,   232,   236,   237,   203,
     265,   204,   300,   200,   201,   205,   206,   321,   208,   199,
     238,   202,   289,   248,   290,   313,   377,   327,   341,   300,
     200,   201,   315,   342,   346,   203,   199,   204,   202,   351,
     362,   205,   206,   301,   208,   365,   372,   200,   201,   397,
     386,   199,   203,   373,   204,   202,   -96,   374,   205,   206,
     301,   208,   200,   201,   375,   376,    17,     5,   356,   203,
     202,   204,    67,     0,   146,   205,   206,   207,   208,     0,
       0,     0,   -85,   147,   203,     0,   204,   148,   -85,   149,
     205,   206,   207,   208,  -129,  -129,     0,   150,   -85,  -129,
       0,  -129,   303,     0,     0,     0,  -129,  -129,  -129,     0,
       0,  -129,  -129,     0,    30,   151,   -42,     0,     0,     0,
       0,     0,   -42,   -42,     0,     0,   146,   -42,     0,   -42,
      31,     0,    32,   146,     0,   147,     0,   -42,   -42,   148,
       0,   149,   147,     0,     0,   169,   148,   170,   149,   150,
     -85,     0,   169,     0,   170,   -42,   150,   191,     0,     0,
       0,     0,   171,   146,     0,     0,     0,   151,     0,   171,
       0,   -85,   147,     0,   151,     0,   148,   -85,   149,     0,
      30,     0,     0,     0,     0,     0,   150,   -85,   -42,   -42,
       0,   303,   146,   -42,     0,   -42,    31,     0,    32,   160,
     -85,   147,     0,   -42,   151,   148,   -85,   149,   147,     0,
       0,   146,   148,     0,   149,   150,   -85,     0,     0,   -65,
     147,   -42,   150,   -85,   148,   -65,   149,     0,   146,     0,
       0,     0,     0,   151,   150,   -65,   -85,   147,     0,     0,
     151,   148,     0,   149,   146,     0,     0,   366,     0,     0,
       0,   150,   151,   147,     0,     0,   147,   148,   -85,   149,
     148,   -85,   149,     0,     0,     0,     0,   150,     0,   151,
     150,   250,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   151,     0,     0,   151,     0,
     250,  -128,   252,  -128,     0,  -128,   253,     0,   254,  -128,
    -128,     0,     0,   255,   256,   257,     0,     0,   258,   259,
    -102,   252,   349,   250,  -102,   253,     0,   254,  -102,  -102,
       0,     0,   255,   256,   257,     0,     0,   258,   259,     0,
       0,     0,   250,  -101,   252,  -101,     0,  -101,   253,     0,
     254,  -101,  -101,     0,     0,   255,   256,   257,     0,     0,
     258,   259,  -100,   252,  -100,   180,  -100,   253,     0,   254,
    -100,  -100,     0,     0,   255,   256,   257,     0,     0,   258,
     259,     0,     0,     0,   -98,  -116,   181,  -116,   180,     0,
    -116,     0,  -116,  -116,     0,     0,     0,  -116,  -116,  -116,
       0,   182,  -116,  -116,     0,     0,     0,   290,  -116,   181,
     387,     0,     0,  -116,     0,  -116,     0,     0,     0,     0,
    -116,  -116,  -116,     0,   182,  -116,  -116,     0,   250,     0,
     -88,   252,   349,     0,     0,   253,     0,   254,     0,   388,
       0,     0,   255,   256,   257,     0,     0,   258,   259,   252,
     277,   387,     0,   253,     0,   254,   278,     0,     0,     0,
     255,   256,   257,     0,     0,   258,   259,     0,     0,     0,
     250,   -88,   252,     0,     0,     0,   253,     0,   254,     0,
     388,     0,     0,   255,   256,   257,     0,     0,   258,   259,
     251,   252,   250,     0,     0,   253,     0,   254,     0,     0,
       0,     0,   255,   256,   257,     0,   250,   258,   259,     0,
       0,     0,     0,   252,   263,     0,     0,   253,     0,   254,
       0,   250,     0,     0,   255,   256,   257,   252,     0,   258,
     259,   253,     0,   254,   264,     0,   267,     0,   255,   256,
     257,   266,   252,   258,   259,     0,   253,     0,   254,     0,
       0,   250,     0,   255,   256,   257,   268,   252,   258,   259,
       0,   253,     0,   254,     0,     0,   270,     0,   255,   256,
     257,   269,   252,   258,   259,     0,   253,     0,   254,     0,
       0,   250,     0,   255,   256,   257,   271,   252,   258,   259,
       0,   253,     0,   254,     0,     0,   273,     0,   255,   256,
     257,   272,   252,   258,   259,     0,   253,     0,   254,     0,
     279,     0,     0,   255,   256,   257,   274,   252,   258,   259,
       0,   253,     0,   254,   281,     0,     0,     0,   255,   256,
     257,   252,   280,   258,   259,   253,     0,   254,     0,   250,
       0,     0,   255,   256,   257,   252,     0,   258,   259,   253,
       0,   254,   282,     0,   298,     0,   255,   256,   257,   291,
     252,   258,   259,     0,   253,     0,   254,     0,   250,     0,
       0,   255,   256,   257,   299,   252,   258,   259,     0,   253,
       0,   254,   250,     0,     0,     0,   255,   256,   257,   252,
       0,   258,   259,   253,     0,   254,   333,   250,     0,     0,
     255,   256,   257,   252,     0,   258,   259,   253,     0,   254,
     334,   250,     0,     0,   255,   256,   257,     0,   252,   258,
     259,     0,   253,     0,   254,   335,   250,     0,     0,   255,
     256,   257,   252,     0,   258,   259,   253,     0,   254,   336,
     338,     0,     0,   255,   256,   257,     0,   252,   258,   259,
       0,   253,     0,   254,   337,     0,     0,     0,   255,   256,
     257,   252,   352,   258,   259,   253,     0,   254,   339,     0,
       0,     0,   255,   256,   257,     0,     0,   258,   259,     0,
     250,     0,     0,   252,   353,     0,     0,   253,     0,   254,
       0,     0,     0,     0,   255,   256,   257,     0,   250,   258,
     259,   252,     0,     0,   380,   253,     0,   254,     0,     0,
       0,     0,   255,   256,   257,     0,   250,   258,   259,   252,
       0,     0,   381,   253,     0,   254,     0,     0,     0,     0,
     255,   256,   257,     0,   383,   258,   259,   252,     0,     0,
     382,   253,     0,   254,     0,     0,     0,     0,   255,   256,
     257,     0,   250,   258,   259,   252,     0,     0,   384,   253,
       0,   254,     0,     0,     0,     0,   255,   256,   257,     0,
     250,   258,   259,   252,     0,     0,     0,   253,     0,   254,
     392,     0,     0,     0,   255,   256,   257,     0,   250,   258,
     259,   252,     0,     0,     0,   253,     0,   254,   398,     0,
       0,     0,   255,   256,   257,     0,   250,   258,   259,   252,
       0,     0,     0,   253,     0,   254,   399,     0,     0,     0,
     255,   256,   257,     0,   401,   258,   259,   252,     0,     0,
       0,   253,     0,   254,   400,     0,     0,     0,   255,   256,
     257,     0,     0,   258,   259,   252,   298,     0,     0,   253,
       0,   254,   402,     0,     0,     0,   255,   256,   257,     0,
       0,   258,   259,     0,     0,     0,   413,   252,     0,     0,
       0,   253,     0,   254,     0,     0,     0,     0,   255,   256,
     257,     0,     0,   258,   259
};

static const yytype_int16 yycheck[] =
{
      35,    36,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     1,     1,     3,     1,     1,     1,     1,     1,     1,
     134,   135,     1,    24,    25,     7,    11,   150,    17,     1,
       9,     8,    85,    86,    17,    25,    19,    23,    25,     1,
      24,   164,   165,   166,   167,   168,    47,    48,    10,   172,
      12,    13,    14,    42,    16,    17,   179,    42,    20,    21,
      22,    23,    24,    25,    26,    42,    28,    29,     1,     1,
      42,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,   169,   170,   171,     1,   173,   174,
     175,   176,   177,   178,    22,   180,   181,   182,    21,    42,
      42,   410,   411,    21,    24,    29,     1,    30,     3,    37,
      29,    25,    37,    42,   199,    42,    42,   202,   251,   204,
      42,    42,    17,     1,    19,   136,   137,   138,   139,   140,
      25,   264,     1,    11,    12,    13,   269,   270,   271,   272,
     273,   274,    20,     1,     1,   278,    42,     0,   281,    18,
     235,   236,   237,   238,   239,   240,    34,     1,    36,    37,
       1,     1,    40,    41,    42,    43,    24,   252,    25,     1,
     303,    11,    12,    13,     1,   260,   261,     8,     1,    20,
      20,    25,   315,   316,   317,   318,     0,     1,     1,    29,
     323,     5,     5,    25,    34,     1,    36,    24,     1,    22,
      40,    41,    42,    43,   289,     1,     9,    10,   293,   294,
     295,    14,    15,    16,     3,    24,    22,    20,   351,    22,
       1,    24,    25,     1,     4,    21,   311,   312,   313,   362,
       1,     1,   365,   366,    37,   320,     4,     6,     1,    42,
      21,     1,   327,    21,   329,   330,   331,    10,     7,    20,
      20,    14,     1,    16,     1,    84,    85,    86,     1,   392,
      20,    24,    25,   396,   397,   398,   399,   400,   401,   402,
       1,    20,     1,    20,    68,    69,    70,    20,   363,    42,
     413,   414,     1,    12,    13,   114,   115,     6,    17,    20,
       6,    20,    21,    22,    23,     1,    25,    26,     4,    28,
      29,    30,   387,   388,    33,    34,    35,    36,     6,    38,
      39,    40,    41,    42,    43,    73,    74,    75,    76,    77,
      78,     1,     1,     1,     1,     3,     7,   372,   373,   374,
     375,   376,   377,   378,    11,    12,    13,    17,    17,    19,
      19,    21,    42,    20,    21,    22,    23,     7,    25,    26,
       7,    28,    29,    30,    25,    25,    33,    34,    35,    36,
       1,    38,    39,    40,    41,    42,    43,    20,    20,    22,
      11,    12,    13,    20,    20,    20,    20,    42,    20,    20,
      21,    22,    23,    20,    25,    26,    22,    28,    29,    30,
      21,    21,    33,    34,    35,    36,     1,    38,    39,    40,
      41,    42,    43,    21,    21,    21,    11,    12,    13,    21,
      21,    21,    25,    42,    23,    20,    21,    22,    23,    23,
      25,    26,    24,    28,    29,    30,    24,    24,    33,    34,
      35,    36,     1,    38,    39,    40,    41,    42,    43,    24,
       9,    10,    11,    12,    13,    14,    15,    16,    24,    24,
      24,    20,     1,    24,    24,    24,    25,    24,    42,    42,
      25,    25,    25,    25,    25,    34,     1,    36,    17,    25,
      19,    40,    41,    42,    43,    10,    11,    12,    13,    14,
      15,    16,    25,    25,    25,    20,    25,    25,    25,    24,
       9,    25,     1,    25,    25,    25,    25,     9,     9,    34,
      25,    36,    11,    12,    13,    40,    41,    42,    43,     1,
       9,    20,    22,    41,    20,    37,    25,    37,    21,    11,
      12,    13,    29,    21,    21,    34,     1,    36,    20,    15,
      15,    40,    41,    42,    43,    15,    25,    12,    13,    15,
      21,     1,    34,    25,    36,    20,    21,    25,    40,    41,
      42,    43,    12,    13,    25,    25,    11,     0,   312,    34,
      20,    36,    50,    -1,     1,    40,    41,    42,    43,    -1,
      -1,    -1,     9,    10,    34,    -1,    36,    14,    15,    16,
      40,    41,    42,    43,    21,    22,    -1,    24,    25,    26,
      -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    38,    39,    -1,     1,    42,     3,    -1,    -1,    -1,
      -1,    -1,     9,    10,    -1,    -1,     1,    14,    -1,    16,
      17,    -1,    19,     1,    -1,    10,    -1,    24,    25,    14,
      -1,    16,    10,    -1,    -1,    20,    14,    22,    16,    24,
      25,    -1,    20,    -1,    22,    42,    24,    25,    -1,    -1,
      -1,    -1,    37,     1,    -1,    -1,    -1,    42,    -1,    37,
      -1,     9,    10,    -1,    42,    -1,    14,    15,    16,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    24,    25,     9,    10,
      -1,    29,     1,    14,    -1,    16,    17,    -1,    19,     1,
       9,    10,    -1,    24,    42,    14,    15,    16,    10,    -1,
      -1,     1,    14,    -1,    16,    24,    25,    -1,    -1,     9,
      10,    42,    24,    25,    14,    15,    16,    -1,     1,    -1,
      -1,    -1,    -1,    42,    24,    25,     9,    10,    -1,    -1,
      42,    14,    -1,    16,     1,    -1,    -1,     1,    -1,    -1,
      -1,    24,    42,    10,    -1,    -1,    10,    14,    15,    16,
      14,    15,    16,    -1,    -1,    -1,    -1,    24,    -1,    42,
      24,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    42,    -1,
       1,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      30,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,
      21,    22,    23,     1,    25,    26,    -1,    28,    29,    30,
      -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,    -1,
      -1,    -1,     1,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    30,    -1,    -1,    33,    34,    35,    -1,    -1,
      38,    39,    21,    22,    23,     1,    25,    26,    -1,    28,
      29,    30,    -1,    -1,    33,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    20,    21,    22,    23,     1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,    -1,    -1,    20,    21,    22,
       1,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,     1,    -1,
      21,    22,    23,    -1,    -1,    26,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,    22,
      23,     1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
       1,    21,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,
      21,    22,     1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,     1,    38,    39,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    28,
      -1,     1,    -1,    -1,    33,    34,    35,    22,    -1,    38,
      39,    26,    -1,    28,    29,    -1,     1,    -1,    33,    34,
      35,    21,    22,    38,    39,    -1,    26,    -1,    28,    -1,
      -1,     1,    -1,    33,    34,    35,    21,    22,    38,    39,
      -1,    26,    -1,    28,    -1,    -1,     1,    -1,    33,    34,
      35,    21,    22,    38,    39,    -1,    26,    -1,    28,    -1,
      -1,     1,    -1,    33,    34,    35,    21,    22,    38,    39,
      -1,    26,    -1,    28,    -1,    -1,     1,    -1,    33,    34,
      35,    21,    22,    38,    39,    -1,    26,    -1,    28,    -1,
       1,    -1,    -1,    33,    34,    35,    21,    22,    38,    39,
      -1,    26,    -1,    28,     1,    -1,    -1,    -1,    33,    34,
      35,    22,    23,    38,    39,    26,    -1,    28,    -1,     1,
      -1,    -1,    33,    34,    35,    22,    -1,    38,    39,    26,
      -1,    28,    29,    -1,     1,    -1,    33,    34,    35,    21,
      22,    38,    39,    -1,    26,    -1,    28,    -1,     1,    -1,
      -1,    33,    34,    35,    21,    22,    38,    39,    -1,    26,
      -1,    28,     1,    -1,    -1,    -1,    33,    34,    35,    22,
      -1,    38,    39,    26,    -1,    28,    29,     1,    -1,    -1,
      33,    34,    35,    22,    -1,    38,    39,    26,    -1,    28,
      29,     1,    -1,    -1,    33,    34,    35,    -1,    22,    38,
      39,    -1,    26,    -1,    28,    29,     1,    -1,    -1,    33,
      34,    35,    22,    -1,    38,    39,    26,    -1,    28,    29,
       1,    -1,    -1,    33,    34,    35,    -1,    22,    38,    39,
      -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,
      35,    22,     1,    38,    39,    26,    -1,    28,    29,    -1,
      -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,    -1,
       1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,     1,    38,
      39,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,     1,    38,    39,    22,
      -1,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,     1,    38,    39,    22,    -1,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,     1,    38,    39,    22,    -1,    -1,    25,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
       1,    38,    39,    22,    -1,    -1,    -1,    26,    -1,    28,
      29,    -1,    -1,    -1,    33,    34,    35,    -1,     1,    38,
      39,    22,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,
      -1,    -1,    33,    34,    35,    -1,     1,    38,    39,    22,
      -1,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,
      33,    34,    35,    -1,     1,    38,    39,    22,    -1,    -1,
      -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,
      35,    -1,    -1,    38,    39,    22,     1,    -1,    -1,    26,
      -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    38,    39,    -1,    -1,    -1,    21,    22,    -1,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    -1,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    45,    47,    49,    42,     1,    42,     0,
       1,    49,    50,     1,    24,     8,    48,    48,     3,     1,
       3,     1,    42,    24,     1,    24,     4,     4,     1,     4,
       1,    17,    19,    51,    53,    53,    53,     6,     6,     6,
       1,     6,    42,     1,    42,     1,    42,     1,    29,     1,
       3,    56,    56,    56,     7,     7,     7,     7,     1,     7,
      53,    53,     1,    17,    19,    52,     1,    52,    25,    25,
       1,    25,    20,    20,    20,    20,    20,     1,    20,    42,
       1,    42,     1,    42,    20,     1,    20,    50,    50,    50,
       1,    18,    46,    46,    46,    46,    46,    46,    46,    51,
      55,    55,    55,    22,     1,    22,    21,    21,    21,    21,
      21,    21,     1,    21,     1,    30,    54,    21,    21,     1,
      21,    23,    23,     1,    23,    24,    24,    24,    24,    24,
      24,    24,     1,    24,    51,    51,    24,    24,    24,     1,
      24,    42,    42,    42,     1,    42,     1,    10,    14,    16,
      24,    42,    57,    57,    57,    57,    57,    57,    57,    57,
       1,    57,    54,    54,    53,    53,    53,    53,    53,    20,
      22,    37,    57,     1,    20,     1,    20,     1,    20,    57,
       1,    22,    37,    25,    25,    25,    25,    25,    25,    25,
      25,    25,     1,    25,    57,    57,    57,    57,    57,     1,
      12,    13,    20,    34,    36,    40,    41,    42,    43,    63,
      63,    63,    57,    63,    63,    63,    63,    63,    63,    57,
      63,    63,    63,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,     1,    25,     9,     9,     9,     9,     1,
       9,    17,    42,    63,     1,    17,    42,    63,    41,    63,
       1,    21,    22,    26,    28,    33,    34,    35,    38,    39,
      59,    60,    62,    23,    29,    25,    21,     1,    21,    21,
       1,    21,    21,     1,    21,     1,    25,    23,    29,     1,
      23,     1,    29,    63,    63,    63,    63,    63,    63,    22,
      20,    21,    20,    22,     1,    22,     1,    20,     1,    21,
      11,    42,    63,    29,    57,    63,     1,    11,    42,    63,
      63,     1,    20,    37,    57,    29,    29,     1,    29,    57,
       1,    42,    57,    57,    57,    57,    57,    37,    57,    37,
       1,    37,    57,    29,    29,    29,    29,    29,     1,    29,
      63,    21,    21,    63,    63,    63,    21,     1,    21,    23,
      57,    15,     1,    23,    61,    63,    61,    63,    57,    57,
      57,    57,    15,    20,    42,    15,     1,    57,    63,    63,
      63,    63,    25,    25,    25,    25,    25,    25,     1,    25,
      25,    25,    25,     1,    25,    57,    21,     1,    30,    58,
       1,    21,    29,    57,    63,    57,    57,    15,    29,    29,
      29,     1,    29,    56,    56,    56,    56,    56,    56,    56,
      63,    63,    57,    21,    57,    57,    57,    57,    57,    57,
      58,    58,    57
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
        case 4:

/* Line 1455 of yacc.c  */
#line 89 "analyse_syntaxique.y"
    { yyerror (" String is needed  "); YYABORT;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 90 "analyse_syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 91 "analyse_syntaxique.y"
    { yyerror (" CLose brackets is needed  "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 92 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 96 "analyse_syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 97 "analyse_syntaxique.y"
    { yyerror (" Public is needed  "); YYABORT;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 98 "analyse_syntaxique.y"
    { yyerror (" Static is needed  "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 99 "analyse_syntaxique.y"
    { yyerror (" Void is needed  "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 100 "analyse_syntaxique.y"
    { yyerror (" Main is needed  "); YYABORT;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 101 "analyse_syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 102 "analyse_syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 103 "analyse_syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 104 "analyse_syntaxique.y"
    { yyerror (" Statement is needed  "); YYABORT;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 105 "analyse_syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 106 "analyse_syntaxique.y"
    { yyerror (" close brackets is needed  "); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 112 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 116 "analyse_syntaxique.y"
    { yyerror (" Class is needed  "); YYABORT;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 117 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 122 "analyse_syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 123 "analyse_syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 129 "analyse_syntaxique.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 131 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 132 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 137 "analyse_syntaxique.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 139 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 140 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 145 "analyse_syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 149 "analyse_syntaxique.y"
    { yyerror (" Comma is needed  "); YYABORT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 158 "analyse_syntaxique.y"
    { yyerror (" Public is needed  "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 159 "analyse_syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 160 "analyse_syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 161 "analyse_syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 162 "analyse_syntaxique.y"
    { yyerror (" Return is needed  "); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 163 "analyse_syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 164 "analyse_syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 169 "analyse_syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 170 "analyse_syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 172 "analyse_syntaxique.y"
    { yyerror (" If brackets is needed  "); YYABORT;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 173 "analyse_syntaxique.y"
    { yyerror (" Open parentheses brackets is needed  "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 174 "analyse_syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 175 "analyse_syntaxique.y"
    { yyerror (" Else is needed  "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 177 "analyse_syntaxique.y"
    { yyerror (" While is needed  "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 178 "analyse_syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 179 "analyse_syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 181 "analyse_syntaxique.y"
    { yyerror (" System.out.println is needed  "); YYABORT;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 182 "analyse_syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 183 "analyse_syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 184 "analyse_syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 186 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 187 "analyse_syntaxique.y"
    { yyerror (" Equal operator is needed  "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 188 "analyse_syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 190 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 191 "analyse_syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 192 "analyse_syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 193 "analyse_syntaxique.y"
    { yyerror (" Equal operator is needed  "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 194 "analyse_syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 199 "analyse_syntaxique.y"
    { yyerror (" Comma is needed  "); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 203 "analyse_syntaxique.y"
    {com_op = "&&";;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 204 "analyse_syntaxique.y"
    {com_op = (yyvsp[(1) - (1)]);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 207 "analyse_syntaxique.y"
    { math_op = "+";;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 208 "analyse_syntaxique.y"
    { math_op = "-";;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 209 "analyse_syntaxique.y"
    { math_op = "*";;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 210 "analyse_syntaxique.y"
    { math_op = "/";;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 218 "analyse_syntaxique.y"
    { yyerror (" Dot is needed  "); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 219 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 224 "analyse_syntaxique.y"
    { yyerror (" Comparison operator is needed  "); YYABORT;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 226 "analyse_syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 227 "analyse_syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 229 "analyse_syntaxique.y"
    { yyerror (" Dot is needed  "); YYABORT;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 230 "analyse_syntaxique.y"
    { yyerror (" Length is needed  "); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 232 "analyse_syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 233 "analyse_syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 241 "analyse_syntaxique.y"
    { yyerror (" New is needed  "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 242 "analyse_syntaxique.y"
    { yyerror (" Integer type is needed  "); YYABORT;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 243 "analyse_syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 244 "analyse_syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 246 "analyse_syntaxique.y"
    { yyerror (" New is needed  "); YYABORT;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 247 "analyse_syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 248 "analyse_syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 249 "analyse_syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 253 "analyse_syntaxique.y"
    { yyerror (" open parentheses is needed  "); YYABORT;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 254 "analyse_syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 255 "analyse_syntaxique.y"
    { yyerror (" Integer Value or boolean value or identifier or this   is needed  "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2523 "analyse_syntaxique.tab.c"
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
#line 258 "analyse_syntaxique.y"


    int yyerror(char const *msg) {

        fprintf(stderr, "%s %d\n", msg,line);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }
