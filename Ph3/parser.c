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
int pnum=0;
int namef=0;
int FlagScopeFormal=0;
char *IDV;
int flagMemberLvalue=0;
int lock1=0;
int lock2=0;

#line 85 "parser.c" /* yacc.c:339  */

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
#line 84 "parser.y" /* yacc.c:355  */

int intVal;
double doubleVal;
char*  strVal;

#line 239 "parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 254 "parser.c" /* yacc.c:358  */

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
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  183

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
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   108,   111,   112,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   145,   146,   147,   149,   158,   167,   175,   183,   186,
     212,   213,   214,   215,   216,   219,   222,   226,   230,   235,
     238,   239,   240,   243,   244,   245,   248,   249,   252,   254,
     256,   257,   260,   261,   264,   265,   267,   272,   273,   276,
     278,   278,   281,   281,   281,   281,   282,   282,   282,   282,
     285,   286,   287,   288,   289,   291,   291,   292,   295,   295,
     296,   298,   299,   301,   303,   306,   307
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
  "indexed", "indexedelems", "indexedelem", "block", "$@1", "funcdef",
  "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "const", "idlist", "$@8",
  "IDS", "$@9", "ifstmt", "whilestmt", "forstmt", "returnstmt", YY_NULLPTR
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

#define YYPACT_NINF -141

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-141)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-4)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,     8,   152,  -141,   -11,    -3,    12,   292,     7,     6,
      16,  -141,  -141,  -141,    10,   187,   292,    14,    14,  -141,
    -141,  -141,   222,  -141,    11,   257,  -141,    58,   397,  -141,
    -141,  -141,    63,  -141,    -4,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,   292,   292,   292,  -141,  -141,  -141,  -141,
    -141,    23,  -141,   422,  -141,    46,   -32,    -4,   -32,  -141,
     472,    26,  -141,   292,   372,    19,    36,    43,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,  -141,   292,  -141,  -141,   292,    38,    39,   292,  -141,
    -141,  -141,   292,    44,   292,   497,    51,   522,    55,  -141,
    -141,    56,   110,  -141,    59,   347,   292,  -141,  -141,  -141,
      60,  -141,   603,   589,    -6,    -6,  -141,  -141,  -141,   617,
     617,   186,   186,   186,   186,   572,    64,  -141,    61,     0,
      65,  -141,   322,   152,   292,   152,  -141,    50,    59,  -141,
    -141,   292,   292,   372,    43,  -141,   292,  -141,  -141,  -141,
     104,   447,  -141,    50,  -141,    72,    73,   547,  -141,  -141,
      74,   152,   292,    75,    78,  -141,  -141,  -141,  -141,  -141,
      77,  -141,    82,  -141,    96,   152,    96,  -141,  -141,  -141,
    -141,    78,  -141
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,    82,    83,    84,    72,     0,     0,     0,     0,    80,
      81,    70,     0,    15,     0,    61,    45,     4,     0,    30,
      16,    38,    40,    48,    41,    42,    13,    14,    44,     7,
       8,     9,    10,     0,    61,     0,    33,    46,    12,    11,
      76,     0,    95,     0,    32,     0,    34,     0,    36,     5,
       0,     0,    47,     0,    63,     0,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,    35,    37,    61,     0,     0,     0,    54,
      56,    57,    61,     0,     0,     0,     0,     0,     0,    73,
      96,     0,     0,    31,    43,     0,     0,    60,    64,    65,
       0,    66,    28,    29,    17,    18,    19,    20,    21,    26,
      27,    22,    24,    23,    25,    39,     0,    49,     0,     0,
       0,    51,     0,     0,     0,     0,    77,    87,     0,    71,
       4,    61,     0,    63,    68,    58,    61,    50,    53,    52,
      91,     0,    93,    87,    85,     0,     0,     0,    62,    67,
       0,     0,    61,     0,    90,    74,    55,    69,    59,    92,
       0,    78,     0,    86,     0,     0,     0,    88,    75,    94,
      79,    90,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,    79,   -96,    -2,  -141,  -141,  -141,    29,  -141,
      34,  -141,  -141,  -141,   -43,    -7,  -141,  -141,    -5,    27,
    -140,  -141,   -20,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
     -12,  -141,   -34,  -141,  -141,  -141,  -141,  -141
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    27,    64,    29,    30,    31,    32,    33,
      34,    89,    90,    91,    65,   107,    35,    66,   111,    67,
      36,    59,    37,    51,   137,   174,    98,   153,   176,    38,
     155,   164,   173,   181,    39,    40,    41,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    96,    61,    -3,    85,    46,   140,    68,     3,    69,
      86,    87,    88,    53,    54,    72,    73,    74,    70,    71,
      60,    72,    73,    74,     8,    43,    75,    76,    77,    78,
      79,    80,    92,    44,   178,   101,   180,   150,    93,   152,
      94,    95,   126,    97,    48,   147,    56,    58,    45,   130,
      55,    57,    57,    47,    49,    24,    50,    62,    -2,    99,
      26,   105,    14,   104,   108,   169,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   179,
     125,   109,   110,    82,   127,   128,   129,    83,    84,   134,
     131,   136,   132,   138,    63,   141,   154,   146,   156,    85,
      28,   145,   148,   160,   143,    86,    87,    88,   161,   165,
     166,   168,   171,     4,   175,     5,     6,   172,     7,   170,
       8,     9,    10,    11,    12,    13,    14,    15,   177,    16,
      21,    28,   151,    28,    17,    18,   158,   144,   102,   159,
     157,   163,    19,    20,    21,   139,    22,   182,    23,     0,
       0,    24,     0,     0,    25,     4,    26,     5,     6,    28,
       7,     0,     8,     9,    10,    11,    12,    13,    14,    15,
       0,    16,     0,    28,     0,     0,    17,    18,     0,     0,
       0,     0,     0,     0,    19,    20,    21,     0,    22,     0,
      23,     0,     0,    24,     0,     7,    25,     8,    26,     0,
      11,    12,    13,     0,    70,    71,    16,    72,    73,    74,
       0,    17,    18,     0,    -4,    -4,    -4,    -4,     0,    19,
      20,     0,     0,    22,     0,    52,     0,     0,    24,     0,
       7,    25,     8,    26,     0,    11,    12,    13,    14,     0,
       0,    16,     0,     0,     0,     0,    17,    18,     0,     0,
       0,     0,     0,     0,    19,    20,     0,     0,    22,     0,
       0,     0,     0,    24,     0,     7,    25,     8,    26,     0,
      11,    12,    13,     0,     0,     0,    16,     0,     0,     0,
       0,    17,    18,     0,     0,     0,     0,     0,     0,    19,
      20,    63,     0,    22,     0,     0,     0,     0,    24,     0,
       7,    25,     8,    26,     0,    11,    12,    13,     0,     0,
       0,    16,     0,     0,     0,     0,    17,    18,     0,     0,
       0,     0,     0,     0,    19,    20,     0,     0,    22,    68,
       0,    69,     0,    24,     0,     0,    25,     0,    26,     0,
      70,    71,     0,    72,    73,    74,     0,     0,    75,    76,
      77,    78,    79,    80,    68,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,   149,    72,    73,
      74,     0,     0,    75,    76,    77,    78,    79,    80,    68,
       0,    69,     0,     0,     0,     0,     0,   142,     0,     0,
      70,    71,     0,    72,    73,    74,     0,     0,    75,    76,
      77,    78,    79,    80,    68,     0,    69,     0,     0,     0,
       0,   106,     0,     0,     0,    70,    71,     0,    72,    73,
      74,     0,     0,    75,    76,    77,    78,    79,    80,    68,
       0,    69,     0,     0,     0,    81,     0,     0,     0,     0,
      70,    71,     0,    72,    73,    74,     0,     0,    75,    76,
      77,    78,    79,    80,    68,     0,    69,     0,     0,     0,
     100,     0,     0,     0,     0,    70,    71,     0,    72,    73,
      74,     0,     0,    75,    76,    77,    78,    79,    80,    68,
       0,    69,     0,     0,     0,   162,     0,     0,     0,     0,
      70,    71,     0,    72,    73,    74,     0,     0,    75,    76,
      77,    78,    79,    80,    68,     0,    69,     0,     0,   103,
       0,     0,     0,     0,     0,    70,    71,     0,    72,    73,
      74,     0,     0,    75,    76,    77,    78,    79,    80,    68,
       0,    69,     0,     0,   133,     0,     0,     0,     0,     0,
      70,    71,     0,    72,    73,    74,     0,     0,    75,    76,
      77,    78,    79,    80,    68,     0,    69,     0,     0,   135,
       0,     0,     0,     0,     0,    70,    71,     0,    72,    73,
      74,     0,     0,    75,    76,    77,    78,    79,    80,    68,
       0,    69,   167,     0,     0,     0,     0,     0,     0,     0,
      70,    71,     0,    72,    73,    74,    68,     0,    75,    76,
      77,    78,    79,    80,     0,     0,     0,    70,    71,     0,
      72,    73,    74,     0,     0,    75,    76,    77,    78,    79,
      80,    70,    71,     0,    72,    73,    74,     0,     0,    75,
      76,    77,    78,    79,    80,    70,    71,     0,    72,    73,
      74,     0,     0,    -4,    -4,    77,    78,    79,    80
};

static const yytype_int16 yycheck[] =
{
       2,    44,    22,     0,    36,     7,   102,     7,     0,     9,
      42,    43,    44,    15,    16,    21,    22,    23,    18,    19,
      22,    21,    22,    23,    10,    36,    26,    27,    28,    29,
      30,    31,    36,    36,   174,    55,   176,   133,    42,   135,
      44,    43,    85,    45,    38,    45,    17,    18,    36,    92,
      36,    17,    18,    46,    38,    41,    46,    46,     0,    36,
      46,    63,    16,    37,    45,   161,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   175,
      82,    45,    39,    20,    46,    46,    88,    24,    25,    38,
      46,    36,    94,    37,    34,    36,    46,    36,   141,    36,
     102,    37,    37,   146,   106,    42,    43,    44,     4,    37,
      37,    37,    37,     3,    37,     5,     6,    39,     8,   162,
      10,    11,    12,    13,    14,    15,    16,    17,    46,    19,
      34,   133,   134,   135,    24,    25,   143,   110,    59,   144,
     142,   153,    32,    33,    34,    35,    36,   181,    38,    -1,
      -1,    41,    -1,    -1,    44,     3,    46,     5,     6,   161,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    -1,   175,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    -1,    36,    -1,
      38,    -1,    -1,    41,    -1,     8,    44,    10,    46,    -1,
      13,    14,    15,    -1,    18,    19,    19,    21,    22,    23,
      -1,    24,    25,    -1,    28,    29,    30,    31,    -1,    32,
      33,    -1,    -1,    36,    -1,    38,    -1,    -1,    41,    -1,
       8,    44,    10,    46,    -1,    13,    14,    15,    16,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    41,    -1,     8,    44,    10,    46,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,
       8,    44,    10,    46,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    36,     7,
      -1,     9,    -1,    41,    -1,    -1,    44,    -1,    46,    -1,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    31,     7,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    45,    21,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,     7,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    31,     7,    -1,     9,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,     7,
      -1,     9,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    31,     7,    -1,     9,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,     7,
      -1,     9,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    31,     7,    -1,     9,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,     7,
      -1,     9,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    26,    27,
      28,    29,    30,    31,     7,    -1,     9,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    28,    29,    30,    31,     7,
      -1,     9,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,     7,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    18,    19,    -1,
      21,    22,    23,    -1,    -1,    26,    27,    28,    29,    30,
      31,    18,    19,    -1,    21,    22,    23,    -1,    -1,    26,
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
      61,    62,    63,    64,    65,    71,    75,    77,    84,    89,
      90,    91,    92,    36,    36,    36,    59,    46,    38,    38,
      46,    78,    38,    59,    59,    36,    63,    65,    63,    76,
      59,    77,    46,    34,    59,    69,    72,    74,     7,     9,
      18,    19,    21,    22,    23,    26,    27,    28,    29,    30,
      31,    38,    20,    24,    25,    36,    42,    43,    44,    66,
      67,    68,    36,    42,    44,    59,    69,    59,    81,    36,
      38,    77,    57,    37,    37,    59,    39,    70,    45,    45,
      39,    73,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    69,    46,    46,    59,
      69,    46,    59,    37,    38,    37,    36,    79,    37,    35,
      58,    36,    40,    59,    74,    37,    36,    45,    37,    45,
      58,    59,    58,    82,    46,    85,    69,    59,    70,    73,
      69,     4,    38,    85,    86,    37,    37,    35,    37,    58,
      69,    37,    39,    87,    80,    37,    83,    46,    75,    58,
      75,    88,    87
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
      76,    75,    78,    79,    80,    77,    81,    82,    83,    77,
      84,    84,    84,    84,    84,    86,    85,    85,    88,    87,
      87,    89,    89,    90,    91,    92,    92
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
       0,     4,     0,     0,     0,     8,     0,     0,     0,     9,
       1,     1,     1,     1,     1,     0,     3,     0,     0,     4,
       0,     5,     7,     5,     9,     2,     3
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
#line 107 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(program->stmts stmt)\n",++pnum);}
#line 1558 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(program->   )\n",++pnum);}
#line 1564 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 111 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmts->stmts stmt)\n",++pnum);}
#line 1570 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 112 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmts->    )\n",++pnum);}
#line 1576 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->expr;)\n",++pnum);}
#line 1582 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->ifstmt\n)",++pnum);}
#line 1588 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->whilestmt\n,++pnum)");}
#line 1594 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->forstmt)\n",++pnum);}
#line 1600 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 120 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->returnstmt)\n",++pnum);}
#line 1606 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 121 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->break;)\n",++pnum);}
#line 1612 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->continue;)\n",++pnum);}
#line 1618 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->block)\n",++pnum);}
#line 1624 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->funcdef)\n",++pnum);}
#line 1630 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 125 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(stmt->;)\n",++pnum);}
#line 1636 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->assignexpr)\n",++pnum );}
#line 1642 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr+expr)\n",++pnum );}
#line 1648 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 130 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr-expr)\n",++pnum);}
#line 1654 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 131 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr*expr)\n",++pnum);}
#line 1660 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 132 "parser.y" /* yacc.c:1646  */
    {printf("(%d)expr->(expr/expr)\n",++pnum);}
#line 1666 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr%expr)\n",++pnum);}
#line 1672 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr>expr)\n",++pnum);}
#line 1678 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 135 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr>=expr)\n",++pnum);}
#line 1684 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 136 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr<expr)\n",++pnum);}
#line 1690 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 137 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr<=expr)\n",++pnum);}
#line 1696 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr==expr)\n",++pnum);}
#line 1702 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 139 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr!=expr)\n",++pnum);}
#line 1708 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 140 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr and expr)\n",++pnum);}
#line 1714 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 141 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->expr or expr)\n",++pnum);}
#line 1720 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 142 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(expr->term)\n",++pnum);}
#line 1726 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 145 "parser.y" /* yacc.c:1646  */
    {printf("(%d)( term->(expr) )\n",++pnum);}
#line 1732 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 146 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(term-> -expr UMINUS)\n",++pnum);}
#line 1738 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 147 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(term->!expr)\n",++pnum);}
#line 1744 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 149 "parser.y" /* yacc.c:1646  */
    { 
         if(IsFunction(scope,(yyvsp[0].strVal),yylineno)==1){
          printf("\033[0;31m");
			 printf("Error(%d)	[Variable] (function name with  operator) \"++%s\"\n",yylineno,(yyvsp[0].strVal)); 
			 printf("\033[0m");
         }
      
         printf("(%d)(term-> ++lvalue)\n",++pnum);}
#line 1757 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 158 "parser.y" /* yacc.c:1646  */
    {
         if(IsFunction(scope,(yyvsp[-1].strVal),yylineno)==1){
          printf("\033[0;31m");
			 printf("Error(%d)	[Variable] (function name with operator) \"%s++\"\n",yylineno,(yyvsp[-1].strVal)); 
			 printf("\033[0m");
         }
 
         printf("(%d)(term-> lvalue++)\n",++pnum);}
#line 1770 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "parser.y" /* yacc.c:1646  */
    {
        if(IsFunction(scope,(yyvsp[0].strVal),yylineno)==1){
          printf("\033[0;31m");
			 printf("Error(%d)	[Variable] (function name with operator) \"--%s\"\n",yylineno,(yyvsp[0].strVal)); 
			 printf("\033[0m");
        }
        printf("(%d)(term-> --lvalue)\n",++pnum);}
#line 1782 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 175 "parser.y" /* yacc.c:1646  */
    {
       if(IsFunction(scope,(yyvsp[-1].strVal),yylineno)==1){
          printf("\033[0;31m");
			 printf("Error(%d)	[Variable] (function name with operator) \"%s--\"\n",yylineno,(yyvsp[-1].strVal)); 
			 printf("\033[0m");
       }
       printf("(%d)(term-> lvalue--)\n",++pnum);}
#line 1794 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 183 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(term->primary)\n",++pnum);}
#line 1800 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 186 "parser.y" /* yacc.c:1646  */
    {
  
    
    if((yyvsp[-2].strVal)!=NULL){
      
      if(IsFunction(scope,(yyvsp[-2].strVal),yylineno)==1&&lock1!=1) {
          printf("\033[0;31m");
			    printf("Error(%d)	[Variable] (Assignation to function:%s)\n",yylineno,(yyvsp[-2].strVal)); 
			    printf("\033[0m");  
      }

      if(IsFunctionLocal(scope,(yyvsp[-2].strVal),yylineno)==1&&lock1==1){
          printf("\033[0;31m");
			    printf("Error(%d)	[Variable] (Assignation(local) to function:%s)\n",yylineno,(yyvsp[-2].strVal)); 
			    printf("\033[0m"); 
      }

     }
   // flagMemberLvalue=0;
   // printf("S1:%s",$1);
    lock1=0;
    lock2=0;
    printf("(%d)(assignexpr->lvalue=expr)\n",++pnum);}
#line 1828 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(primary->lvalue)\n",++pnum);}
#line 1834 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(primary->call)\n",++pnum);}
#line 1840 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(primary->objectdef)\n",++pnum);}
#line 1846 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(primary->(funcdef) )\n",++pnum);}
#line 1852 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 216 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(primary->const)\n",++pnum);}
#line 1858 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 219 "parser.y" /* yacc.c:1646  */
    {LookUpVariable(scope,(yyvsp[0].strVal),yylineno); printf("(%d)(lvalue->ID:%s)\n",++pnum,(yyvsp[0].strVal));  
        (yyval.strVal)=(yyvsp[0].strVal); 
      }
#line 1866 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 222 "parser.y" /* yacc.c:1646  */
    {	LookUpLocal((yyvsp[0].strVal),scope,yylineno);
        (yyval.strVal)=(yyvsp[0].strVal); 
        lock1=1;
		  printf("(%d)(lvalue->local ID)\n",++pnum);}
#line 1875 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 226 "parser.y" /* yacc.c:1646  */
    {LookUpGlobal((yyvsp[0].strVal),yylineno);
        (yyval.strVal)=(yyvsp[0].strVal); 
        lock2=1;
     printf("(%d)(lvalue->:: ID)\n",++pnum);}
#line 1884 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 230 "parser.y" /* yacc.c:1646  */
    {
      
      printf("(%d)(lvalue->member)\n",++pnum);}
#line 1892 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 235 "parser.y" /* yacc.c:1646  */
    {
       // flagMemberLvalue=1;
        printf("(%d)(member->lvalue.ID)\n",++pnum);}
#line 1900 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(member->lvalue[expr])\n",++pnum);}
#line 1906 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 239 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(member->call.ID)\n",++pnum);}
#line 1912 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(member->call[expr])\n",++pnum);}
#line 1918 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 243 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(call->call(elist) )\n",++pnum);}
#line 1924 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(call->lvalue callsuffix)\n",++pnum);}
#line 1930 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(call->(funcdef)(elist) )\n",++pnum);}
#line 1936 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 248 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(callsuffix->normcall)\n",++pnum);}
#line 1942 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 249 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(callsuffix->methodcall)\n",++pnum);}
#line 1948 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 252 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(normcall->(elist) )\n",++pnum);}
#line 1954 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(methodcall->..id(elist) )\n",++pnum);}
#line 1960 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(elist->expr exprs)\n",++pnum);}
#line 1966 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(elist->  )\n",++pnum);}
#line 1972 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 260 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(exprs->COMMA expr epxrs) \n",++pnum);}
#line 1978 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 261 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(exprs->   )\n",++pnum);}
#line 1984 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 264 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(objectdef->[elist])\n",++pnum);}
#line 1990 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 265 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(objectdef->[indexed] )\n",++pnum);}
#line 1996 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(indexed->indexedelem indexedelems)\n",++pnum);}
#line 2002 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 272 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(indexedelems-> ,indexedelem indexedelems)\n",++pnum);}
#line 2008 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(indexedelems->  )\n",++pnum);}
#line 2014 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 276 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(indexedelem ->{ expr : expr })\n",++pnum);}
#line 2020 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 278 "parser.y" /* yacc.c:1646  */
    { ++scope;}
#line 2026 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 278 "parser.y" /* yacc.c:1646  */
    {Hide(scope--); printf("(%d)(block->{stmts})\n",++pnum);}
#line 2032 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 281 "parser.y" /* yacc.c:1646  */
    {insert(3,MakeFunctionName(namef++),scope,yylineno);}
#line 2038 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 281 "parser.y" /* yacc.c:1646  */
    {++scope;}
#line 2044 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 281 "parser.y" /* yacc.c:1646  */
    {scope--;}
#line 2050 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 281 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(funcdef->function (idlist) block)\n",++pnum);}
#line 2056 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 282 "parser.y" /* yacc.c:1646  */
    {LookUpFunction(scope,(yyvsp[0].strVal),yylineno);}
#line 2062 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 282 "parser.y" /* yacc.c:1646  */
    {++scope;}
#line 2068 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 282 "parser.y" /* yacc.c:1646  */
    {scope--;}
#line 2074 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 282 "parser.y" /* yacc.c:1646  */
    { printf("(%d)(funcdef->function (idlist) block )\n",++pnum);}
#line 2080 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 285 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(const->NUMBER)\n",++pnum);}
#line 2086 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 286 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(const->STRING)\n",++pnum);}
#line 2092 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 287 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(const->TRUE)\n",++pnum);}
#line 2098 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 288 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(const->FALSE)\n",++pnum);}
#line 2104 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(const->NIL)\n",++pnum);}
#line 2110 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 291 "parser.y" /* yacc.c:1646  */
    {LookUpFormal((yyvsp[0].strVal) ,yylineno,scope);}
#line 2116 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 291 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(idlist->ID IDS)\n",++pnum);}
#line 2122 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 292 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(idlist-> )\n",++pnum);}
#line 2128 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 295 "parser.y" /* yacc.c:1646  */
    {LookUpFormal((yyvsp[0].strVal) ,yylineno,scope);}
#line 2134 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 295 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(IDS->COMMA ID IDS)\n",++pnum);}
#line 2140 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 296 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(IDS-> )\n",++pnum);}
#line 2146 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 298 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(fstmt->(expr) stmt )\n",++pnum);}
#line 2152 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 299 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(ifstmt->if (expr) stmt else stmt ) \n",++pnum);}
#line 2158 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 301 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(whilestmt->while ( expr ) stmt ) \n",++pnum);}
#line 2164 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 303 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(forstmt->for (elist;expr;elist) stmt )\n",++pnum);}
#line 2170 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(returnstmt->return ;)\n",++pnum);}
#line 2176 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 307 "parser.y" /* yacc.c:1646  */
    {printf("(%d)(returnstmt->return expr;)\n",++pnum);}
#line 2182 "parser.c" /* yacc.c:1646  */
    break;


#line 2186 "parser.c" /* yacc.c:1646  */
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
#line 312 "parser.y" /* yacc.c:1906  */


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
    InitHash();
    yyparse();
   // display();
    PrintScopes();
    
    return 0;
}





