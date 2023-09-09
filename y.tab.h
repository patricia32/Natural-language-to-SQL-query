/* A Bison parser, made by GNU Bison 3.8.2.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    SELECT = 258,                  /* SELECT  */
    OF = 259,                      /* OF  */
    AND = 260,                     /* AND  */
    LESS_THAN = 261,               /* LESS_THAN  */
    EQUALS_WITH = 262,             /* EQUALS_WITH  */
    GREATER_THAN = 263,            /* GREATER_THAN  */
    AT_LEAST = 264,                /* AT_LEAST  */
    AT_MOST = 265,                 /* AT_MOST  */
    ABOUT = 266,                   /* ABOUT  */
    CREATE = 267,                  /* CREATE  */
    TABLE = 268,                   /* TABLE  */
    CONTAINS = 269,                /* CONTAINS  */
    DELETE = 270,                  /* DELETE  */
    CLEAR = 271,                   /* CLEAR  */
    ROW = 272,                     /* ROW  */
    DATA = 273,                    /* DATA  */
    THE = 274,                     /* THE  */
    ADD = 275,                     /* ADD  */
    TO = 276,                      /* TO  */
    TEXT = 277,                    /* TEXT  */
    ALL = 278,                     /* ALL  */
    WITH = 279,                    /* WITH  */
    ARTICLE = 280,                 /* ARTICLE  */
    NAME = 281,                    /* NAME  */
    ORDERED = 282,                 /* ORDERED  */
    BY = 283,                      /* BY  */
    ASCENDING = 284,               /* ASCENDING  */
    DESCENDING = 285,              /* DESCENDING  */
    CALLED = 286,                  /* CALLED  */
    VARCHAR = 287,                 /* VARCHAR  */
    INT = 288,                     /* INT  */
    FLOAT = 289,                   /* FLOAT  */
    BIT = 290,                     /* BIT  */
    DATETIME = 291,                /* DATETIME  */
    DATABASE = 292,                /* DATABASE  */
    DROP = 293,                    /* DROP  */
    NOT = 294,                     /* NOT  */
    NULL1 = 295,                   /* NULL1  */
    FROM = 296,                    /* FROM  */
    COLUMN = 297,                  /* COLUMN  */
    INTEGER = 298,                 /* INTEGER  */
    PRIMARY_KEY = 299,             /* PRIMARY_KEY  */
    FOREIGN_KEY = 300              /* FOREIGN_KEY  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SELECT 258
#define OF 259
#define AND 260
#define LESS_THAN 261
#define EQUALS_WITH 262
#define GREATER_THAN 263
#define AT_LEAST 264
#define AT_MOST 265
#define ABOUT 266
#define CREATE 267
#define TABLE 268
#define CONTAINS 269
#define DELETE 270
#define CLEAR 271
#define ROW 272
#define DATA 273
#define THE 274
#define ADD 275
#define TO 276
#define TEXT 277
#define ALL 278
#define WITH 279
#define ARTICLE 280
#define NAME 281
#define ORDERED 282
#define BY 283
#define ASCENDING 284
#define DESCENDING 285
#define CALLED 286
#define VARCHAR 287
#define INT 288
#define FLOAT 289
#define BIT 290
#define DATETIME 291
#define DATABASE 292
#define DROP 293
#define NOT 294
#define NULL1 295
#define FROM 296
#define COLUMN 297
#define INTEGER 298
#define PRIMARY_KEY 299
#define FOREIGN_KEY 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "translate.y"
char *s; int d;

#line 160 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
