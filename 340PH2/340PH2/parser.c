/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include "Table.h"

int yyerror (char* yaccProvidedMessage);
int yylex(void);
extern int yylineno;
	extern char* yytext;
	extern FILE* yyin;
	extern FILE* yyout;
int scope=0;

#line 78 "parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF_ST = 258,
    ELSE_ST = 259,
    FOR_ST = 260,
    WHILE_ST = 261,
    AND_ST = 262,
    NOT_ST = 263,
    OR_ST = 264,
    LOCAL_ST = 265,
    CONTINUE_ST = 266,
    BREAK_ST = 267,
    TRUE_ST = 268,
    FALSE_ST = 269,
    NIL_ST = 270,
    FUNC_ST = 271,
    RETURN_ST = 272,
    PLUS_OP = 273,
    MINUS_OP = 274,
    EQUAL_OP = 275,
    MULTI_OP = 276,
    DIVISION_OP = 277,
    PERCENT_OP = 278,
    INCREMENT_OP = 279,
    DICREMENT_OP = 280,
    COMP_EQUAL_OP = 281,
    COMP_NOT_EQUAL_OP = 282,
    COMP_BIGGER_OP = 283,
    COMP_LESS_OP = 284,
    COMP_BIGGER_EQUAL_OP = 285,
    COMP_LESS_EQUAL_OP = 286,
    NUMBER = 287,
    STRING = 288,
    LEFT_CBRACKET = 289,
    RIGHT_CBRACKET = 290,
    LEFT_PARENTHESIS = 291,
    RIGHT_PARENTHESIS = 292,
    SEMICOLON = 293,
    COMMA = 294,
    COLON = 295,
    DOUBLE_COLON = 296,
    FULL_STOP = 297,
    RANGE = 298,
    LEFT_ARRAY = 299,
    RIGHT_ARRAY = 300,
    ID = 301,
    COMMENT = 302,
    COMMENT1 = 303,
    SPACE = 304,
    OTHER = 305,
    OTHER2 = 306,
    OTHER3 = 307,
    OTHER4 = 308,
    UMINUS = 309
  };
#endif
/* Tokens.  */
#define IF_ST 258
#define ELSE_ST 259
#define FOR_ST 260
#define WHILE_ST 261
#define AND_ST 262
#define NOT_ST 263
#define OR_ST 264
#define LOCAL_ST 265
#define CONTINUE_ST 266
#define BREAK_ST 267
#define TRUE_ST 268
#define FALSE_ST 269
#define NIL_ST 270
#define FUNC_ST 271
#define RETURN_ST 272
#define PLUS_OP 273
#define MINUS_OP 274
#define EQUAL_OP 275
#define MULTI_OP 276
#define DIVISION_OP 277
#define PERCENT_OP 278
#define INCREMENT_OP 279
#define DICREMENT_OP 280
#define COMP_EQUAL_OP 281
#define COMP_NOT_EQUAL_OP 282
#define COMP_BIGGER_OP 283
#define COMP_LESS_OP 284
#define COMP_BIGGER_EQUAL_OP 285
#define COMP_LESS_EQUAL_OP 286
#define NUMBER 287
#define STRING 288
#define LEFT_CBRACKET 289
#define RIGHT_CBRACKET 290
#define LEFT_PARENTHESIS 291
#define RIGHT_PARENTHESIS 292
#define SEMICOLON 293
#define COMMA 294
#define COLON 295
#define DOUBLE_COLON 296
#define FULL_STOP 297
#define RANGE 298
#define LEFT_ARRAY 299
#define RIGHT_ARRAY 300
#define ID 301
#define COMMENT 302
#define COMMENT1 303
#define SPACE 304
#define OTHER 305
#define OTHER2 306
#define OTHER3 307
#define OTHER4 308
#define UMINUS 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 77 "parser.y" /* yacc.c:355  */

int intVal;
double doubleVal;
char*  strVal;

#line 232 "parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 247 "parser.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   648

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    99,    99,   100,   103,   104,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   137,   138,   139,   140,   141,   142,   143,   144,   147,
     150,   151,   152,   153,   154,   157,   158,   159,   160,   163,
     164,   165,   166,   169,   170,   171,   174,   175,   178,   180,
     182,   183,   186,   187,   190,   191,   193,   197,   198,   200,
     202,   203,   206,   207,   210,   211,   212,   213,   214,   216,
     217,   220,   221,   223,   224,   226,   228,   231,   232
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF_ST", "ELSE_ST", "FOR_ST", "WHILE_ST",
  "AND_ST", "NOT_ST", "OR_ST", "LOCAL_ST", "CONTINUE_ST", "BREAK_ST",
  "TRUE_ST", "FALSE_ST", "NIL_ST", "FUNC_ST", "RETURN_ST", "PLUS_OP",
  "MINUS_OP", "EQUAL_OP", "MULTI_OP", "DIVISION_OP", "PERCENT_OP",
  "INCREMENT_OP", "DICREMENT_OP", "COMP_EQUAL_OP", "COMP_NOT_EQUAL_OP",
  "COMP_BIGGER_OP", "COMP_LESS_OP", "COMP_BIGGER_EQUAL_OP",
  "COMP_LESS_EQUAL_OP", "NUMBER", "STRING", "LEFT_CBRACKET",
  "RIGHT_CBRACKET", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "SEMICOLON",
  "COMMA", "COLON", "DOUBLE_COLON", "FULL_STOP", "RANGE", "LEFT_ARRAY",
  "RIGHT_ARRAY", "ID", "COMMENT", "COMMENT1", "SPACE", "OTHER", "OTHER2",
  "OTHER3", "OTHER4", "UMINUS", "$accept", "program", "stmts", "stmt",
  "expr", "term", "assignexpr", "primary", "lvalue", "member", "call",
  "callsuffix", "normcall", "methodcall", "elist", "exprs", "objectdef",
  "indexed", "indexedelems", "indexedelem", "block", "funcdef", "const",
  "idlist", "IDS", "ifstmt", "whilestmt", "forstmt", "returnstmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -138

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-138)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-4)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,     9,   171,  -138,   -21,   -17,   -14,   241,   -22,   -12,
      -7,  -138,  -138,  -138,   -29,    15,   241,    -9,    -9,  -138,
    -138,     1,    81,  -138,   -13,   206,  -138,    38,   371,  -138,
    -138,  -138,   576,  -138,   -26,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,   241,   241,   241,  -138,  -138,  -138,  -138,
      -4,    10,  -138,   396,  -138,    28,    21,   -26,    21,  -138,
     134,   446,    17,  -138,   241,   346,    35,    40,    16,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,  -138,   241,  -138,  -138,   241,    14,    20,   241,
    -138,  -138,  -138,   241,    37,   241,   471,    48,   496,    49,
      53,    -4,  -138,    55,  -138,  -138,  -138,    62,   321,   241,
    -138,  -138,  -138,    65,  -138,   603,   564,   107,   107,  -138,
    -138,  -138,   617,   617,   205,   205,   205,   205,   547,    64,
    -138,    66,   271,    67,  -138,   296,   171,   241,   171,    63,
    -138,    77,    75,    62,   241,   241,   346,    16,  -138,   241,
    -138,  -138,  -138,   111,   421,  -138,    49,  -138,    77,    79,
     521,  -138,  -138,    83,   171,   241,  -138,  -138,  -138,  -138,
    -138,  -138,    84,   171,  -138
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,     0,     0,     0,     0,     0,    74,
      75,     5,     0,    15,     0,    61,    45,     4,     0,    30,
      16,    38,    40,    48,    41,    42,    13,    14,    44,     7,
       8,     9,    10,     0,    61,     0,    32,    46,    12,    11,
      80,     0,    87,     0,    37,     0,    33,     0,    35,    70,
       0,     0,     0,    47,     0,    63,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,    34,    36,    61,     0,     0,     0,
      54,    56,    57,    61,     0,     0,     0,     0,     0,    82,
       0,    80,    88,     0,    71,     4,    31,    43,     0,     0,
      60,    64,    65,     0,    66,    28,    29,    17,    18,    19,
      20,    21,    26,    27,    22,    24,    23,    25,    39,     0,
      49,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      79,     0,     0,     0,    61,     0,    63,    68,    58,    61,
      50,    53,    52,    83,     0,    85,    82,    72,     0,     0,
       0,    62,    67,     0,     0,    61,    81,    73,    55,    69,
      59,    84,     0,     0,    86
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,    97,   -54,    -2,  -138,  -138,  -138,    -6,  -138,
      32,  -138,  -138,  -138,   -41,   -23,  -138,  -138,   -16,    13,
    -137,   -20,  -138,    31,   -18,  -138,  -138,  -138,  -138
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    27,    65,    29,    30,    31,    32,    33,
      34,    90,    91,    92,    66,   110,    35,    67,   114,    68,
      36,    37,    38,   100,   140,    39,    40,    41,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,     8,    62,    97,   157,    46,   105,    50,    -3,     3,
      93,    56,    58,    53,    54,    43,    94,    51,    95,    44,
      61,   167,    45,     7,    47,     8,    48,    55,    11,    12,
      13,    49,    24,    63,    16,   103,    59,    26,    -2,    17,
      18,    96,    99,    98,    14,   129,   101,    19,    20,    57,
      57,    22,   133,    52,   107,   113,    24,    86,    28,    25,
     130,    26,   108,    87,    88,    89,   131,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     111,   128,   153,   134,   155,   112,   137,   132,   139,     7,
     141,     8,   143,   135,    11,    12,    13,    14,   144,    64,
      16,   148,   149,   159,   151,    17,    18,   146,   163,   156,
     171,    21,   158,    19,    20,   164,   168,    22,    60,   174,
     170,   173,    24,   161,   172,    25,   147,    26,    73,    74,
      75,   162,   142,     0,    28,   154,    28,     4,   166,     5,
       6,     0,     7,   160,     8,     9,    10,    11,    12,    13,
      14,    15,     0,    16,     0,     0,     0,     0,    17,    18,
       0,     0,    28,     0,     0,     0,    19,    20,    21,   104,
      22,    28,    23,     0,     4,    24,     5,     6,    25,     7,
      26,     8,     9,    10,    11,    12,    13,    14,    15,     0,
      16,     0,     0,     0,     0,    17,    18,     0,     0,     0,
       0,     0,     0,    19,    20,    21,     0,    22,     0,    23,
       0,     0,    24,     0,     7,    25,     8,    26,     0,    11,
      12,    13,     0,    71,    72,    16,    73,    74,    75,     0,
      17,    18,     0,    -4,    -4,    -4,    -4,     0,    19,    20,
      64,     0,    22,     0,     0,     0,     0,    24,     0,     7,
      25,     8,    26,     0,    11,    12,    13,     0,     0,     0,
      16,     0,     0,     0,     0,    17,    18,     0,     0,     0,
       0,     0,     0,    19,    20,     0,     0,    22,    69,     0,
      70,     0,    24,     0,     0,    25,     0,    26,     0,    71,
      72,     0,    73,    74,    75,     0,     0,    76,    77,    78,
      79,    80,    81,    69,     0,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    72,   150,    73,    74,    75,
       0,     0,    76,    77,    78,    79,    80,    81,    69,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      72,   152,    73,    74,    75,     0,     0,    76,    77,    78,
      79,    80,    81,    69,     0,    70,     0,     0,     0,     0,
       0,   145,     0,     0,    71,    72,     0,    73,    74,    75,
       0,     0,    76,    77,    78,    79,    80,    81,    69,     0,
      70,     0,     0,     0,     0,   109,     0,     0,     0,    71,
      72,     0,    73,    74,    75,     0,     0,    76,    77,    78,
      79,    80,    81,    69,     0,    70,     0,     0,     0,    82,
       0,     0,     0,     0,    71,    72,     0,    73,    74,    75,
       0,     0,    76,    77,    78,    79,    80,    81,    69,     0,
      70,     0,     0,     0,   102,     0,     0,     0,     0,    71,
      72,     0,    73,    74,    75,     0,     0,    76,    77,    78,
      79,    80,    81,    69,     0,    70,     0,     0,     0,   165,
       0,     0,     0,     0,    71,    72,     0,    73,    74,    75,
       0,     0,    76,    77,    78,    79,    80,    81,    69,     0,
      70,     0,     0,   106,     0,     0,     0,     0,     0,    71,
      72,     0,    73,    74,    75,     0,     0,    76,    77,    78,
      79,    80,    81,    69,     0,    70,     0,     0,   136,     0,
       0,     0,     0,     0,    71,    72,     0,    73,    74,    75,
       0,     0,    76,    77,    78,    79,    80,    81,    69,     0,
      70,     0,     0,   138,     0,     0,     0,     0,     0,    71,
      72,     0,    73,    74,    75,     0,     0,    76,    77,    78,
      79,    80,    81,     0,    69,   169,    70,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,     0,    73,    74,
      75,    69,     0,    76,    77,    78,    79,    80,    81,     0,
       0,     0,    71,    72,     0,    73,    74,    75,     0,     0,
      76,    77,    78,    79,    80,    81,    83,     0,     0,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,    87,    88,
      89,    71,    72,     0,    73,    74,    75,     0,     0,    76,
      77,    78,    79,    80,    81,    71,    72,     0,    73,    74,
      75,     0,     0,    -4,    -4,    78,    79,    80,    81
};

static const yytype_int16 yycheck[] =
{
       2,    10,    22,    44,   141,     7,    60,    36,     0,     0,
      36,    17,    18,    15,    16,    36,    42,    46,    44,    36,
      22,   158,    36,     8,    46,    10,    38,    36,    13,    14,
      15,    38,    41,    46,    19,    55,    35,    46,     0,    24,
      25,    43,    46,    45,    16,    86,    36,    32,    33,    17,
      18,    36,    93,    38,    37,    39,    41,    36,    60,    44,
      46,    46,    64,    42,    43,    44,    46,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      45,    83,   136,    46,   138,    45,    38,    89,    39,     8,
      37,    10,    37,    95,    13,    14,    15,    16,    36,    34,
      19,    37,    36,   144,    37,    24,    25,   109,   149,    46,
     164,    34,    37,    32,    33,     4,    37,    36,    21,   173,
      37,    37,    41,   146,   165,    44,   113,    46,    21,    22,
      23,   147,   101,    -1,   136,   137,   138,     3,   156,     5,
       6,    -1,     8,   145,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,   164,    -1,    -1,    -1,    32,    33,    34,    35,
      36,   173,    38,    -1,     3,    41,     5,     6,    44,     8,
      46,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    -1,    36,    -1,    38,
      -1,    -1,    41,    -1,     8,    44,    10,    46,    -1,    13,
      14,    15,    -1,    18,    19,    19,    21,    22,    23,    -1,
      24,    25,    -1,    28,    29,    30,    31,    -1,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,     8,
      44,    10,    46,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,     7,    -1,
       9,    -1,    41,    -1,    -1,    44,    -1,    46,    -1,    18,
      19,    -1,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    45,    21,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,     7,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    45,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,     7,    -1,
       9,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,     7,    -1,     9,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,     7,    -1,
       9,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,     7,    -1,     9,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,     7,    -1,
       9,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,     7,    -1,     9,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,     7,    -1,
       9,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    -1,    -1,    26,    27,    28,
      29,    30,    31,    -1,     7,    34,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,     7,    -1,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    18,    19,    -1,    21,    22,    23,    -1,    -1,
      26,    27,    28,    29,    30,    31,    20,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    18,    19,    -1,    21,    22,    23,    -1,    -1,    26,
      27,    28,    29,    30,    31,    18,    19,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    57,     0,     3,     5,     6,     8,    10,    11,
      12,    13,    14,    15,    16,    17,    19,    24,    25,    32,
      33,    34,    36,    38,    41,    44,    46,    58,    59,    60,
      61,    62,    63,    64,    65,    71,    75,    76,    77,    80,
      81,    82,    83,    36,    36,    36,    59,    46,    38,    38,
      36,    46,    38,    59,    59,    36,    63,    65,    63,    35,
      57,    59,    76,    46,    34,    59,    69,    72,    74,     7,
       9,    18,    19,    21,    22,    23,    26,    27,    28,    29,
      30,    31,    38,    20,    24,    25,    36,    42,    43,    44,
      66,    67,    68,    36,    42,    44,    59,    69,    59,    46,
      78,    36,    38,    76,    35,    58,    37,    37,    59,    39,
      70,    45,    45,    39,    73,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    69,
      46,    46,    59,    69,    46,    59,    37,    38,    37,    39,
      79,    37,    78,    37,    36,    40,    59,    74,    37,    36,
      45,    37,    45,    58,    59,    58,    46,    75,    37,    69,
      59,    70,    73,    69,     4,    38,    79,    75,    37,    34,
      37,    58,    69,    37,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    61,
      62,    62,    62,    62,    62,    63,    63,    63,    63,    64,
      64,    64,    64,    65,    65,    65,    66,    66,    67,    68,
      69,    69,    70,    70,    71,    71,    72,    73,    73,    74,
      75,    75,    76,    76,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    82,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     0,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     1,     1,     3,     1,     1,     2,     2,     1,     3,
       4,     3,     4,     4,     2,     6,     1,     1,     3,     5,
       2,     0,     3,     0,     3,     3,     2,     3,     0,     5,
       2,     3,     5,     6,     1,     1,     1,     1,     1,     2,
       0,     3,     0,     5,     7,     5,     9,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 99 "parser.y" /* yacc.c:1646  */
    {printf("program->stmts stmt\n");}
#line 1542 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 100 "parser.y" /* yacc.c:1646  */
    {printf("program->\n");}
#line 1548 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("stmts->stmts stmt\n");}
#line 1554 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 104 "parser.y" /* yacc.c:1646  */
    {printf("stmts-> \n");}
#line 1560 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("stmt->expr;\n");}
#line 1566 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("stmt->ifstmt\n");}
#line 1572 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("stmt->whilestmt\n");}
#line 1578 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("stmt->forstmt\n");}
#line 1584 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("stmt->returnstmt\n");}
#line 1590 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 113 "parser.y" /* yacc.c:1646  */
    {printf("stmt->break;\n");}
#line 1596 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "parser.y" /* yacc.c:1646  */
    {printf("stmt->continue;\n");}
#line 1602 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 115 "parser.y" /* yacc.c:1646  */
    {printf("stmt->block\n");}
#line 1608 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("stmt->funcdef\n");}
#line 1614 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("stmt->;\n");}
#line 1620 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("expr->assignexpr \n");}
#line 1626 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 121 "parser.y" /* yacc.c:1646  */
    {printf("expr+expr\n");}
#line 1632 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("expr-expr\n");}
#line 1638 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("expr*expr\n");}
#line 1644 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("expr/expr\n");}
#line 1650 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 125 "parser.y" /* yacc.c:1646  */
    {printf("expr%expr\n");}
#line 1656 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 126 "parser.y" /* yacc.c:1646  */
    {printf("expr>expr\n");}
#line 1662 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 127 "parser.y" /* yacc.c:1646  */
    {printf("expr>=expr\n");}
#line 1668 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("expr<expr\n");}
#line 1674 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("expr<=expr\n");}
#line 1680 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf("expr==expr\n");}
#line 1686 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 131 "parser.y" /* yacc.c:1646  */
    {printf("expr!=expr\n");}
#line 1692 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("expr and expr\n");}
#line 1698 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("expr or expr\n");}
#line 1704 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("expr->term\n");}
#line 1710 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 137 "parser.y" /* yacc.c:1646  */
    {printf("term->(expr)\n");}
#line 1716 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("term->!expr\n");}
#line 1722 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 139 "parser.y" /* yacc.c:1646  */
    {printf("term-> ++lvalue\n");}
#line 1728 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf("term-> lvalue++\n");}
#line 1734 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("term-> --lvalue\n");}
#line 1740 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 142 "parser.y" /* yacc.c:1646  */
    {printf("term-> lvalue--\n");}
#line 1746 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("term-> -expr UMINUS\n");}
#line 1752 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 144 "parser.y" /* yacc.c:1646  */
    {printf("term->primary\n");}
#line 1758 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 147 "parser.y" /* yacc.c:1646  */
    {printf("lvalue=expr");}
#line 1764 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 150 "parser.y" /* yacc.c:1646  */
    {printf("primary->lvalue\n");}
#line 1770 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 151 "parser.y" /* yacc.c:1646  */
    {printf("primary->call\n");}
#line 1776 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 152 "parser.y" /* yacc.c:1646  */
    {printf("primary->objectdef\n");}
#line 1782 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("primary->(funcdef)\n");}
#line 1788 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("primary->const\n");}
#line 1794 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 157 "parser.y" /* yacc.c:1646  */
    {printf("lvalue->ID\n");}
#line 1800 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("lvalue->local ID\n");}
#line 1806 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("lvalue->:: ID\n");}
#line 1812 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 160 "parser.y" /* yacc.c:1646  */
    {printf("lvalue->member\n");}
#line 1818 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("member->lvalue.ID\n");}
#line 1824 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 164 "parser.y" /* yacc.c:1646  */
    {printf("member->lvalue[expr]\n");}
#line 1830 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 165 "parser.y" /* yacc.c:1646  */
    {printf("member->call.ID\n");}
#line 1836 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("member->call[expr]\n");}
#line 1842 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 169 "parser.y" /* yacc.c:1646  */
    {printf("call->call(elist)\n");}
#line 1848 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 170 "parser.y" /* yacc.c:1646  */
    {printf("call->lvalue callsuffix\n");}
#line 1854 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("call->(funcdef)(elist)\n");}
#line 1860 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf("callsuffix->normcall\n");}
#line 1866 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 175 "parser.y" /* yacc.c:1646  */
    {printf("callsuffix->methodcall\n");}
#line 1872 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("normcall->(elist)\n");}
#line 1878 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 180 "parser.y" /* yacc.c:1646  */
    {printf("methodcall->..id(elist)");}
#line 1884 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("elist->expr exprs\n");}
#line 1890 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("elist->expr exprs\n");}
#line 1896 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("exprs->COMMA expr epxrs \n");}
#line 1902 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("exprs->   \n");}
#line 1908 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 190 "parser.y" /* yacc.c:1646  */
    {printf("objectdef->[elist]\n");}
#line 1914 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 191 "parser.y" /* yacc.c:1646  */
    {printf("objectdef->[indexed]]\n");}
#line 1920 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 193 "parser.y" /* yacc.c:1646  */
    {printf("indexed->indexedelem indexedelems\n");}
#line 1926 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 197 "parser.y" /* yacc.c:1646  */
    {fprintf(yyout,"lindexedelems ==> ,indexedelem *\n");}
#line 1932 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 198 "parser.y" /* yacc.c:1646  */
    {fprintf(yyout,"lindexedelems ==> empty\n");}
#line 1938 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 200 "parser.y" /* yacc.c:1646  */
    {printf("indexedelem ->{ expr : expr }\n");}
#line 1944 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 202 "parser.y" /* yacc.c:1646  */
    {printf("block->{}\n");}
#line 1950 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 203 "parser.y" /* yacc.c:1646  */
    {printf("block->{stmts}\n");}
#line 1956 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("funcdef  function (idlist) block\n");}
#line 1962 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("funcdef  function (idlist) block\n");}
#line 1968 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 210 "parser.y" /* yacc.c:1646  */
    {printf("const->NUMBER\n");}
#line 1974 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf("const->STRING\n");}
#line 1980 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("const->TRUE\n");}
#line 1986 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("const->FALSE\n");}
#line 1992 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("const->NIL\n");}
#line 1998 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("idlist->ID ID\n");}
#line 2004 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 217 "parser.y" /* yacc.c:1646  */
    {printf("idlist-> \n");}
#line 2010 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("IDS->COMMA ID IDS\n");}
#line 2016 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 221 "parser.y" /* yacc.c:1646  */
    {printf("IDS-> \n");}
#line 2022 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 223 "parser.y" /* yacc.c:1646  */
    {printf("ifstmt->(expr) stmt \n");}
#line 2028 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("ifstmt->if (expr) stmt else stmt \n");}
#line 2034 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf("whilestmt->while ( expr ) stmt\n");}
#line 2040 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf("forstmt->for (elist;expr;elist) stmt");}
#line 2046 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 231 "parser.y" /* yacc.c:1646  */
    {printf("returnstmt->return ;\n");}
#line 2052 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 232 "parser.y" /* yacc.c:1646  */
    {printf("returnstmt->return expr;\n");}
#line 2058 "parser.c" /* yacc.c:1646  */
    break;


#line 2062 "parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 237 "parser.y" /* yacc.c:1906  */


int yyerror (char* yaccProvidedMessage)
{
        fprintf(stderr, "%s: at line %d, before token: '%s'\n", yaccProvidedMessage, yylineno, yytext);
}



int main(int argc,char** argv)
{
  if(argc>1){
   if(!(yyin=fopen(argv[1],"r"))){  
      fprintf(stderr,"Cannot read file:%s\n",argv[1]);
      return 1;
   }
  }else{
    yyin=stdin;
  }

        printf("--------------------            Syntax Analysis         --------------------\n");
    yyparse();
    InitHash();
	PrintScopes();
    return 0;
}





