/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 77 "parser.y" /* yacc.c:1909  */

int intVal;
double doubleVal;
char*  strVal;

#line 168 "parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
