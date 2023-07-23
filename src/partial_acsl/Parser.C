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

#line 105 "Parser.C"

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
  YYSYMBOL__SYMB_15 = 44,                  /* _SYMB_15  */
  YYSYMBOL__SYMB_16 = 45,                  /* _SYMB_16  */
  YYSYMBOL__SYMB_1 = 46,                   /* _SYMB_1  */
  YYSYMBOL__SYMB_2 = 47,                   /* _SYMB_2  */
  YYSYMBOL__SYMB_14 = 48,                  /* _SYMB_14  */
  YYSYMBOL__KW_auto = 49,                  /* _KW_auto  */
  YYSYMBOL__KW_break = 50,                 /* _KW_break  */
  YYSYMBOL__KW_case = 51,                  /* _KW_case  */
  YYSYMBOL__KW_char = 52,                  /* _KW_char  */
  YYSYMBOL__KW_continue = 53,              /* _KW_continue  */
  YYSYMBOL__KW_default = 54,               /* _KW_default  */
  YYSYMBOL__KW_do = 55,                    /* _KW_do  */
  YYSYMBOL__KW_double = 56,                /* _KW_double  */
  YYSYMBOL__KW_else = 57,                  /* _KW_else  */
  YYSYMBOL__KW_enum = 58,                  /* _KW_enum  */
  YYSYMBOL__KW_extern = 59,                /* _KW_extern  */
  YYSYMBOL__KW_float = 60,                 /* _KW_float  */
  YYSYMBOL__KW_for = 61,                   /* _KW_for  */
  YYSYMBOL__KW_goto = 62,                  /* _KW_goto  */
  YYSYMBOL__KW_if = 63,                    /* _KW_if  */
  YYSYMBOL__KW_int = 64,                   /* _KW_int  */
  YYSYMBOL__KW_long = 65,                  /* _KW_long  */
  YYSYMBOL__KW_register = 66,              /* _KW_register  */
  YYSYMBOL__KW_return = 67,                /* _KW_return  */
  YYSYMBOL__KW_short = 68,                 /* _KW_short  */
  YYSYMBOL__KW_71 = 69,                    /* _KW_71  */
  YYSYMBOL__KW_sizeof = 70,                /* _KW_sizeof  */
  YYSYMBOL__KW_static = 71,                /* _KW_static  */
  YYSYMBOL__KW_struct = 72,                /* _KW_struct  */
  YYSYMBOL__KW_switch = 73,                /* _KW_switch  */
  YYSYMBOL__KW_typedef = 74,               /* _KW_typedef  */
  YYSYMBOL__KW_union = 75,                 /* _KW_union  */
  YYSYMBOL__KW_unsigned = 76,              /* _KW_unsigned  */
  YYSYMBOL__KW_void = 77,                  /* _KW_void  */
  YYSYMBOL__KW_while = 78,                 /* _KW_while  */
  YYSYMBOL__LBRACE = 79,                   /* _LBRACE  */
  YYSYMBOL__BAR = 80,                      /* _BAR  */
  YYSYMBOL__BAREQ = 81,                    /* _BAREQ  */
  YYSYMBOL__DBAR = 82,                     /* _DBAR  */
  YYSYMBOL__RBRACE = 83,                   /* _RBRACE  */
  YYSYMBOL__TILDE = 84,                    /* _TILDE  */
  YYSYMBOL_T_ALIGNOF = 85,                 /* T_ALIGNOF  */
  YYSYMBOL_T_BLOCKATTRIBUTE = 86,          /* T_BLOCKATTRIBUTE  */
  YYSYMBOL_T_BOOL = 87,                    /* T_BOOL  */
  YYSYMBOL_T_CONST = 88,                   /* T_CONST  */
  YYSYMBOL_T_RESTRICT = 89,                /* T_RESTRICT  */
  YYSYMBOL_T_SIGNED = 90,                  /* T_SIGNED  */
  YYSYMBOL_T_VOLATILE = 91,                /* T_VOLATILE  */
  YYSYMBOL__STRING_ = 92,                  /* _STRING_  */
  YYSYMBOL__CHAR_ = 93,                    /* _CHAR_  */
  YYSYMBOL__INTEGER_ = 94,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 95,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 96,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 97,                  /* $accept  */
  YYSYMBOL_Program = 98,                   /* Program  */
  YYSYMBOL_Globals = 99,                   /* Globals  */
  YYSYMBOL_Global = 100,                   /* Global  */
  YYSYMBOL_FunctionDef = 101,              /* FunctionDef  */
  YYSYMBOL_FunctionDefStart = 102,         /* FunctionDefStart  */
  YYSYMBOL_DeclSpecList = 103,             /* DeclSpecList  */
  YYSYMBOL_DeclSpecListNoNamed = 104,      /* DeclSpecListNoNamed  */
  YYSYMBOL_DeclSpecWOType = 105,           /* DeclSpecWOType  */
  YYSYMBOL_TypeSpec = 106,                 /* TypeSpec  */
  YYSYMBOL_Enumerator = 107,               /* Enumerator  */
  YYSYMBOL_ListEnumerator = 108,           /* ListEnumerator  */
  YYSYMBOL_MaybeComma = 109,               /* MaybeComma  */
  YYSYMBOL_Declarator = 110,               /* Declarator  */
  YYSYMBOL_PointerOpt = 111,               /* PointerOpt  */
  YYSYMBOL_DirectDecl = 112,               /* DirectDecl  */
  YYSYMBOL_AttributesOrStatic = 113,       /* AttributesOrStatic  */
  YYSYMBOL_CommaExpressionOpt = 114,       /* CommaExpressionOpt  */
  YYSYMBOL_AttributesWithAsm = 115,        /* AttributesWithAsm  */
  YYSYMBOL_RestParList = 116,              /* RestParList  */
  YYSYMBOL_MaybeThreeDots = 117,           /* MaybeThreeDots  */
  YYSYMBOL_ParameterDecl = 118,            /* ParameterDecl  */
  YYSYMBOL_ListParameterDecl = 119,        /* ListParameterDecl  */
  YYSYMBOL_GhostParameterOpt = 120,        /* GhostParameterOpt  */
  YYSYMBOL_IdOrTypename = 121,             /* IdOrTypename  */
  YYSYMBOL_IdOrTypenameAsId = 122,         /* IdOrTypenameAsId  */
  YYSYMBOL_Declaration = 123,              /* Declaration  */
  YYSYMBOL_DeclAndInitDeclAttrList = 124,  /* DeclAndInitDeclAttrList  */
  YYSYMBOL_InitDeclaratorAttr = 125,       /* InitDeclaratorAttr  */
  YYSYMBOL_ListInitDeclaratorAttr = 126,   /* ListInitDeclaratorAttr  */
  YYSYMBOL_InitDeclarator = 127,           /* InitDeclarator  */
  YYSYMBOL_InitExpression = 128,           /* InitExpression  */
  YYSYMBOL_InitializerListOpt = 129,       /* InitializerListOpt  */
  YYSYMBOL_InitializerSingle = 130,        /* InitializerSingle  */
  YYSYMBOL_ListInitializerSingle = 131,    /* ListInitializerSingle  */
  YYSYMBOL_StructDeclList = 132,           /* StructDeclList  */
  YYSYMBOL_FieldDecl = 133,                /* FieldDecl  */
  YYSYMBOL_ListFieldDecl = 134,            /* ListFieldDecl  */
  YYSYMBOL_Attribute = 135,                /* Attribute  */
  YYSYMBOL_ListAttribute = 136,            /* ListAttribute  */
  YYSYMBOL_Block = 137,                    /* Block  */
  YYSYMBOL_BlockAttrs = 138,               /* BlockAttrs  */
  YYSYMBOL_BlockElement = 139,             /* BlockElement  */
  YYSYMBOL_ListBlockElement = 140,         /* ListBlockElement  */
  YYSYMBOL_Statement = 141,                /* Statement  */
  YYSYMBOL_OptLoopAnnotations = 142,       /* OptLoopAnnotations  */
  YYSYMBOL_ForClause = 143,                /* ForClause  */
  YYSYMBOL_Attr = 144,                     /* Attr  */
  YYSYMBOL_ListAttr = 145,                 /* ListAttr  */
  YYSYMBOL_Attr1 = 146,                    /* Attr1  */
  YYSYMBOL_Attr2 = 147,                    /* Attr2  */
  YYSYMBOL_Attr3 = 148,                    /* Attr3  */
  YYSYMBOL_Attr4 = 149,                    /* Attr4  */
  YYSYMBOL_Attr5 = 150,                    /* Attr5  */
  YYSYMBOL_Attr6 = 151,                    /* Attr6  */
  YYSYMBOL_Attr7 = 152,                    /* Attr7  */
  YYSYMBOL_Attr8 = 153,                    /* Attr8  */
  YYSYMBOL_Attr9 = 154,                    /* Attr9  */
  YYSYMBOL_Attr10 = 155,                   /* Attr10  */
  YYSYMBOL_Attr11 = 156,                   /* Attr11  */
  YYSYMBOL_Attr12 = 157,                   /* Attr12  */
  YYSYMBOL_Attr13 = 158,                   /* Attr13  */
  YYSYMBOL_Attr14 = 159,                   /* Attr14  */
  YYSYMBOL_BasicAttribute = 160,           /* BasicAttribute  */
  YYSYMBOL_AnnotatedStmt = 161,            /* AnnotatedStmt  */
  YYSYMBOL_ElsePart = 162,                 /* ElsePart  */
  YYSYMBOL_OptExpression = 163,            /* OptExpression  */
  YYSYMBOL_Expression = 164,               /* Expression  */
  YYSYMBOL_ListExpression = 165,           /* ListExpression  */
  YYSYMBOL_AssignExpr = 166,               /* AssignExpr  */
  YYSYMBOL_AssignExpr1 = 167,              /* AssignExpr1  */
  YYSYMBOL_AssignExpr2 = 168,              /* AssignExpr2  */
  YYSYMBOL_AssignExpr3 = 169,              /* AssignExpr3  */
  YYSYMBOL_AssignExpr4 = 170,              /* AssignExpr4  */
  YYSYMBOL_AssignExpr5 = 171,              /* AssignExpr5  */
  YYSYMBOL_AssignExpr6 = 172,              /* AssignExpr6  */
  YYSYMBOL_AssignExpr7 = 173,              /* AssignExpr7  */
  YYSYMBOL_AssignExpr8 = 174,              /* AssignExpr8  */
  YYSYMBOL_AssignExpr9 = 175,              /* AssignExpr9  */
  YYSYMBOL_AssignExpr10 = 176,             /* AssignExpr10  */
  YYSYMBOL_AssignExpr11 = 177,             /* AssignExpr11  */
  YYSYMBOL_AssignExpr12 = 178,             /* AssignExpr12  */
  YYSYMBOL_AssignExpr13 = 179,             /* AssignExpr13  */
  YYSYMBOL_AssignExpr14 = 180,             /* AssignExpr14  */
  YYSYMBOL_AssignExpr15 = 181,             /* AssignExpr15  */
  YYSYMBOL_Constant = 182,                 /* Constant  */
  YYSYMBOL_TypeName = 183,                 /* TypeName  */
  YYSYMBOL_Arguments = 184                 /* Arguments  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 117 "partial_bnfc_parser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, partial_acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 335 "Parser.C"


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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1243

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  270
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   351


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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   316,   316,   318,   319,   320,   322,   323,   325,   327,
     329,   330,   331,   332,   334,   335,   336,   337,   339,   340,
     341,   342,   343,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   368,   369,   371,   372,   374,
     375,   377,   379,   380,   382,   383,   384,   385,   387,   389,
     390,   392,   394,   396,   397,   399,   400,   402,   403,   405,
     407,   409,   411,   412,   414,   415,   417,   419,   420,   422,
     423,   425,   426,   428,   429,   430,   432,   433,   435,   436,
     438,   439,   440,   441,   443,   444,   445,   447,   448,   450,
     452,   453,   455,   457,   458,   460,   461,   463,   464,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   487,
     489,   490,   492,   493,   495,   496,   498,   499,   501,   502,
     504,   505,   507,   508,   510,   511,   513,   514,   516,   517,
     518,   520,   521,   522,   523,   524,   526,   527,   528,   530,
     531,   532,   534,   535,   536,   537,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   551,   552,   553,
     554,   555,   556,   558,   559,   561,   562,   564,   566,   567,
     569,   570,   572,   574,   575,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   587,   588,   590,   591,   593,
     594,   596,   597,   599,   600,   602,   603,   605,   606,   608,
     609,   610,   612,   613,   614,   615,   616,   618,   619,   620,
     622,   623,   624,   626,   627,   628,   629,   631,   632,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   649,   650,   651,   652,   653,   654,   655,
     657,   658,   659,   660,   662,   663,   664,   665,   667,   669,
     670
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
  "_QUESTION", "_LBRACK", "_RBRACK", "_CARET", "_CARETEQ", "_SYMB_15",
  "_SYMB_16", "_SYMB_1", "_SYMB_2", "_SYMB_14", "_KW_auto", "_KW_break",
  "_KW_case", "_KW_char", "_KW_continue", "_KW_default", "_KW_do",
  "_KW_double", "_KW_else", "_KW_enum", "_KW_extern", "_KW_float",
  "_KW_for", "_KW_goto", "_KW_if", "_KW_int", "_KW_long", "_KW_register",
  "_KW_return", "_KW_short", "_KW_71", "_KW_sizeof", "_KW_static",
  "_KW_struct", "_KW_switch", "_KW_typedef", "_KW_union", "_KW_unsigned",
  "_KW_void", "_KW_while", "_LBRACE", "_BAR", "_BAREQ", "_DBAR", "_RBRACE",
  "_TILDE", "T_ALIGNOF", "T_BLOCKATTRIBUTE", "T_BOOL", "T_CONST",
  "T_RESTRICT", "T_SIGNED", "T_VOLATILE", "_STRING_", "_CHAR_",
  "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept", "Program", "Globals",
  "Global", "FunctionDef", "FunctionDefStart", "DeclSpecList",
  "DeclSpecListNoNamed", "DeclSpecWOType", "TypeSpec", "Enumerator",
  "ListEnumerator", "MaybeComma", "Declarator", "PointerOpt", "DirectDecl",
  "AttributesOrStatic", "CommaExpressionOpt", "AttributesWithAsm",
  "RestParList", "MaybeThreeDots", "ParameterDecl", "ListParameterDecl",
  "GhostParameterOpt", "IdOrTypename", "IdOrTypenameAsId", "Declaration",
  "DeclAndInitDeclAttrList", "InitDeclaratorAttr",
  "ListInitDeclaratorAttr", "InitDeclarator", "InitExpression",
  "InitializerListOpt", "InitializerSingle", "ListInitializerSingle",
  "StructDeclList", "FieldDecl", "ListFieldDecl", "Attribute",
  "ListAttribute", "Block", "BlockAttrs", "BlockElement",
  "ListBlockElement", "Statement", "OptLoopAnnotations", "ForClause",
  "Attr", "ListAttr", "Attr1", "Attr2", "Attr3", "Attr4", "Attr5", "Attr6",
  "Attr7", "Attr8", "Attr9", "Attr10", "Attr11", "Attr12", "Attr13",
  "Attr14", "BasicAttribute", "AnnotatedStmt", "ElsePart", "OptExpression",
  "Expression", "ListExpression", "AssignExpr", "AssignExpr1",
  "AssignExpr2", "AssignExpr3", "AssignExpr4", "AssignExpr5",
  "AssignExpr6", "AssignExpr7", "AssignExpr8", "AssignExpr9",
  "AssignExpr10", "AssignExpr11", "AssignExpr12", "AssignExpr13",
  "AssignExpr14", "AssignExpr15", "Constant", "TypeName", "Arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-387)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1039,  1039,  -387,  -387,  -387,  -387,  -387,   -50,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,     9,  -387,    69,  -387,
    -387,  -387,  -387,    24,  -387,  1039,  -387,   -17,    63,  1153,
    1153,  -387,  -387,   -19,  -387,     4,  -387,  1120,    58,  1120,
      60,  -387,  -387,    45,  -387,  -387,  -387,    -5,    59,   145,
     146,  -387,  -387,  1153,  1153,   147,   164,   194,   -19,  1120,
     100,   107,  1120,   116,  1120,   203,  -387,    13,    50,    28,
    -387,  -387,   208,  -387,  -387,   898,   -19,  -387,   154,   194,
    -387,   898,  1120,   226,   240,   247,  -387,   201,  -387,   206,
     289,   459,  -387,  -387,  -387,   898,   898,    59,   552,   898,
     898,   916,   898,   916,   943,   272,   898,   956,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,    -4,   277,   210,
     252,   287,    47,   156,   138,   121,    91,   401,  -387,   136,
    -387,  -387,   181,  -387,  -387,   263,   283,  -387,  -387,  -387,
    -387,  -387,   220,  -387,  -387,   898,    90,  1120,  -387,  -387,
     289,   289,   289,   289,   289,   289,  1049,   289,  1062,  -387,
    -387,   295,   291,   298,   274,    -3,   302,   235,   276,   308,
      52,   184,   140,   134,   108,  -387,   101,  -387,  -387,  -387,
     -17,   292,   898,   297,   296,     3,   315,   756,   316,  -387,
     303,    63,   304,  -387,  -387,  -387,  -387,   -18,   301,   307,
    -387,  -387,  -387,  -387,   320,   324,   329,  -387,  -387,   805,
    -387,  -387,  -387,   552,  -387,   317,  -387,   260,   327,   328,
    -387,   552,  -387,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,   898,   898,   898,   898,   898,   898,
     898,   898,   898,   898,  -387,  -387,    59,    59,   898,  -387,
    1153,   335,   330,   331,   313,   849,   208,  -387,  -387,  -387,
    -387,  -387,  -387,   343,  -387,  -387,  -387,   552,  -387,  -387,
     552,  -387,   244,   289,  -387,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,    59,    59,   289,   173,  -387,
     157,  -387,   738,   898,   332,   898,  -387,   333,   898,   738,
     738,   347,   352,   898,  -387,  -387,  -387,   898,   357,    50,
    -387,   272,  -387,   358,   345,  -387,   277,  -387,   210,   252,
     287,    47,   156,   156,   138,   138,   138,   138,   121,   121,
      91,    91,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,   363,  -387,  -387,
     336,  -387,     6,  -387,   208,   354,  -387,  -387,  -387,  -387,
    -387,   288,  -387,   367,   369,  -387,   370,  -387,  -387,   360,
     302,   235,   276,   308,    52,   184,   184,   140,   140,   140,
     140,   134,   134,   108,   108,  -387,  -387,  -387,  -387,  -387,
     368,   377,   -17,   898,   738,  -387,  -387,   382,  -387,   400,
    -387,   402,  -387,   338,   645,   898,  -387,  -387,  -387,  -387,
    -387,  -387,   898,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,   289,  -387,   898,  -387,   386,  -387,  -387,   738,
     738,   406,  -387,   898,   391,   408,  -387,  -387,   409,   738,
     366,  -387,   898,   396,  -387,   738,   -17,  -387,   738,  -387,
     413,   898,  -387,  -387,  -387,   403,   416,  -387,   738,  -387
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     3,    27,    31,    21,    24,    33,     0,    19,    32,
      28,    30,    22,    26,    29,    20,     0,    18,     0,    35,
      23,    25,    34,     0,     2,     3,     7,     0,    52,    10,
      12,     6,     5,     0,    71,    42,    70,    90,    36,    90,
      39,     1,     4,   103,     8,   100,    73,    79,     0,     0,
      74,    11,    13,    14,    16,    45,    47,    49,     0,    90,
      52,     0,    90,     0,    90,     0,   107,    52,     0,    61,
      54,    72,    52,    15,    17,     0,     0,    50,     0,    49,
      92,     0,    90,    94,    97,     0,    38,     0,    41,     0,
       0,   129,    99,    53,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,   267,   266,
     264,   265,   260,    80,    81,   192,   195,   207,   209,   211,
     213,   215,   217,   219,   222,   227,   230,   233,   237,   239,
     253,   261,    52,   100,    51,    79,    77,    75,    76,    46,
      48,    44,     0,    96,    91,     0,    52,    90,    37,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
     186,     0,   134,     0,   132,   136,   138,   140,   142,   144,
     146,   148,   151,   156,   159,   162,   166,   177,   183,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     260,    52,     0,   105,   111,   108,   106,     0,   193,     0,
     250,   249,   252,   268,     0,     0,     0,   248,   246,     0,
     240,   247,   241,     0,   242,     0,    87,     0,    88,    84,
     251,     0,   244,   190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,   258,   259,     0,     0,     0,    69,
       0,     0,    67,    63,     0,    59,    52,    43,   100,    98,
      93,   175,   174,     0,   173,   171,   172,     0,   167,   176,
       0,   169,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,   124,   129,     0,     0,     0,   121,     0,     0,   129,
     129,     0,     0,     0,   110,   263,   262,     0,     0,     0,
      82,     0,    85,     0,     0,   191,   210,   233,   212,   214,
     216,   218,   221,   220,   223,   225,   224,   226,   228,   229,
     231,   232,   236,   234,   235,   201,   202,   199,   197,   198,
     200,   205,   196,   206,   204,   203,   270,     0,   257,   256,
       0,    56,    66,    69,    52,     0,    62,    55,    58,    60,
      78,    95,   184,     0,     0,   179,     0,   135,   133,     0,
     139,   141,   143,   145,   147,   150,   149,   152,   154,   153,
     155,   157,   158,   160,   161,   165,   163,   164,   180,   181,
       0,     0,     0,     0,   129,   187,   120,     0,   125,     0,
     122,     0,   117,     0,   190,     0,   194,   238,   243,    86,
      89,   245,     0,   255,   254,    65,    57,    68,    64,   168,
     170,   178,     0,   182,     0,   128,     0,   118,   126,   129,
     129,     0,   131,   190,     0,     0,   208,   137,     0,   129,
     188,   113,     0,     0,   130,   129,     0,   119,   129,   112,
       0,   190,   114,   127,   189,     0,     0,   115,   129,   116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -387,  -387,    55,  -387,  -387,  -387,     2,   172,    41,    57,
    -387,    49,   350,   -20,   -57,  -387,  -387,  -387,  -387,  -387,
    -387,  -387,    56,    62,    16,    -7,   -87,  -387,  -387,   167,
     -66,   -55,  -387,  -387,   105,    -9,  -387,   299,  -387,  -111,
     -26,  -387,  -387,  -387,   346,  -387,  -387,  -135,   -54,  -271,
    -387,   151,   153,   158,   159,   155,   -62,   -61,   -56,   -31,
    -106,  -387,  -387,  -387,  -299,  -387,  -386,   -63,   -91,   -41,
      18,  -387,   224,   228,   225,   227,   229,    15,     7,    11,
      40,   165,     5,  -387,  -387,  -387,  -188,  -387
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    23,    24,    25,    26,    27,    60,    52,    29,    30,
      56,    57,    78,   135,    48,    69,   264,   378,   134,   261,
     376,   262,   263,   371,   215,   161,    31,    49,   136,   137,
      50,   216,   217,   218,   219,    61,    84,    85,    94,    67,
     194,    66,   195,    91,   415,   197,   453,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   416,   469,   334,   198,   199,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   206,   367
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    44,    28,    28,   193,   114,   138,   205,    47,    36,
      93,    36,   139,   113,   388,   389,   313,   273,   143,    45,
     422,   423,   265,    35,    41,   328,    45,    28,    68,    33,
      63,    51,    38,   333,    40,   223,   286,   320,   454,   132,
      83,    36,   114,   321,   271,   272,    34,   274,   275,   276,
      80,   279,   229,    87,    95,    89,    32,   292,    96,    97,
     322,    98,    43,    99,    70,   100,   101,   463,   133,   102,
     103,    53,   204,   144,    -9,   260,    45,    55,   224,   287,
      42,   230,   268,    58,   192,   476,   293,    54,    37,   383,
     202,    46,   384,   191,    53,    53,   317,   239,    36,    34,
     203,    92,   -52,    45,   240,    34,   210,    79,   212,   214,
      54,    54,   222,    45,   302,   447,   241,    81,   205,   310,
     104,   303,   205,   305,   306,   140,    83,    81,    82,   105,
     205,    65,   335,   304,   106,   107,   237,    62,   270,    64,
     238,   307,   108,   109,   110,   111,   112,   253,    39,   300,
     460,   461,   254,   301,   308,    34,   255,   381,   256,   257,
     467,   278,   366,   281,    72,    34,   472,   370,   235,   474,
     298,   457,   410,    71,   379,   236,   258,   299,   314,   479,
      75,   413,    76,   204,   414,   231,   205,   204,   232,   205,
      86,   233,   234,   259,    45,   204,   405,   406,   407,    88,
     138,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,    77,   294,    90,   203,   295,   411,   412,   296,
     297,    45,   417,   203,   419,    73,    74,   421,   386,   387,
     395,   396,   426,   397,   398,   399,   400,   141,   344,   345,
     346,   347,   401,   402,   342,   343,   348,   349,   150,    36,
      36,   204,   151,   145,   204,   152,   385,   153,   146,   154,
     200,   201,   372,   155,   207,   208,   114,   211,   114,   403,
     404,   220,   368,   369,   429,   147,    95,   350,   351,   203,
      96,    97,   203,    98,   148,    99,   225,   100,   101,   149,
     226,   102,   103,   150,   227,   228,    68,   151,    36,    36,
     152,   266,   153,   267,   154,   192,   282,   285,   155,   283,
     284,   288,   192,   192,   156,   289,   291,   260,   290,   323,
     309,   408,   409,   312,    36,   311,   315,   318,   157,   158,
     -71,   319,   325,   335,   455,   324,   326,   452,   159,   160,
      34,   327,   104,   330,   329,   331,   332,   373,   374,   375,
     446,   105,   435,   458,   377,   382,   106,   107,   424,   156,
     418,   420,   335,   425,   108,   109,   110,   111,   190,   428,
     431,   470,   432,   157,   158,   433,    92,   434,   438,   439,
     335,   440,   441,   159,   160,    34,   445,   442,   444,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   352,   353,   354,   192,   242,   443,
     448,   243,   449,   459,   450,   244,   451,   462,   245,   464,
     465,   466,   246,   468,   471,   475,   191,   247,   478,   142,
     437,   477,   248,   380,   249,   436,   430,   196,   390,   250,
     473,   391,   192,   192,   251,   269,   394,   392,   336,   393,
     456,   339,   192,   338,   340,     0,     0,   341,   192,     0,
       0,   192,     0,    95,     0,     0,     0,    96,    97,     0,
      98,   192,    99,     0,   100,   101,     0,     0,   102,   103,
       0,     0,   252,     0,     0,     0,     0,   179,     0,     0,
       0,     0,   427,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,   180,     4,   181,
     182,     5,   183,   184,     0,     6,     0,     7,     8,     9,
       0,   185,   186,    10,    11,    12,   187,    13,    14,   104,
      15,    16,   188,    17,    18,    19,    20,     0,    43,     0,
       0,     0,   189,   106,   107,     0,    21,     0,     0,    22,
       0,   108,   109,   110,   111,   190,    95,     0,     0,     0,
      96,    97,     0,    98,     0,    99,     0,   100,   101,     0,
       0,   102,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   337,     2,     3,
       0,     4,     0,     0,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,     0,
      13,    14,   104,    15,    16,     0,    17,    18,    19,    20,
       0,    43,     0,     0,     0,     0,   106,   107,     0,    21,
       0,     0,    22,     0,   108,   109,   110,   111,   112,    95,
       0,     0,     0,    96,    97,     0,    98,     0,    99,     0,
     100,   101,     0,     0,   102,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     0,     4,     0,     0,     5,     0,     0,
       0,     6,     0,     7,     8,     9,     0,     0,     0,    10,
      11,    12,     0,    13,    14,   104,    15,    16,     0,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,   106,
     107,     0,    21,     0,     0,    22,     0,   108,   109,   110,
     111,   112,    95,     0,     0,     0,    96,    97,     0,    98,
       0,    99,     0,   100,   101,     0,     0,   102,   103,     0,
      95,     0,     0,     0,    96,    97,   179,    98,     0,    99,
       0,   100,   101,     0,     0,   102,   103,     0,     0,     0,
       0,     0,     0,     0,   316,     0,   180,     0,   181,   182,
       0,   183,   184,     0,     0,     0,     0,     0,     0,     0,
     185,   186,     0,     0,     0,   187,     0,     0,   104,    95,
       0,   188,     0,    96,    97,     0,    98,    43,    99,     0,
     100,   101,   106,   107,   102,   103,   104,     0,     0,     0,
     108,   109,   110,   111,   190,     0,     0,     0,     0,     0,
     106,   107,     0,     0,     0,     0,     0,     0,   108,   109,
     110,   111,   112,    95,     0,     0,     0,    96,    97,     0,
      98,     0,    99,     0,   100,   101,     0,     0,   102,   103,
       0,     0,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,   106,
     107,     0,     0,     0,     0,     0,     0,   108,   109,   110,
     111,   112,    95,     0,     0,     0,    96,    97,     0,    98,
       0,    99,     0,   100,   101,     0,     0,   102,   103,   104,
      95,     0,     0,     0,    96,    97,     0,   209,     0,    99,
       0,   100,   101,   106,   107,   102,   103,    92,     0,     0,
       0,   108,   109,   110,   111,   112,     0,    95,     0,     0,
       0,    96,    97,     0,   213,     0,    99,     0,   100,   101,
      95,     0,   102,   103,    96,    97,     0,   221,   104,    99,
       0,   100,   101,     0,     0,   102,   103,     0,     0,     0,
       0,     0,   106,   107,     0,     0,   104,     0,     0,     0,
     108,   109,   110,   111,   112,     0,     0,     0,     0,     0,
     106,   107,     0,     0,     0,     0,     0,     0,   108,   109,
     110,   111,   112,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,   106,   107,     0,
       0,     0,     0,     0,     0,   108,   109,   110,   111,   112,
     106,   107,     0,     0,     0,     0,     0,     0,   108,   109,
     110,   111,   112,    95,     0,     0,     0,    96,    97,     0,
     277,     0,    99,     0,   100,   101,    95,     1,   102,   103,
      96,    97,     0,   280,     0,    99,     0,   100,   101,     0,
       0,   102,   103,     0,     0,     2,     3,     0,     4,     0,
       0,     5,     0,     0,     0,     6,     0,     7,     8,     9,
       0,     0,     0,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,     0,     0,   104,
       0,     0,     0,     0,     0,     0,    21,     0,     0,    22,
       0,     0,   104,   106,   107,     0,     0,     0,     0,     0,
       0,   108,   109,   110,   111,   112,   106,   107,    59,     0,
       0,     0,     0,     0,   108,   109,   110,   111,   112,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     4,
       0,     0,     5,     0,     0,     0,     6,     0,     7,     8,
       9,     0,     0,     0,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,     0,     2,
       3,     0,     4,     0,     0,     5,     0,    21,     0,     6,
      22,     7,     8,     9,     0,     0,     0,    10,    11,    12,
       0,    13,    14,     0,    15,    16,     0,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,    22
};

static const yytype_int16 yycheck[] =
{
       7,    27,     0,     1,    91,    68,    72,    98,    28,    16,
      67,    18,    75,    68,   285,   286,    13,   152,    81,    13,
     319,   320,   133,     7,     0,   213,    13,    25,    33,    79,
      39,    29,    16,   221,    18,    39,    39,    55,   424,    11,
      60,    48,   105,    61,   150,   151,    96,   153,   154,   155,
      59,   157,     5,    62,     4,    64,     1,     5,     8,     9,
      78,    11,    79,    13,    48,    15,    16,   453,    40,    19,
      20,    30,    98,    82,    79,   132,    13,    96,    82,    82,
      25,    34,   145,    79,    91,   471,    34,    30,    79,   277,
      97,    28,   280,    91,    53,    54,   187,     6,   105,    96,
      98,    88,    96,    13,    13,    96,   101,    58,   103,   104,
      53,    54,   107,    13,     6,   414,    25,    27,   209,   182,
      70,    13,   213,    22,    23,    76,   146,    27,    28,    79,
     221,    86,   223,    25,    84,    85,    15,    79,   147,    79,
      19,    40,    92,    93,    94,    95,    96,    11,    79,    15,
     449,   450,    16,    19,   180,    96,    20,   268,    22,    23,
     459,   156,   253,   158,    18,    96,   465,   258,    30,   468,
      30,   442,   307,    28,   265,    37,    40,    37,   185,   478,
      33,    24,    18,   209,    27,    29,   277,   213,    32,   280,
      83,    35,    36,    12,    13,   221,   302,   303,   304,    83,
     266,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    18,    29,    11,   213,    32,    44,    45,    35,
      36,    13,   313,   221,   315,    53,    54,   318,   282,   283,
     292,   293,   323,   294,   295,   296,   297,    83,   231,   232,
     233,   234,   298,   299,   229,   230,   235,   236,     4,   256,
     257,   277,     8,    27,   280,    11,    12,    13,    18,    15,
      95,    96,   260,    19,    99,   100,   329,   102,   331,   300,
     301,   106,   256,   257,   329,    28,     4,   237,   238,   277,
       8,     9,   280,    11,    83,    13,     9,    15,    16,    83,
      80,    19,    20,     4,    42,     8,    33,     8,   305,   306,
      11,    18,    13,    83,    15,   312,    11,    33,    19,    18,
      12,     9,   319,   320,    70,    80,     8,   374,    42,    18,
      28,   305,   306,    27,   331,    28,    11,    11,    84,    85,
      27,    27,    12,   424,   425,    28,    12,   424,    94,    95,
      96,    12,    70,    83,    27,    18,    18,    12,    18,    18,
     413,    79,   372,   444,    41,    12,    84,    85,    11,    70,
      28,    28,   453,    11,    92,    93,    94,    95,    96,    12,
      12,   462,    27,    84,    85,    12,    88,    41,    24,    12,
     471,    12,    12,    94,    95,    96,   412,    27,    11,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   414,     7,    41,
      28,    10,    12,    27,    12,    14,    78,    11,    17,    28,
      12,    12,    21,    57,    28,    12,   424,    26,    12,    79,
     374,    28,    31,   266,    33,   373,   331,    91,   287,    38,
     466,   288,   449,   450,    43,   146,   291,   289,   224,   290,
     432,   226,   459,   225,   227,    -1,    -1,   228,   465,    -1,
      -1,   468,    -1,     4,    -1,    -1,    -1,     8,     9,    -1,
      11,   478,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    -1,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    79,    -1,
      -1,    -1,    83,    84,    85,    -1,    87,    -1,    -1,    90,
      -1,    92,    93,    94,    95,    96,     4,    -1,    -1,    -1,
       8,     9,    -1,    11,    -1,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   432,    46,    47,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    -1,    -1,    -1,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      -1,    79,    -1,    -1,    -1,    -1,    84,    85,    -1,    87,
      -1,    -1,    90,    -1,    92,    93,    94,    95,    96,     4,
      -1,    -1,    -1,     8,     9,    -1,    11,    -1,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    49,    -1,    -1,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    -1,    -1,    -1,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    -1,    87,    -1,    -1,    90,    -1,    92,    93,    94,
      95,    96,     4,    -1,    -1,    -1,     8,     9,    -1,    11,
      -1,    13,    -1,    15,    16,    -1,    -1,    19,    20,    -1,
       4,    -1,    -1,    -1,     8,     9,    28,    11,    -1,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    48,    -1,    50,    51,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    -1,    67,    -1,    -1,    70,     4,
      -1,    73,    -1,     8,     9,    -1,    11,    79,    13,    -1,
      15,    16,    84,    85,    19,    20,    70,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,     4,    -1,    -1,    -1,     8,     9,    -1,
      11,    -1,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    96,     4,    -1,    -1,    -1,     8,     9,    -1,    11,
      -1,    13,    -1,    15,    16,    -1,    -1,    19,    20,    70,
       4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,    13,
      -1,    15,    16,    84,    85,    19,    20,    88,    -1,    -1,
      -1,    92,    93,    94,    95,    96,    -1,     4,    -1,    -1,
      -1,     8,     9,    -1,    11,    -1,    13,    -1,    15,    16,
       4,    -1,    19,    20,     8,     9,    -1,    11,    70,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    84,    85,    -1,    -1,    70,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,     4,    -1,    -1,    -1,     8,     9,    -1,
      11,    -1,    13,    -1,    15,    16,     4,    28,    19,    20,
       8,     9,    -1,    11,    -1,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    -1,    -1,    46,    47,    -1,    49,    -1,
      -1,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      -1,    -1,    -1,    64,    65,    66,    -1,    68,    69,    -1,
      71,    72,    -1,    74,    75,    76,    77,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      -1,    -1,    70,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    96,    84,    85,    28,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    -1,    58,    59,
      60,    -1,    -1,    -1,    64,    65,    66,    -1,    68,    69,
      -1,    71,    72,    -1,    74,    75,    76,    77,    -1,    46,
      47,    -1,    49,    -1,    -1,    52,    -1,    87,    -1,    56,
      90,    58,    59,    60,    -1,    -1,    -1,    64,    65,    66,
      -1,    68,    69,    -1,    71,    72,    -1,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    46,    47,    49,    52,    56,    58,    59,    60,
      64,    65,    66,    68,    69,    71,    72,    74,    75,    76,
      77,    87,    90,    98,    99,   100,   101,   102,   103,   105,
     106,   123,    99,    79,    96,   121,   122,    79,   121,    79,
     121,     0,    99,    79,   137,    13,    28,   110,   111,   124,
     127,   103,   104,   105,   106,    96,   107,   108,    79,    28,
     103,   132,    79,   132,    79,    86,   138,   136,    33,   112,
     121,    28,    18,   104,   104,    33,    18,    18,   109,   108,
     132,    27,    28,   110,   133,   134,    83,   132,    83,   132,
      11,   140,    88,   111,   135,     4,     8,     9,    11,    13,
      15,    16,    19,    20,    70,    79,    84,    85,    92,    93,
      94,    95,    96,   128,   164,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    11,    40,   115,   110,   125,   126,   127,   164,
     108,    83,   109,   164,   132,    27,    18,    28,    83,    83,
       4,     8,    11,    13,    15,    19,    70,    84,    85,    94,
      95,   122,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,    28,
      48,    50,    51,    53,    54,    62,    63,    67,    73,    83,
      96,   103,   122,   123,   137,   139,   141,   142,   164,   165,
     178,   178,   122,   103,   137,   165,   183,   178,   178,    11,
     179,   178,   179,    11,   179,   121,   128,   129,   130,   131,
     178,    11,   179,    39,    82,     9,    80,    42,     8,     5,
      34,    29,    32,    35,    36,    30,    37,    15,    19,     6,
      13,    25,     7,    10,    14,    17,    21,    26,    31,    33,
      38,    43,    81,    11,    16,    20,    22,    23,    40,    12,
     111,   116,   118,   119,   113,   136,    18,    83,   164,   134,
     132,   157,   157,   144,   157,   157,   157,    11,   179,   157,
      11,   179,    11,    18,    12,    33,    39,    82,     9,    80,
      42,     8,     5,    34,    29,    32,    35,    36,    30,    37,
      15,    19,     6,    13,    25,    22,    23,    40,   137,    28,
     164,    28,    27,    13,   122,    11,    28,   165,    11,    27,
      55,    61,    78,    18,    28,    12,    12,    12,   183,    27,
      83,    18,    18,   183,   163,   165,   169,   178,   170,   171,
     172,   173,   174,   174,   175,   175,   175,   175,   176,   176,
     177,   177,   178,   178,   178,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   165,   184,   121,   121,
     165,   120,   103,    12,    18,    18,   117,    41,   114,   165,
     126,   136,    12,   183,   183,    12,   145,   145,   146,   146,
     148,   149,   150,   151,   152,   153,   153,   154,   154,   154,
     154,   155,   155,   156,   156,   157,   157,   157,   121,   121,
     144,    44,    45,    24,    27,   141,   161,   165,    28,   165,
      28,   165,   161,   161,    11,    11,   165,   178,    12,   128,
     131,    12,    27,    12,    41,   110,   120,   119,    24,    12,
      12,    12,    27,    41,    11,   137,   164,   161,    28,    12,
      12,    78,   123,   143,   163,   165,   167,   146,   165,    27,
     161,   161,    11,   163,    28,    12,    12,   161,    57,   162,
     165,    28,   161,   137,   161,    12,   163,    28,    12,   161
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    99,    99,    99,   100,   100,   101,   102,
     103,   103,   103,   103,   104,   104,   104,   104,   105,   105,
     105,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   111,   111,   112,   112,   112,   112,   113,   114,
     114,   115,   116,   117,   117,   118,   118,   119,   119,   120,
     121,   122,   123,   123,   124,   124,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   129,   130,   130,   131,   131,
     132,   132,   132,   132,   133,   133,   133,   134,   134,   135,
     136,   136,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   153,   153,   153,   154,   154,   154,   155,
     155,   155,   156,   156,   156,   156,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   158,   158,   158,
     158,   158,   158,   159,   159,   160,   160,   161,   162,   162,
     163,   163,   164,   165,   165,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   172,   173,
     173,   173,   174,   174,   174,   174,   174,   175,   175,   175,
     176,   176,   176,   177,   177,   177,   177,   178,   178,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   180,   180,   180,   180,   180,   180,   180,
     181,   181,   181,   181,   182,   182,   182,   182,   183,   184,
     184
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     4,     2,
       5,     4,     2,     6,     5,     1,     3,     1,     3,     0,
       1,     3,     0,     3,     1,     4,     4,     5,     2,     0,
       1,     0,     2,     0,     2,     3,     2,     1,     3,     0,
       1,     1,     3,     2,     1,     3,     1,     1,     3,     1,
       3,     1,     3,     0,     1,     2,     3,     1,     1,     3,
       0,     3,     2,     4,     1,     4,     2,     1,     3,     1,
       0,     2,     4,     0,     4,     1,     1,     0,     2,     1,
       2,     1,     6,     5,     6,     8,     9,     3,     4,     6,
       3,     2,     3,     2,     2,     3,     4,     7,     4,     0,
       2,     1,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     4,     2,
       4,     2,     2,     2,     2,     2,     2,     1,     4,     3,
       3,     3,     4,     1,     3,     1,     1,     1,     0,     2,
       0,     1,     1,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     4,     1,
       2,     2,     2,     4,     2,     4,     2,     2,     2,     2,
       2,     2,     2,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     0,
       1
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
#line 316 "partial_bnfc_parser.y"
                  { (yyval.program_) = new partial_acsl::AProgram((yyvsp[0].globals_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1935 "Parser.C"
    break;

  case 3: /* Globals: %empty  */
#line 318 "partial_bnfc_parser.y"
                      { (yyval.globals_) = new partial_acsl::NoGlobals(); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1941 "Parser.C"
    break;

  case 4: /* Globals: Global Globals  */
#line 319 "partial_bnfc_parser.y"
                   { (yyval.globals_) = new partial_acsl::SimpleGlobals((yyvsp[-1].global_), (yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1947 "Parser.C"
    break;

  case 5: /* Globals: _SEMI Globals  */
#line 320 "partial_bnfc_parser.y"
                  { (yyval.globals_) = new partial_acsl::SemiColonGlobals((yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1953 "Parser.C"
    break;

  case 6: /* Global: Declaration  */
#line 322 "partial_bnfc_parser.y"
                     { (yyval.global_) = new partial_acsl::GlobalsDeclataion((yyvsp[0].declaration_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 1959 "Parser.C"
    break;

  case 7: /* Global: FunctionDef  */
#line 323 "partial_bnfc_parser.y"
                { (yyval.global_) = new partial_acsl::GlobalsFunctionDef((yyvsp[0].functiondef_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 1965 "Parser.C"
    break;

  case 8: /* FunctionDef: FunctionDefStart Block  */
#line 325 "partial_bnfc_parser.y"
                                     { (yyval.functiondef_) = new partial_acsl::SimpleFunctionDef((yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 1971 "Parser.C"
    break;

  case 9: /* FunctionDefStart: DeclSpecList Declarator  */
#line 327 "partial_bnfc_parser.y"
                                           { (yyval.functiondefstart_) = new partial_acsl::FunctionDefStartDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 1977 "Parser.C"
    break;

  case 10: /* DeclSpecList: DeclSpecWOType  */
#line 329 "partial_bnfc_parser.y"
                              { (yyval.declspeclist_) = new partial_acsl::DeclSpecWoType((yyvsp[0].declspecwotype_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 1983 "Parser.C"
    break;

  case 11: /* DeclSpecList: DeclSpecWOType DeclSpecList  */
#line 330 "partial_bnfc_parser.y"
                                { (yyval.declspeclist_) = new partial_acsl::DeclSpecWoTypeNext((yyvsp[-1].declspecwotype_), (yyvsp[0].declspeclist_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 1989 "Parser.C"
    break;

  case 12: /* DeclSpecList: TypeSpec  */
#line 331 "partial_bnfc_parser.y"
             { (yyval.declspeclist_) = new partial_acsl::DeclSpecTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 1995 "Parser.C"
    break;

  case 13: /* DeclSpecList: TypeSpec DeclSpecListNoNamed  */
#line 332 "partial_bnfc_parser.y"
                                 { (yyval.declspeclist_) = new partial_acsl::DeclSpecTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 2001 "Parser.C"
    break;

  case 14: /* DeclSpecListNoNamed: DeclSpecWOType  */
#line 334 "partial_bnfc_parser.y"
                                     { (yyval.declspeclistnonamed_) = new partial_acsl::DeclSpecNoNamedWOType((yyvsp[0].declspecwotype_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 2007 "Parser.C"
    break;

  case 15: /* DeclSpecListNoNamed: DeclSpecWOType DeclSpecListNoNamed  */
#line 335 "partial_bnfc_parser.y"
                                       { (yyval.declspeclistnonamed_) = new partial_acsl::DeclSpecNoNamedWOTypeNext((yyvsp[-1].declspecwotype_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 2013 "Parser.C"
    break;

  case 16: /* DeclSpecListNoNamed: TypeSpec  */
#line 336 "partial_bnfc_parser.y"
             { (yyval.declspeclistnonamed_) = new partial_acsl::DeclSpecNoNamedTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 2019 "Parser.C"
    break;

  case 17: /* DeclSpecListNoNamed: TypeSpec DeclSpecListNoNamed  */
#line 337 "partial_bnfc_parser.y"
                                 { (yyval.declspeclistnonamed_) = new partial_acsl::DeclSpecNoNamedTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 2025 "Parser.C"
    break;

  case 18: /* DeclSpecWOType: _KW_typedef  */
#line 339 "partial_bnfc_parser.y"
                             { (yyval.declspecwotype_) = new partial_acsl::DeclSpecWOTypeTypedefKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 2031 "Parser.C"
    break;

  case 19: /* DeclSpecWOType: _KW_extern  */
#line 340 "partial_bnfc_parser.y"
               { (yyval.declspecwotype_) = new partial_acsl::DeclSpecWOTypeExternKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 2037 "Parser.C"
    break;

  case 20: /* DeclSpecWOType: _KW_static  */
#line 341 "partial_bnfc_parser.y"
               { (yyval.declspecwotype_) = new partial_acsl::DeclSpecWOTypeStaticKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 2043 "Parser.C"
    break;

  case 21: /* DeclSpecWOType: _KW_auto  */
#line 342 "partial_bnfc_parser.y"
             { (yyval.declspecwotype_) = new partial_acsl::DeclSpecWOTypeAutoKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 2049 "Parser.C"
    break;

  case 22: /* DeclSpecWOType: _KW_register  */
#line 343 "partial_bnfc_parser.y"
                 { (yyval.declspecwotype_) = new partial_acsl::DeclSpecWOTypeRegisterKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 2055 "Parser.C"
    break;

  case 23: /* TypeSpec: _KW_void  */
#line 345 "partial_bnfc_parser.y"
                    { (yyval.typespec_) = new partial_acsl::TypeSpecVoidKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2061 "Parser.C"
    break;

  case 24: /* TypeSpec: _KW_char  */
#line 346 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partial_acsl::TypeSpecCharKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2067 "Parser.C"
    break;

  case 25: /* TypeSpec: T_BOOL  */
#line 347 "partial_bnfc_parser.y"
           { (yyval.typespec_) = new partial_acsl::TypeSpecBoolKeyWord((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2073 "Parser.C"
    break;

  case 26: /* TypeSpec: _KW_short  */
#line 348 "partial_bnfc_parser.y"
              { (yyval.typespec_) = new partial_acsl::TypeSpecShortKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2079 "Parser.C"
    break;

  case 27: /* TypeSpec: _SYMB_1  */
#line 349 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecInt32KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2085 "Parser.C"
    break;

  case 28: /* TypeSpec: _KW_int  */
#line 350 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecIntKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2091 "Parser.C"
    break;

  case 29: /* TypeSpec: _KW_71  */
#line 351 "partial_bnfc_parser.y"
           { (yyval.typespec_) = new partial_acsl::TypeSpecSizeTKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2097 "Parser.C"
    break;

  case 30: /* TypeSpec: _KW_long  */
#line 352 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partial_acsl::TypeSpecLongKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2103 "Parser.C"
    break;

  case 31: /* TypeSpec: _SYMB_2  */
#line 353 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecInt64KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2109 "Parser.C"
    break;

  case 32: /* TypeSpec: _KW_float  */
#line 354 "partial_bnfc_parser.y"
              { (yyval.typespec_) = new partial_acsl::TypeSpecFloatKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2115 "Parser.C"
    break;

  case 33: /* TypeSpec: _KW_double  */
#line 355 "partial_bnfc_parser.y"
               { (yyval.typespec_) = new partial_acsl::TypeSpecDoubleKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2121 "Parser.C"
    break;

  case 34: /* TypeSpec: T_SIGNED  */
#line 356 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partial_acsl::TypeSpecSignedKeyWord((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2127 "Parser.C"
    break;

  case 35: /* TypeSpec: _KW_unsigned  */
#line 357 "partial_bnfc_parser.y"
                 { (yyval.typespec_) = new partial_acsl::TypeSpecUnsignedKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2133 "Parser.C"
    break;

  case 36: /* TypeSpec: _KW_struct IdOrTypename  */
#line 358 "partial_bnfc_parser.y"
                            { (yyval.typespec_) = new partial_acsl::StructId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2139 "Parser.C"
    break;

  case 37: /* TypeSpec: _KW_struct IdOrTypename _LBRACE StructDeclList _RBRACE  */
#line 359 "partial_bnfc_parser.y"
                                                           { (yyval.typespec_) = new partial_acsl::StructIdBraces((yyvsp[-3].idortypename_), (yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2145 "Parser.C"
    break;

  case 38: /* TypeSpec: _KW_struct _LBRACE StructDeclList _RBRACE  */
#line 360 "partial_bnfc_parser.y"
                                              { (yyval.typespec_) = new partial_acsl::StructBraces((yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2151 "Parser.C"
    break;

  case 39: /* TypeSpec: _KW_union IdOrTypename  */
#line 361 "partial_bnfc_parser.y"
                           { (yyval.typespec_) = new partial_acsl::UnionId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2157 "Parser.C"
    break;

  case 40: /* TypeSpec: _KW_union IdOrTypename _LBRACE StructDeclList _RBRACE  */
#line 362 "partial_bnfc_parser.y"
                                                          { (yyval.typespec_) = new partial_acsl::UnionIdBraces((yyvsp[-3].idortypename_), (yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2163 "Parser.C"
    break;

  case 41: /* TypeSpec: _KW_union _LBRACE StructDeclList _RBRACE  */
#line 363 "partial_bnfc_parser.y"
                                             { (yyval.typespec_) = new partial_acsl::UnionBraces((yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2169 "Parser.C"
    break;

  case 42: /* TypeSpec: _KW_enum IdOrTypename  */
#line 364 "partial_bnfc_parser.y"
                          { (yyval.typespec_) = new partial_acsl::EnumId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2175 "Parser.C"
    break;

  case 43: /* TypeSpec: _KW_enum IdOrTypename _LBRACE ListEnumerator MaybeComma _RBRACE  */
#line 365 "partial_bnfc_parser.y"
                                                                    { std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new partial_acsl::EnumIdBraces((yyvsp[-4].idortypename_), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2181 "Parser.C"
    break;

  case 44: /* TypeSpec: _KW_enum _LBRACE ListEnumerator MaybeComma _RBRACE  */
#line 366 "partial_bnfc_parser.y"
                                                       { std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new partial_acsl::EnumBraces((yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2187 "Parser.C"
    break;

  case 45: /* Enumerator: _IDENT_  */
#line 368 "partial_bnfc_parser.y"
                     { (yyval.enumerator_) = new partial_acsl::IdentEnumerator((yyvsp[0]._string)); (yyval.enumerator_)->line_number = (yyloc).first_line; (yyval.enumerator_)->char_number = (yyloc).first_column; result->enumerator_ = (yyval.enumerator_); }
#line 2193 "Parser.C"
    break;

  case 46: /* Enumerator: _IDENT_ _EQ Expression  */
#line 369 "partial_bnfc_parser.y"
                           { (yyval.enumerator_) = new partial_acsl::IdentAssignExpr((yyvsp[-2]._string), (yyvsp[0].expression_)); (yyval.enumerator_)->line_number = (yyloc).first_line; (yyval.enumerator_)->char_number = (yyloc).first_column; result->enumerator_ = (yyval.enumerator_); }
#line 2199 "Parser.C"
    break;

  case 47: /* ListEnumerator: Enumerator  */
#line 371 "partial_bnfc_parser.y"
                            { (yyval.listenumerator_) = new partial_acsl::ListEnumerator(); (yyval.listenumerator_)->push_back((yyvsp[0].enumerator_)); result->listenumerator_ = (yyval.listenumerator_); }
#line 2205 "Parser.C"
    break;

  case 48: /* ListEnumerator: Enumerator _COMMA ListEnumerator  */
#line 372 "partial_bnfc_parser.y"
                                     { (yyvsp[0].listenumerator_)->push_back((yyvsp[-2].enumerator_)); (yyval.listenumerator_) = (yyvsp[0].listenumerator_); result->listenumerator_ = (yyval.listenumerator_); }
#line 2211 "Parser.C"
    break;

  case 49: /* MaybeComma: %empty  */
#line 374 "partial_bnfc_parser.y"
                         { (yyval.maybecomma_) = new partial_acsl::NoComa(); (yyval.maybecomma_)->line_number = (yyloc).first_line; (yyval.maybecomma_)->char_number = (yyloc).first_column; result->maybecomma_ = (yyval.maybecomma_); }
#line 2217 "Parser.C"
    break;

  case 50: /* MaybeComma: _COMMA  */
#line 375 "partial_bnfc_parser.y"
           { (yyval.maybecomma_) = new partial_acsl::Coma(); (yyval.maybecomma_)->line_number = (yyloc).first_line; (yyval.maybecomma_)->char_number = (yyloc).first_column; result->maybecomma_ = (yyval.maybecomma_); }
#line 2223 "Parser.C"
    break;

  case 51: /* Declarator: PointerOpt DirectDecl AttributesWithAsm  */
#line 377 "partial_bnfc_parser.y"
                                                     { (yyval.declarator_) = new partial_acsl::ADeclarator((yyvsp[-2].pointeropt_), (yyvsp[-1].directdecl_), (yyvsp[0].attributeswithasm_)); (yyval.declarator_)->line_number = (yyloc).first_line; (yyval.declarator_)->char_number = (yyloc).first_column; result->declarator_ = (yyval.declarator_); }
#line 2229 "Parser.C"
    break;

  case 52: /* PointerOpt: %empty  */
#line 379 "partial_bnfc_parser.y"
                         { (yyval.pointeropt_) = new partial_acsl::NoPointer(); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 2235 "Parser.C"
    break;

  case 53: /* PointerOpt: _STAR ListAttribute PointerOpt  */
#line 380 "partial_bnfc_parser.y"
                                   { (yyval.pointeropt_) = new partial_acsl::SomePointer((yyvsp[-1].listattribute_), (yyvsp[0].pointeropt_)); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 2241 "Parser.C"
    break;

  case 54: /* DirectDecl: IdOrTypename  */
#line 382 "partial_bnfc_parser.y"
                          { (yyval.directdecl_) = new partial_acsl::DirectDeclIdTypename((yyvsp[0].idortypename_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2247 "Parser.C"
    break;

  case 55: /* DirectDecl: DirectDecl _LBRACK AttributesOrStatic _RBRACK  */
#line 383 "partial_bnfc_parser.y"
                                                  { (yyval.directdecl_) = new partial_acsl::DirectDeclAttrStatic((yyvsp[-3].directdecl_), (yyvsp[-1].attributesorstatic_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2253 "Parser.C"
    break;

  case 56: /* DirectDecl: DirectDecl _LPAREN _RPAREN GhostParameterOpt  */
#line 384 "partial_bnfc_parser.y"
                                                 { (yyval.directdecl_) = new partial_acsl::DirectDeclGhostParam((yyvsp[-3].directdecl_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2259 "Parser.C"
    break;

  case 57: /* DirectDecl: DirectDecl _LPAREN RestParList _RPAREN GhostParameterOpt  */
#line 385 "partial_bnfc_parser.y"
                                                             { (yyval.directdecl_) = new partial_acsl::DirectDeclGhostRestParParam((yyvsp[-4].directdecl_), (yyvsp[-2].restparlist_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2265 "Parser.C"
    break;

  case 58: /* AttributesOrStatic: ListAttribute CommaExpressionOpt  */
#line 387 "partial_bnfc_parser.y"
                                                      { (yyval.attributesorstatic_) = new partial_acsl::AttributesCommaExpression((yyvsp[-1].listattribute_), (yyvsp[0].commaexpressionopt_)); (yyval.attributesorstatic_)->line_number = (yyloc).first_line; (yyval.attributesorstatic_)->char_number = (yyloc).first_column; result->attributesorstatic_ = (yyval.attributesorstatic_); }
#line 2271 "Parser.C"
    break;

  case 59: /* CommaExpressionOpt: %empty  */
#line 389 "partial_bnfc_parser.y"
                                 { (yyval.commaexpressionopt_) = new partial_acsl::NoCommaExpression(); (yyval.commaexpressionopt_)->line_number = (yyloc).first_line; (yyval.commaexpressionopt_)->char_number = (yyloc).first_column; result->commaexpressionopt_ = (yyval.commaexpressionopt_); }
#line 2277 "Parser.C"
    break;

  case 60: /* CommaExpressionOpt: ListExpression  */
#line 390 "partial_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.commaexpressionopt_) = new partial_acsl::SomeCommaExpression((yyvsp[0].listexpression_)); (yyval.commaexpressionopt_)->line_number = (yyloc).first_line; (yyval.commaexpressionopt_)->char_number = (yyloc).first_column; result->commaexpressionopt_ = (yyval.commaexpressionopt_); }
#line 2283 "Parser.C"
    break;

  case 61: /* AttributesWithAsm: %empty  */
#line 392 "partial_bnfc_parser.y"
                                { (yyval.attributeswithasm_) = new partial_acsl::EmptyAttrWithASM(); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 2289 "Parser.C"
    break;

  case 62: /* RestParList: ListParameterDecl MaybeThreeDots  */
#line 394 "partial_bnfc_parser.y"
                                               { std::reverse((yyvsp[-1].listparameterdecl_)->begin(),(yyvsp[-1].listparameterdecl_)->end()) ;(yyval.restparlist_) = new partial_acsl::SimpleParameterDecl((yyvsp[-1].listparameterdecl_), (yyvsp[0].maybethreedots_)); (yyval.restparlist_)->line_number = (yyloc).first_line; (yyval.restparlist_)->char_number = (yyloc).first_column; result->restparlist_ = (yyval.restparlist_); }
#line 2295 "Parser.C"
    break;

  case 63: /* MaybeThreeDots: %empty  */
#line 396 "partial_bnfc_parser.y"
                             { (yyval.maybethreedots_) = new partial_acsl::NoThreeDots(); (yyval.maybethreedots_)->line_number = (yyloc).first_line; (yyval.maybethreedots_)->char_number = (yyloc).first_column; result->maybethreedots_ = (yyval.maybethreedots_); }
#line 2301 "Parser.C"
    break;

  case 64: /* MaybeThreeDots: _COMMA _ELLIPSIS  */
#line 397 "partial_bnfc_parser.y"
                     { (yyval.maybethreedots_) = new partial_acsl::ThreeDots(); (yyval.maybethreedots_)->line_number = (yyloc).first_line; (yyval.maybethreedots_)->char_number = (yyloc).first_column; result->maybethreedots_ = (yyval.maybethreedots_); }
#line 2307 "Parser.C"
    break;

  case 65: /* ParameterDecl: PointerOpt DeclSpecList Declarator  */
#line 399 "partial_bnfc_parser.y"
                                                   { (yyval.parameterdecl_) = new partial_acsl::ParameterDeclSpecDeclarator((yyvsp[-2].pointeropt_), (yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 2313 "Parser.C"
    break;

  case 66: /* ParameterDecl: PointerOpt DeclSpecList  */
#line 400 "partial_bnfc_parser.y"
                            { (yyval.parameterdecl_) = new partial_acsl::ParameterDeclSpec((yyvsp[-1].pointeropt_), (yyvsp[0].declspeclist_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 2319 "Parser.C"
    break;

  case 67: /* ListParameterDecl: ParameterDecl  */
#line 402 "partial_bnfc_parser.y"
                                  { (yyval.listparameterdecl_) = new partial_acsl::ListParameterDecl(); (yyval.listparameterdecl_)->push_back((yyvsp[0].parameterdecl_)); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 2325 "Parser.C"
    break;

  case 68: /* ListParameterDecl: ParameterDecl _COMMA ListParameterDecl  */
#line 403 "partial_bnfc_parser.y"
                                           { (yyvsp[0].listparameterdecl_)->push_back((yyvsp[-2].parameterdecl_)); (yyval.listparameterdecl_) = (yyvsp[0].listparameterdecl_); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 2331 "Parser.C"
    break;

  case 69: /* GhostParameterOpt: %empty  */
#line 405 "partial_bnfc_parser.y"
                                { (yyval.ghostparameteropt_) = new partial_acsl::NoGhostParameter(); (yyval.ghostparameteropt_)->line_number = (yyloc).first_line; (yyval.ghostparameteropt_)->char_number = (yyloc).first_column; result->ghostparameteropt_ = (yyval.ghostparameteropt_); }
#line 2337 "Parser.C"
    break;

  case 70: /* IdOrTypename: IdOrTypenameAsId  */
#line 407 "partial_bnfc_parser.y"
                                { (yyval.idortypename_) = new partial_acsl::IdTypename((yyvsp[0].idortypenameasid_)); (yyval.idortypename_)->line_number = (yyloc).first_line; (yyval.idortypename_)->char_number = (yyloc).first_column; result->idortypename_ = (yyval.idortypename_); }
#line 2343 "Parser.C"
    break;

  case 71: /* IdOrTypenameAsId: _IDENT_  */
#line 409 "partial_bnfc_parser.y"
                           { (yyval.idortypenameasid_) = new partial_acsl::IdOrTypenameAsIdIdentifier((yyvsp[0]._string)); (yyval.idortypenameasid_)->line_number = (yyloc).first_line; (yyval.idortypenameasid_)->char_number = (yyloc).first_column; result->idortypenameasid_ = (yyval.idortypenameasid_); }
#line 2349 "Parser.C"
    break;

  case 72: /* Declaration: DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 411 "partial_bnfc_parser.y"
                                                         { (yyval.declaration_) = new partial_acsl::DeclSpecInitDecl((yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 2355 "Parser.C"
    break;

  case 73: /* Declaration: DeclSpecList _SEMI  */
#line 412 "partial_bnfc_parser.y"
                       { (yyval.declaration_) = new partial_acsl::DeclSpec((yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 2361 "Parser.C"
    break;

  case 74: /* DeclAndInitDeclAttrList: InitDeclarator  */
#line 414 "partial_bnfc_parser.y"
                                         { (yyval.declandinitdeclattrlist_) = new partial_acsl::InitDeclaration((yyvsp[0].initdeclarator_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 2367 "Parser.C"
    break;

  case 75: /* DeclAndInitDeclAttrList: InitDeclarator _COMMA ListInitDeclaratorAttr  */
#line 415 "partial_bnfc_parser.y"
                                                 { std::reverse((yyvsp[0].listinitdeclaratorattr_)->begin(),(yyvsp[0].listinitdeclaratorattr_)->end()) ;(yyval.declandinitdeclattrlist_) = new partial_acsl::InitDeclarationWithAttr((yyvsp[-2].initdeclarator_), (yyvsp[0].listinitdeclaratorattr_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 2373 "Parser.C"
    break;

  case 76: /* InitDeclaratorAttr: InitDeclarator  */
#line 417 "partial_bnfc_parser.y"
                                    { (yyval.initdeclaratorattr_) = new partial_acsl::InitDeclaratorAttribute((yyvsp[0].initdeclarator_)); (yyval.initdeclaratorattr_)->line_number = (yyloc).first_line; (yyval.initdeclaratorattr_)->char_number = (yyloc).first_column; result->initdeclaratorattr_ = (yyval.initdeclaratorattr_); }
#line 2379 "Parser.C"
    break;

  case 77: /* ListInitDeclaratorAttr: InitDeclaratorAttr  */
#line 419 "partial_bnfc_parser.y"
                                            { (yyval.listinitdeclaratorattr_) = new partial_acsl::ListInitDeclaratorAttr(); (yyval.listinitdeclaratorattr_)->push_back((yyvsp[0].initdeclaratorattr_)); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 2385 "Parser.C"
    break;

  case 78: /* ListInitDeclaratorAttr: InitDeclaratorAttr _COMMA ListInitDeclaratorAttr  */
#line 420 "partial_bnfc_parser.y"
                                                     { (yyvsp[0].listinitdeclaratorattr_)->push_back((yyvsp[-2].initdeclaratorattr_)); (yyval.listinitdeclaratorattr_) = (yyvsp[0].listinitdeclaratorattr_); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 2391 "Parser.C"
    break;

  case 79: /* InitDeclarator: Declarator  */
#line 422 "partial_bnfc_parser.y"
                            { (yyval.initdeclarator_) = new partial_acsl::SimpleInitDeclarator((yyvsp[0].declarator_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 2397 "Parser.C"
    break;

  case 80: /* InitDeclarator: Declarator _EQ InitExpression  */
#line 423 "partial_bnfc_parser.y"
                                  { (yyval.initdeclarator_) = new partial_acsl::InitDeclaratorExpression((yyvsp[-2].declarator_), (yyvsp[0].initexpression_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 2403 "Parser.C"
    break;

  case 81: /* InitExpression: Expression  */
#line 425 "partial_bnfc_parser.y"
                            { (yyval.initexpression_) = new partial_acsl::SimpleExpression((yyvsp[0].expression_)); (yyval.initexpression_)->line_number = (yyloc).first_line; (yyval.initexpression_)->char_number = (yyloc).first_column; result->initexpression_ = (yyval.initexpression_); }
#line 2409 "Parser.C"
    break;

  case 82: /* InitExpression: _LBRACE InitializerListOpt _RBRACE  */
#line 426 "partial_bnfc_parser.y"
                                       { (yyval.initexpression_) = new partial_acsl::ArrayInitExpression((yyvsp[-1].initializerlistopt_)); (yyval.initexpression_)->line_number = (yyloc).first_line; (yyval.initexpression_)->char_number = (yyloc).first_column; result->initexpression_ = (yyval.initexpression_); }
#line 2415 "Parser.C"
    break;

  case 83: /* InitializerListOpt: %empty  */
#line 428 "partial_bnfc_parser.y"
                                 { (yyval.initializerlistopt_) = new partial_acsl::EmptyInitializerList(); (yyval.initializerlistopt_)->line_number = (yyloc).first_line; (yyval.initializerlistopt_)->char_number = (yyloc).first_column; result->initializerlistopt_ = (yyval.initializerlistopt_); }
#line 2421 "Parser.C"
    break;

  case 84: /* InitializerListOpt: ListInitializerSingle  */
#line 429 "partial_bnfc_parser.y"
                          { std::reverse((yyvsp[0].listinitializersingle_)->begin(),(yyvsp[0].listinitializersingle_)->end()) ;(yyval.initializerlistopt_) = new partial_acsl::InitializerList((yyvsp[0].listinitializersingle_)); (yyval.initializerlistopt_)->line_number = (yyloc).first_line; (yyval.initializerlistopt_)->char_number = (yyloc).first_column; result->initializerlistopt_ = (yyval.initializerlistopt_); }
#line 2427 "Parser.C"
    break;

  case 85: /* InitializerListOpt: ListInitializerSingle _COMMA  */
#line 430 "partial_bnfc_parser.y"
                                 { std::reverse((yyvsp[-1].listinitializersingle_)->begin(),(yyvsp[-1].listinitializersingle_)->end()) ;(yyval.initializerlistopt_) = new partial_acsl::InitializerListComma((yyvsp[-1].listinitializersingle_)); (yyval.initializerlistopt_)->line_number = (yyloc).first_line; (yyval.initializerlistopt_)->char_number = (yyloc).first_column; result->initializerlistopt_ = (yyval.initializerlistopt_); }
#line 2433 "Parser.C"
    break;

  case 86: /* InitializerSingle: IdOrTypename _COLON InitExpression  */
#line 432 "partial_bnfc_parser.y"
                                                       { (yyval.initializersingle_) = new partial_acsl::InitializerGCCDesignator((yyvsp[-2].idortypename_), (yyvsp[0].initexpression_)); (yyval.initializersingle_)->line_number = (yyloc).first_line; (yyval.initializersingle_)->char_number = (yyloc).first_column; result->initializersingle_ = (yyval.initializersingle_); }
#line 2439 "Parser.C"
    break;

  case 87: /* InitializerSingle: InitExpression  */
#line 433 "partial_bnfc_parser.y"
                   { (yyval.initializersingle_) = new partial_acsl::EmptyInitializer((yyvsp[0].initexpression_)); (yyval.initializersingle_)->line_number = (yyloc).first_line; (yyval.initializersingle_)->char_number = (yyloc).first_column; result->initializersingle_ = (yyval.initializersingle_); }
#line 2445 "Parser.C"
    break;

  case 88: /* ListInitializerSingle: InitializerSingle  */
#line 435 "partial_bnfc_parser.y"
                                          { (yyval.listinitializersingle_) = new partial_acsl::ListInitializerSingle(); (yyval.listinitializersingle_)->push_back((yyvsp[0].initializersingle_)); result->listinitializersingle_ = (yyval.listinitializersingle_); }
#line 2451 "Parser.C"
    break;

  case 89: /* ListInitializerSingle: InitializerSingle _COMMA ListInitializerSingle  */
#line 436 "partial_bnfc_parser.y"
                                                   { (yyvsp[0].listinitializersingle_)->push_back((yyvsp[-2].initializersingle_)); (yyval.listinitializersingle_) = (yyvsp[0].listinitializersingle_); result->listinitializersingle_ = (yyval.listinitializersingle_); }
#line 2457 "Parser.C"
    break;

  case 90: /* StructDeclList: %empty  */
#line 438 "partial_bnfc_parser.y"
                             { (yyval.structdecllist_) = new partial_acsl::EmptyStructDecl(); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2463 "Parser.C"
    break;

  case 91: /* StructDeclList: DeclSpecList _SEMI StructDeclList  */
#line 439 "partial_bnfc_parser.y"
                                      { (yyval.structdecllist_) = new partial_acsl::DeclSpecStructDecl((yyvsp[-2].declspeclist_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2469 "Parser.C"
    break;

  case 92: /* StructDeclList: _SEMI StructDeclList  */
#line 440 "partial_bnfc_parser.y"
                         { (yyval.structdecllist_) = new partial_acsl::SemicolonStructDecl((yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2475 "Parser.C"
    break;

  case 93: /* StructDeclList: DeclSpecList ListFieldDecl _SEMI StructDeclList  */
#line 441 "partial_bnfc_parser.y"
                                                    { std::reverse((yyvsp[-2].listfielddecl_)->begin(),(yyvsp[-2].listfielddecl_)->end()) ;(yyval.structdecllist_) = new partial_acsl::SpecFieldDeclStructDecl((yyvsp[-3].declspeclist_), (yyvsp[-2].listfielddecl_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2481 "Parser.C"
    break;

  case 94: /* FieldDecl: Declarator  */
#line 443 "partial_bnfc_parser.y"
                       { (yyval.fielddecl_) = new partial_acsl::FieldDeclDeclarator((yyvsp[0].declarator_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 2487 "Parser.C"
    break;

  case 95: /* FieldDecl: Declarator _COLON Expression ListAttribute  */
#line 444 "partial_bnfc_parser.y"
                                               { (yyval.fielddecl_) = new partial_acsl::FieldDeclDeclaratorColon((yyvsp[-3].declarator_), (yyvsp[-1].expression_), (yyvsp[0].listattribute_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 2493 "Parser.C"
    break;

  case 96: /* FieldDecl: _COLON Expression  */
#line 445 "partial_bnfc_parser.y"
                      { (yyval.fielddecl_) = new partial_acsl::FieldDeclColonExpression((yyvsp[0].expression_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 2499 "Parser.C"
    break;

  case 97: /* ListFieldDecl: FieldDecl  */
#line 447 "partial_bnfc_parser.y"
                          { (yyval.listfielddecl_) = new partial_acsl::ListFieldDecl(); (yyval.listfielddecl_)->push_back((yyvsp[0].fielddecl_)); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 2505 "Parser.C"
    break;

  case 98: /* ListFieldDecl: FieldDecl _COMMA ListFieldDecl  */
#line 448 "partial_bnfc_parser.y"
                                   { (yyvsp[0].listfielddecl_)->push_back((yyvsp[-2].fielddecl_)); (yyval.listfielddecl_) = (yyvsp[0].listfielddecl_); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 2511 "Parser.C"
    break;

  case 99: /* Attribute: T_CONST  */
#line 450 "partial_bnfc_parser.y"
                    { (yyval.attribute_) = new partial_acsl::AttributeConst((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 2517 "Parser.C"
    break;

  case 100: /* ListAttribute: %empty  */
#line 452 "partial_bnfc_parser.y"
                            { (yyval.listattribute_) = new partial_acsl::ListAttribute(); result->listattribute_ = (yyval.listattribute_); }
#line 2523 "Parser.C"
    break;

  case 101: /* ListAttribute: ListAttribute Attribute  */
#line 453 "partial_bnfc_parser.y"
                            { (yyvsp[-1].listattribute_)->push_back((yyvsp[0].attribute_)); (yyval.listattribute_) = (yyvsp[-1].listattribute_); result->listattribute_ = (yyval.listattribute_); }
#line 2529 "Parser.C"
    break;

  case 102: /* Block: _LBRACE BlockAttrs ListBlockElement _RBRACE  */
#line 455 "partial_bnfc_parser.y"
                                                    { (yyval.block_) = new partial_acsl::ABlock((yyvsp[-2].blockattrs_), (yyvsp[-1].listblockelement_)); (yyval.block_)->line_number = (yyloc).first_line; (yyval.block_)->char_number = (yyloc).first_column; result->block_ = (yyval.block_); }
#line 2535 "Parser.C"
    break;

  case 103: /* BlockAttrs: %empty  */
#line 457 "partial_bnfc_parser.y"
                         { (yyval.blockattrs_) = new partial_acsl::NoBlockAttrs(); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 2541 "Parser.C"
    break;

  case 104: /* BlockAttrs: T_BLOCKATTRIBUTE _LPAREN ListAttr _RPAREN  */
#line 458 "partial_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.blockattrs_) = new partial_acsl::SomeBlockAttrs((yyvsp[-3]._string), (yyvsp[-1].listattr_)); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 2547 "Parser.C"
    break;

  case 105: /* BlockElement: Declaration  */
#line 460 "partial_bnfc_parser.y"
                           { (yyval.blockelement_) = new partial_acsl::DeclarationElement((yyvsp[0].declaration_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 2553 "Parser.C"
    break;

  case 106: /* BlockElement: Statement  */
#line 461 "partial_bnfc_parser.y"
              { (yyval.blockelement_) = new partial_acsl::StatementElement((yyvsp[0].statement_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 2559 "Parser.C"
    break;

  case 107: /* ListBlockElement: %empty  */
#line 463 "partial_bnfc_parser.y"
                               { (yyval.listblockelement_) = new partial_acsl::ListBlockElement(); result->listblockelement_ = (yyval.listblockelement_); }
#line 2565 "Parser.C"
    break;

  case 108: /* ListBlockElement: ListBlockElement BlockElement  */
#line 464 "partial_bnfc_parser.y"
                                  { (yyvsp[-1].listblockelement_)->push_back((yyvsp[0].blockelement_)); (yyval.listblockelement_) = (yyvsp[-1].listblockelement_); result->listblockelement_ = (yyval.listblockelement_); }
#line 2571 "Parser.C"
    break;

  case 109: /* Statement: _SEMI  */
#line 466 "partial_bnfc_parser.y"
                  { (yyval.statement_) = new partial_acsl::SemicolonStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2577 "Parser.C"
    break;

  case 110: /* Statement: ListExpression _SEMI  */
#line 467 "partial_bnfc_parser.y"
                         { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::ExprsStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2583 "Parser.C"
    break;

  case 111: /* Statement: Block  */
#line 468 "partial_bnfc_parser.y"
          { (yyval.statement_) = new partial_acsl::BlockStatement((yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2589 "Parser.C"
    break;

  case 112: /* Statement: _KW_if _LPAREN ListExpression _RPAREN AnnotatedStmt ElsePart  */
#line 469 "partial_bnfc_parser.y"
                                                                 { std::reverse((yyvsp[-3].listexpression_)->begin(),(yyvsp[-3].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::IfStatement((yyvsp[-3].listexpression_), (yyvsp[-1].annotatedstmt_), (yyvsp[0].elsepart_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2595 "Parser.C"
    break;

  case 113: /* Statement: _KW_switch _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 470 "partial_bnfc_parser.y"
                                                            { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::SwitchStatement((yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2601 "Parser.C"
    break;

  case 114: /* Statement: OptLoopAnnotations _KW_while _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 471 "partial_bnfc_parser.y"
                                                                              { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::WhileStatement((yyvsp[-5].optloopannotations_), (yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2607 "Parser.C"
    break;

  case 115: /* Statement: OptLoopAnnotations _KW_do AnnotatedStmt _KW_while _LPAREN ListExpression _RPAREN _SEMI  */
#line 472 "partial_bnfc_parser.y"
                                                                                           { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::DoWhileStatement((yyvsp[-7].optloopannotations_), (yyvsp[-5].annotatedstmt_), (yyvsp[-2].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2613 "Parser.C"
    break;

  case 116: /* Statement: OptLoopAnnotations _KW_for _LPAREN ForClause OptExpression _SEMI OptExpression _RPAREN AnnotatedStmt  */
#line 473 "partial_bnfc_parser.y"
                                                                                                         { (yyval.statement_) = new partial_acsl::ForStatement((yyvsp[-8].optloopannotations_), (yyvsp[-5].forclause_), (yyvsp[-4].optexpression_), (yyvsp[-2].optexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2619 "Parser.C"
    break;

  case 117: /* Statement: IdOrTypenameAsId _COLON AnnotatedStmt  */
#line 474 "partial_bnfc_parser.y"
                                          { (yyval.statement_) = new partial_acsl::ColonStatement((yyvsp[-2].idortypenameasid_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2625 "Parser.C"
    break;

  case 118: /* Statement: _KW_case Expression _COLON AnnotatedStmt  */
#line 475 "partial_bnfc_parser.y"
                                             { (yyval.statement_) = new partial_acsl::CaseStatement((yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2631 "Parser.C"
    break;

  case 119: /* Statement: _KW_case Expression _ELLIPSIS Expression _COLON AnnotatedStmt  */
#line 476 "partial_bnfc_parser.y"
                                                                  { (yyval.statement_) = new partial_acsl::CaseSliceStatement((yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2637 "Parser.C"
    break;

  case 120: /* Statement: _KW_default _COLON AnnotatedStmt  */
#line 477 "partial_bnfc_parser.y"
                                     { (yyval.statement_) = new partial_acsl::DefaultStatement((yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2643 "Parser.C"
    break;

  case 121: /* Statement: _KW_return _SEMI  */
#line 478 "partial_bnfc_parser.y"
                     { (yyval.statement_) = new partial_acsl::EmptyReturnStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2649 "Parser.C"
    break;

  case 122: /* Statement: _KW_return ListExpression _SEMI  */
#line 479 "partial_bnfc_parser.y"
                                    { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::ReturnStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2655 "Parser.C"
    break;

  case 123: /* Statement: _KW_break _SEMI  */
#line 480 "partial_bnfc_parser.y"
                    { (yyval.statement_) = new partial_acsl::BreakStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2661 "Parser.C"
    break;

  case 124: /* Statement: _KW_continue _SEMI  */
#line 481 "partial_bnfc_parser.y"
                       { (yyval.statement_) = new partial_acsl::ContinueStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2667 "Parser.C"
    break;

  case 125: /* Statement: _KW_goto IdOrTypenameAsId _SEMI  */
#line 482 "partial_bnfc_parser.y"
                                    { (yyval.statement_) = new partial_acsl::GotoStatement((yyvsp[-1].idortypenameasid_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2673 "Parser.C"
    break;

  case 126: /* Statement: _KW_goto _STAR ListExpression _SEMI  */
#line 483 "partial_bnfc_parser.y"
                                        { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::StarGotoStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2679 "Parser.C"
    break;

  case 127: /* Statement: _SYMB_14 Block _SYMB_15 _LPAREN ListExpression _RPAREN Block  */
#line 484 "partial_bnfc_parser.y"
                                                                 { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::TryExceptStatement((yyvsp[-5].block_), (yyvsp[-2].listexpression_), (yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2685 "Parser.C"
    break;

  case 128: /* Statement: _SYMB_14 Block _SYMB_16 Block  */
#line 485 "partial_bnfc_parser.y"
                                  { (yyval.statement_) = new partial_acsl::TryFinallyStatement((yyvsp[-2].block_), (yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2691 "Parser.C"
    break;

  case 129: /* OptLoopAnnotations: %empty  */
#line 487 "partial_bnfc_parser.y"
                                 { (yyval.optloopannotations_) = new partial_acsl::NoLoopAnnotations(); (yyval.optloopannotations_)->line_number = (yyloc).first_line; (yyval.optloopannotations_)->char_number = (yyloc).first_column; result->optloopannotations_ = (yyval.optloopannotations_); }
#line 2697 "Parser.C"
    break;

  case 130: /* ForClause: OptExpression _SEMI  */
#line 489 "partial_bnfc_parser.y"
                                { (yyval.forclause_) = new partial_acsl::ForClauseExpression((yyvsp[-1].optexpression_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 2703 "Parser.C"
    break;

  case 131: /* ForClause: Declaration  */
#line 490 "partial_bnfc_parser.y"
                { (yyval.forclause_) = new partial_acsl::ForClauseDeclaration((yyvsp[0].declaration_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 2709 "Parser.C"
    break;

  case 132: /* Attr: Attr1  */
#line 492 "partial_bnfc_parser.y"
             { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2715 "Parser.C"
    break;

  case 133: /* Attr: Attr1 _EQ Attr1  */
#line 493 "partial_bnfc_parser.y"
                    { (yyval.attr_) = new partial_acsl::AnAttr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2721 "Parser.C"
    break;

  case 134: /* ListAttr: Attr  */
#line 495 "partial_bnfc_parser.y"
                { (yyval.listattr_) = new partial_acsl::ListAttr(); (yyval.listattr_)->push_back((yyvsp[0].attr_)); result->listattr_ = (yyval.listattr_); }
#line 2727 "Parser.C"
    break;

  case 135: /* ListAttr: Attr _COMMA ListAttr  */
#line 496 "partial_bnfc_parser.y"
                         { (yyvsp[0].listattr_)->push_back((yyvsp[-2].attr_)); (yyval.listattr_) = (yyvsp[0].listattr_); result->listattr_ = (yyval.listattr_); }
#line 2733 "Parser.C"
    break;

  case 136: /* Attr1: Attr2  */
#line 498 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2739 "Parser.C"
    break;

  case 137: /* Attr1: Attr2 _QUESTION Attr1 _COLON Attr1  */
#line 499 "partial_bnfc_parser.y"
                                       { (yyval.attr_) = new partial_acsl::TernaryCond((yyvsp[-4].attr_), (yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2745 "Parser.C"
    break;

  case 138: /* Attr2: Attr3  */
#line 501 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2751 "Parser.C"
    break;

  case 139: /* Attr2: Attr2 _DBAR Attr3  */
#line 502 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::Or((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2757 "Parser.C"
    break;

  case 140: /* Attr3: Attr4  */
#line 504 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2763 "Parser.C"
    break;

  case 141: /* Attr3: Attr3 _DAMP Attr4  */
#line 505 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::And((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2769 "Parser.C"
    break;

  case 142: /* Attr4: Attr5  */
#line 507 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2775 "Parser.C"
    break;

  case 143: /* Attr4: Attr4 _BAR Attr5  */
#line 508 "partial_bnfc_parser.y"
                     { (yyval.attr_) = new partial_acsl::BitOr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2781 "Parser.C"
    break;

  case 144: /* Attr5: Attr6  */
#line 510 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2787 "Parser.C"
    break;

  case 145: /* Attr5: Attr5 _CARET Attr6  */
#line 511 "partial_bnfc_parser.y"
                       { (yyval.attr_) = new partial_acsl::Xor((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2793 "Parser.C"
    break;

  case 146: /* Attr6: Attr7  */
#line 513 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2799 "Parser.C"
    break;

  case 147: /* Attr6: Attr6 _AMP Attr7  */
#line 514 "partial_bnfc_parser.y"
                     { (yyval.attr_) = new partial_acsl::BitAnd((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2805 "Parser.C"
    break;

  case 148: /* Attr7: Attr8  */
#line 516 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2811 "Parser.C"
    break;

  case 149: /* Attr7: Attr7 _DEQ Attr8  */
#line 517 "partial_bnfc_parser.y"
                     { (yyval.attr_) = new partial_acsl::EqualEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2817 "Parser.C"
    break;

  case 150: /* Attr7: Attr7 _BANGEQ Attr8  */
#line 518 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::NotEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2823 "Parser.C"
    break;

  case 151: /* Attr8: Attr9  */
#line 520 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2829 "Parser.C"
    break;

  case 152: /* Attr8: Attr8 _LT Attr9  */
#line 521 "partial_bnfc_parser.y"
                    { (yyval.attr_) = new partial_acsl::Less((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2835 "Parser.C"
    break;

  case 153: /* Attr8: Attr8 _GT Attr9  */
#line 522 "partial_bnfc_parser.y"
                    { (yyval.attr_) = new partial_acsl::Greater((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2841 "Parser.C"
    break;

  case 154: /* Attr8: Attr8 _LDARROW Attr9  */
#line 523 "partial_bnfc_parser.y"
                         { (yyval.attr_) = new partial_acsl::LessEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2847 "Parser.C"
    break;

  case 155: /* Attr8: Attr8 _GTEQ Attr9  */
#line 524 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::GreaterEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2853 "Parser.C"
    break;

  case 156: /* Attr9: Attr10  */
#line 526 "partial_bnfc_parser.y"
               { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2859 "Parser.C"
    break;

  case 157: /* Attr9: Attr9 _DLT Attr10  */
#line 527 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::LeftShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2865 "Parser.C"
    break;

  case 158: /* Attr9: Attr9 _DGT Attr10  */
#line 528 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::RightShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2871 "Parser.C"
    break;

  case 159: /* Attr10: Attr11  */
#line 530 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2877 "Parser.C"
    break;

  case 160: /* Attr10: Attr10 _PLUS Attr11  */
#line 531 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::AddOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2883 "Parser.C"
    break;

  case 161: /* Attr10: Attr10 _MINUS Attr11  */
#line 532 "partial_bnfc_parser.y"
                         { (yyval.attr_) = new partial_acsl::SubOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2889 "Parser.C"
    break;

  case 162: /* Attr11: Attr12  */
#line 534 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2895 "Parser.C"
    break;

  case 163: /* Attr11: Attr11 _STAR Attr12  */
#line 535 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::MultOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2901 "Parser.C"
    break;

  case 164: /* Attr11: Attr11 _SLASH Attr12  */
#line 536 "partial_bnfc_parser.y"
                         { (yyval.attr_) = new partial_acsl::DivOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2907 "Parser.C"
    break;

  case 165: /* Attr11: Attr11 _PERCENT Attr12  */
#line 537 "partial_bnfc_parser.y"
                           { (yyval.attr_) = new partial_acsl::ModOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2913 "Parser.C"
    break;

  case 166: /* Attr12: Attr13  */
#line 539 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2919 "Parser.C"
    break;

  case 167: /* Attr12: _KW_sizeof AssignExpr13  */
#line 540 "partial_bnfc_parser.y"
                            { (yyval.attr_) = new partial_acsl::SizeOfAttrUnary((yyvsp[0].assignexpr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2925 "Parser.C"
    break;

  case 168: /* Attr12: _KW_sizeof _LPAREN TypeName _RPAREN  */
#line 541 "partial_bnfc_parser.y"
                                        { (yyval.attr_) = new partial_acsl::SizeOfAttrTypeName((yyvsp[-1].typename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2931 "Parser.C"
    break;

  case 169: /* Attr12: T_ALIGNOF AssignExpr13  */
#line 542 "partial_bnfc_parser.y"
                           { (yyval.attr_) = new partial_acsl::AlignOfAttrUnary((yyvsp[-1]._string), (yyvsp[0].assignexpr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2937 "Parser.C"
    break;

  case 170: /* Attr12: T_ALIGNOF _LPAREN TypeName _RPAREN  */
#line 543 "partial_bnfc_parser.y"
                                       { (yyval.attr_) = new partial_acsl::AlignOfAttrTypeName((yyvsp[-3]._string), (yyvsp[-1].typename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2943 "Parser.C"
    break;

  case 171: /* Attr12: _PLUS Attr12  */
#line 544 "partial_bnfc_parser.y"
                 { (yyval.attr_) = new partial_acsl::PlusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2949 "Parser.C"
    break;

  case 172: /* Attr12: _MINUS Attr12  */
#line 545 "partial_bnfc_parser.y"
                  { (yyval.attr_) = new partial_acsl::MinusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2955 "Parser.C"
    break;

  case 173: /* Attr12: _STAR Attr12  */
#line 546 "partial_bnfc_parser.y"
                 { (yyval.attr_) = new partial_acsl::MultUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2961 "Parser.C"
    break;

  case 174: /* Attr12: _AMP Attr12  */
#line 547 "partial_bnfc_parser.y"
                { (yyval.attr_) = new partial_acsl::AmpUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2967 "Parser.C"
    break;

  case 175: /* Attr12: _BANG Attr12  */
#line 548 "partial_bnfc_parser.y"
                 { (yyval.attr_) = new partial_acsl::NotUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2973 "Parser.C"
    break;

  case 176: /* Attr12: _TILDE Attr12  */
#line 549 "partial_bnfc_parser.y"
                  { (yyval.attr_) = new partial_acsl::TildeUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2979 "Parser.C"
    break;

  case 177: /* Attr13: Attr14  */
#line 551 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2985 "Parser.C"
    break;

  case 178: /* Attr13: IdOrTypenameAsId _LPAREN ListAttr _RPAREN  */
#line 552 "partial_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.attr_) = new partial_acsl::FuncationCall((yyvsp[-3].idortypenameasid_), (yyvsp[-1].listattr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2991 "Parser.C"
    break;

  case 179: /* Attr13: IdOrTypenameAsId _LPAREN _RPAREN  */
#line 553 "partial_bnfc_parser.y"
                                     { (yyval.attr_) = new partial_acsl::ProcedureCall((yyvsp[-2].idortypenameasid_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2997 "Parser.C"
    break;

  case 180: /* Attr13: Attr13 _RARROW IdOrTypename  */
#line 554 "partial_bnfc_parser.y"
                                { (yyval.attr_) = new partial_acsl::ArrowAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 3003 "Parser.C"
    break;

  case 181: /* Attr13: Attr13 _DOT IdOrTypename  */
#line 555 "partial_bnfc_parser.y"
                             { (yyval.attr_) = new partial_acsl::DotAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 3009 "Parser.C"
    break;

  case 182: /* Attr13: Attr13 _LBRACK Attr _RBRACK  */
#line 556 "partial_bnfc_parser.y"
                                { (yyval.attr_) = new partial_acsl::ArrayAttr((yyvsp[-3].attr_), (yyvsp[-1].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 3015 "Parser.C"
    break;

  case 183: /* Attr14: BasicAttribute  */
#line 558 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::BasicAttr((yyvsp[0].basicattribute_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 3021 "Parser.C"
    break;

  case 184: /* Attr14: _LPAREN Attr _RPAREN  */
#line 559 "partial_bnfc_parser.y"
                         { (yyval.attr_) = (yyvsp[-1].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 3027 "Parser.C"
    break;

  case 185: /* BasicAttribute: _INTEGER_  */
#line 561 "partial_bnfc_parser.y"
                           { (yyval.basicattribute_) = new partial_acsl::BasicAttrConsInt((yyvsp[0]._int)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 3033 "Parser.C"
    break;

  case 186: /* BasicAttribute: _DOUBLE_  */
#line 562 "partial_bnfc_parser.y"
             { (yyval.basicattribute_) = new partial_acsl::BasicAttrConsFloat((yyvsp[0]._double)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 3039 "Parser.C"
    break;

  case 187: /* AnnotatedStmt: Statement  */
#line 564 "partial_bnfc_parser.y"
                          { (yyval.annotatedstmt_) = new partial_acsl::AnnotatedStatement((yyvsp[0].statement_)); (yyval.annotatedstmt_)->line_number = (yyloc).first_line; (yyval.annotatedstmt_)->char_number = (yyloc).first_column; result->annotatedstmt_ = (yyval.annotatedstmt_); }
#line 3045 "Parser.C"
    break;

  case 188: /* ElsePart: %empty  */
#line 566 "partial_bnfc_parser.y"
                       { (yyval.elsepart_) = new partial_acsl::NoElsePart(); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 3051 "Parser.C"
    break;

  case 189: /* ElsePart: _KW_else AnnotatedStmt  */
#line 567 "partial_bnfc_parser.y"
                           { (yyval.elsepart_) = new partial_acsl::SimpleElsePart((yyvsp[0].annotatedstmt_)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 3057 "Parser.C"
    break;

  case 190: /* OptExpression: %empty  */
#line 569 "partial_bnfc_parser.y"
                            { (yyval.optexpression_) = new partial_acsl::NoExpression(); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 3063 "Parser.C"
    break;

  case 191: /* OptExpression: ListExpression  */
#line 570 "partial_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.optexpression_) = new partial_acsl::SomeExpression((yyvsp[0].listexpression_)); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 3069 "Parser.C"
    break;

  case 192: /* Expression: AssignExpr  */
#line 572 "partial_bnfc_parser.y"
                        { (yyval.expression_) = new partial_acsl::AssignmentExpr((yyvsp[0].assignexpr_)); (yyval.expression_)->line_number = (yyloc).first_line; (yyval.expression_)->char_number = (yyloc).first_column; result->expression_ = (yyval.expression_); }
#line 3075 "Parser.C"
    break;

  case 193: /* ListExpression: Expression  */
#line 574 "partial_bnfc_parser.y"
                            { (yyval.listexpression_) = new partial_acsl::ListExpression(); (yyval.listexpression_)->push_back((yyvsp[0].expression_)); result->listexpression_ = (yyval.listexpression_); }
#line 3081 "Parser.C"
    break;

  case 194: /* ListExpression: Expression _COMMA ListExpression  */
#line 575 "partial_bnfc_parser.y"
                                     { (yyvsp[0].listexpression_)->push_back((yyvsp[-2].expression_)); (yyval.listexpression_) = (yyvsp[0].listexpression_); result->listexpression_ = (yyval.listexpression_); }
#line 3087 "Parser.C"
    break;

  case 195: /* AssignExpr: AssignExpr1  */
#line 577 "partial_bnfc_parser.y"
                         { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3093 "Parser.C"
    break;

  case 196: /* AssignExpr: AssignExpr12 _EQ AssignExpr  */
#line 578 "partial_bnfc_parser.y"
                                { (yyval.assignexpr_) = new partial_acsl::EqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3099 "Parser.C"
    break;

  case 197: /* AssignExpr: AssignExpr12 _PLUSEQ AssignExpr  */
#line 579 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::PlusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3105 "Parser.C"
    break;

  case 198: /* AssignExpr: AssignExpr12 _MINUSEQ AssignExpr  */
#line 580 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::MinusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3111 "Parser.C"
    break;

  case 199: /* AssignExpr: AssignExpr12 _STAREQ AssignExpr  */
#line 581 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::MultEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3117 "Parser.C"
    break;

  case 200: /* AssignExpr: AssignExpr12 _SLASHEQ AssignExpr  */
#line 582 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::DivEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3123 "Parser.C"
    break;

  case 201: /* AssignExpr: AssignExpr12 _PERCENTEQ AssignExpr  */
#line 583 "partial_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new partial_acsl::ModEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3129 "Parser.C"
    break;

  case 202: /* AssignExpr: AssignExpr12 _AMPEQ AssignExpr  */
#line 584 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::AndEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3135 "Parser.C"
    break;

  case 203: /* AssignExpr: AssignExpr12 _BAREQ AssignExpr  */
#line 585 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::OrEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3141 "Parser.C"
    break;

  case 204: /* AssignExpr: AssignExpr12 _CARETEQ AssignExpr  */
#line 586 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::XorEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3147 "Parser.C"
    break;

  case 205: /* AssignExpr: AssignExpr12 _DLTEQ AssignExpr  */
#line 587 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::LeftShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3153 "Parser.C"
    break;

  case 206: /* AssignExpr: AssignExpr12 _DGTEQ AssignExpr  */
#line 588 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::RightShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3159 "Parser.C"
    break;

  case 207: /* AssignExpr1: AssignExpr2  */
#line 590 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3165 "Parser.C"
    break;

  case 208: /* AssignExpr1: AssignExpr2 _QUESTION OptExpression _COLON AssignExpr1  */
#line 591 "partial_bnfc_parser.y"
                                                           { (yyval.assignexpr_) = new partial_acsl::TernaryCondExpr((yyvsp[-4].assignexpr_), (yyvsp[-2].optexpression_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3171 "Parser.C"
    break;

  case 209: /* AssignExpr2: AssignExpr3  */
#line 593 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3177 "Parser.C"
    break;

  case 210: /* AssignExpr2: AssignExpr2 _DBAR AssignExpr3  */
#line 594 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::OrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3183 "Parser.C"
    break;

  case 211: /* AssignExpr3: AssignExpr4  */
#line 596 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3189 "Parser.C"
    break;

  case 212: /* AssignExpr3: AssignExpr3 _DAMP AssignExpr4  */
#line 597 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::AndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3195 "Parser.C"
    break;

  case 213: /* AssignExpr4: AssignExpr5  */
#line 599 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3201 "Parser.C"
    break;

  case 214: /* AssignExpr4: AssignExpr4 _BAR AssignExpr5  */
#line 600 "partial_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new partial_acsl::BitOrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3207 "Parser.C"
    break;

  case 215: /* AssignExpr5: AssignExpr6  */
#line 602 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3213 "Parser.C"
    break;

  case 216: /* AssignExpr5: AssignExpr5 _CARET AssignExpr6  */
#line 603 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::BitXorExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3219 "Parser.C"
    break;

  case 217: /* AssignExpr6: AssignExpr7  */
#line 605 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3225 "Parser.C"
    break;

  case 218: /* AssignExpr6: AssignExpr6 _AMP AssignExpr7  */
#line 606 "partial_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new partial_acsl::BitAndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3231 "Parser.C"
    break;

  case 219: /* AssignExpr7: AssignExpr8  */
#line 608 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3237 "Parser.C"
    break;

  case 220: /* AssignExpr7: AssignExpr7 _DEQ AssignExpr8  */
#line 609 "partial_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new partial_acsl::EqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3243 "Parser.C"
    break;

  case 221: /* AssignExpr7: AssignExpr7 _BANGEQ AssignExpr8  */
#line 610 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::NotEqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3249 "Parser.C"
    break;

  case 222: /* AssignExpr8: AssignExpr9  */
#line 612 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3255 "Parser.C"
    break;

  case 223: /* AssignExpr8: AssignExpr8 _LT AssignExpr9  */
#line 613 "partial_bnfc_parser.y"
                                { (yyval.assignexpr_) = new partial_acsl::LessExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3261 "Parser.C"
    break;

  case 224: /* AssignExpr8: AssignExpr8 _GT AssignExpr9  */
#line 614 "partial_bnfc_parser.y"
                                { (yyval.assignexpr_) = new partial_acsl::GreaterExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3267 "Parser.C"
    break;

  case 225: /* AssignExpr8: AssignExpr8 _LDARROW AssignExpr9  */
#line 615 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::LessEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3273 "Parser.C"
    break;

  case 226: /* AssignExpr8: AssignExpr8 _GTEQ AssignExpr9  */
#line 616 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::GreaterEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3279 "Parser.C"
    break;

  case 227: /* AssignExpr9: AssignExpr10  */
#line 618 "partial_bnfc_parser.y"
                           { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3285 "Parser.C"
    break;

  case 228: /* AssignExpr9: AssignExpr9 _DLT AssignExpr10  */
#line 619 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::LeftShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3291 "Parser.C"
    break;

  case 229: /* AssignExpr9: AssignExpr9 _DGT AssignExpr10  */
#line 620 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::RightShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3297 "Parser.C"
    break;

  case 230: /* AssignExpr10: AssignExpr11  */
#line 622 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3303 "Parser.C"
    break;

  case 231: /* AssignExpr10: AssignExpr10 _PLUS AssignExpr11  */
#line 623 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::PlusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3309 "Parser.C"
    break;

  case 232: /* AssignExpr10: AssignExpr10 _MINUS AssignExpr11  */
#line 624 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::MinusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3315 "Parser.C"
    break;

  case 233: /* AssignExpr11: AssignExpr12  */
#line 626 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3321 "Parser.C"
    break;

  case 234: /* AssignExpr11: AssignExpr11 _STAR AssignExpr12  */
#line 627 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::MulsExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3327 "Parser.C"
    break;

  case 235: /* AssignExpr11: AssignExpr11 _SLASH AssignExpr12  */
#line 628 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::DivExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3333 "Parser.C"
    break;

  case 236: /* AssignExpr11: AssignExpr11 _PERCENT AssignExpr12  */
#line 629 "partial_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new partial_acsl::ModExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3339 "Parser.C"
    break;

  case 237: /* AssignExpr12: AssignExpr13  */
#line 631 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3345 "Parser.C"
    break;

  case 238: /* AssignExpr12: _LPAREN TypeName _RPAREN AssignExpr12  */
#line 632 "partial_bnfc_parser.y"
                                          { (yyval.assignexpr_) = new partial_acsl::CastExpr((yyvsp[-2].typename_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3351 "Parser.C"
    break;

  case 239: /* AssignExpr13: AssignExpr14  */
#line 634 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3357 "Parser.C"
    break;

  case 240: /* AssignExpr13: _DPLUS AssignExpr13  */
#line 635 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprPlusPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3363 "Parser.C"
    break;

  case 241: /* AssignExpr13: _DMINUS AssignExpr13  */
#line 636 "partial_bnfc_parser.y"
                         { (yyval.assignexpr_) = new partial_acsl::UnaryExprMinusMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3369 "Parser.C"
    break;

  case 242: /* AssignExpr13: _KW_sizeof AssignExpr13  */
#line 637 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = new partial_acsl::UnaryExprSizeOf((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3375 "Parser.C"
    break;

  case 243: /* AssignExpr13: _KW_sizeof _LPAREN TypeName _RPAREN  */
#line 638 "partial_bnfc_parser.y"
                                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprSizeOfTypeName((yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3381 "Parser.C"
    break;

  case 244: /* AssignExpr13: T_ALIGNOF AssignExpr13  */
#line 639 "partial_bnfc_parser.y"
                           { (yyval.assignexpr_) = new partial_acsl::UnaryExprAlignOfUnaryExpr((yyvsp[-1]._string), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3387 "Parser.C"
    break;

  case 245: /* AssignExpr13: T_ALIGNOF _LPAREN TypeName _RPAREN  */
#line 640 "partial_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprAlignOfTypeName((yyvsp[-3]._string), (yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3393 "Parser.C"
    break;

  case 246: /* AssignExpr13: _PLUS AssignExpr12  */
#line 641 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3399 "Parser.C"
    break;

  case 247: /* AssignExpr13: _MINUS AssignExpr12  */
#line 642 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3405 "Parser.C"
    break;

  case 248: /* AssignExpr13: _STAR AssignExpr12  */
#line 643 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprMult((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3411 "Parser.C"
    break;

  case 249: /* AssignExpr13: _AMP AssignExpr12  */
#line 644 "partial_bnfc_parser.y"
                      { (yyval.assignexpr_) = new partial_acsl::UnaryExprAmp((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3417 "Parser.C"
    break;

  case 250: /* AssignExpr13: _BANG AssignExpr12  */
#line 645 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprNot((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3423 "Parser.C"
    break;

  case 251: /* AssignExpr13: _TILDE AssignExpr12  */
#line 646 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprTilde((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3429 "Parser.C"
    break;

  case 252: /* AssignExpr13: _DAMP IdOrTypenameAsId  */
#line 647 "partial_bnfc_parser.y"
                           { (yyval.assignexpr_) = new partial_acsl::UnaryExprAddress((yyvsp[0].idortypenameasid_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3435 "Parser.C"
    break;

  case 253: /* AssignExpr14: AssignExpr15  */
#line 649 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3441 "Parser.C"
    break;

  case 254: /* AssignExpr14: AssignExpr14 _LBRACK ListExpression _RBRACK  */
#line 650 "partial_bnfc_parser.y"
                                                { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new partial_acsl::BracketsPostfixExpression((yyvsp[-3].assignexpr_), (yyvsp[-1].listexpression_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3447 "Parser.C"
    break;

  case 255: /* AssignExpr14: AssignExpr14 _LPAREN Arguments _RPAREN  */
#line 651 "partial_bnfc_parser.y"
                                           { (yyval.assignexpr_) = new partial_acsl::ArgumentsPostfixExpression((yyvsp[-3].assignexpr_), (yyvsp[-1].arguments_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3453 "Parser.C"
    break;

  case 256: /* AssignExpr14: AssignExpr14 _DOT IdOrTypename  */
#line 652 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::DotPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3459 "Parser.C"
    break;

  case 257: /* AssignExpr14: AssignExpr14 _RARROW IdOrTypename  */
#line 653 "partial_bnfc_parser.y"
                                      { (yyval.assignexpr_) = new partial_acsl::ArrowPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3465 "Parser.C"
    break;

  case 258: /* AssignExpr14: AssignExpr14 _DPLUS  */
#line 654 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::PlusPlusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3471 "Parser.C"
    break;

  case 259: /* AssignExpr14: AssignExpr14 _DMINUS  */
#line 655 "partial_bnfc_parser.y"
                         { (yyval.assignexpr_) = new partial_acsl::MinusMinusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3477 "Parser.C"
    break;

  case 260: /* AssignExpr15: _IDENT_  */
#line 657 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::IdentifierPrimaryExpression((yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3483 "Parser.C"
    break;

  case 261: /* AssignExpr15: Constant  */
#line 658 "partial_bnfc_parser.y"
             { (yyval.assignexpr_) = new partial_acsl::ConstantPrimaryExpressin((yyvsp[0].constant_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3489 "Parser.C"
    break;

  case 262: /* AssignExpr15: _LPAREN ListExpression _RPAREN  */
#line 659 "partial_bnfc_parser.y"
                                   { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new partial_acsl::CommaExpressionPrimaryExpressin((yyvsp[-1].listexpression_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3495 "Parser.C"
    break;

  case 263: /* AssignExpr15: _LPAREN Block _RPAREN  */
#line 660 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = new partial_acsl::BlockPrimaryExpressin((yyvsp[-1].block_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3501 "Parser.C"
    break;

  case 264: /* Constant: _INTEGER_  */
#line 662 "partial_bnfc_parser.y"
                     { (yyval.constant_) = new partial_acsl::ConstantInt((yyvsp[0]._int)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3507 "Parser.C"
    break;

  case 265: /* Constant: _DOUBLE_  */
#line 663 "partial_bnfc_parser.y"
             { (yyval.constant_) = new partial_acsl::ConstantFloat((yyvsp[0]._double)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3513 "Parser.C"
    break;

  case 266: /* Constant: _CHAR_  */
#line 664 "partial_bnfc_parser.y"
           { (yyval.constant_) = new partial_acsl::ConstantChar((yyvsp[0]._char)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3519 "Parser.C"
    break;

  case 267: /* Constant: _STRING_  */
#line 665 "partial_bnfc_parser.y"
             { (yyval.constant_) = new partial_acsl::ConstantString((yyvsp[0]._string)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3525 "Parser.C"
    break;

  case 268: /* TypeName: DeclSpecList  */
#line 667 "partial_bnfc_parser.y"
                        { (yyval.typename_) = new partial_acsl::TypeNameDeclSpecList((yyvsp[0].declspeclist_)); (yyval.typename_)->line_number = (yyloc).first_line; (yyval.typename_)->char_number = (yyloc).first_column; result->typename_ = (yyval.typename_); }
#line 3531 "Parser.C"
    break;

  case 269: /* Arguments: %empty  */
#line 669 "partial_bnfc_parser.y"
                        { (yyval.arguments_) = new partial_acsl::NoArguments(); (yyval.arguments_)->line_number = (yyloc).first_line; (yyval.arguments_)->char_number = (yyloc).first_column; result->arguments_ = (yyval.arguments_); }
#line 3537 "Parser.C"
    break;

  case 270: /* Arguments: ListExpression  */
#line 670 "partial_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.arguments_) = new partial_acsl::SomeArguments((yyvsp[0].listexpression_)); (yyval.arguments_)->line_number = (yyloc).first_line; (yyval.arguments_)->char_number = (yyloc).first_column; result->arguments_ = (yyval.arguments_); }
#line 3543 "Parser.C"
    break;


#line 3547 "Parser.C"

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

#line 673 "partial_bnfc_parser.y"


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

/* Entrypoint: parse DeclSpecWOType* from file. */
DeclSpecWOType* pDeclSpecWOType(FILE *inp)
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
    return result.declspecwotype_;
  }
}

/* Entrypoint: parse DeclSpecWOType* from string. */
DeclSpecWOType* psDeclSpecWOType(const char *str)
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
    return result.declspecwotype_;
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

/* Entrypoint: parse AttributesOrStatic* from file. */
AttributesOrStatic* pAttributesOrStatic(FILE *inp)
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
    return result.attributesorstatic_;
  }
}

/* Entrypoint: parse AttributesOrStatic* from string. */
AttributesOrStatic* psAttributesOrStatic(const char *str)
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
    return result.attributesorstatic_;
  }
}

/* Entrypoint: parse CommaExpressionOpt* from file. */
CommaExpressionOpt* pCommaExpressionOpt(FILE *inp)
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
    return result.commaexpressionopt_;
  }
}

/* Entrypoint: parse CommaExpressionOpt* from string. */
CommaExpressionOpt* psCommaExpressionOpt(const char *str)
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
    return result.commaexpressionopt_;
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

/* Entrypoint: parse InitExpression* from file. */
InitExpression* pInitExpression(FILE *inp)
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
    return result.initexpression_;
  }
}

/* Entrypoint: parse InitExpression* from string. */
InitExpression* psInitExpression(const char *str)
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
    return result.initexpression_;
  }
}

/* Entrypoint: parse InitializerListOpt* from file. */
InitializerListOpt* pInitializerListOpt(FILE *inp)
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
    return result.initializerlistopt_;
  }
}

/* Entrypoint: parse InitializerListOpt* from string. */
InitializerListOpt* psInitializerListOpt(const char *str)
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
    return result.initializerlistopt_;
  }
}

/* Entrypoint: parse InitializerSingle* from file. */
InitializerSingle* pInitializerSingle(FILE *inp)
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
    return result.initializersingle_;
  }
}

/* Entrypoint: parse InitializerSingle* from string. */
InitializerSingle* psInitializerSingle(const char *str)
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
    return result.initializersingle_;
  }
}

/* Entrypoint: parse ListInitializerSingle* from file. */
ListInitializerSingle* pListInitializerSingle(FILE *inp)
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
std::reverse(result.listinitializersingle_->begin(), result.listinitializersingle_->end());
    return result.listinitializersingle_;
  }
}

/* Entrypoint: parse ListInitializerSingle* from string. */
ListInitializerSingle* psListInitializerSingle(const char *str)
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
std::reverse(result.listinitializersingle_->begin(), result.listinitializersingle_->end());
    return result.listinitializersingle_;
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

/* Entrypoint: parse OptLoopAnnotations* from file. */
OptLoopAnnotations* pOptLoopAnnotations(FILE *inp)
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
    return result.optloopannotations_;
  }
}

/* Entrypoint: parse OptLoopAnnotations* from string. */
OptLoopAnnotations* psOptLoopAnnotations(const char *str)
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
    return result.optloopannotations_;
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

/* Entrypoint: parse Arguments* from file. */
Arguments* pArguments(FILE *inp)
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
    return result.arguments_;
  }
}

/* Entrypoint: parse Arguments* from string. */
Arguments* psArguments(const char *str)
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
    return result.arguments_;
  }
}


}
