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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         partial_acslparse
#define yylex           partial_acsllex
#define yyerror         partial_acslerror
#define yydebug         partial_acsldebug
#define yynerrs         partial_acslnerrs

/* First part of user prologue.  */
#line 22 "partial_bnfc_parser.y"

/* Begin C preamble code */

#include <algorithm> /* for std::reverse */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.H"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE partial_acsl_scan_string(const char *str, yyscan_t scanner);
extern void partial_acsl_delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void partial_acsllex_destroy(yyscan_t scanner);
extern char* partial_acslget_text(yyscan_t scanner);

extern yyscan_t partial_acsl_initialize_lexer(FILE * inp);

/* End C preamble code */

#line 105 "partial_bnfc_parser.tab.c"

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

#include "Bison.H"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__BANG = 4,                      /* _BANG  */
  YYSYMBOL__BANGEQ = 5,                    /* _BANGEQ  */
  YYSYMBOL__PERCENT = 6,                   /* _PERCENT  */
  YYSYMBOL__PERCENTEQ = 7,                 /* _PERCENTEQ  */
  YYSYMBOL__AMP = 8,                       /* _AMP  */
  YYSYMBOL__DAMP = 9,                      /* _DAMP  */
  YYSYMBOL__AMPEQ = 10,                    /* _AMPEQ  */
  YYSYMBOL__LPAREN = 11,                   /* _LPAREN  */
  YYSYMBOL__RPAREN = 12,                   /* _RPAREN  */
  YYSYMBOL__STAR = 13,                     /* _STAR  */
  YYSYMBOL__STAREQ = 14,                   /* _STAREQ  */
  YYSYMBOL__PLUS = 15,                     /* _PLUS  */
  YYSYMBOL__DPLUS = 16,                    /* _DPLUS  */
  YYSYMBOL__PLUSEQ = 17,                   /* _PLUSEQ  */
  YYSYMBOL__COMMA = 18,                    /* _COMMA  */
  YYSYMBOL__MINUS = 19,                    /* _MINUS  */
  YYSYMBOL__DMINUS = 20,                   /* _DMINUS  */
  YYSYMBOL__MINUSEQ = 21,                  /* _MINUSEQ  */
  YYSYMBOL__RARROW = 22,                   /* _RARROW  */
  YYSYMBOL__DOT = 23,                      /* _DOT  */
  YYSYMBOL__ELLIPSIS = 24,                 /* _ELLIPSIS  */
  YYSYMBOL__SLASH = 25,                    /* _SLASH  */
  YYSYMBOL__SLASHEQ = 26,                  /* _SLASHEQ  */
  YYSYMBOL__COLON = 27,                    /* _COLON  */
  YYSYMBOL__SEMI = 28,                     /* _SEMI  */
  YYSYMBOL__LT = 29,                       /* _LT  */
  YYSYMBOL__DLT = 30,                      /* _DLT  */
  YYSYMBOL__DLTEQ = 31,                    /* _DLTEQ  */
  YYSYMBOL__LDARROW = 32,                  /* _LDARROW  */
  YYSYMBOL__EQ = 33,                       /* _EQ  */
  YYSYMBOL__DEQ = 34,                      /* _DEQ  */
  YYSYMBOL__GT = 35,                       /* _GT  */
  YYSYMBOL__GTEQ = 36,                     /* _GTEQ  */
  YYSYMBOL__DGT = 37,                      /* _DGT  */
  YYSYMBOL__DGTEQ = 38,                    /* _DGTEQ  */
  YYSYMBOL__QUESTION = 39,                 /* _QUESTION  */
  YYSYMBOL__LBRACK = 40,                   /* _LBRACK  */
  YYSYMBOL__RBRACK = 41,                   /* _RBRACK  */
  YYSYMBOL__CARET = 42,                    /* _CARET  */
  YYSYMBOL__CARETEQ = 43,                  /* _CARETEQ  */
  YYSYMBOL__SYMB_1 = 44,                   /* _SYMB_1  */
  YYSYMBOL__SYMB_2 = 45,                   /* _SYMB_2  */
  YYSYMBOL__SYMB_3 = 46,                   /* _SYMB_3  */
  YYSYMBOL__KW_break = 47,                 /* _KW_break  */
  YYSYMBOL__KW_case = 48,                  /* _KW_case  */
  YYSYMBOL__KW_char = 49,                  /* _KW_char  */
  YYSYMBOL__KW_continue = 50,              /* _KW_continue  */
  YYSYMBOL__KW_default = 51,               /* _KW_default  */
  YYSYMBOL__KW_double = 52,                /* _KW_double  */
  YYSYMBOL__KW_else = 53,                  /* _KW_else  */
  YYSYMBOL__KW_enum = 54,                  /* _KW_enum  */
  YYSYMBOL__KW_float = 55,                 /* _KW_float  */
  YYSYMBOL__KW_for = 56,                   /* _KW_for  */
  YYSYMBOL__KW_if = 57,                    /* _KW_if  */
  YYSYMBOL__KW_int = 58,                   /* _KW_int  */
  YYSYMBOL__KW_long = 59,                  /* _KW_long  */
  YYSYMBOL__KW_return = 60,                /* _KW_return  */
  YYSYMBOL__KW_short = 61,                 /* _KW_short  */
  YYSYMBOL__KW_64 = 62,                    /* _KW_64  */
  YYSYMBOL__KW_struct = 63,                /* _KW_struct  */
  YYSYMBOL__KW_switch = 64,                /* _KW_switch  */
  YYSYMBOL__KW_union = 65,                 /* _KW_union  */
  YYSYMBOL__KW_unsigned = 66,              /* _KW_unsigned  */
  YYSYMBOL__KW_void = 67,                  /* _KW_void  */
  YYSYMBOL__KW_while = 68,                 /* _KW_while  */
  YYSYMBOL__LBRACE = 69,                   /* _LBRACE  */
  YYSYMBOL__BAR = 70,                      /* _BAR  */
  YYSYMBOL__BAREQ = 71,                    /* _BAREQ  */
  YYSYMBOL__DBAR = 72,                     /* _DBAR  */
  YYSYMBOL__RBRACE = 73,                   /* _RBRACE  */
  YYSYMBOL__TILDE = 74,                    /* _TILDE  */
  YYSYMBOL_T_BLOCKATTRIBUTE = 75,          /* T_BLOCKATTRIBUTE  */
  YYSYMBOL_T_CONST = 76,                   /* T_CONST  */
  YYSYMBOL_T_RESTRICT = 77,                /* T_RESTRICT  */
  YYSYMBOL_T_SIGNED = 78,                  /* T_SIGNED  */
  YYSYMBOL_T_VOLATILE = 79,                /* T_VOLATILE  */
  YYSYMBOL__CHAR_ = 80,                    /* _CHAR_  */
  YYSYMBOL__INTEGER_ = 81,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 82,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 83,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_Program = 85,                   /* Program  */
  YYSYMBOL_Globals = 86,                   /* Globals  */
  YYSYMBOL_Global = 87,                    /* Global  */
  YYSYMBOL_FunctionDef = 88,               /* FunctionDef  */
  YYSYMBOL_FunctionDefStart = 89,          /* FunctionDefStart  */
  YYSYMBOL_DeclSpecList = 90,              /* DeclSpecList  */
  YYSYMBOL_DeclSpecListNoNamed = 91,       /* DeclSpecListNoNamed  */
  YYSYMBOL_TypeSpec = 92,                  /* TypeSpec  */
  YYSYMBOL_Enumerator = 93,                /* Enumerator  */
  YYSYMBOL_ListEnumerator = 94,            /* ListEnumerator  */
  YYSYMBOL_MaybeComma = 95,                /* MaybeComma  */
  YYSYMBOL_Declarator = 96,                /* Declarator  */
  YYSYMBOL_PointerOpt = 97,                /* PointerOpt  */
  YYSYMBOL_DirectDecl = 98,                /* DirectDecl  */
  YYSYMBOL_AttributesWithAsm = 99,         /* AttributesWithAsm  */
  YYSYMBOL_RestParList = 100,              /* RestParList  */
  YYSYMBOL_MaybeThreeDots = 101,           /* MaybeThreeDots  */
  YYSYMBOL_ParameterDecl = 102,            /* ParameterDecl  */
  YYSYMBOL_ListParameterDecl = 103,        /* ListParameterDecl  */
  YYSYMBOL_GhostParameterOpt = 104,        /* GhostParameterOpt  */
  YYSYMBOL_IdOrTypename = 105,             /* IdOrTypename  */
  YYSYMBOL_IdOrTypenameAsId = 106,         /* IdOrTypenameAsId  */
  YYSYMBOL_Declaration = 107,              /* Declaration  */
  YYSYMBOL_DeclAndInitDeclAttrList = 108,  /* DeclAndInitDeclAttrList  */
  YYSYMBOL_InitDeclaratorAttr = 109,       /* InitDeclaratorAttr  */
  YYSYMBOL_ListInitDeclaratorAttr = 110,   /* ListInitDeclaratorAttr  */
  YYSYMBOL_InitDeclarator = 111,           /* InitDeclarator  */
  YYSYMBOL_StructDeclList = 112,           /* StructDeclList  */
  YYSYMBOL_FieldDecl = 113,                /* FieldDecl  */
  YYSYMBOL_ListFieldDecl = 114,            /* ListFieldDecl  */
  YYSYMBOL_Attribute = 115,                /* Attribute  */
  YYSYMBOL_ListAttribute = 116,            /* ListAttribute  */
  YYSYMBOL_Block = 117,                    /* Block  */
  YYSYMBOL_BlockAttrs = 118,               /* BlockAttrs  */
  YYSYMBOL_BlockElement = 119,             /* BlockElement  */
  YYSYMBOL_ListBlockElement = 120,         /* ListBlockElement  */
  YYSYMBOL_Statement = 121,                /* Statement  */
  YYSYMBOL_ForClause = 122,                /* ForClause  */
  YYSYMBOL_Attr = 123,                     /* Attr  */
  YYSYMBOL_ListAttr = 124,                 /* ListAttr  */
  YYSYMBOL_Attr1 = 125,                    /* Attr1  */
  YYSYMBOL_Attr2 = 126,                    /* Attr2  */
  YYSYMBOL_Attr3 = 127,                    /* Attr3  */
  YYSYMBOL_Attr4 = 128,                    /* Attr4  */
  YYSYMBOL_Attr5 = 129,                    /* Attr5  */
  YYSYMBOL_Attr6 = 130,                    /* Attr6  */
  YYSYMBOL_Attr7 = 131,                    /* Attr7  */
  YYSYMBOL_Attr8 = 132,                    /* Attr8  */
  YYSYMBOL_Attr9 = 133,                    /* Attr9  */
  YYSYMBOL_Attr10 = 134,                   /* Attr10  */
  YYSYMBOL_Attr11 = 135,                   /* Attr11  */
  YYSYMBOL_Attr12 = 136,                   /* Attr12  */
  YYSYMBOL_Attr13 = 137,                   /* Attr13  */
  YYSYMBOL_Attr14 = 138,                   /* Attr14  */
  YYSYMBOL_BasicAttribute = 139,           /* BasicAttribute  */
  YYSYMBOL_AnnotatedStmt = 140,            /* AnnotatedStmt  */
  YYSYMBOL_ElsePart = 141,                 /* ElsePart  */
  YYSYMBOL_OptExpression = 142,            /* OptExpression  */
  YYSYMBOL_Expression = 143,               /* Expression  */
  YYSYMBOL_ListExpression = 144,           /* ListExpression  */
  YYSYMBOL_AssignExpr = 145,               /* AssignExpr  */
  YYSYMBOL_AssignExpr1 = 146,              /* AssignExpr1  */
  YYSYMBOL_AssignExpr2 = 147,              /* AssignExpr2  */
  YYSYMBOL_AssignExpr3 = 148,              /* AssignExpr3  */
  YYSYMBOL_AssignExpr4 = 149,              /* AssignExpr4  */
  YYSYMBOL_AssignExpr5 = 150,              /* AssignExpr5  */
  YYSYMBOL_AssignExpr6 = 151,              /* AssignExpr6  */
  YYSYMBOL_AssignExpr7 = 152,              /* AssignExpr7  */
  YYSYMBOL_AssignExpr8 = 153,              /* AssignExpr8  */
  YYSYMBOL_AssignExpr9 = 154,              /* AssignExpr9  */
  YYSYMBOL_AssignExpr10 = 155,             /* AssignExpr10  */
  YYSYMBOL_AssignExpr11 = 156,             /* AssignExpr11  */
  YYSYMBOL_AssignExpr12 = 157,             /* AssignExpr12  */
  YYSYMBOL_AssignExpr13 = 158,             /* AssignExpr13  */
  YYSYMBOL_AssignExpr14 = 159,             /* AssignExpr14  */
  YYSYMBOL_AssignExpr15 = 160,             /* AssignExpr15  */
  YYSYMBOL_Constant = 161,                 /* Constant  */
  YYSYMBOL_TypeName = 162                  /* TypeName  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 108 "partial_bnfc_parser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, partial_acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 313 "partial_bnfc_parser.tab.c"


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
typedef yytype_int16 yy_state_t;

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   714

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  227
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  395

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   338


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   285,   285,   287,   288,   289,   291,   292,   294,   296,
     298,   299,   301,   302,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   327,   328,   330,   331,
     333,   334,   336,   338,   339,   341,   342,   343,   345,   347,
     349,   350,   352,   353,   354,   356,   357,   359,   361,   363,
     365,   366,   368,   369,   371,   373,   374,   376,   378,   379,
     380,   381,   383,   385,   386,   388,   390,   391,   393,   395,
     396,   398,   399,   401,   402,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   419,
     420,   422,   423,   425,   426,   428,   429,   431,   432,   434,
     435,   437,   438,   440,   441,   443,   444,   446,   447,   448,
     450,   451,   452,   453,   454,   456,   457,   458,   460,   461,
     462,   464,   465,   466,   467,   469,   470,   471,   472,   473,
     474,   475,   477,   478,   479,   480,   481,   482,   484,   485,
     487,   488,   490,   492,   493,   495,   496,   498,   500,   501,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   516,   517,   519,   520,   522,   523,   525,   526,
     528,   529,   531,   532,   534,   535,   536,   538,   539,   540,
     541,   542,   544,   545,   546,   548,   549,   550,   552,   553,
     554,   555,   557,   558,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   571,   572,   573,   574,   575,   576,
     578,   579,   580,   581,   583,   584,   585,   587
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
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_BANG",
  "_BANGEQ", "_PERCENT", "_PERCENTEQ", "_AMP", "_DAMP", "_AMPEQ",
  "_LPAREN", "_RPAREN", "_STAR", "_STAREQ", "_PLUS", "_DPLUS", "_PLUSEQ",
  "_COMMA", "_MINUS", "_DMINUS", "_MINUSEQ", "_RARROW", "_DOT",
  "_ELLIPSIS", "_SLASH", "_SLASHEQ", "_COLON", "_SEMI", "_LT", "_DLT",
  "_DLTEQ", "_LDARROW", "_EQ", "_DEQ", "_GT", "_GTEQ", "_DGT", "_DGTEQ",
  "_QUESTION", "_LBRACK", "_RBRACK", "_CARET", "_CARETEQ", "_SYMB_1",
  "_SYMB_2", "_SYMB_3", "_KW_break", "_KW_case", "_KW_char",
  "_KW_continue", "_KW_default", "_KW_double", "_KW_else", "_KW_enum",
  "_KW_float", "_KW_for", "_KW_if", "_KW_int", "_KW_long", "_KW_return",
  "_KW_short", "_KW_64", "_KW_struct", "_KW_switch", "_KW_union",
  "_KW_unsigned", "_KW_void", "_KW_while", "_LBRACE", "_BAR", "_BAREQ",
  "_DBAR", "_RBRACE", "_TILDE", "T_BLOCKATTRIBUTE", "T_CONST",
  "T_RESTRICT", "T_SIGNED", "T_VOLATILE", "_CHAR_", "_INTEGER_",
  "_DOUBLE_", "_IDENT_", "$accept", "Program", "Globals", "Global",
  "FunctionDef", "FunctionDefStart", "DeclSpecList", "DeclSpecListNoNamed",
  "TypeSpec", "Enumerator", "ListEnumerator", "MaybeComma", "Declarator",
  "PointerOpt", "DirectDecl", "AttributesWithAsm", "RestParList",
  "MaybeThreeDots", "ParameterDecl", "ListParameterDecl",
  "GhostParameterOpt", "IdOrTypename", "IdOrTypenameAsId", "Declaration",
  "DeclAndInitDeclAttrList", "InitDeclaratorAttr",
  "ListInitDeclaratorAttr", "InitDeclarator", "StructDeclList",
  "FieldDecl", "ListFieldDecl", "Attribute", "ListAttribute", "Block",
  "BlockAttrs", "BlockElement", "ListBlockElement", "Statement",
  "ForClause", "Attr", "ListAttr", "Attr1", "Attr2", "Attr3", "Attr4",
  "Attr5", "Attr6", "Attr7", "Attr8", "Attr9", "Attr10", "Attr11",
  "Attr12", "Attr13", "Attr14", "BasicAttribute", "AnnotatedStmt",
  "ElsePart", "OptExpression", "Expression", "ListExpression",
  "AssignExpr", "AssignExpr1", "AssignExpr2", "AssignExpr3", "AssignExpr4",
  "AssignExpr5", "AssignExpr6", "AssignExpr7", "AssignExpr8",
  "AssignExpr9", "AssignExpr10", "AssignExpr11", "AssignExpr12",
  "AssignExpr13", "AssignExpr14", "AssignExpr15", "Constant", "TypeName", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-249)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     586,   586,  -249,  -249,  -249,  -249,  -249,   -18,  -249,  -249,
    -249,  -249,  -249,    61,    71,  -249,  -249,  -249,    33,  -249,
     586,  -249,   -15,    78,   636,  -249,  -249,    11,  -249,    12,
    -249,   611,    38,   611,    62,  -249,  -249,    -8,  -249,  -249,
    -249,    81,    17,   114,    60,  -249,   636,   119,   149,   158,
      11,   611,   130,    99,   611,   121,   611,   176,  -249,     4,
     208,  -249,  -249,   209,  -249,   355,    11,  -249,   157,   158,
    -249,   611,  -249,   223,   198,  -249,   174,  -249,   179,   472,
     252,  -249,  -249,  -249,   533,  -249,  -249,   237,  -249,  -249,
     355,   355,    17,   332,   355,   355,   435,   355,   435,   355,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,    -2,   250,   192,
     224,   276,    50,   164,   104,    86,    83,    31,  -249,    20,
    -249,  -249,  -249,  -249,   214,  -249,   209,   611,  -249,  -249,
     472,   472,   472,   472,   472,   472,   472,  -249,  -249,   274,
     272,   293,   289,    10,   314,   254,   285,   320,    54,   210,
     123,   154,   126,  -249,    70,  -249,  -249,  -249,   301,   355,
     303,   310,   327,   328,   212,   331,   333,  -249,    78,  -249,
    -249,  -249,  -249,   335,   318,   558,  -249,    21,   337,   336,
     338,   209,  -249,  -249,  -249,  -249,   343,   345,   346,  -249,
    -249,   155,  -249,  -249,  -249,  -249,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,  -249,  -249,    17,    17,
     355,  -249,  -249,  -249,  -249,  -249,   348,  -249,  -249,  -249,
    -249,    64,   472,  -249,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,    17,    17,   472,  -249,   153,  -249,
     492,   412,   355,  -249,   322,   355,   355,   355,  -249,   349,
    -249,  -249,  -249,   558,   341,  -249,  -249,  -249,  -249,   355,
     340,  -249,   250,  -249,   192,   224,   276,    50,   164,   164,
     104,   104,   104,   104,    86,    86,    83,    83,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,   321,  -249,  -249,   357,  -249,  -249,
     352,   314,   254,   285,   320,    54,   210,   210,   123,   123,
     123,   123,   154,   154,   126,   126,  -249,  -249,  -249,  -249,
    -249,   339,   355,   492,  -249,  -249,  -249,   355,   344,   361,
    -249,   370,   371,  -249,  -249,  -249,  -249,  -249,  -249,   355,
    -249,  -249,   472,  -249,   358,  -249,   360,  -249,   492,   492,
     492,  -249,  -249,   492,   355,   347,  -249,  -249,  -249,   377,
     492,  -249,   492,  -249,  -249
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     3,    16,    18,    22,    15,    24,     0,    23,    19,
      21,    17,    20,     0,     0,    26,    14,    25,     0,     2,
       3,     7,     0,    43,    10,     6,     5,     0,    59,    33,
      58,    68,    27,    68,    30,     1,     4,    79,     8,    76,
      61,    67,     0,     0,    62,    11,    12,    36,    38,    40,
       0,    68,    43,     0,    68,     0,    68,     0,    83,    43,
      48,    45,    60,    43,    13,     0,     0,    41,     0,    40,
      70,    68,    72,    73,     0,    29,     0,    32,     0,     0,
       0,    75,    44,    77,     0,    42,    67,    65,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,   224,   225,   220,    37,   157,   160,   172,   174,   176,
     178,   180,   182,   184,   187,   192,   195,   198,   202,   204,
     214,   221,    39,    35,     0,    69,    43,    68,    28,    31,
       0,     0,     0,     0,     0,     0,     0,   150,   151,     0,
     103,     0,   101,   105,   107,   109,   111,   113,   115,   117,
     120,   125,   128,   131,   135,   142,   148,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    43,    81,
      87,    84,    82,   158,     0,     0,    57,    53,     0,    55,
      50,    43,   211,   210,   213,   227,     0,     0,     0,   209,
     207,     0,   205,   208,   206,   212,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
       0,    34,    74,    71,   140,   139,     0,   138,   136,   137,
     141,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,    98,
       0,   155,     0,    95,     0,     0,     0,     0,    86,     0,
      46,    52,    57,     0,     0,    49,    66,   223,   222,     0,
       0,   156,   175,   198,   177,   179,   181,   183,   186,   185,
     188,   190,   189,   191,   193,   194,   196,   197,   201,   199,
     200,   166,   167,   164,   162,   163,   165,   170,   161,   171,
     169,   168,   217,   216,     0,   149,   144,     0,   104,   102,
       0,   108,   110,   112,   114,   116,   119,   118,   121,   123,
     122,   124,   126,   127,   129,   130,   134,   132,   133,   145,
     146,     0,     0,     0,   152,    94,   100,   155,     0,     0,
      96,     0,     0,   159,    54,    47,    56,    51,   203,     0,
     215,   143,     0,   147,     0,    92,     0,    99,     0,     0,
       0,   173,   106,     0,   155,   153,    89,    90,    93,     0,
       0,    88,     0,   154,    91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -249,    19,  -249,  -249,  -249,     6,   350,    39,  -249,
       0,   323,     9,   359,  -249,  -249,  -249,  -249,   227,   120,
     122,   -11,     5,   -70,  -249,  -249,   226,   -48,     2,  -249,
     279,  -249,  -249,    -6,  -249,  -249,  -249,   329,  -249,  -118,
     -80,  -223,  -249,   162,   170,   163,   173,   169,   -63,    -5,
     -60,   -16,  -106,  -249,  -249,  -249,  -188,  -249,  -248,   -64,
     -93,   -10,    57,  -249,   233,   235,   225,   234,   239,    55,
      69,    73,    68,   -86,   -52,  -249,  -249,  -249,  -249
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    18,    19,    20,    21,    22,    52,    45,    24,    48,
      49,    68,    86,    42,    60,    85,   178,   285,   179,   180,
     280,    29,   139,    25,    43,    87,    88,    44,    53,    73,
      74,    83,    59,   170,    58,   171,    80,   354,   357,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   355,   391,   290,   173,
     174,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   188
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     187,   104,    32,    34,   182,   183,    23,    23,   189,   190,
     169,   193,    30,   195,   236,    89,    38,    39,    30,    30,
      26,   329,   330,   358,   234,   235,    23,   237,   238,   239,
     240,    61,    41,    35,    39,    55,   226,   196,   215,    36,
     227,   216,   228,   229,   192,   217,   194,    30,   218,   245,
      69,    27,   219,    70,    37,   202,    76,   220,    78,   251,
     230,    72,   221,    46,   222,    28,   122,    57,   130,   223,
     197,   274,   131,   125,   224,   132,   326,   133,    63,   134,
      81,    50,   246,   135,   203,    46,   168,   186,   252,   212,
     177,    39,   264,   265,    47,   268,   213,   184,   187,   185,
      28,   210,   225,   291,   -43,   211,    40,    54,   214,   376,
     266,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   308,   309,   310,   233,
      31,    56,   261,    89,   208,    72,   389,   324,   136,   262,
      33,   209,    62,    39,    28,   137,   138,    28,   351,   382,
      -9,   263,    65,   257,    28,   346,   347,   348,    71,    90,
     258,   327,   328,    91,    92,   375,    93,    66,    94,   259,
      95,    96,    75,   260,    97,    98,    67,   352,   291,   359,
     353,   177,   361,   362,   363,   186,   281,    79,   336,   337,
     385,   386,   387,   204,    77,   388,   205,   342,   343,   206,
     207,   356,   393,   368,   394,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,    90,   322,   323,    84,
      91,    92,    39,    93,    37,    94,   127,    95,    96,    99,
     123,    97,    98,    30,    30,   100,   101,   102,   103,   253,
     273,   126,   254,   344,   345,   255,   256,   128,   338,   339,
     340,   341,   129,   349,   350,   181,    90,   298,   299,   198,
      91,    92,   199,    93,   291,    94,   200,    95,    96,    30,
      30,    97,    98,   300,   301,   302,   303,   168,   306,   307,
     157,   304,   305,   293,   201,   241,    99,   231,   374,   177,
     242,   291,   100,   101,   102,   103,     2,     3,     4,   158,
     159,     5,   160,   161,     6,   243,     7,     8,   162,   163,
       9,    10,   164,    11,    12,    13,   165,    14,    15,    16,
     166,    37,   244,   247,   248,   167,    99,   249,   250,   267,
      17,   269,   100,   101,   102,   103,    90,   270,   271,   272,
      91,    92,   275,    93,   276,    94,   278,    95,    96,   282,
     360,    97,    98,   277,   283,   287,   284,   288,   289,    90,
     325,   364,   370,    91,    92,   367,    93,   369,    94,   371,
      95,    96,   377,   378,    97,    98,     2,     3,     4,   372,
     373,     5,   379,   380,     6,   383,     7,     8,   384,   392,
       9,    10,   124,    11,    12,    13,    64,    14,    15,    16,
     390,    37,   279,   366,   365,   232,    99,   286,   331,   172,
      17,   333,   100,   101,   102,   103,    90,   332,    82,   335,
      91,    92,   334,    93,   295,    94,   381,    95,    96,    99,
     292,    97,    98,   294,   296,   100,   101,   102,   103,    90,
     297,     0,     0,    91,    92,     0,   191,     0,    94,     0,
      95,    96,     0,     0,    97,    98,     2,     3,     4,     0,
       0,     5,     0,     0,     6,     0,     7,     8,     0,     0,
       9,    10,     0,    11,    12,    13,   130,    14,    15,    16,
     131,     0,     0,   132,     0,   133,    99,   134,     0,     0,
      17,   135,   100,   101,   102,   103,    90,     0,     0,     0,
      91,    92,     0,    93,     0,    94,     0,    95,    96,    99,
       0,    97,    98,     0,     0,   100,   101,   102,   103,     0,
     157,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
     159,     0,   160,   161,   175,   176,   136,     0,   162,   163,
       0,     0,   164,   137,   138,    28,   165,     0,     0,     0,
     166,    37,     0,     0,     0,     0,    99,     0,     0,   175,
       0,     0,   100,   101,   102,   103,     0,     2,     3,     4,
       0,     0,     5,     0,     0,     6,     0,     7,     8,     0,
       0,     9,    10,     0,    11,    12,    13,     0,    14,    15,
      16,     0,     2,     3,     4,     0,     0,     5,     0,     0,
       6,    17,     7,     8,     1,     0,     9,    10,     0,    11,
      12,    13,     0,    14,    15,    16,     0,     0,     0,     0,
       2,     3,     4,     0,     0,     5,    17,     0,     6,    51,
       7,     8,     0,     0,     9,    10,     0,    11,    12,    13,
       0,    14,    15,    16,     0,     2,     3,     4,     0,     0,
       5,     0,     0,     6,    17,     7,     8,     0,     0,     9,
      10,     0,    11,    12,    13,     0,    14,    15,    16,     0,
       2,     3,     4,     0,     0,     5,     0,     0,     6,    17,
       7,     8,     0,     0,     9,    10,     0,    11,    12,    13,
       0,    14,    15,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17
};

static const yytype_int16 yycheck[] =
{
      93,    65,    13,    14,    90,    91,     0,     1,    94,    95,
      80,    97,     7,    99,   132,    63,    22,    13,    13,    14,
       1,   244,   245,   271,   130,   131,    20,   133,   134,   135,
     136,    42,    23,     0,    13,    33,    16,    39,     7,    20,
      20,    10,    22,    23,    96,    14,    98,    42,    17,    39,
      50,    69,    21,    51,    69,     5,    54,    26,    56,     5,
      40,    52,    31,    24,    33,    83,    66,    75,     4,    38,
      72,   164,     8,    71,    43,    11,    12,    13,    18,    15,
      76,    69,    72,    19,    34,    46,    80,    93,    34,     6,
      84,    13,    22,    23,    83,   159,    13,    92,   191,    93,
      83,    15,    71,   196,    83,    19,    28,    69,    25,   357,
      40,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   127,
      69,    69,     6,   181,    30,   126,   384,   230,    74,    13,
      69,    37,    28,    13,    83,    81,    82,    83,   266,   372,
      69,    25,    33,    30,    83,   261,   262,   263,    28,     4,
      37,   241,   242,     8,     9,   353,    11,    18,    13,    15,
      15,    16,    73,    19,    19,    20,    18,    24,   271,   272,
      27,   175,   275,   276,   277,   191,   177,    11,   251,   252,
     378,   379,   380,    29,    73,   383,    32,   257,   258,    35,
      36,   271,   390,   289,   392,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,     4,   228,   229,    11,
       8,     9,    13,    11,    69,    13,    28,    15,    16,    74,
      73,    19,    20,   228,   229,    80,    81,    82,    83,    29,
      28,    18,    32,   259,   260,    35,    36,    73,   253,   254,
     255,   256,    73,   264,   265,    18,     4,   202,   203,     9,
       8,     9,    70,    11,   357,    13,    42,    15,    16,   264,
     265,    19,    20,   204,   205,   206,   207,   271,   210,   211,
      28,   208,   209,   369,     8,    11,    74,    73,   352,   283,
      18,   384,    80,    81,    82,    83,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    12,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    33,     9,    70,    73,    74,    42,     8,    28,
      78,    28,    80,    81,    82,    83,     4,    27,    11,    11,
       8,     9,    11,    11,    11,    13,    28,    15,    16,    12,
      28,    19,    20,    18,    18,    12,    18,    12,    12,     4,
      12,    12,    41,     8,     9,    24,    11,    27,    13,    12,
      15,    16,    28,    12,    19,    20,    44,    45,    46,    27,
      41,    49,    12,    12,    52,    27,    54,    55,    28,    12,
      58,    59,    69,    61,    62,    63,    46,    65,    66,    67,
      53,    69,   175,   283,   282,   126,    74,   181,   246,    80,
      78,   248,    80,    81,    82,    83,     4,   247,    59,   250,
       8,     9,   249,    11,   199,    13,   369,    15,    16,    74,
     197,    19,    20,   198,   200,    80,    81,    82,    83,     4,
     201,    -1,    -1,     8,     9,    -1,    11,    -1,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    44,    45,    46,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    55,    -1,    -1,
      58,    59,    -1,    61,    62,    63,     4,    65,    66,    67,
       8,    -1,    -1,    11,    -1,    13,    74,    15,    -1,    -1,
      78,    19,    80,    81,    82,    83,     4,    -1,    -1,    -1,
       8,     9,    -1,    11,    -1,    13,    -1,    15,    16,    74,
      -1,    19,    20,    -1,    -1,    80,    81,    82,    83,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    50,    51,    11,    12,    74,    -1,    56,    57,
      -1,    -1,    60,    81,    82,    83,    64,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    74,    -1,    -1,    11,
      -1,    -1,    80,    81,    82,    83,    -1,    44,    45,    46,
      -1,    -1,    49,    -1,    -1,    52,    -1,    54,    55,    -1,
      -1,    58,    59,    -1,    61,    62,    63,    -1,    65,    66,
      67,    -1,    44,    45,    46,    -1,    -1,    49,    -1,    -1,
      52,    78,    54,    55,    28,    -1,    58,    59,    -1,    61,
      62,    63,    -1,    65,    66,    67,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    78,    -1,    52,    28,
      54,    55,    -1,    -1,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    -1,    44,    45,    46,    -1,    -1,
      49,    -1,    -1,    52,    78,    54,    55,    -1,    -1,    58,
      59,    -1,    61,    62,    63,    -1,    65,    66,    67,    -1,
      44,    45,    46,    -1,    -1,    49,    -1,    -1,    52,    78,
      54,    55,    -1,    -1,    58,    59,    -1,    61,    62,    63,
      -1,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    44,    45,    46,    49,    52,    54,    55,    58,
      59,    61,    62,    63,    65,    66,    67,    78,    85,    86,
      87,    88,    89,    90,    92,   107,    86,    69,    83,   105,
     106,    69,   105,    69,   105,     0,    86,    69,   117,    13,
      28,    96,    97,   108,   111,    91,    92,    83,    93,    94,
      69,    28,    90,   112,    69,   112,    69,    75,   118,   116,
      98,   105,    28,    18,    91,    33,    18,    18,    95,    94,
     112,    28,    96,   113,   114,    73,   112,    73,   112,    11,
     120,    76,    97,   115,    11,    99,    96,   109,   110,   111,
       4,     8,     9,    11,    13,    15,    16,    19,    20,    74,
      80,    81,    82,    83,   143,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    94,    73,    95,   112,    18,    28,    73,    73,
       4,     8,    11,    13,    15,    19,    74,    81,    82,   106,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,    28,    47,    48,
      50,    51,    56,    57,    60,    64,    68,    73,    90,   107,
     117,   119,   121,   143,   144,    11,    12,    90,   100,   102,
     103,    18,   157,   157,   106,    90,   117,   144,   162,   157,
     157,    11,   158,   157,   158,   157,    39,    72,     9,    70,
      42,     8,     5,    34,    29,    32,    35,    36,    30,    37,
      15,    19,     6,    13,    25,     7,    10,    14,    17,    21,
      26,    31,    33,    38,    43,    71,    16,    20,    22,    23,
      40,    73,   114,   112,   136,   136,   123,   136,   136,   136,
     136,    11,    18,    12,    33,    39,    72,     9,    70,    42,
       8,     5,    34,    29,    32,    35,    36,    30,    37,    15,
      19,     6,    13,    25,    22,    23,    40,    28,   143,    28,
      27,    11,    11,    28,   144,    11,    11,    18,    28,   102,
     104,    96,    12,    18,    18,   101,   110,    12,    12,    12,
     142,   144,   148,   157,   149,   150,   151,   152,   153,   153,
     154,   154,   154,   154,   155,   155,   156,   156,   157,   157,
     157,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   105,   105,   144,    12,    12,   124,   124,   125,
     125,   127,   128,   129,   130,   131,   132,   132,   133,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   105,
     105,   123,    24,    27,   121,   140,   107,   122,   142,   144,
      28,   144,   144,   144,    12,   104,   103,    24,   157,    27,
      41,    12,    27,    41,   143,   140,   142,    28,    12,    12,
      12,   146,   125,    27,    28,   140,   140,   140,   140,   142,
      53,   141,    12,   140,   140
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    86,    86,    87,    87,    88,    89,
      90,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    97,    97,    98,    98,    98,    99,   100,
     101,   101,   102,   102,   102,   103,   103,   104,   105,   106,
     107,   107,   108,   108,   109,   110,   110,   111,   112,   112,
     112,   112,   113,   114,   114,   115,   116,   116,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   131,
     132,   132,   132,   132,   132,   133,   133,   133,   134,   134,
     134,   135,   135,   135,   135,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   138,   138,
     139,   139,   140,   141,   141,   142,   142,   143,   144,   144,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   152,   153,   153,   153,
     153,   153,   154,   154,   154,   155,   155,   155,   156,   156,
     156,   156,   157,   157,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     160,   160,   160,   160,   161,   161,   161,   162
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     2,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     4,
       2,     5,     4,     2,     6,     5,     1,     3,     1,     3,
       0,     1,     3,     0,     3,     1,     4,     5,     0,     2,
       0,     2,     2,     1,     3,     1,     3,     0,     1,     1,
       3,     2,     1,     3,     1,     1,     3,     1,     0,     3,
       2,     4,     1,     1,     3,     1,     0,     2,     4,     0,
       4,     1,     1,     0,     2,     1,     2,     1,     6,     5,
       5,     8,     4,     6,     3,     2,     3,     2,     2,     2,
       1,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     1,     4,     3,     3,     3,     4,     1,     3,
       1,     1,     1,     0,     2,     0,     1,     1,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     4,     3,     3,     2,     2,
       1,     1,     3,     3,     1,     1,     1,     1
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
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Program: Globals  */
#line 285 "partial_bnfc_parser.y"
                  { (yyval.program_) = new partial_acsl::AProgram((yyvsp[0].globals_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1759 "partial_bnfc_parser.tab.c"
    break;

  case 3: /* Globals: %empty  */
#line 287 "partial_bnfc_parser.y"
                      { (yyval.globals_) = new partial_acsl::NoGlobals(); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1765 "partial_bnfc_parser.tab.c"
    break;

  case 4: /* Globals: Global Globals  */
#line 288 "partial_bnfc_parser.y"
                   { (yyval.globals_) = new partial_acsl::SimpleGlobals((yyvsp[-1].global_), (yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1771 "partial_bnfc_parser.tab.c"
    break;

  case 5: /* Globals: _SEMI Globals  */
#line 289 "partial_bnfc_parser.y"
                  { (yyval.globals_) = new partial_acsl::SemiColonGlobals((yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1777 "partial_bnfc_parser.tab.c"
    break;

  case 6: /* Global: Declaration  */
#line 291 "partial_bnfc_parser.y"
                     { (yyval.global_) = new partial_acsl::GlobalsDeclataion((yyvsp[0].declaration_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 1783 "partial_bnfc_parser.tab.c"
    break;

  case 7: /* Global: FunctionDef  */
#line 292 "partial_bnfc_parser.y"
                { (yyval.global_) = new partial_acsl::GlobalsFunctionDef((yyvsp[0].functiondef_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 1789 "partial_bnfc_parser.tab.c"
    break;

  case 8: /* FunctionDef: FunctionDefStart Block  */
#line 294 "partial_bnfc_parser.y"
                                     { (yyval.functiondef_) = new partial_acsl::SimpleFunctionDef((yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 1795 "partial_bnfc_parser.tab.c"
    break;

  case 9: /* FunctionDefStart: DeclSpecList Declarator  */
#line 296 "partial_bnfc_parser.y"
                                           { (yyval.functiondefstart_) = new partial_acsl::FunctionDefStartDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 1801 "partial_bnfc_parser.tab.c"
    break;

  case 10: /* DeclSpecList: TypeSpec  */
#line 298 "partial_bnfc_parser.y"
                        { (yyval.declspeclist_) = new partial_acsl::DeclSpecTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 1807 "partial_bnfc_parser.tab.c"
    break;

  case 11: /* DeclSpecList: TypeSpec DeclSpecListNoNamed  */
#line 299 "partial_bnfc_parser.y"
                                 { (yyval.declspeclist_) = new partial_acsl::DeclSpecTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 1813 "partial_bnfc_parser.tab.c"
    break;

  case 12: /* DeclSpecListNoNamed: TypeSpec  */
#line 301 "partial_bnfc_parser.y"
                               { (yyval.declspeclistnonamed_) = new partial_acsl::DeclSpecNoNamedTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 1819 "partial_bnfc_parser.tab.c"
    break;

  case 13: /* DeclSpecListNoNamed: TypeSpec DeclSpecListNoNamed  */
#line 302 "partial_bnfc_parser.y"
                                 { (yyval.declspeclistnonamed_) = new partial_acsl::DeclSpecNoNamedTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 1825 "partial_bnfc_parser.tab.c"
    break;

  case 14: /* TypeSpec: _KW_void  */
#line 304 "partial_bnfc_parser.y"
                    { (yyval.typespec_) = new partial_acsl::TypeSpecVoidKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1831 "partial_bnfc_parser.tab.c"
    break;

  case 15: /* TypeSpec: _KW_char  */
#line 305 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partial_acsl::TypeSpecCharKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1837 "partial_bnfc_parser.tab.c"
    break;

  case 16: /* TypeSpec: _SYMB_1  */
#line 306 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecBoolKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1843 "partial_bnfc_parser.tab.c"
    break;

  case 17: /* TypeSpec: _KW_short  */
#line 307 "partial_bnfc_parser.y"
              { (yyval.typespec_) = new partial_acsl::TypeSpecShortKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1849 "partial_bnfc_parser.tab.c"
    break;

  case 18: /* TypeSpec: _SYMB_2  */
#line 308 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecInt32KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1855 "partial_bnfc_parser.tab.c"
    break;

  case 19: /* TypeSpec: _KW_int  */
#line 309 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecIntKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1861 "partial_bnfc_parser.tab.c"
    break;

  case 20: /* TypeSpec: _KW_64  */
#line 310 "partial_bnfc_parser.y"
           { (yyval.typespec_) = new partial_acsl::TypeSpecSizeTKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1867 "partial_bnfc_parser.tab.c"
    break;

  case 21: /* TypeSpec: _KW_long  */
#line 311 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partial_acsl::TypeSpecLongKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1873 "partial_bnfc_parser.tab.c"
    break;

  case 22: /* TypeSpec: _SYMB_3  */
#line 312 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecInt64KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1879 "partial_bnfc_parser.tab.c"
    break;

  case 23: /* TypeSpec: _KW_float  */
#line 313 "partial_bnfc_parser.y"
              { (yyval.typespec_) = new partial_acsl::TypeSpecFloatKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1885 "partial_bnfc_parser.tab.c"
    break;

  case 24: /* TypeSpec: _KW_double  */
#line 314 "partial_bnfc_parser.y"
               { (yyval.typespec_) = new partial_acsl::TypeSpecDoubleKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1891 "partial_bnfc_parser.tab.c"
    break;

  case 25: /* TypeSpec: T_SIGNED  */
#line 315 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partial_acsl::TypeSpecSignedKeyWord((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1897 "partial_bnfc_parser.tab.c"
    break;

  case 26: /* TypeSpec: _KW_unsigned  */
#line 316 "partial_bnfc_parser.y"
                 { (yyval.typespec_) = new partial_acsl::TypeSpecUnsignedKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1903 "partial_bnfc_parser.tab.c"
    break;

  case 27: /* TypeSpec: _KW_struct IdOrTypename  */
#line 317 "partial_bnfc_parser.y"
                            { (yyval.typespec_) = new partial_acsl::StructId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1909 "partial_bnfc_parser.tab.c"
    break;

  case 28: /* TypeSpec: _KW_struct IdOrTypename _LBRACE StructDeclList _RBRACE  */
#line 318 "partial_bnfc_parser.y"
                                                           { (yyval.typespec_) = new partial_acsl::StructIdBraces((yyvsp[-3].idortypename_), (yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1915 "partial_bnfc_parser.tab.c"
    break;

  case 29: /* TypeSpec: _KW_struct _LBRACE StructDeclList _RBRACE  */
#line 319 "partial_bnfc_parser.y"
                                              { (yyval.typespec_) = new partial_acsl::StructBraces((yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1921 "partial_bnfc_parser.tab.c"
    break;

  case 30: /* TypeSpec: _KW_union IdOrTypename  */
#line 320 "partial_bnfc_parser.y"
                           { (yyval.typespec_) = new partial_acsl::UnionId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1927 "partial_bnfc_parser.tab.c"
    break;

  case 31: /* TypeSpec: _KW_union IdOrTypename _LBRACE StructDeclList _RBRACE  */
#line 321 "partial_bnfc_parser.y"
                                                          { (yyval.typespec_) = new partial_acsl::UnionIdBraces((yyvsp[-3].idortypename_), (yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1933 "partial_bnfc_parser.tab.c"
    break;

  case 32: /* TypeSpec: _KW_union _LBRACE StructDeclList _RBRACE  */
#line 322 "partial_bnfc_parser.y"
                                             { (yyval.typespec_) = new partial_acsl::UnionBraces((yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1939 "partial_bnfc_parser.tab.c"
    break;

  case 33: /* TypeSpec: _KW_enum IdOrTypename  */
#line 323 "partial_bnfc_parser.y"
                          { (yyval.typespec_) = new partial_acsl::EnumId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1945 "partial_bnfc_parser.tab.c"
    break;

  case 34: /* TypeSpec: _KW_enum IdOrTypename _LBRACE ListEnumerator MaybeComma _RBRACE  */
#line 324 "partial_bnfc_parser.y"
                                                                    { std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new partial_acsl::EnumIdBraces((yyvsp[-4].idortypename_), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1951 "partial_bnfc_parser.tab.c"
    break;

  case 35: /* TypeSpec: _KW_enum _LBRACE ListEnumerator MaybeComma _RBRACE  */
#line 325 "partial_bnfc_parser.y"
                                                       { std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new partial_acsl::EnumBraces((yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1957 "partial_bnfc_parser.tab.c"
    break;

  case 36: /* Enumerator: _IDENT_  */
#line 327 "partial_bnfc_parser.y"
                     { (yyval.enumerator_) = new partial_acsl::IdentEnumerator((yyvsp[0]._string)); (yyval.enumerator_)->line_number = (yyloc).first_line; (yyval.enumerator_)->char_number = (yyloc).first_column; result->enumerator_ = (yyval.enumerator_); }
#line 1963 "partial_bnfc_parser.tab.c"
    break;

  case 37: /* Enumerator: _IDENT_ _EQ Expression  */
#line 328 "partial_bnfc_parser.y"
                           { (yyval.enumerator_) = new partial_acsl::IdentAssignExpr((yyvsp[-2]._string), (yyvsp[0].expression_)); (yyval.enumerator_)->line_number = (yyloc).first_line; (yyval.enumerator_)->char_number = (yyloc).first_column; result->enumerator_ = (yyval.enumerator_); }
#line 1969 "partial_bnfc_parser.tab.c"
    break;

  case 38: /* ListEnumerator: Enumerator  */
#line 330 "partial_bnfc_parser.y"
                            { (yyval.listenumerator_) = new partial_acsl::ListEnumerator(); (yyval.listenumerator_)->push_back((yyvsp[0].enumerator_)); result->listenumerator_ = (yyval.listenumerator_); }
#line 1975 "partial_bnfc_parser.tab.c"
    break;

  case 39: /* ListEnumerator: Enumerator _COMMA ListEnumerator  */
#line 331 "partial_bnfc_parser.y"
                                     { (yyvsp[0].listenumerator_)->push_back((yyvsp[-2].enumerator_)); (yyval.listenumerator_) = (yyvsp[0].listenumerator_); result->listenumerator_ = (yyval.listenumerator_); }
#line 1981 "partial_bnfc_parser.tab.c"
    break;

  case 40: /* MaybeComma: %empty  */
#line 333 "partial_bnfc_parser.y"
                         { (yyval.maybecomma_) = new partial_acsl::NoComa(); (yyval.maybecomma_)->line_number = (yyloc).first_line; (yyval.maybecomma_)->char_number = (yyloc).first_column; result->maybecomma_ = (yyval.maybecomma_); }
#line 1987 "partial_bnfc_parser.tab.c"
    break;

  case 41: /* MaybeComma: _COMMA  */
#line 334 "partial_bnfc_parser.y"
           { (yyval.maybecomma_) = new partial_acsl::Coma(); (yyval.maybecomma_)->line_number = (yyloc).first_line; (yyval.maybecomma_)->char_number = (yyloc).first_column; result->maybecomma_ = (yyval.maybecomma_); }
#line 1993 "partial_bnfc_parser.tab.c"
    break;

  case 42: /* Declarator: PointerOpt DirectDecl AttributesWithAsm  */
#line 336 "partial_bnfc_parser.y"
                                                     { (yyval.declarator_) = new partial_acsl::ADeclarator((yyvsp[-2].pointeropt_), (yyvsp[-1].directdecl_), (yyvsp[0].attributeswithasm_)); (yyval.declarator_)->line_number = (yyloc).first_line; (yyval.declarator_)->char_number = (yyloc).first_column; result->declarator_ = (yyval.declarator_); }
#line 1999 "partial_bnfc_parser.tab.c"
    break;

  case 43: /* PointerOpt: %empty  */
#line 338 "partial_bnfc_parser.y"
                         { (yyval.pointeropt_) = new partial_acsl::NoPointer(); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 2005 "partial_bnfc_parser.tab.c"
    break;

  case 44: /* PointerOpt: _STAR ListAttribute PointerOpt  */
#line 339 "partial_bnfc_parser.y"
                                   { (yyval.pointeropt_) = new partial_acsl::SomePointer((yyvsp[-1].listattribute_), (yyvsp[0].pointeropt_)); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 2011 "partial_bnfc_parser.tab.c"
    break;

  case 45: /* DirectDecl: IdOrTypename  */
#line 341 "partial_bnfc_parser.y"
                          { (yyval.directdecl_) = new partial_acsl::DirectDeclIdTypename((yyvsp[0].idortypename_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2017 "partial_bnfc_parser.tab.c"
    break;

  case 46: /* DirectDecl: DirectDecl _LPAREN _RPAREN GhostParameterOpt  */
#line 342 "partial_bnfc_parser.y"
                                                 { (yyval.directdecl_) = new partial_acsl::DirectDeclGhostParam((yyvsp[-3].directdecl_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2023 "partial_bnfc_parser.tab.c"
    break;

  case 47: /* DirectDecl: DirectDecl _LPAREN RestParList _RPAREN GhostParameterOpt  */
#line 343 "partial_bnfc_parser.y"
                                                             { (yyval.directdecl_) = new partial_acsl::DirectDeclGhostRestParParam((yyvsp[-4].directdecl_), (yyvsp[-2].restparlist_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2029 "partial_bnfc_parser.tab.c"
    break;

  case 48: /* AttributesWithAsm: %empty  */
#line 345 "partial_bnfc_parser.y"
                                { (yyval.attributeswithasm_) = new partial_acsl::EmptyAttrWithASM(); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 2035 "partial_bnfc_parser.tab.c"
    break;

  case 49: /* RestParList: ListParameterDecl MaybeThreeDots  */
#line 347 "partial_bnfc_parser.y"
                                               { std::reverse((yyvsp[-1].listparameterdecl_)->begin(),(yyvsp[-1].listparameterdecl_)->end()) ;(yyval.restparlist_) = new partial_acsl::SimpleParameterDecl((yyvsp[-1].listparameterdecl_), (yyvsp[0].maybethreedots_)); (yyval.restparlist_)->line_number = (yyloc).first_line; (yyval.restparlist_)->char_number = (yyloc).first_column; result->restparlist_ = (yyval.restparlist_); }
#line 2041 "partial_bnfc_parser.tab.c"
    break;

  case 50: /* MaybeThreeDots: %empty  */
#line 349 "partial_bnfc_parser.y"
                             { (yyval.maybethreedots_) = new partial_acsl::NoThreeDots(); (yyval.maybethreedots_)->line_number = (yyloc).first_line; (yyval.maybethreedots_)->char_number = (yyloc).first_column; result->maybethreedots_ = (yyval.maybethreedots_); }
#line 2047 "partial_bnfc_parser.tab.c"
    break;

  case 51: /* MaybeThreeDots: _COMMA _ELLIPSIS  */
#line 350 "partial_bnfc_parser.y"
                     { (yyval.maybethreedots_) = new partial_acsl::ThreeDots(); (yyval.maybethreedots_)->line_number = (yyloc).first_line; (yyval.maybethreedots_)->char_number = (yyloc).first_column; result->maybethreedots_ = (yyval.maybethreedots_); }
#line 2053 "partial_bnfc_parser.tab.c"
    break;

  case 52: /* ParameterDecl: DeclSpecList Declarator  */
#line 352 "partial_bnfc_parser.y"
                                        { (yyval.parameterdecl_) = new partial_acsl::ParameterDeclSpecDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 2059 "partial_bnfc_parser.tab.c"
    break;

  case 53: /* ParameterDecl: DeclSpecList  */
#line 353 "partial_bnfc_parser.y"
                 { (yyval.parameterdecl_) = new partial_acsl::ParameterDeclSpec((yyvsp[0].declspeclist_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 2065 "partial_bnfc_parser.tab.c"
    break;

  case 54: /* ParameterDecl: _LPAREN ParameterDecl _RPAREN  */
#line 354 "partial_bnfc_parser.y"
                                  { (yyval.parameterdecl_) = new partial_acsl::ParameterDeclPar((yyvsp[-1].parameterdecl_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 2071 "partial_bnfc_parser.tab.c"
    break;

  case 55: /* ListParameterDecl: ParameterDecl  */
#line 356 "partial_bnfc_parser.y"
                                  { (yyval.listparameterdecl_) = new partial_acsl::ListParameterDecl(); (yyval.listparameterdecl_)->push_back((yyvsp[0].parameterdecl_)); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 2077 "partial_bnfc_parser.tab.c"
    break;

  case 56: /* ListParameterDecl: ParameterDecl _COMMA ListParameterDecl  */
#line 357 "partial_bnfc_parser.y"
                                           { (yyvsp[0].listparameterdecl_)->push_back((yyvsp[-2].parameterdecl_)); (yyval.listparameterdecl_) = (yyvsp[0].listparameterdecl_); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 2083 "partial_bnfc_parser.tab.c"
    break;

  case 57: /* GhostParameterOpt: %empty  */
#line 359 "partial_bnfc_parser.y"
                                { (yyval.ghostparameteropt_) = new partial_acsl::NoGhostParameter(); (yyval.ghostparameteropt_)->line_number = (yyloc).first_line; (yyval.ghostparameteropt_)->char_number = (yyloc).first_column; result->ghostparameteropt_ = (yyval.ghostparameteropt_); }
#line 2089 "partial_bnfc_parser.tab.c"
    break;

  case 58: /* IdOrTypename: IdOrTypenameAsId  */
#line 361 "partial_bnfc_parser.y"
                                { (yyval.idortypename_) = new partial_acsl::IdTypename((yyvsp[0].idortypenameasid_)); (yyval.idortypename_)->line_number = (yyloc).first_line; (yyval.idortypename_)->char_number = (yyloc).first_column; result->idortypename_ = (yyval.idortypename_); }
#line 2095 "partial_bnfc_parser.tab.c"
    break;

  case 59: /* IdOrTypenameAsId: _IDENT_  */
#line 363 "partial_bnfc_parser.y"
                           { (yyval.idortypenameasid_) = new partial_acsl::IdOrTypenameAsIdIdentifier((yyvsp[0]._string)); (yyval.idortypenameasid_)->line_number = (yyloc).first_line; (yyval.idortypenameasid_)->char_number = (yyloc).first_column; result->idortypenameasid_ = (yyval.idortypenameasid_); }
#line 2101 "partial_bnfc_parser.tab.c"
    break;

  case 60: /* Declaration: DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 365 "partial_bnfc_parser.y"
                                                         { (yyval.declaration_) = new partial_acsl::DeclSpecInitDecl((yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 2107 "partial_bnfc_parser.tab.c"
    break;

  case 61: /* Declaration: DeclSpecList _SEMI  */
#line 366 "partial_bnfc_parser.y"
                       { (yyval.declaration_) = new partial_acsl::DeclSpec((yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 2113 "partial_bnfc_parser.tab.c"
    break;

  case 62: /* DeclAndInitDeclAttrList: InitDeclarator  */
#line 368 "partial_bnfc_parser.y"
                                         { (yyval.declandinitdeclattrlist_) = new partial_acsl::InitDeclaration((yyvsp[0].initdeclarator_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 2119 "partial_bnfc_parser.tab.c"
    break;

  case 63: /* DeclAndInitDeclAttrList: InitDeclarator _COMMA ListInitDeclaratorAttr  */
#line 369 "partial_bnfc_parser.y"
                                                 { std::reverse((yyvsp[0].listinitdeclaratorattr_)->begin(),(yyvsp[0].listinitdeclaratorattr_)->end()) ;(yyval.declandinitdeclattrlist_) = new partial_acsl::InitDeclarationWithAttr((yyvsp[-2].initdeclarator_), (yyvsp[0].listinitdeclaratorattr_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 2125 "partial_bnfc_parser.tab.c"
    break;

  case 64: /* InitDeclaratorAttr: InitDeclarator  */
#line 371 "partial_bnfc_parser.y"
                                    { (yyval.initdeclaratorattr_) = new partial_acsl::InitDeclaratorAttribute((yyvsp[0].initdeclarator_)); (yyval.initdeclaratorattr_)->line_number = (yyloc).first_line; (yyval.initdeclaratorattr_)->char_number = (yyloc).first_column; result->initdeclaratorattr_ = (yyval.initdeclaratorattr_); }
#line 2131 "partial_bnfc_parser.tab.c"
    break;

  case 65: /* ListInitDeclaratorAttr: InitDeclaratorAttr  */
#line 373 "partial_bnfc_parser.y"
                                            { (yyval.listinitdeclaratorattr_) = new partial_acsl::ListInitDeclaratorAttr(); (yyval.listinitdeclaratorattr_)->push_back((yyvsp[0].initdeclaratorattr_)); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 2137 "partial_bnfc_parser.tab.c"
    break;

  case 66: /* ListInitDeclaratorAttr: InitDeclaratorAttr _COMMA ListInitDeclaratorAttr  */
#line 374 "partial_bnfc_parser.y"
                                                     { (yyvsp[0].listinitdeclaratorattr_)->push_back((yyvsp[-2].initdeclaratorattr_)); (yyval.listinitdeclaratorattr_) = (yyvsp[0].listinitdeclaratorattr_); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 2143 "partial_bnfc_parser.tab.c"
    break;

  case 67: /* InitDeclarator: Declarator  */
#line 376 "partial_bnfc_parser.y"
                            { (yyval.initdeclarator_) = new partial_acsl::SimpleInitDeclarator((yyvsp[0].declarator_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 2149 "partial_bnfc_parser.tab.c"
    break;

  case 68: /* StructDeclList: %empty  */
#line 378 "partial_bnfc_parser.y"
                             { (yyval.structdecllist_) = new partial_acsl::EmptyStructDecl(); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2155 "partial_bnfc_parser.tab.c"
    break;

  case 69: /* StructDeclList: DeclSpecList _SEMI StructDeclList  */
#line 379 "partial_bnfc_parser.y"
                                      { (yyval.structdecllist_) = new partial_acsl::DeclSpecStructDecl((yyvsp[-2].declspeclist_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2161 "partial_bnfc_parser.tab.c"
    break;

  case 70: /* StructDeclList: _SEMI StructDeclList  */
#line 380 "partial_bnfc_parser.y"
                         { (yyval.structdecllist_) = new partial_acsl::SemicolonStructDecl((yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2167 "partial_bnfc_parser.tab.c"
    break;

  case 71: /* StructDeclList: DeclSpecList ListFieldDecl _SEMI StructDeclList  */
#line 381 "partial_bnfc_parser.y"
                                                    { std::reverse((yyvsp[-2].listfielddecl_)->begin(),(yyvsp[-2].listfielddecl_)->end()) ;(yyval.structdecllist_) = new partial_acsl::SpecFieldDeclStructDecl((yyvsp[-3].declspeclist_), (yyvsp[-2].listfielddecl_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2173 "partial_bnfc_parser.tab.c"
    break;

  case 72: /* FieldDecl: Declarator  */
#line 383 "partial_bnfc_parser.y"
                       { (yyval.fielddecl_) = new partial_acsl::FieldDeclDeclarator((yyvsp[0].declarator_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 2179 "partial_bnfc_parser.tab.c"
    break;

  case 73: /* ListFieldDecl: FieldDecl  */
#line 385 "partial_bnfc_parser.y"
                          { (yyval.listfielddecl_) = new partial_acsl::ListFieldDecl(); (yyval.listfielddecl_)->push_back((yyvsp[0].fielddecl_)); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 2185 "partial_bnfc_parser.tab.c"
    break;

  case 74: /* ListFieldDecl: FieldDecl _COMMA ListFieldDecl  */
#line 386 "partial_bnfc_parser.y"
                                   { (yyvsp[0].listfielddecl_)->push_back((yyvsp[-2].fielddecl_)); (yyval.listfielddecl_) = (yyvsp[0].listfielddecl_); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 2191 "partial_bnfc_parser.tab.c"
    break;

  case 75: /* Attribute: T_CONST  */
#line 388 "partial_bnfc_parser.y"
                    { (yyval.attribute_) = new partial_acsl::AttributeConst((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 2197 "partial_bnfc_parser.tab.c"
    break;

  case 76: /* ListAttribute: %empty  */
#line 390 "partial_bnfc_parser.y"
                            { (yyval.listattribute_) = new partial_acsl::ListAttribute(); result->listattribute_ = (yyval.listattribute_); }
#line 2203 "partial_bnfc_parser.tab.c"
    break;

  case 77: /* ListAttribute: ListAttribute Attribute  */
#line 391 "partial_bnfc_parser.y"
                            { (yyvsp[-1].listattribute_)->push_back((yyvsp[0].attribute_)); (yyval.listattribute_) = (yyvsp[-1].listattribute_); result->listattribute_ = (yyval.listattribute_); }
#line 2209 "partial_bnfc_parser.tab.c"
    break;

  case 78: /* Block: _LBRACE BlockAttrs ListBlockElement _RBRACE  */
#line 393 "partial_bnfc_parser.y"
                                                    { (yyval.block_) = new partial_acsl::ABlock((yyvsp[-2].blockattrs_), (yyvsp[-1].listblockelement_)); (yyval.block_)->line_number = (yyloc).first_line; (yyval.block_)->char_number = (yyloc).first_column; result->block_ = (yyval.block_); }
#line 2215 "partial_bnfc_parser.tab.c"
    break;

  case 79: /* BlockAttrs: %empty  */
#line 395 "partial_bnfc_parser.y"
                         { (yyval.blockattrs_) = new partial_acsl::NoBlockAttrs(); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 2221 "partial_bnfc_parser.tab.c"
    break;

  case 80: /* BlockAttrs: T_BLOCKATTRIBUTE _LPAREN ListAttr _RPAREN  */
#line 396 "partial_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.blockattrs_) = new partial_acsl::SomeBlockAttrs((yyvsp[-3]._string), (yyvsp[-1].listattr_)); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 2227 "partial_bnfc_parser.tab.c"
    break;

  case 81: /* BlockElement: Declaration  */
#line 398 "partial_bnfc_parser.y"
                           { (yyval.blockelement_) = new partial_acsl::DeclarationElement((yyvsp[0].declaration_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 2233 "partial_bnfc_parser.tab.c"
    break;

  case 82: /* BlockElement: Statement  */
#line 399 "partial_bnfc_parser.y"
              { (yyval.blockelement_) = new partial_acsl::StatementElement((yyvsp[0].statement_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 2239 "partial_bnfc_parser.tab.c"
    break;

  case 83: /* ListBlockElement: %empty  */
#line 401 "partial_bnfc_parser.y"
                               { (yyval.listblockelement_) = new partial_acsl::ListBlockElement(); result->listblockelement_ = (yyval.listblockelement_); }
#line 2245 "partial_bnfc_parser.tab.c"
    break;

  case 84: /* ListBlockElement: ListBlockElement BlockElement  */
#line 402 "partial_bnfc_parser.y"
                                  { (yyvsp[-1].listblockelement_)->push_back((yyvsp[0].blockelement_)); (yyval.listblockelement_) = (yyvsp[-1].listblockelement_); result->listblockelement_ = (yyval.listblockelement_); }
#line 2251 "partial_bnfc_parser.tab.c"
    break;

  case 85: /* Statement: _SEMI  */
#line 404 "partial_bnfc_parser.y"
                  { (yyval.statement_) = new partial_acsl::SemicolonStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2257 "partial_bnfc_parser.tab.c"
    break;

  case 86: /* Statement: ListExpression _SEMI  */
#line 405 "partial_bnfc_parser.y"
                         { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::ExprsStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2263 "partial_bnfc_parser.tab.c"
    break;

  case 87: /* Statement: Block  */
#line 406 "partial_bnfc_parser.y"
          { (yyval.statement_) = new partial_acsl::BlockStatement((yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2269 "partial_bnfc_parser.tab.c"
    break;

  case 88: /* Statement: _KW_if _LPAREN ListExpression _RPAREN AnnotatedStmt ElsePart  */
#line 407 "partial_bnfc_parser.y"
                                                                 { std::reverse((yyvsp[-3].listexpression_)->begin(),(yyvsp[-3].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::IfStatement((yyvsp[-3].listexpression_), (yyvsp[-1].annotatedstmt_), (yyvsp[0].elsepart_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2275 "partial_bnfc_parser.tab.c"
    break;

  case 89: /* Statement: _KW_switch _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 408 "partial_bnfc_parser.y"
                                                            { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::SwitchStatement((yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2281 "partial_bnfc_parser.tab.c"
    break;

  case 90: /* Statement: _KW_while _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 409 "partial_bnfc_parser.y"
                                                           { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::WhileStatement((yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2287 "partial_bnfc_parser.tab.c"
    break;

  case 91: /* Statement: _KW_for _LPAREN ForClause OptExpression _SEMI OptExpression _RPAREN AnnotatedStmt  */
#line 410 "partial_bnfc_parser.y"
                                                                                      { (yyval.statement_) = new partial_acsl::ForStatement((yyvsp[-5].forclause_), (yyvsp[-4].optexpression_), (yyvsp[-2].optexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2293 "partial_bnfc_parser.tab.c"
    break;

  case 92: /* Statement: _KW_case Expression _COLON AnnotatedStmt  */
#line 411 "partial_bnfc_parser.y"
                                             { (yyval.statement_) = new partial_acsl::CaseStatement((yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2299 "partial_bnfc_parser.tab.c"
    break;

  case 93: /* Statement: _KW_case Expression _ELLIPSIS Expression _COLON AnnotatedStmt  */
#line 412 "partial_bnfc_parser.y"
                                                                  { (yyval.statement_) = new partial_acsl::CaseSliceStatement((yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2305 "partial_bnfc_parser.tab.c"
    break;

  case 94: /* Statement: _KW_default _COLON AnnotatedStmt  */
#line 413 "partial_bnfc_parser.y"
                                     { (yyval.statement_) = new partial_acsl::DefaultStatement((yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2311 "partial_bnfc_parser.tab.c"
    break;

  case 95: /* Statement: _KW_return _SEMI  */
#line 414 "partial_bnfc_parser.y"
                     { (yyval.statement_) = new partial_acsl::EmptyReturnStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2317 "partial_bnfc_parser.tab.c"
    break;

  case 96: /* Statement: _KW_return ListExpression _SEMI  */
#line 415 "partial_bnfc_parser.y"
                                    { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::ReturnStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2323 "partial_bnfc_parser.tab.c"
    break;

  case 97: /* Statement: _KW_break _SEMI  */
#line 416 "partial_bnfc_parser.y"
                    { (yyval.statement_) = new partial_acsl::BreakStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2329 "partial_bnfc_parser.tab.c"
    break;

  case 98: /* Statement: _KW_continue _SEMI  */
#line 417 "partial_bnfc_parser.y"
                       { (yyval.statement_) = new partial_acsl::ContinueStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2335 "partial_bnfc_parser.tab.c"
    break;

  case 99: /* ForClause: OptExpression _SEMI  */
#line 419 "partial_bnfc_parser.y"
                                { (yyval.forclause_) = new partial_acsl::ForClauseExpression((yyvsp[-1].optexpression_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 2341 "partial_bnfc_parser.tab.c"
    break;

  case 100: /* ForClause: Declaration  */
#line 420 "partial_bnfc_parser.y"
                { (yyval.forclause_) = new partial_acsl::ForClauseDeclaration((yyvsp[0].declaration_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 2347 "partial_bnfc_parser.tab.c"
    break;

  case 101: /* Attr: Attr1  */
#line 422 "partial_bnfc_parser.y"
             { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2353 "partial_bnfc_parser.tab.c"
    break;

  case 102: /* Attr: Attr1 _EQ Attr1  */
#line 423 "partial_bnfc_parser.y"
                    { (yyval.attr_) = new partial_acsl::AnAttr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2359 "partial_bnfc_parser.tab.c"
    break;

  case 103: /* ListAttr: Attr  */
#line 425 "partial_bnfc_parser.y"
                { (yyval.listattr_) = new partial_acsl::ListAttr(); (yyval.listattr_)->push_back((yyvsp[0].attr_)); result->listattr_ = (yyval.listattr_); }
#line 2365 "partial_bnfc_parser.tab.c"
    break;

  case 104: /* ListAttr: Attr _COMMA ListAttr  */
#line 426 "partial_bnfc_parser.y"
                         { (yyvsp[0].listattr_)->push_back((yyvsp[-2].attr_)); (yyval.listattr_) = (yyvsp[0].listattr_); result->listattr_ = (yyval.listattr_); }
#line 2371 "partial_bnfc_parser.tab.c"
    break;

  case 105: /* Attr1: Attr2  */
#line 428 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2377 "partial_bnfc_parser.tab.c"
    break;

  case 106: /* Attr1: Attr2 _QUESTION Attr1 _COLON Attr1  */
#line 429 "partial_bnfc_parser.y"
                                       { (yyval.attr_) = new partial_acsl::TernaryCond((yyvsp[-4].attr_), (yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2383 "partial_bnfc_parser.tab.c"
    break;

  case 107: /* Attr2: Attr3  */
#line 431 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2389 "partial_bnfc_parser.tab.c"
    break;

  case 108: /* Attr2: Attr2 _DBAR Attr3  */
#line 432 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::Or((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2395 "partial_bnfc_parser.tab.c"
    break;

  case 109: /* Attr3: Attr4  */
#line 434 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2401 "partial_bnfc_parser.tab.c"
    break;

  case 110: /* Attr3: Attr3 _DAMP Attr4  */
#line 435 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::And((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2407 "partial_bnfc_parser.tab.c"
    break;

  case 111: /* Attr4: Attr5  */
#line 437 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2413 "partial_bnfc_parser.tab.c"
    break;

  case 112: /* Attr4: Attr4 _BAR Attr5  */
#line 438 "partial_bnfc_parser.y"
                     { (yyval.attr_) = new partial_acsl::BitOr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2419 "partial_bnfc_parser.tab.c"
    break;

  case 113: /* Attr5: Attr6  */
#line 440 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2425 "partial_bnfc_parser.tab.c"
    break;

  case 114: /* Attr5: Attr5 _CARET Attr6  */
#line 441 "partial_bnfc_parser.y"
                       { (yyval.attr_) = new partial_acsl::Xor((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2431 "partial_bnfc_parser.tab.c"
    break;

  case 115: /* Attr6: Attr7  */
#line 443 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2437 "partial_bnfc_parser.tab.c"
    break;

  case 116: /* Attr6: Attr6 _AMP Attr7  */
#line 444 "partial_bnfc_parser.y"
                     { (yyval.attr_) = new partial_acsl::BitAnd((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2443 "partial_bnfc_parser.tab.c"
    break;

  case 117: /* Attr7: Attr8  */
#line 446 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2449 "partial_bnfc_parser.tab.c"
    break;

  case 118: /* Attr7: Attr7 _DEQ Attr8  */
#line 447 "partial_bnfc_parser.y"
                     { (yyval.attr_) = new partial_acsl::EqualEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2455 "partial_bnfc_parser.tab.c"
    break;

  case 119: /* Attr7: Attr7 _BANGEQ Attr8  */
#line 448 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::NotEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2461 "partial_bnfc_parser.tab.c"
    break;

  case 120: /* Attr8: Attr9  */
#line 450 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2467 "partial_bnfc_parser.tab.c"
    break;

  case 121: /* Attr8: Attr8 _LT Attr9  */
#line 451 "partial_bnfc_parser.y"
                    { (yyval.attr_) = new partial_acsl::Less((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2473 "partial_bnfc_parser.tab.c"
    break;

  case 122: /* Attr8: Attr8 _GT Attr9  */
#line 452 "partial_bnfc_parser.y"
                    { (yyval.attr_) = new partial_acsl::Greater((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2479 "partial_bnfc_parser.tab.c"
    break;

  case 123: /* Attr8: Attr8 _LDARROW Attr9  */
#line 453 "partial_bnfc_parser.y"
                         { (yyval.attr_) = new partial_acsl::LessEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2485 "partial_bnfc_parser.tab.c"
    break;

  case 124: /* Attr8: Attr8 _GTEQ Attr9  */
#line 454 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::GreaterEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2491 "partial_bnfc_parser.tab.c"
    break;

  case 125: /* Attr9: Attr10  */
#line 456 "partial_bnfc_parser.y"
               { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2497 "partial_bnfc_parser.tab.c"
    break;

  case 126: /* Attr9: Attr9 _DLT Attr10  */
#line 457 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::LeftShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2503 "partial_bnfc_parser.tab.c"
    break;

  case 127: /* Attr9: Attr9 _DGT Attr10  */
#line 458 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::RightShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2509 "partial_bnfc_parser.tab.c"
    break;

  case 128: /* Attr10: Attr11  */
#line 460 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2515 "partial_bnfc_parser.tab.c"
    break;

  case 129: /* Attr10: Attr10 _PLUS Attr11  */
#line 461 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::AddOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2521 "partial_bnfc_parser.tab.c"
    break;

  case 130: /* Attr10: Attr10 _MINUS Attr11  */
#line 462 "partial_bnfc_parser.y"
                         { (yyval.attr_) = new partial_acsl::SubOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2527 "partial_bnfc_parser.tab.c"
    break;

  case 131: /* Attr11: Attr12  */
#line 464 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2533 "partial_bnfc_parser.tab.c"
    break;

  case 132: /* Attr11: Attr11 _STAR Attr12  */
#line 465 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::MultOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2539 "partial_bnfc_parser.tab.c"
    break;

  case 133: /* Attr11: Attr11 _SLASH Attr12  */
#line 466 "partial_bnfc_parser.y"
                         { (yyval.attr_) = new partial_acsl::DivOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2545 "partial_bnfc_parser.tab.c"
    break;

  case 134: /* Attr11: Attr11 _PERCENT Attr12  */
#line 467 "partial_bnfc_parser.y"
                           { (yyval.attr_) = new partial_acsl::ModOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2551 "partial_bnfc_parser.tab.c"
    break;

  case 135: /* Attr12: Attr13  */
#line 469 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2557 "partial_bnfc_parser.tab.c"
    break;

  case 136: /* Attr12: _PLUS Attr12  */
#line 470 "partial_bnfc_parser.y"
                 { (yyval.attr_) = new partial_acsl::PlusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2563 "partial_bnfc_parser.tab.c"
    break;

  case 137: /* Attr12: _MINUS Attr12  */
#line 471 "partial_bnfc_parser.y"
                  { (yyval.attr_) = new partial_acsl::MinusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2569 "partial_bnfc_parser.tab.c"
    break;

  case 138: /* Attr12: _STAR Attr12  */
#line 472 "partial_bnfc_parser.y"
                 { (yyval.attr_) = new partial_acsl::MultUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2575 "partial_bnfc_parser.tab.c"
    break;

  case 139: /* Attr12: _AMP Attr12  */
#line 473 "partial_bnfc_parser.y"
                { (yyval.attr_) = new partial_acsl::AmpUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2581 "partial_bnfc_parser.tab.c"
    break;

  case 140: /* Attr12: _BANG Attr12  */
#line 474 "partial_bnfc_parser.y"
                 { (yyval.attr_) = new partial_acsl::NotUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2587 "partial_bnfc_parser.tab.c"
    break;

  case 141: /* Attr12: _TILDE Attr12  */
#line 475 "partial_bnfc_parser.y"
                  { (yyval.attr_) = new partial_acsl::TildeUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2593 "partial_bnfc_parser.tab.c"
    break;

  case 142: /* Attr13: Attr14  */
#line 477 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2599 "partial_bnfc_parser.tab.c"
    break;

  case 143: /* Attr13: IdOrTypenameAsId _LPAREN ListAttr _RPAREN  */
#line 478 "partial_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.attr_) = new partial_acsl::FuncationCall((yyvsp[-3].idortypenameasid_), (yyvsp[-1].listattr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2605 "partial_bnfc_parser.tab.c"
    break;

  case 144: /* Attr13: IdOrTypenameAsId _LPAREN _RPAREN  */
#line 479 "partial_bnfc_parser.y"
                                     { (yyval.attr_) = new partial_acsl::ProcedureCall((yyvsp[-2].idortypenameasid_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2611 "partial_bnfc_parser.tab.c"
    break;

  case 145: /* Attr13: Attr13 _RARROW IdOrTypename  */
#line 480 "partial_bnfc_parser.y"
                                { (yyval.attr_) = new partial_acsl::ArrowAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2617 "partial_bnfc_parser.tab.c"
    break;

  case 146: /* Attr13: Attr13 _DOT IdOrTypename  */
#line 481 "partial_bnfc_parser.y"
                             { (yyval.attr_) = new partial_acsl::DotAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2623 "partial_bnfc_parser.tab.c"
    break;

  case 147: /* Attr13: Attr13 _LBRACK Attr _RBRACK  */
#line 482 "partial_bnfc_parser.y"
                                { (yyval.attr_) = new partial_acsl::ArrayAttr((yyvsp[-3].attr_), (yyvsp[-1].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2629 "partial_bnfc_parser.tab.c"
    break;

  case 148: /* Attr14: BasicAttribute  */
#line 484 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::BasicAttr((yyvsp[0].basicattribute_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2635 "partial_bnfc_parser.tab.c"
    break;

  case 149: /* Attr14: _LPAREN Attr _RPAREN  */
#line 485 "partial_bnfc_parser.y"
                         { (yyval.attr_) = (yyvsp[-1].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2641 "partial_bnfc_parser.tab.c"
    break;

  case 150: /* BasicAttribute: _INTEGER_  */
#line 487 "partial_bnfc_parser.y"
                           { (yyval.basicattribute_) = new partial_acsl::BasicAttrConsInt((yyvsp[0]._int)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 2647 "partial_bnfc_parser.tab.c"
    break;

  case 151: /* BasicAttribute: _DOUBLE_  */
#line 488 "partial_bnfc_parser.y"
             { (yyval.basicattribute_) = new partial_acsl::BasicAttrConsFloat((yyvsp[0]._double)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 2653 "partial_bnfc_parser.tab.c"
    break;

  case 152: /* AnnotatedStmt: Statement  */
#line 490 "partial_bnfc_parser.y"
                          { (yyval.annotatedstmt_) = new partial_acsl::AnnotatedStatement((yyvsp[0].statement_)); (yyval.annotatedstmt_)->line_number = (yyloc).first_line; (yyval.annotatedstmt_)->char_number = (yyloc).first_column; result->annotatedstmt_ = (yyval.annotatedstmt_); }
#line 2659 "partial_bnfc_parser.tab.c"
    break;

  case 153: /* ElsePart: %empty  */
#line 492 "partial_bnfc_parser.y"
                       { (yyval.elsepart_) = new partial_acsl::NoElsePart(); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 2665 "partial_bnfc_parser.tab.c"
    break;

  case 154: /* ElsePart: _KW_else AnnotatedStmt  */
#line 493 "partial_bnfc_parser.y"
                           { (yyval.elsepart_) = new partial_acsl::SimpleElsePart((yyvsp[0].annotatedstmt_)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 2671 "partial_bnfc_parser.tab.c"
    break;

  case 155: /* OptExpression: %empty  */
#line 495 "partial_bnfc_parser.y"
                            { (yyval.optexpression_) = new partial_acsl::NoExpression(); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 2677 "partial_bnfc_parser.tab.c"
    break;

  case 156: /* OptExpression: ListExpression  */
#line 496 "partial_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.optexpression_) = new partial_acsl::SomeExpression((yyvsp[0].listexpression_)); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 2683 "partial_bnfc_parser.tab.c"
    break;

  case 157: /* Expression: AssignExpr  */
#line 498 "partial_bnfc_parser.y"
                        { (yyval.expression_) = new partial_acsl::AssignmentExpr((yyvsp[0].assignexpr_)); (yyval.expression_)->line_number = (yyloc).first_line; (yyval.expression_)->char_number = (yyloc).first_column; result->expression_ = (yyval.expression_); }
#line 2689 "partial_bnfc_parser.tab.c"
    break;

  case 158: /* ListExpression: Expression  */
#line 500 "partial_bnfc_parser.y"
                            { (yyval.listexpression_) = new partial_acsl::ListExpression(); (yyval.listexpression_)->push_back((yyvsp[0].expression_)); result->listexpression_ = (yyval.listexpression_); }
#line 2695 "partial_bnfc_parser.tab.c"
    break;

  case 159: /* ListExpression: Expression _COMMA ListExpression  */
#line 501 "partial_bnfc_parser.y"
                                     { (yyvsp[0].listexpression_)->push_back((yyvsp[-2].expression_)); (yyval.listexpression_) = (yyvsp[0].listexpression_); result->listexpression_ = (yyval.listexpression_); }
#line 2701 "partial_bnfc_parser.tab.c"
    break;

  case 160: /* AssignExpr: AssignExpr1  */
#line 503 "partial_bnfc_parser.y"
                         { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2707 "partial_bnfc_parser.tab.c"
    break;

  case 161: /* AssignExpr: AssignExpr12 _EQ AssignExpr  */
#line 504 "partial_bnfc_parser.y"
                                { (yyval.assignexpr_) = new partial_acsl::EqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2713 "partial_bnfc_parser.tab.c"
    break;

  case 162: /* AssignExpr: AssignExpr12 _PLUSEQ AssignExpr  */
#line 505 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::PlusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2719 "partial_bnfc_parser.tab.c"
    break;

  case 163: /* AssignExpr: AssignExpr12 _MINUSEQ AssignExpr  */
#line 506 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::MinusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2725 "partial_bnfc_parser.tab.c"
    break;

  case 164: /* AssignExpr: AssignExpr12 _STAREQ AssignExpr  */
#line 507 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::MultEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2731 "partial_bnfc_parser.tab.c"
    break;

  case 165: /* AssignExpr: AssignExpr12 _SLASHEQ AssignExpr  */
#line 508 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::DivEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2737 "partial_bnfc_parser.tab.c"
    break;

  case 166: /* AssignExpr: AssignExpr12 _PERCENTEQ AssignExpr  */
#line 509 "partial_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new partial_acsl::ModEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2743 "partial_bnfc_parser.tab.c"
    break;

  case 167: /* AssignExpr: AssignExpr12 _AMPEQ AssignExpr  */
#line 510 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::AndEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2749 "partial_bnfc_parser.tab.c"
    break;

  case 168: /* AssignExpr: AssignExpr12 _BAREQ AssignExpr  */
#line 511 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::OrEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2755 "partial_bnfc_parser.tab.c"
    break;

  case 169: /* AssignExpr: AssignExpr12 _CARETEQ AssignExpr  */
#line 512 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::XorEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2761 "partial_bnfc_parser.tab.c"
    break;

  case 170: /* AssignExpr: AssignExpr12 _DLTEQ AssignExpr  */
#line 513 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::LeftShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2767 "partial_bnfc_parser.tab.c"
    break;

  case 171: /* AssignExpr: AssignExpr12 _DGTEQ AssignExpr  */
#line 514 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::RightShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2773 "partial_bnfc_parser.tab.c"
    break;

  case 172: /* AssignExpr1: AssignExpr2  */
#line 516 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2779 "partial_bnfc_parser.tab.c"
    break;

  case 173: /* AssignExpr1: AssignExpr2 _QUESTION OptExpression _COLON AssignExpr1  */
#line 517 "partial_bnfc_parser.y"
                                                           { (yyval.assignexpr_) = new partial_acsl::TernaryCondExpr((yyvsp[-4].assignexpr_), (yyvsp[-2].optexpression_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2785 "partial_bnfc_parser.tab.c"
    break;

  case 174: /* AssignExpr2: AssignExpr3  */
#line 519 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2791 "partial_bnfc_parser.tab.c"
    break;

  case 175: /* AssignExpr2: AssignExpr2 _DBAR AssignExpr3  */
#line 520 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::OrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2797 "partial_bnfc_parser.tab.c"
    break;

  case 176: /* AssignExpr3: AssignExpr4  */
#line 522 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2803 "partial_bnfc_parser.tab.c"
    break;

  case 177: /* AssignExpr3: AssignExpr3 _DAMP AssignExpr4  */
#line 523 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::AndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2809 "partial_bnfc_parser.tab.c"
    break;

  case 178: /* AssignExpr4: AssignExpr5  */
#line 525 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2815 "partial_bnfc_parser.tab.c"
    break;

  case 179: /* AssignExpr4: AssignExpr4 _BAR AssignExpr5  */
#line 526 "partial_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new partial_acsl::BitOrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2821 "partial_bnfc_parser.tab.c"
    break;

  case 180: /* AssignExpr5: AssignExpr6  */
#line 528 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2827 "partial_bnfc_parser.tab.c"
    break;

  case 181: /* AssignExpr5: AssignExpr5 _CARET AssignExpr6  */
#line 529 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::BitXorExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2833 "partial_bnfc_parser.tab.c"
    break;

  case 182: /* AssignExpr6: AssignExpr7  */
#line 531 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2839 "partial_bnfc_parser.tab.c"
    break;

  case 183: /* AssignExpr6: AssignExpr6 _AMP AssignExpr7  */
#line 532 "partial_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new partial_acsl::BitAndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2845 "partial_bnfc_parser.tab.c"
    break;

  case 184: /* AssignExpr7: AssignExpr8  */
#line 534 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2851 "partial_bnfc_parser.tab.c"
    break;

  case 185: /* AssignExpr7: AssignExpr7 _DEQ AssignExpr8  */
#line 535 "partial_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new partial_acsl::EqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2857 "partial_bnfc_parser.tab.c"
    break;

  case 186: /* AssignExpr7: AssignExpr7 _BANGEQ AssignExpr8  */
#line 536 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::NotEqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2863 "partial_bnfc_parser.tab.c"
    break;

  case 187: /* AssignExpr8: AssignExpr9  */
#line 538 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2869 "partial_bnfc_parser.tab.c"
    break;

  case 188: /* AssignExpr8: AssignExpr8 _LT AssignExpr9  */
#line 539 "partial_bnfc_parser.y"
                                { (yyval.assignexpr_) = new partial_acsl::LessExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2875 "partial_bnfc_parser.tab.c"
    break;

  case 189: /* AssignExpr8: AssignExpr8 _GT AssignExpr9  */
#line 540 "partial_bnfc_parser.y"
                                { (yyval.assignexpr_) = new partial_acsl::GreaterExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2881 "partial_bnfc_parser.tab.c"
    break;

  case 190: /* AssignExpr8: AssignExpr8 _LDARROW AssignExpr9  */
#line 541 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::LessEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2887 "partial_bnfc_parser.tab.c"
    break;

  case 191: /* AssignExpr8: AssignExpr8 _GTEQ AssignExpr9  */
#line 542 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::GreaterEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2893 "partial_bnfc_parser.tab.c"
    break;

  case 192: /* AssignExpr9: AssignExpr10  */
#line 544 "partial_bnfc_parser.y"
                           { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2899 "partial_bnfc_parser.tab.c"
    break;

  case 193: /* AssignExpr9: AssignExpr9 _DLT AssignExpr10  */
#line 545 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::LeftShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2905 "partial_bnfc_parser.tab.c"
    break;

  case 194: /* AssignExpr9: AssignExpr9 _DGT AssignExpr10  */
#line 546 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::RightShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2911 "partial_bnfc_parser.tab.c"
    break;

  case 195: /* AssignExpr10: AssignExpr11  */
#line 548 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2917 "partial_bnfc_parser.tab.c"
    break;

  case 196: /* AssignExpr10: AssignExpr10 _PLUS AssignExpr11  */
#line 549 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::PlusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2923 "partial_bnfc_parser.tab.c"
    break;

  case 197: /* AssignExpr10: AssignExpr10 _MINUS AssignExpr11  */
#line 550 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::MinusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2929 "partial_bnfc_parser.tab.c"
    break;

  case 198: /* AssignExpr11: AssignExpr12  */
#line 552 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2935 "partial_bnfc_parser.tab.c"
    break;

  case 199: /* AssignExpr11: AssignExpr11 _STAR AssignExpr12  */
#line 553 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::MulsExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2941 "partial_bnfc_parser.tab.c"
    break;

  case 200: /* AssignExpr11: AssignExpr11 _SLASH AssignExpr12  */
#line 554 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::DivExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2947 "partial_bnfc_parser.tab.c"
    break;

  case 201: /* AssignExpr11: AssignExpr11 _PERCENT AssignExpr12  */
#line 555 "partial_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new partial_acsl::ModExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2953 "partial_bnfc_parser.tab.c"
    break;

  case 202: /* AssignExpr12: AssignExpr13  */
#line 557 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2959 "partial_bnfc_parser.tab.c"
    break;

  case 203: /* AssignExpr12: _LPAREN TypeName _RPAREN AssignExpr12  */
#line 558 "partial_bnfc_parser.y"
                                          { (yyval.assignexpr_) = new partial_acsl::CastExpr((yyvsp[-2].typename_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2965 "partial_bnfc_parser.tab.c"
    break;

  case 204: /* AssignExpr13: AssignExpr14  */
#line 560 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2971 "partial_bnfc_parser.tab.c"
    break;

  case 205: /* AssignExpr13: _DPLUS AssignExpr13  */
#line 561 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprPlusPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2977 "partial_bnfc_parser.tab.c"
    break;

  case 206: /* AssignExpr13: _DMINUS AssignExpr13  */
#line 562 "partial_bnfc_parser.y"
                         { (yyval.assignexpr_) = new partial_acsl::UnaryExprMinusMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2983 "partial_bnfc_parser.tab.c"
    break;

  case 207: /* AssignExpr13: _PLUS AssignExpr12  */
#line 563 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2989 "partial_bnfc_parser.tab.c"
    break;

  case 208: /* AssignExpr13: _MINUS AssignExpr12  */
#line 564 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2995 "partial_bnfc_parser.tab.c"
    break;

  case 209: /* AssignExpr13: _STAR AssignExpr12  */
#line 565 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprMult((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3001 "partial_bnfc_parser.tab.c"
    break;

  case 210: /* AssignExpr13: _AMP AssignExpr12  */
#line 566 "partial_bnfc_parser.y"
                      { (yyval.assignexpr_) = new partial_acsl::UnaryExprAmp((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3007 "partial_bnfc_parser.tab.c"
    break;

  case 211: /* AssignExpr13: _BANG AssignExpr12  */
#line 567 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprNot((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3013 "partial_bnfc_parser.tab.c"
    break;

  case 212: /* AssignExpr13: _TILDE AssignExpr12  */
#line 568 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprTilde((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3019 "partial_bnfc_parser.tab.c"
    break;

  case 213: /* AssignExpr13: _DAMP IdOrTypenameAsId  */
#line 569 "partial_bnfc_parser.y"
                           { (yyval.assignexpr_) = new partial_acsl::UnaryExprAddress((yyvsp[0].idortypenameasid_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3025 "partial_bnfc_parser.tab.c"
    break;

  case 214: /* AssignExpr14: AssignExpr15  */
#line 571 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3031 "partial_bnfc_parser.tab.c"
    break;

  case 215: /* AssignExpr14: AssignExpr14 _LBRACK ListExpression _RBRACK  */
#line 572 "partial_bnfc_parser.y"
                                                { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new partial_acsl::BracketsPostfixExpression((yyvsp[-3].assignexpr_), (yyvsp[-1].listexpression_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3037 "partial_bnfc_parser.tab.c"
    break;

  case 216: /* AssignExpr14: AssignExpr14 _DOT IdOrTypename  */
#line 573 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::DotPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3043 "partial_bnfc_parser.tab.c"
    break;

  case 217: /* AssignExpr14: AssignExpr14 _RARROW IdOrTypename  */
#line 574 "partial_bnfc_parser.y"
                                      { (yyval.assignexpr_) = new partial_acsl::ArrowPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3049 "partial_bnfc_parser.tab.c"
    break;

  case 218: /* AssignExpr14: AssignExpr14 _DPLUS  */
#line 575 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::PlusPlusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3055 "partial_bnfc_parser.tab.c"
    break;

  case 219: /* AssignExpr14: AssignExpr14 _DMINUS  */
#line 576 "partial_bnfc_parser.y"
                         { (yyval.assignexpr_) = new partial_acsl::MinusMinusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3061 "partial_bnfc_parser.tab.c"
    break;

  case 220: /* AssignExpr15: _IDENT_  */
#line 578 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::IdentifierPrimaryExpression((yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3067 "partial_bnfc_parser.tab.c"
    break;

  case 221: /* AssignExpr15: Constant  */
#line 579 "partial_bnfc_parser.y"
             { (yyval.assignexpr_) = new partial_acsl::ConstantPrimaryExpressin((yyvsp[0].constant_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3073 "partial_bnfc_parser.tab.c"
    break;

  case 222: /* AssignExpr15: _LPAREN ListExpression _RPAREN  */
#line 580 "partial_bnfc_parser.y"
                                   { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new partial_acsl::CommaExpressionPrimaryExpressin((yyvsp[-1].listexpression_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3079 "partial_bnfc_parser.tab.c"
    break;

  case 223: /* AssignExpr15: _LPAREN Block _RPAREN  */
#line 581 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = new partial_acsl::BlockPrimaryExpressin((yyvsp[-1].block_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3085 "partial_bnfc_parser.tab.c"
    break;

  case 224: /* Constant: _INTEGER_  */
#line 583 "partial_bnfc_parser.y"
                     { (yyval.constant_) = new partial_acsl::ConstantInt((yyvsp[0]._int)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3091 "partial_bnfc_parser.tab.c"
    break;

  case 225: /* Constant: _DOUBLE_  */
#line 584 "partial_bnfc_parser.y"
             { (yyval.constant_) = new partial_acsl::ConstantFloat((yyvsp[0]._double)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3097 "partial_bnfc_parser.tab.c"
    break;

  case 226: /* Constant: _CHAR_  */
#line 585 "partial_bnfc_parser.y"
           { (yyval.constant_) = new partial_acsl::ConstantChar((yyvsp[0]._char)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3103 "partial_bnfc_parser.tab.c"
    break;

  case 227: /* TypeName: DeclSpecList  */
#line 587 "partial_bnfc_parser.y"
                        { (yyval.typename_) = new partial_acsl::TypeNameDeclSpecList((yyvsp[0].declspeclist_)); (yyval.typename_)->line_number = (yyloc).first_line; (yyval.typename_)->char_number = (yyloc).first_column; result->typename_ = (yyval.typename_); }
#line 3109 "partial_bnfc_parser.tab.c"
    break;


#line 3113 "partial_bnfc_parser.tab.c"

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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, scanner, result);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 590 "partial_bnfc_parser.y"


namespace partial_acsl
{
/* Entrypoint: parse Program* from file. */
Program* pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Program* from string. */
Program* psProgram(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Globals* from file. */
Globals* pGlobals(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.globals_;
  }
}

/* Entrypoint: parse Globals* from string. */
Globals* psGlobals(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.globals_;
  }
}

/* Entrypoint: parse Global* from file. */
Global* pGlobal(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.global_;
  }
}

/* Entrypoint: parse Global* from string. */
Global* psGlobal(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.global_;
  }
}

/* Entrypoint: parse FunctionDef* from file. */
FunctionDef* pFunctionDef(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.functiondef_;
  }
}

/* Entrypoint: parse FunctionDef* from string. */
FunctionDef* psFunctionDef(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.functiondef_;
  }
}

/* Entrypoint: parse FunctionDefStart* from file. */
FunctionDefStart* pFunctionDefStart(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.functiondefstart_;
  }
}

/* Entrypoint: parse FunctionDefStart* from string. */
FunctionDefStart* psFunctionDefStart(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.functiondefstart_;
  }
}

/* Entrypoint: parse DeclSpecList* from file. */
DeclSpecList* pDeclSpecList(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declspeclist_;
  }
}

/* Entrypoint: parse DeclSpecList* from string. */
DeclSpecList* psDeclSpecList(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declspeclist_;
  }
}

/* Entrypoint: parse DeclSpecListNoNamed* from file. */
DeclSpecListNoNamed* pDeclSpecListNoNamed(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declspeclistnonamed_;
  }
}

/* Entrypoint: parse DeclSpecListNoNamed* from string. */
DeclSpecListNoNamed* psDeclSpecListNoNamed(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declspeclistnonamed_;
  }
}

/* Entrypoint: parse TypeSpec* from file. */
TypeSpec* pTypeSpec(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typespec_;
  }
}

/* Entrypoint: parse TypeSpec* from string. */
TypeSpec* psTypeSpec(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typespec_;
  }
}

/* Entrypoint: parse Enumerator* from file. */
Enumerator* pEnumerator(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.enumerator_;
  }
}

/* Entrypoint: parse Enumerator* from string. */
Enumerator* psEnumerator(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.enumerator_;
  }
}

/* Entrypoint: parse ListEnumerator* from file. */
ListEnumerator* pListEnumerator(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listenumerator_->begin(), result.listenumerator_->end());
    return result.listenumerator_;
  }
}

/* Entrypoint: parse ListEnumerator* from string. */
ListEnumerator* psListEnumerator(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listenumerator_->begin(), result.listenumerator_->end());
    return result.listenumerator_;
  }
}

/* Entrypoint: parse MaybeComma* from file. */
MaybeComma* pMaybeComma(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.maybecomma_;
  }
}

/* Entrypoint: parse MaybeComma* from string. */
MaybeComma* psMaybeComma(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.maybecomma_;
  }
}

/* Entrypoint: parse Declarator* from file. */
Declarator* pDeclarator(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declarator_;
  }
}

/* Entrypoint: parse Declarator* from string. */
Declarator* psDeclarator(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declarator_;
  }
}

/* Entrypoint: parse PointerOpt* from file. */
PointerOpt* pPointerOpt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pointeropt_;
  }
}

/* Entrypoint: parse PointerOpt* from string. */
PointerOpt* psPointerOpt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pointeropt_;
  }
}

/* Entrypoint: parse DirectDecl* from file. */
DirectDecl* pDirectDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.directdecl_;
  }
}

/* Entrypoint: parse DirectDecl* from string. */
DirectDecl* psDirectDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.directdecl_;
  }
}

/* Entrypoint: parse AttributesWithAsm* from file. */
AttributesWithAsm* pAttributesWithAsm(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attributeswithasm_;
  }
}

/* Entrypoint: parse AttributesWithAsm* from string. */
AttributesWithAsm* psAttributesWithAsm(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attributeswithasm_;
  }
}

/* Entrypoint: parse RestParList* from file. */
RestParList* pRestParList(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.restparlist_;
  }
}

/* Entrypoint: parse RestParList* from string. */
RestParList* psRestParList(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.restparlist_;
  }
}

/* Entrypoint: parse MaybeThreeDots* from file. */
MaybeThreeDots* pMaybeThreeDots(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.maybethreedots_;
  }
}

/* Entrypoint: parse MaybeThreeDots* from string. */
MaybeThreeDots* psMaybeThreeDots(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.maybethreedots_;
  }
}

/* Entrypoint: parse ParameterDecl* from file. */
ParameterDecl* pParameterDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.parameterdecl_;
  }
}

/* Entrypoint: parse ParameterDecl* from string. */
ParameterDecl* psParameterDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.parameterdecl_;
  }
}

/* Entrypoint: parse ListParameterDecl* from file. */
ListParameterDecl* pListParameterDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listparameterdecl_->begin(), result.listparameterdecl_->end());
    return result.listparameterdecl_;
  }
}

/* Entrypoint: parse ListParameterDecl* from string. */
ListParameterDecl* psListParameterDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listparameterdecl_->begin(), result.listparameterdecl_->end());
    return result.listparameterdecl_;
  }
}

/* Entrypoint: parse GhostParameterOpt* from file. */
GhostParameterOpt* pGhostParameterOpt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ghostparameteropt_;
  }
}

/* Entrypoint: parse GhostParameterOpt* from string. */
GhostParameterOpt* psGhostParameterOpt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ghostparameteropt_;
  }
}

/* Entrypoint: parse IdOrTypename* from file. */
IdOrTypename* pIdOrTypename(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.idortypename_;
  }
}

/* Entrypoint: parse IdOrTypename* from string. */
IdOrTypename* psIdOrTypename(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.idortypename_;
  }
}

/* Entrypoint: parse IdOrTypenameAsId* from file. */
IdOrTypenameAsId* pIdOrTypenameAsId(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.idortypenameasid_;
  }
}

/* Entrypoint: parse IdOrTypenameAsId* from string. */
IdOrTypenameAsId* psIdOrTypenameAsId(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.idortypenameasid_;
  }
}

/* Entrypoint: parse Declaration* from file. */
Declaration* pDeclaration(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declaration_;
  }
}

/* Entrypoint: parse Declaration* from string. */
Declaration* psDeclaration(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declaration_;
  }
}

/* Entrypoint: parse DeclAndInitDeclAttrList* from file. */
DeclAndInitDeclAttrList* pDeclAndInitDeclAttrList(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declandinitdeclattrlist_;
  }
}

/* Entrypoint: parse DeclAndInitDeclAttrList* from string. */
DeclAndInitDeclAttrList* psDeclAndInitDeclAttrList(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.declandinitdeclattrlist_;
  }
}

/* Entrypoint: parse InitDeclaratorAttr* from file. */
InitDeclaratorAttr* pInitDeclaratorAttr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.initdeclaratorattr_;
  }
}

/* Entrypoint: parse InitDeclaratorAttr* from string. */
InitDeclaratorAttr* psInitDeclaratorAttr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.initdeclaratorattr_;
  }
}

/* Entrypoint: parse ListInitDeclaratorAttr* from file. */
ListInitDeclaratorAttr* pListInitDeclaratorAttr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listinitdeclaratorattr_->begin(), result.listinitdeclaratorattr_->end());
    return result.listinitdeclaratorattr_;
  }
}

/* Entrypoint: parse ListInitDeclaratorAttr* from string. */
ListInitDeclaratorAttr* psListInitDeclaratorAttr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listinitdeclaratorattr_->begin(), result.listinitdeclaratorattr_->end());
    return result.listinitdeclaratorattr_;
  }
}

/* Entrypoint: parse InitDeclarator* from file. */
InitDeclarator* pInitDeclarator(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.initdeclarator_;
  }
}

/* Entrypoint: parse InitDeclarator* from string. */
InitDeclarator* psInitDeclarator(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.initdeclarator_;
  }
}

/* Entrypoint: parse StructDeclList* from file. */
StructDeclList* pStructDeclList(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.structdecllist_;
  }
}

/* Entrypoint: parse StructDeclList* from string. */
StructDeclList* psStructDeclList(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.structdecllist_;
  }
}

/* Entrypoint: parse FieldDecl* from file. */
FieldDecl* pFieldDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.fielddecl_;
  }
}

/* Entrypoint: parse FieldDecl* from string. */
FieldDecl* psFieldDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.fielddecl_;
  }
}

/* Entrypoint: parse ListFieldDecl* from file. */
ListFieldDecl* pListFieldDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listfielddecl_->begin(), result.listfielddecl_->end());
    return result.listfielddecl_;
  }
}

/* Entrypoint: parse ListFieldDecl* from string. */
ListFieldDecl* psListFieldDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listfielddecl_->begin(), result.listfielddecl_->end());
    return result.listfielddecl_;
  }
}

/* Entrypoint: parse Attribute* from file. */
Attribute* pAttribute(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attribute_;
  }
}

/* Entrypoint: parse Attribute* from string. */
Attribute* psAttribute(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attribute_;
  }
}

/* Entrypoint: parse ListAttribute* from file. */
ListAttribute* pListAttribute(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listattribute_;
  }
}

/* Entrypoint: parse ListAttribute* from string. */
ListAttribute* psListAttribute(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listattribute_;
  }
}

/* Entrypoint: parse Block* from file. */
Block* pBlock(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.block_;
  }
}

/* Entrypoint: parse Block* from string. */
Block* psBlock(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.block_;
  }
}

/* Entrypoint: parse BlockAttrs* from file. */
BlockAttrs* pBlockAttrs(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blockattrs_;
  }
}

/* Entrypoint: parse BlockAttrs* from string. */
BlockAttrs* psBlockAttrs(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blockattrs_;
  }
}

/* Entrypoint: parse BlockElement* from file. */
BlockElement* pBlockElement(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blockelement_;
  }
}

/* Entrypoint: parse BlockElement* from string. */
BlockElement* psBlockElement(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.blockelement_;
  }
}

/* Entrypoint: parse ListBlockElement* from file. */
ListBlockElement* pListBlockElement(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listblockelement_;
  }
}

/* Entrypoint: parse ListBlockElement* from string. */
ListBlockElement* psListBlockElement(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listblockelement_;
  }
}

/* Entrypoint: parse Statement* from file. */
Statement* pStatement(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.statement_;
  }
}

/* Entrypoint: parse Statement* from string. */
Statement* psStatement(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.statement_;
  }
}

/* Entrypoint: parse ForClause* from file. */
ForClause* pForClause(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.forclause_;
  }
}

/* Entrypoint: parse ForClause* from string. */
ForClause* psForClause(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.forclause_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse ListAttr* from file. */
ListAttr* pListAttr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listattr_->begin(), result.listattr_->end());
    return result.listattr_;
  }
}

/* Entrypoint: parse ListAttr* from string. */
ListAttr* psListAttr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listattr_->begin(), result.listattr_->end());
    return result.listattr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr4(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr4(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr5(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr5(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr6(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr6(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr7(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr7(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr8(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr8(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr10(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr10(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr11(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr11(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr12(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr12(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr13(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr13(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from file. */
Attr* pAttr14(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse Attr* from string. */
Attr* psAttr14(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.attr_;
  }
}

/* Entrypoint: parse BasicAttribute* from file. */
BasicAttribute* pBasicAttribute(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.basicattribute_;
  }
}

/* Entrypoint: parse BasicAttribute* from string. */
BasicAttribute* psBasicAttribute(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.basicattribute_;
  }
}

/* Entrypoint: parse AnnotatedStmt* from file. */
AnnotatedStmt* pAnnotatedStmt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotatedstmt_;
  }
}

/* Entrypoint: parse AnnotatedStmt* from string. */
AnnotatedStmt* psAnnotatedStmt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotatedstmt_;
  }
}

/* Entrypoint: parse ElsePart* from file. */
ElsePart* pElsePart(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.elsepart_;
  }
}

/* Entrypoint: parse ElsePart* from string. */
ElsePart* psElsePart(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.elsepart_;
  }
}

/* Entrypoint: parse OptExpression* from file. */
OptExpression* pOptExpression(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optexpression_;
  }
}

/* Entrypoint: parse OptExpression* from string. */
OptExpression* psOptExpression(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optexpression_;
  }
}

/* Entrypoint: parse Expression* from file. */
Expression* pExpression(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse Expression* from string. */
Expression* psExpression(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expression_;
  }
}

/* Entrypoint: parse ListExpression* from file. */
ListExpression* pListExpression(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpression_->begin(), result.listexpression_->end());
    return result.listexpression_;
  }
}

/* Entrypoint: parse ListExpression* from string. */
ListExpression* psListExpression(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpression_->begin(), result.listexpression_->end());
    return result.listexpression_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr4(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr4(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr5(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr5(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr6(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr6(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr7(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr7(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr8(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr8(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr10(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr10(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr11(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr11(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr12(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr12(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr13(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr13(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr14(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr14(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from file. */
AssignExpr* pAssignExpr15(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse AssignExpr* from string. */
AssignExpr* psAssignExpr15(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assignexpr_;
  }
}

/* Entrypoint: parse Constant* from file. */
Constant* pConstant(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.constant_;
  }
}

/* Entrypoint: parse Constant* from string. */
Constant* psConstant(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.constant_;
  }
}

/* Entrypoint: parse TypeName* from file. */
TypeName* pTypeName(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typename_;
  }
}

/* Entrypoint: parse TypeName* from string. */
TypeName* psTypeName(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_acsl_delete_buffer(buf, scanner);
  partial_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typename_;
  }
}


}
