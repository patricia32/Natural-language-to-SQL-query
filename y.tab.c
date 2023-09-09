/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "translate.y"

#include <stdio.h>
#include <string.h>
extern void yyerror(char *s);
char* ops(char *v1, char *v2, char *v3);
int variables[] = {};
int current;
char* process_table_name(char* text);
char* construct_list(char* text1, char* text2);
char* construct_select(char* select, char* from);
char* construct_where(char* text1, char* comparing, char* text2);
char* construct_nested_select(char* text1, char* text2, char* text3);

#line 85 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 231 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SELECT = 3,                     /* SELECT  */
  YYSYMBOL_OF = 4,                         /* OF  */
  YYSYMBOL_AND = 5,                        /* AND  */
  YYSYMBOL_LESS_THAN = 6,                  /* LESS_THAN  */
  YYSYMBOL_EQUALS_WITH = 7,                /* EQUALS_WITH  */
  YYSYMBOL_GREATER_THAN = 8,               /* GREATER_THAN  */
  YYSYMBOL_AT_LEAST = 9,                   /* AT_LEAST  */
  YYSYMBOL_AT_MOST = 10,                   /* AT_MOST  */
  YYSYMBOL_ABOUT = 11,                     /* ABOUT  */
  YYSYMBOL_CREATE = 12,                    /* CREATE  */
  YYSYMBOL_TABLE = 13,                     /* TABLE  */
  YYSYMBOL_CONTAINS = 14,                  /* CONTAINS  */
  YYSYMBOL_DELETE = 15,                    /* DELETE  */
  YYSYMBOL_CLEAR = 16,                     /* CLEAR  */
  YYSYMBOL_ROW = 17,                       /* ROW  */
  YYSYMBOL_DATA = 18,                      /* DATA  */
  YYSYMBOL_THE = 19,                       /* THE  */
  YYSYMBOL_ADD = 20,                       /* ADD  */
  YYSYMBOL_TO = 21,                        /* TO  */
  YYSYMBOL_TEXT = 22,                      /* TEXT  */
  YYSYMBOL_ALL = 23,                       /* ALL  */
  YYSYMBOL_WITH = 24,                      /* WITH  */
  YYSYMBOL_ARTICLE = 25,                   /* ARTICLE  */
  YYSYMBOL_NAME = 26,                      /* NAME  */
  YYSYMBOL_ORDERED = 27,                   /* ORDERED  */
  YYSYMBOL_BY = 28,                        /* BY  */
  YYSYMBOL_ASCENDING = 29,                 /* ASCENDING  */
  YYSYMBOL_DESCENDING = 30,                /* DESCENDING  */
  YYSYMBOL_CALLED = 31,                    /* CALLED  */
  YYSYMBOL_VARCHAR = 32,                   /* VARCHAR  */
  YYSYMBOL_INT = 33,                       /* INT  */
  YYSYMBOL_FLOAT = 34,                     /* FLOAT  */
  YYSYMBOL_BIT = 35,                       /* BIT  */
  YYSYMBOL_DATETIME = 36,                  /* DATETIME  */
  YYSYMBOL_DATABASE = 37,                  /* DATABASE  */
  YYSYMBOL_DROP = 38,                      /* DROP  */
  YYSYMBOL_NOT = 39,                       /* NOT  */
  YYSYMBOL_NULL1 = 40,                     /* NULL1  */
  YYSYMBOL_FROM = 41,                      /* FROM  */
  YYSYMBOL_COLUMN = 42,                    /* COLUMN  */
  YYSYMBOL_INTEGER = 43,                   /* INTEGER  */
  YYSYMBOL_PRIMARY_KEY = 44,               /* PRIMARY_KEY  */
  YYSYMBOL_FOREIGN_KEY = 45,               /* FOREIGN_KEY  */
  YYSYMBOL_46_ = 46,                       /* '.'  */
  YYSYMBOL_47_n_ = 47,                     /* '\n'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_statement = 51,                 /* statement  */
  YYSYMBOL_select = 52,                    /* select  */
  YYSYMBOL_selectClause = 53,              /* selectClause  */
  YYSYMBOL_select_from = 54,               /* select_from  */
  YYSYMBOL_create = 55,                    /* create  */
  YYSYMBOL_drop = 56,                      /* drop  */
  YYSYMBOL_delete = 57,                    /* delete  */
  YYSYMBOL_alter = 58,                     /* alter  */
  YYSYMBOL_delete_or_drop = 59,            /* delete_or_drop  */
  YYSYMBOL_table_or_db = 60,               /* table_or_db  */
  YYSYMBOL_fields_list = 61,               /* fields_list  */
  YYSYMBOL_field_datatype = 62,            /* field_datatype  */
  YYSYMBOL_key_type = 63,                  /* key_type  */
  YYSYMBOL_data_types = 64,                /* data_types  */
  YYSYMBOL_whereClause = 65,               /* whereClause  */
  YYSYMBOL_nested_select = 66,             /* nested_select  */
  YYSYMBOL_orderClause = 67,               /* orderClause  */
  YYSYMBOL_ordering = 68,                  /* ordering  */
  YYSYMBOL_comparing = 69,                 /* comparing  */
  YYSYMBOL_columns = 70,                   /* columns  */
  YYSYMBOL_manyColumns = 71,               /* manyColumns  */
  YYSYMBOL_column_title = 72,              /* column_title  */
  YYSYMBOL_text = 73                       /* text  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    48,     2,    46,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    25,    25,    26,    27,    30,    31,    32,    33,    34,
      37,    40,    41,    42,    43,    46,    49,    51,    53,    54,
      55,    58,    59,    60,    63,    64,    65,    66,    67,    68,
      73,    74,    77,    78,    81,    82,    85,    86,    87,    90,
      91,    92,    93,    94,    97,    98,   101,   102,   103,   104,
     105,   108,   109,   110,   111,   114,   115,   116,   117,   120,
     121,   124,   125,   128,   129,   130,   131,   132,   135,   136,
     137,   140,   141,   142,   145,   146,   149,   150,   151
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SELECT", "OF", "AND",
  "LESS_THAN", "EQUALS_WITH", "GREATER_THAN", "AT_LEAST", "AT_MOST",
  "ABOUT", "CREATE", "TABLE", "CONTAINS", "DELETE", "CLEAR", "ROW", "DATA",
  "THE", "ADD", "TO", "TEXT", "ALL", "WITH", "ARTICLE", "NAME", "ORDERED",
  "BY", "ASCENDING", "DESCENDING", "CALLED", "VARCHAR", "INT", "FLOAT",
  "BIT", "DATETIME", "DATABASE", "DROP", "NOT", "NULL1", "FROM", "COLUMN",
  "INTEGER", "PRIMARY_KEY", "FOREIGN_KEY", "'.'", "'\\n'", "','",
  "$accept", "program", "statement", "select", "selectClause",
  "select_from", "create", "drop", "delete", "alter", "delete_or_drop",
  "table_or_db", "fields_list", "field_datatype", "key_type", "data_types",
  "whereClause", "nested_select", "orderClause", "ordering", "comparing",
  "columns", "manyColumns", "column_title", "text", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -123,     6,  -123,   -17,    37,    -5,   -11,    -6,    15,  -123,
      31,  -123,  -123,     0,  -123,  -123,  -123,  -123,    39,  -123,
      56,  -123,    72,  -123,  -123,    56,    75,    -2,  -123,    65,
      18,    70,    74,     4,    76,    28,  -123,    66,    67,    78,
    -123,  -123,  -123,    53,  -123,    92,   -12,  -123,  -123,  -123,
      93,    43,    43,    91,    86,    87,  -123,    79,    97,   104,
      99,  -123,    68,  -123,  -123,   102,    -1,   105,    32,   106,
     107,  -123,  -123,    96,  -123,    94,    85,  -123,   108,  -123,
    -123,  -123,    28,   109,   110,   111,  -123,     2,   121,  -123,
    -123,  -123,  -123,  -123,    98,   113,    28,    28,    68,  -123,
    -123,  -123,  -123,  -123,    56,    27,   103,  -123,   114,   116,
     117,  -123,  -123,   115,  -123,   128,   120,   122,  -123,   112,
     130,  -123,  -123,  -123,  -123,  -123,    56,  -123,    56,  -123,
    -123,   132,   133,  -123,  -123,   135,    49,  -123,    74,  -123,
    -123,    28,  -123,   124,  -123,  -123,  -123,   -16,  -123
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     1,     0,     0,     0,    33,     0,     0,    32,
       0,     5,    10,    14,     6,     7,     8,     9,     0,     3,
       0,    76,     0,    77,    78,     0,     0,    73,    75,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,    11,
      54,    13,    34,     0,    35,     0,     0,    74,    68,    15,
      69,     0,     0,    18,     0,     0,    20,     0,     0,     0,
       0,    28,     0,    44,    45,     0,    38,     0,     0,     0,
       0,    62,    61,     0,    12,     0,     0,    21,     0,    70,
      72,    71,     0,     0,     0,     0,    24,     0,     0,    49,
      46,    47,    50,    48,    43,     0,     0,     0,     0,    63,
      64,    65,    66,    67,     0,    53,     0,    60,     0,     0,
       0,    22,    17,     0,    19,     0,     0,     0,    25,     0,
       0,    37,    36,    39,    52,    55,     0,    56,     0,    59,
      23,     0,     0,    29,    26,     0,    42,    30,    58,    51,
      31,     0,    27,     0,    40,    57,    16,     0,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,   118,   -80,    54,  -122,    51,   -31,  -123,   119,  -123,
     -38,  -123,   101,   100,   -20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    46,    65,    66,    67,    94,    39,    40,    41,    73,
     104,    25,    26,    27,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,    57,   112,    51,    96,    49,     2,     3,    29,     4,
      77,    32,    33,   116,   144,    58,    34,   122,     5,    78,
      30,     6,     7,    59,    37,   148,     8,    38,    63,    64,
      19,    54,    31,    99,   100,   101,   102,   103,    99,   100,
     101,   102,   103,   117,     9,    60,    52,    97,   105,    21,
      62,    37,    42,    23,    21,    55,    20,    35,    23,    21,
      22,   146,    20,    23,    43,    21,    42,   126,   128,    23,
      24,   143,    63,    64,   125,    24,    44,    36,    21,    50,
      24,    45,    23,    48,   124,   127,    24,    53,    68,    61,
      44,    69,    56,    63,    64,    70,    71,    72,    37,    24,
      89,    90,    91,    92,    93,    38,   138,   145,   139,    99,
     100,   101,   102,   103,    76,    82,    79,    83,    84,    86,
      85,    88,    87,    95,   108,   109,   110,    98,   106,   107,
     111,   113,   114,   115,   118,   120,   129,   119,   130,   131,
     132,   133,   134,   137,   135,   140,   147,   141,   142,   123,
     121,    80,   136,    81,     0,     0,     0,     0,    74,     0,
       0,    75
};

static const yytype_int16 yycheck[] =
{
      20,    32,    82,     5,     5,    25,     0,     1,    13,     3,
      22,    22,    23,    11,   136,    11,    22,    97,    12,    31,
      25,    15,    16,    19,    24,   147,    20,    27,    44,    45,
      47,    13,    37,     6,     7,     8,     9,    10,     6,     7,
       8,     9,    10,    41,    38,    41,    48,    48,    68,    22,
      22,    24,    13,    26,    22,    37,    19,    42,    26,    22,
      23,   141,    19,    26,    25,    22,    13,   105,   106,    26,
      43,    22,    44,    45,   105,    43,    37,    46,    22,     4,
      43,    42,    26,    11,   104,   105,    43,    22,    22,    13,
      37,    25,    22,    44,    45,    28,    29,    30,    24,    43,
      32,    33,    34,    35,    36,    27,   126,   138,   128,     6,
       7,     8,     9,    10,    22,    24,    23,    31,    31,    22,
      41,    22,    18,    21,    28,    31,    41,    22,    22,    22,
      22,    22,    22,    22,    13,    22,    22,    39,    22,    22,
      25,    13,    22,    13,    22,    13,    22,    14,    13,    98,
      96,    51,    40,    52,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,     0,     1,     3,    12,    15,    16,    20,    38,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    47,
      19,    22,    23,    26,    43,    70,    71,    72,    73,    13,
      25,    37,    22,    23,    22,    42,    46,    24,    27,    65,
      66,    67,    13,    25,    37,    42,    60,    73,    11,    73,
       4,     5,    48,    22,    13,    37,    22,    65,    11,    19,
      41,    13,    22,    44,    45,    61,    62,    63,    22,    25,
      28,    29,    30,    68,    67,    60,    22,    22,    31,    23,
      72,    71,    24,    31,    31,    41,    22,    18,    22,    32,
      33,    34,    35,    36,    64,    21,     5,    48,    22,     6,
       7,     8,     9,    10,    69,    73,    22,    22,    28,    31,
      41,    22,    61,    22,    22,    22,    11,    41,    13,    39,
      22,    62,    61,    64,    73,    65,    69,    73,    69,    22,
      22,    22,    25,    13,    22,    22,    40,    13,    73,    73,
      13,    14,    13,    22,    63,    65,    61,    22,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    50,    51,    51,    51,    51,    51,
      52,    53,    53,    53,    53,    54,    55,    55,    55,    55,
      55,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    66,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    72,    72,    73,    73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     0,     1,     1,     1,     1,     1,
       1,     2,     3,     2,     1,     3,     8,     5,     3,     5,
       3,     3,     4,     5,     4,     5,     6,     7,     3,     6,
       6,     6,     1,     1,     1,     1,     3,     3,     1,     3,
       5,     7,     4,     2,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     3,     1,     4,     4,     6,     5,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     3,     1,     2,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: program statement '.'  */
#line 25 "translate.y"
                                                                { printf("%s;\n", (yyvsp[-1].s));}
#line 1383 "y.tab.c"
    break;

  case 3: /* program: program error '\n'  */
#line 26 "translate.y"
                                                                        { yyerrok; }
#line 1389 "y.tab.c"
    break;

  case 11: /* selectClause: select_from whereClause  */
#line 40 "translate.y"
                                                                        { sprintf((yyval.s), "%s %s", (yyvsp[-1].s), (yyvsp[0].s)); }
#line 1395 "y.tab.c"
    break;

  case 12: /* selectClause: select_from whereClause orderClause  */
#line 41 "translate.y"
                                                                        { sprintf((yyval.s), "%s %s %s", (yyvsp[-2].s), (yyvsp[-1].s), (yyvsp[0].s)); }
#line 1401 "y.tab.c"
    break;

  case 13: /* selectClause: select_from orderClause  */
#line 42 "translate.y"
                                                                                        { sprintf((yyval.s), "%s %s", (yyvsp[-1].s), (yyvsp[0].s)); }
#line 1407 "y.tab.c"
    break;

  case 14: /* selectClause: select_from  */
#line 43 "translate.y"
                                                                                                { (yyval.s) = (yyvsp[0].s);}
#line 1413 "y.tab.c"
    break;

  case 15: /* select_from: SELECT columns text  */
#line 46 "translate.y"
                                                                                { (yyval.s) = construct_select((yyvsp[-1].s), (yyvsp[0].s));}
#line 1419 "y.tab.c"
    break;

  case 16: /* create: CREATE ARTICLE TABLE CALLED TEXT ARTICLE CONTAINS fields_list  */
#line 50 "translate.y"
                                                {char rez[500];  char c[500]; sprintf(rez,"CREATE TABLE %s(\n ", (yyvsp[-3].s)); strcpy(c, (yyvsp[0].s)); strcat(rez, c); strcat(rez, ")"); (yyval.s) = rez;}
#line 1425 "y.tab.c"
    break;

  case 17: /* create: CREATE TABLE TEXT WITH fields_list  */
#line 52 "translate.y"
                                                {char rez[500];  char c[500]; sprintf(rez,"CREATE TABLE %s(\n ", (yyvsp[-2].s)); strcpy(c, (yyvsp[0].s)); strcat(rez, c); strcat(rez, ")"); (yyval.s) = rez;}
#line 1431 "y.tab.c"
    break;

  case 18: /* create: CREATE TABLE TEXT  */
#line 53 "translate.y"
                                                                                        {char rez[500]; char c[500]; sprintf(rez,"CREATE TABLE %s(\n ", (yyvsp[0].s)); strcat(rez, ")"); (yyval.s) = rez;}
#line 1437 "y.tab.c"
    break;

  case 19: /* create: CREATE ARTICLE DATABASE CALLED TEXT  */
#line 54 "translate.y"
                                                                        {char rez[500]; char c[500]; sprintf(rez,"CREATE DATABASE %s", (yyvsp[0].s));   (yyval.s) = rez;}
#line 1443 "y.tab.c"
    break;

  case 20: /* create: CREATE DATABASE TEXT  */
#line 55 "translate.y"
                                                                                        {char rez[500]; char c[500]; sprintf(rez,"CREATE DATABASE %s", (yyvsp[0].s));    (yyval.s) = rez;}
#line 1449 "y.tab.c"
    break;

  case 21: /* drop: delete_or_drop table_or_db TEXT  */
#line 58 "translate.y"
                                                                                         {char rez[500];  char c[500]; sprintf(rez,"DROP %s %s", (yyvsp[-1].s), (yyvsp[0].s));  (yyval.s) = rez;}
#line 1455 "y.tab.c"
    break;

  case 22: /* drop: delete_or_drop table_or_db CALLED TEXT  */
#line 59 "translate.y"
                                                                                         {char rez[500];  char c[500]; sprintf(rez,"DROP %s %s", (yyvsp[-2].s), (yyvsp[0].s));   (yyval.s) = rez;}
#line 1461 "y.tab.c"
    break;

  case 23: /* drop: delete_or_drop ARTICLE table_or_db CALLED TEXT  */
#line 60 "translate.y"
                                                                                 {char rez[500];  char c[500]; sprintf(rez,"DROP %s %s", (yyvsp[-2].s), (yyvsp[0].s));   (yyval.s) = rez;}
#line 1467 "y.tab.c"
    break;

  case 24: /* delete: DELETE ALL ABOUT TEXT  */
#line 63 "translate.y"
                                                                                  {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", (yyvsp[0].s));  (yyval.s) = rez;}
#line 1473 "y.tab.c"
    break;

  case 25: /* delete: DELETE ALL FROM TEXT TABLE  */
#line 64 "translate.y"
                                                                                  {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", (yyvsp[-1].s));  (yyval.s) = rez;}
#line 1479 "y.tab.c"
    break;

  case 26: /* delete: DELETE ALL THE DATA ABOUT TEXT  */
#line 65 "translate.y"
                                                                                  {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", (yyvsp[0].s));  (yyval.s) = rez;}
#line 1485 "y.tab.c"
    break;

  case 27: /* delete: DELETE ALL THE DATA FROM TEXT TABLE  */
#line 66 "translate.y"
                                                                          {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", (yyvsp[-1].s));  (yyval.s) = rez;}
#line 1491 "y.tab.c"
    break;

  case 28: /* delete: CLEAR TEXT TABLE  */
#line 67 "translate.y"
                                                                                                  {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s", (yyvsp[-1].s));  (yyval.s) = rez;}
#line 1497 "y.tab.c"
    break;

  case 29: /* delete: DELETE TEXT whereClause FROM TEXT TABLE  */
#line 68 "translate.y"
                                                                          {char rez[500]; char c[500]; sprintf(rez,"DELETE FROM %s %s", (yyvsp[-1].s), (yyvsp[-3].s));  (yyval.s) = rez;}
#line 1503 "y.tab.c"
    break;

  case 30: /* alter: ADD COLUMN fields_list TO TEXT TABLE  */
#line 73 "translate.y"
                                                                {char rez[500]; char c[500]; sprintf(rez,"ALTER TABLE %s \nADD %s", (yyvsp[-1].s), (yyvsp[-3].s)); (yyval.s) = rez;}
#line 1509 "y.tab.c"
    break;

  case 31: /* alter: delete_or_drop COLUMN TEXT FROM TEXT TABLE  */
#line 74 "translate.y"
                                                                                {char rez[500]; char c[500]; sprintf(rez,"ALTER TABLE %s \nDROP COLUMN %s", (yyvsp[-1].s), (yyvsp[-3].s)); (yyval.s) = rez;}
#line 1515 "y.tab.c"
    break;

  case 32: /* delete_or_drop: DROP  */
#line 77 "translate.y"
                                                                                        { (yyval.s) = "DROP";}
#line 1521 "y.tab.c"
    break;

  case 33: /* delete_or_drop: DELETE  */
#line 78 "translate.y"
                                                                                                        { (yyval.s) = "DELETE";}
#line 1527 "y.tab.c"
    break;

  case 34: /* table_or_db: TABLE  */
#line 81 "translate.y"
                                                                                                { (yyval.s) = "TABLE";}
#line 1533 "y.tab.c"
    break;

  case 35: /* table_or_db: DATABASE  */
#line 82 "translate.y"
                                                                                                        { (yyval.s) = "DATABASE";}
#line 1539 "y.tab.c"
    break;

  case 36: /* fields_list: field_datatype ',' fields_list  */
#line 85 "translate.y"
                                                                        { (yyval.s) = construct_list((yyvsp[-2].s), (yyvsp[0].s));}
#line 1545 "y.tab.c"
    break;

  case 37: /* fields_list: field_datatype AND field_datatype  */
#line 86 "translate.y"
                                                                                { (yyval.s) = construct_list((yyvsp[-2].s), (yyvsp[0].s));}
#line 1551 "y.tab.c"
    break;

  case 38: /* fields_list: field_datatype  */
#line 87 "translate.y"
                                                                                                { (yyval.s) = construct_list((yyvsp[0].s), "");}
#line 1557 "y.tab.c"
    break;

  case 39: /* field_datatype: key_type TEXT data_types  */
#line 90 "translate.y"
                                                                        { char rez[70]=""; strcat(rez, (yyvsp[-1].s)); strcat(rez, " "); strcat(rez, (yyvsp[0].s)); strcat(rez, " NOT NULL"); strcat(rez, (yyvsp[-2].s)); (yyval.s) = rez;}
#line 1563 "y.tab.c"
    break;

  case 40: /* field_datatype: TEXT data_types NOT NULL1 key_type  */
#line 91 "translate.y"
                                                                        { char rez[70]; strcpy((yyval.s), (yyvsp[-4].s)); strcat((yyval.s), " "); strcat((yyval.s), (yyvsp[-3].s)); strcat((yyval.s), " NOT NULL"); strcat((yyval.s), (yyvsp[0].s));}
#line 1569 "y.tab.c"
    break;

  case 41: /* field_datatype: TEXT data_types NOT NULL1 TEXT TEXT key_type  */
#line 92 "translate.y"
                                                                                { char rez[50]; strcpy((yyval.s), (yyvsp[-6].s)); strcat((yyval.s), " "); strcat((yyval.s), (yyvsp[-5].s)); strcat((yyval.s), " NOT NULL"); strcat((yyval.s), (yyvsp[0].s));}
#line 1575 "y.tab.c"
    break;

  case 42: /* field_datatype: TEXT data_types NOT NULL1  */
#line 93 "translate.y"
                                                                                        { char rez[50]; strcpy((yyval.s), (yyvsp[-3].s)); strcat((yyval.s), " "); strcat((yyval.s), (yyvsp[-2].s)); strcat((yyval.s), " NOT NULL");}
#line 1581 "y.tab.c"
    break;

  case 43: /* field_datatype: TEXT data_types  */
#line 94 "translate.y"
                                                                                                { char rez[50]; strcpy((yyval.s), (yyvsp[-1].s)); strcat((yyval.s), " "); strcat((yyval.s), (yyvsp[0].s));}
#line 1587 "y.tab.c"
    break;

  case 44: /* key_type: PRIMARY_KEY  */
#line 97 "translate.y"
                                                                                        { (yyval.s) = " PRIMARY KEY";}
#line 1593 "y.tab.c"
    break;

  case 45: /* key_type: FOREIGN_KEY  */
#line 98 "translate.y"
                                                                                                { (yyval.s) = " FOREIGN_KEY";}
#line 1599 "y.tab.c"
    break;

  case 46: /* data_types: INT  */
#line 101 "translate.y"
                                                                                                { (yyval.s) = "INT";}
#line 1605 "y.tab.c"
    break;

  case 47: /* data_types: FLOAT  */
#line 102 "translate.y"
                                                                                                        { (yyval.s) = "FLOAT";}
#line 1611 "y.tab.c"
    break;

  case 48: /* data_types: DATETIME  */
#line 103 "translate.y"
                                                                                                        { (yyval.s) = "DATETIME";}
#line 1617 "y.tab.c"
    break;

  case 49: /* data_types: VARCHAR  */
#line 104 "translate.y"
                                                                                                        { (yyval.s) = "VARCHAR(255)";}
#line 1623 "y.tab.c"
    break;

  case 50: /* data_types: BIT  */
#line 105 "translate.y"
                                                                                                        { (yyval.s) = "BIT";}
#line 1629 "y.tab.c"
    break;

  case 51: /* whereClause: WITH ARTICLE TEXT comparing text  */
#line 108 "translate.y"
                                                                        { (yyval.s) = construct_where((yyvsp[-2].s), (yyvsp[-1].s), (yyvsp[0].s));}
#line 1635 "y.tab.c"
    break;

  case 52: /* whereClause: WITH TEXT comparing text  */
#line 109 "translate.y"
                                                                                        { char str[30]; sprintf(str,"%s", (yyvsp[0].s)); (yyval.s) = construct_where((yyvsp[-2].s), (yyvsp[-1].s), str);}
#line 1641 "y.tab.c"
    break;

  case 53: /* whereClause: WITH TEXT text  */
#line 110 "translate.y"
                                                                        {if(strstr((yyvsp[0].s),"people WHERE name = ")-(yyvsp[0].s)==0)(yyvsp[0].s)=(yyvsp[0].s)+20;char str[30];sprintf(str,"%s",(yyvsp[0].s));(yyval.s)=construct_where((yyvsp[-1].s),"=", str);}
#line 1647 "y.tab.c"
    break;

  case 55: /* nested_select: WITH TEXT text whereClause  */
#line 114 "translate.y"
                                                {puts("1");if(strstr((yyvsp[-1].s),"people WHERE name = ")-(yyvsp[-1].s)==0)(yyvsp[-1].s)=(yyvsp[-1].s)+20;char rez[100]; strcpy(rez, construct_where((yyvsp[-2].s),"=", (yyvsp[-1].s))); (yyval.s) = construct_nested_select((yyvsp[-2].s), (yyvsp[-1].s), rez);}
#line 1653 "y.tab.c"
    break;

  case 56: /* nested_select: WITH TEXT text text  */
#line 115 "translate.y"
                                                            {puts("2");if(strstr((yyvsp[0].s),"people WHERE name = ")-(yyvsp[0].s)==0)(yyvsp[0].s)=(yyvsp[0].s)+20;char rez[100]; strcpy(rez, construct_where((yyvsp[-1].s),"=", (yyvsp[0].s))); (yyval.s) = construct_nested_select((yyvsp[-2].s), (yyvsp[-1].s), rez);}
#line 1659 "y.tab.c"
    break;

  case 57: /* nested_select: WITH TEXT text comparing text whereClause  */
#line 116 "translate.y"
                                                                              {puts("3");if(strstr((yyvsp[-1].s),"people WHERE name = ")-(yyvsp[-1].s)==0)(yyvsp[-1].s)=(yyvsp[-1].s)+20;char rez[100]; strcpy(rez, construct_nested_select((yyvsp[-1].s),(yyvsp[-2].s),(yyvsp[0].s))); (yyval.s) = construct_nested_select((yyvsp[-4].s), (yyvsp[-3].s), rez);}
#line 1665 "y.tab.c"
    break;

  case 58: /* nested_select: WITH TEXT text comparing text  */
#line 117 "translate.y"
                                                                                          {puts("4");if(strstr((yyvsp[0].s),"people WHERE name = ")-(yyvsp[0].s)==0)(yyvsp[0].s)=(yyvsp[0].s)+20;char rez[100]; strcpy(rez, construct_where((yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s))); (yyval.s) = construct_nested_select((yyvsp[-3].s), (yyvsp[-2].s), rez);}
#line 1671 "y.tab.c"
    break;

  case 59: /* orderClause: ORDERED ordering BY TEXT  */
#line 120 "translate.y"
                                                                        { strcpy ((yyval.s), "ORDER BY "); strcat((yyvsp[0].s), (yyvsp[-2].s)); strcat((yyval.s), (yyvsp[0].s));}
#line 1677 "y.tab.c"
    break;

  case 60: /* orderClause: ORDERED BY TEXT  */
#line 121 "translate.y"
                                                                                                { strcpy ((yyval.s), "ORDER BY "); strcat((yyval.s), (yyvsp[0].s)); }
#line 1683 "y.tab.c"
    break;

  case 61: /* ordering: DESCENDING  */
#line 124 "translate.y"
                                                                                        { (yyval.s) = " DESC";}
#line 1689 "y.tab.c"
    break;

  case 62: /* ordering: ASCENDING  */
#line 125 "translate.y"
                                                                                                { (yyval.s) = " ASC";}
#line 1695 "y.tab.c"
    break;

  case 63: /* comparing: LESS_THAN  */
#line 128 "translate.y"
                                                                                                { (yyval.s) = "<";}
#line 1701 "y.tab.c"
    break;

  case 64: /* comparing: EQUALS_WITH  */
#line 129 "translate.y"
                                                                                                { (yyval.s) = "=";}
#line 1707 "y.tab.c"
    break;

  case 65: /* comparing: GREATER_THAN  */
#line 130 "translate.y"
                                                                                                { (yyval.s) = ">";}
#line 1713 "y.tab.c"
    break;

  case 66: /* comparing: AT_LEAST  */
#line 131 "translate.y"
                                                                                                        { (yyval.s) = ">=";}
#line 1719 "y.tab.c"
    break;

  case 67: /* comparing: AT_MOST  */
#line 132 "translate.y"
                                                                                                        { (yyval.s) = "<=";}
#line 1725 "y.tab.c"
    break;

  case 68: /* columns: ALL ABOUT  */
#line 135 "translate.y"
                                                                                                { (yyval.s) = "*";}
#line 1731 "y.tab.c"
    break;

  case 71: /* manyColumns: column_title ',' manyColumns  */
#line 140 "translate.y"
                                                                { (yyval.s) = construct_list((yyvsp[-2].s), (yyvsp[0].s));}
#line 1737 "y.tab.c"
    break;

  case 72: /* manyColumns: column_title AND column_title  */
#line 141 "translate.y"
                                                                                { (yyval.s) = construct_list((yyvsp[-2].s), (yyvsp[0].s));}
#line 1743 "y.tab.c"
    break;

  case 73: /* manyColumns: column_title  */
#line 142 "translate.y"
                                                                                                { (yyval.s) = construct_list((yyvsp[0].s) ,"");}
#line 1749 "y.tab.c"
    break;

  case 74: /* column_title: THE text  */
#line 145 "translate.y"
                                                                                        { (yyval.s) = (yyvsp[0].s);}
#line 1755 "y.tab.c"
    break;

  case 75: /* column_title: text  */
#line 146 "translate.y"
                                                                                                        { (yyval.s) = (yyvsp[0].s);}
#line 1761 "y.tab.c"
    break;

  case 76: /* text: TEXT  */
#line 149 "translate.y"
                                        { strcpy((yyval.s), process_table_name((yyvsp[0].s)));}
#line 1767 "y.tab.c"
    break;

  case 77: /* text: NAME  */
#line 150 "translate.y"
                                                { char rez[50]; strcpy(rez, "people WHERE name = '"); strcat(rez, (yyvsp[0].s));  sprintf(rez,"people WHERE name = '%s'",(yyvsp[0].s)); strcpy((yyval.s), rez); }
#line 1773 "y.tab.c"
    break;

  case 78: /* text: INTEGER  */
#line 151 "translate.y"
                                                { (yyval.s) = (yyvsp[0].s);}
#line 1779 "y.tab.c"
    break;


#line 1783 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 153 "translate.y"

char* construct_select(char* select, char* from){
	char* rez = malloc(150*sizeof(char));
	strcpy(rez, "SELECT ");
	strcat(rez, select);
	strcat(rez, " FROM ");
	strcat(rez, from);
	return rez;
}
char* process_table_name(char* text){

	if(strcmp(text, "women") == 0) return "woman";
	if(strcmp(text, "men") == 0) return "man";
	
	if(strstr(text, "es") != NULL){
		int index = strstr(text, "es") - text;
		text[index] = '\0';
		if(text[index -1] == 'i')
			text[index -1 ] = 'y';
	}
	else if(strstr(text, "s") != NULL)
		text[strstr(text, "s") - text] = '\0';
		
	return text;
}

char* construct_list(char* text1, char* text2){
	if(strcmp(text2, "") != 0)
		strcat(text1, ", ");
	strcat(text1, text2);
	return text1;
}

char* construct_where(char* text1, char* comparing, char* text2){
	
	char rez[100];
	strcpy(rez, "WHERE ");
	strcat(rez, text1);
	strcat(rez, " ");
	strcat(rez, comparing);
	strcat(rez, " ");
	strcat(rez, text2);
	strcpy(text1, rez);
	return text1;
}

char* construct_nested_select(char* text1, char* text2, char* text3){
	char rez[150];
	strcpy(rez, "WHERE ");
	strcat(rez, text1);
	strcat(rez, "_id =");
	strcat(rez, " (SELECT id FROM ");
	strcat(rez, text1);
	strcat(rez, " ");
	strcat(rez, text3);
	strcat(rez,")");
	strcpy(text1, rez);
	return text1;
}
int main(){
	yyparse();
	return(1);
}



// SELECT

// show all about Ion.
// show the name and the age of Ion.
// show name and age of Ion.
// show name, brothers and age of Ion.
// show the age of all men with name Ion.
// show all about men with name Ion.

// show all about women with name Ana ordered by age.
// show name of all women ordered by name.
// show all about women with age at least 34 sorted descending by name.
// show the name of all women with age 34 sorted ascending by salary.

// NESTED SELECT
// show all about people with college name Utcn.
// show the name of girls with job location Cluj.
// show the name of all women with salary mean greater than 20000.
// find all about people with college name Utcn.
// find all about people with college technical with name Utcn.
// find the name of women with salary mean greater than people with salary 30000.



// CREATE

// create a table called people that contains name text not.
// create a table called people that contains name text and age number.
// create a table called people that contains name text, job text, salary number and date date and time.
// create table people.
// create table people with age number, name text.
// create a table called people that contains name text and age number not null.
// create table people with id number not null which is primary key.
// create table people with id number not null primary key.
// create table people with primary key id number.
// create table people with primary key id number and name text.
// create table people with primary key id number, name text.
// create table people with primary key id number and col text not null.
// create table people with primary key id number and col text not null foreign key.

// create the database called d.
// create a database called d.
// create database s.



// DROP

// delete database testDB2.
// drop the database called ed.
// delete table men.


// 	DELETE
// delete all about people.
// delete girls with age 34 from people table.
// delete girls with age greater than 18 from children table.
// clear men table.
// delete all the data about people.
// delete all the data from people table.

// ALTER
// add column age number to people table.
// add columns price number and release_date date and time to books table.
// drop column age from people table.










