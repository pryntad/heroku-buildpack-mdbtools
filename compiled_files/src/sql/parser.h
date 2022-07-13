/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    NAME = 259,                    /* NAME  */
    PATH = 260,                    /* PATH  */
    STRING = 261,                  /* STRING  */
    NUMBER = 262,                  /* NUMBER  */
    OPENING = 263,                 /* OPENING  */
    CLOSING = 264,                 /* CLOSING  */
    SELECT = 265,                  /* SELECT  */
    FROM = 266,                    /* FROM  */
    WHERE = 267,                   /* WHERE  */
    CONNECT = 268,                 /* CONNECT  */
    DISCONNECT = 269,              /* DISCONNECT  */
    TO = 270,                      /* TO  */
    LIST = 271,                    /* LIST  */
    TABLES = 272,                  /* TABLES  */
    AND = 273,                     /* AND  */
    OR = 274,                      /* OR  */
    NOT = 275,                     /* NOT  */
    LIMIT = 276,                   /* LIMIT  */
    COUNT = 277,                   /* COUNT  */
    STRPTIME = 278,                /* STRPTIME  */
    DESCRIBE = 279,                /* DESCRIBE  */
    TABLE = 280,                   /* TABLE  */
    TOP = 281,                     /* TOP  */
    PERCENT = 282,                 /* PERCENT  */
    LTEQ = 283,                    /* LTEQ  */
    GTEQ = 284,                    /* GTEQ  */
    NEQ = 285,                     /* NEQ  */
    LIKE = 286,                    /* LIKE  */
    ILIKE = 287,                   /* ILIKE  */
    IS = 288,                      /* IS  */
    NUL = 289,                     /* NUL  */
    EQ = 290,                      /* EQ  */
    LT = 291,                      /* LT  */
    GT = 292                       /* GT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENT 258
#define NAME 259
#define PATH 260
#define STRING 261
#define NUMBER 262
#define OPENING 263
#define CLOSING 264
#define SELECT 265
#define FROM 266
#define WHERE 267
#define CONNECT 268
#define DISCONNECT 269
#define TO 270
#define LIST 271
#define TABLES 272
#define AND 273
#define OR 274
#define NOT 275
#define LIMIT 276
#define COUNT 277
#define STRPTIME 278
#define DESCRIBE 279
#define TABLE 280
#define TOP 281
#define PERCENT 282
#define LTEQ 283
#define GTEQ 284
#define NEQ 285
#define LIKE 286
#define ILIKE 287
#define IS 288
#define NUL 289
#define EQ 290
#define LT 291
#define GT 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 55 "parser.y"

	char *name;
	double dval;
	int ival;

#line 147 "parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (struct sql_context* parser_ctx);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
