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
  YYSYMBOL__CARET = 40,                    /* _CARET  */
  YYSYMBOL__CARETEQ = 41,                  /* _CARETEQ  */
  YYSYMBOL__SYMB_1 = 42,                   /* _SYMB_1  */
  YYSYMBOL__SYMB_2 = 43,                   /* _SYMB_2  */
  YYSYMBOL__SYMB_3 = 44,                   /* _SYMB_3  */
  YYSYMBOL__KW_break = 45,                 /* _KW_break  */
  YYSYMBOL__KW_case = 46,                  /* _KW_case  */
  YYSYMBOL__KW_char = 47,                  /* _KW_char  */
  YYSYMBOL__KW_continue = 48,              /* _KW_continue  */
  YYSYMBOL__KW_default = 49,               /* _KW_default  */
  YYSYMBOL__KW_double = 50,                /* _KW_double  */
  YYSYMBOL__KW_else = 51,                  /* _KW_else  */
  YYSYMBOL__KW_float = 52,                 /* _KW_float  */
  YYSYMBOL__KW_if = 53,                    /* _KW_if  */
  YYSYMBOL__KW_int = 54,                   /* _KW_int  */
  YYSYMBOL__KW_long = 55,                  /* _KW_long  */
  YYSYMBOL__KW_return = 56,                /* _KW_return  */
  YYSYMBOL__KW_short = 57,                 /* _KW_short  */
  YYSYMBOL__KW_struct = 58,                /* _KW_struct  */
  YYSYMBOL__KW_switch = 59,                /* _KW_switch  */
  YYSYMBOL__KW_unsigned = 60,              /* _KW_unsigned  */
  YYSYMBOL__KW_void = 61,                  /* _KW_void  */
  YYSYMBOL__KW_while = 62,                 /* _KW_while  */
  YYSYMBOL__BAR = 63,                      /* _BAR  */
  YYSYMBOL__BAREQ = 64,                    /* _BAREQ  */
  YYSYMBOL__DBAR = 65,                     /* _DBAR  */
  YYSYMBOL__TILDE = 66,                    /* _TILDE  */
  YYSYMBOL_T_BLOCKATTRIBUTE = 67,          /* T_BLOCKATTRIBUTE  */
  YYSYMBOL_T_CONST = 68,                   /* T_CONST  */
  YYSYMBOL_T_LBRACE = 69,                  /* T_LBRACE  */
  YYSYMBOL_T_LBRACKET = 70,                /* T_LBRACKET  */
  YYSYMBOL_T_RBRACE = 71,                  /* T_RBRACE  */
  YYSYMBOL_T_RBRACKET = 72,                /* T_RBRACKET  */
  YYSYMBOL_T_RESTRICT = 73,                /* T_RESTRICT  */
  YYSYMBOL_T_SIGNED = 74,                  /* T_SIGNED  */
  YYSYMBOL_T_VOLATILE = 75,                /* T_VOLATILE  */
  YYSYMBOL__CHAR_ = 76,                    /* _CHAR_  */
  YYSYMBOL__INTEGER_ = 77,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 78,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 79,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 80,                  /* $accept  */
  YYSYMBOL_Program = 81,                   /* Program  */
  YYSYMBOL_Globals = 82,                   /* Globals  */
  YYSYMBOL_Global = 83,                    /* Global  */
  YYSYMBOL_FunctionDef = 84,               /* FunctionDef  */
  YYSYMBOL_FunctionDefStart = 85,          /* FunctionDefStart  */
  YYSYMBOL_DeclSpecList = 86,              /* DeclSpecList  */
  YYSYMBOL_DeclSpecListNoNamed = 87,       /* DeclSpecListNoNamed  */
  YYSYMBOL_TypeSpec = 88,                  /* TypeSpec  */
  YYSYMBOL_Declarator = 89,                /* Declarator  */
  YYSYMBOL_PointerOpt = 90,                /* PointerOpt  */
  YYSYMBOL_DirectDecl = 91,                /* DirectDecl  */
  YYSYMBOL_AttributesWithAsm = 92,         /* AttributesWithAsm  */
  YYSYMBOL_RestParList = 93,               /* RestParList  */
  YYSYMBOL_ParameterDecl = 94,             /* ParameterDecl  */
  YYSYMBOL_ListParameterDecl = 95,         /* ListParameterDecl  */
  YYSYMBOL_GhostParameterOpt = 96,         /* GhostParameterOpt  */
  YYSYMBOL_IdOrTypename = 97,              /* IdOrTypename  */
  YYSYMBOL_IdOrTypenameAsId = 98,          /* IdOrTypenameAsId  */
  YYSYMBOL_Declaration = 99,               /* Declaration  */
  YYSYMBOL_DeclAndInitDeclAttrList = 100,  /* DeclAndInitDeclAttrList  */
  YYSYMBOL_InitDeclaratorAttr = 101,       /* InitDeclaratorAttr  */
  YYSYMBOL_ListInitDeclaratorAttr = 102,   /* ListInitDeclaratorAttr  */
  YYSYMBOL_InitDeclarator = 103,           /* InitDeclarator  */
  YYSYMBOL_StructDeclList = 104,           /* StructDeclList  */
  YYSYMBOL_FieldDecl = 105,                /* FieldDecl  */
  YYSYMBOL_ListFieldDecl = 106,            /* ListFieldDecl  */
  YYSYMBOL_Attribute = 107,                /* Attribute  */
  YYSYMBOL_ListAttribute = 108,            /* ListAttribute  */
  YYSYMBOL_Block = 109,                    /* Block  */
  YYSYMBOL_BlockAttrs = 110,               /* BlockAttrs  */
  YYSYMBOL_BlockElement = 111,             /* BlockElement  */
  YYSYMBOL_ListBlockElement = 112,         /* ListBlockElement  */
  YYSYMBOL_Statement = 113,                /* Statement  */
  YYSYMBOL_Attr = 114,                     /* Attr  */
  YYSYMBOL_ListAttr = 115,                 /* ListAttr  */
  YYSYMBOL_Attr1 = 116,                    /* Attr1  */
  YYSYMBOL_Attr2 = 117,                    /* Attr2  */
  YYSYMBOL_Attr3 = 118,                    /* Attr3  */
  YYSYMBOL_Attr4 = 119,                    /* Attr4  */
  YYSYMBOL_Attr5 = 120,                    /* Attr5  */
  YYSYMBOL_Attr6 = 121,                    /* Attr6  */
  YYSYMBOL_Attr7 = 122,                    /* Attr7  */
  YYSYMBOL_Attr8 = 123,                    /* Attr8  */
  YYSYMBOL_Attr9 = 124,                    /* Attr9  */
  YYSYMBOL_Attr10 = 125,                   /* Attr10  */
  YYSYMBOL_Attr11 = 126,                   /* Attr11  */
  YYSYMBOL_Attr12 = 127,                   /* Attr12  */
  YYSYMBOL_Attr13 = 128,                   /* Attr13  */
  YYSYMBOL_Attr14 = 129,                   /* Attr14  */
  YYSYMBOL_BasicAttribute = 130,           /* BasicAttribute  */
  YYSYMBOL_AnnotatedStmt = 131,            /* AnnotatedStmt  */
  YYSYMBOL_ElsePart = 132,                 /* ElsePart  */
  YYSYMBOL_OptExpression = 133,            /* OptExpression  */
  YYSYMBOL_Expression = 134,               /* Expression  */
  YYSYMBOL_ListExpression = 135,           /* ListExpression  */
  YYSYMBOL_AssignExpr = 136,               /* AssignExpr  */
  YYSYMBOL_AssignExpr1 = 137,              /* AssignExpr1  */
  YYSYMBOL_AssignExpr2 = 138,              /* AssignExpr2  */
  YYSYMBOL_AssignExpr3 = 139,              /* AssignExpr3  */
  YYSYMBOL_AssignExpr4 = 140,              /* AssignExpr4  */
  YYSYMBOL_AssignExpr5 = 141,              /* AssignExpr5  */
  YYSYMBOL_AssignExpr6 = 142,              /* AssignExpr6  */
  YYSYMBOL_AssignExpr7 = 143,              /* AssignExpr7  */
  YYSYMBOL_AssignExpr8 = 144,              /* AssignExpr8  */
  YYSYMBOL_AssignExpr9 = 145,              /* AssignExpr9  */
  YYSYMBOL_AssignExpr10 = 146,             /* AssignExpr10  */
  YYSYMBOL_AssignExpr11 = 147,             /* AssignExpr11  */
  YYSYMBOL_AssignExpr12 = 148,             /* AssignExpr12  */
  YYSYMBOL_AssignExpr13 = 149,             /* AssignExpr13  */
  YYSYMBOL_AssignExpr14 = 150,             /* AssignExpr14  */
  YYSYMBOL_AssignExpr15 = 151,             /* AssignExpr15  */
  YYSYMBOL_Constant = 152,                 /* Constant  */
  YYSYMBOL_TypeName = 153                  /* TypeName  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 104 "partial_bnfc_parser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, partial_acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 304 "Parser.C"


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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   591

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   334


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
      75,    76,    77,    78,    79
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   273,   273,   275,   276,   277,   279,   280,   282,   284,
     286,   287,   289,   290,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   308,
     310,   311,   313,   314,   315,   317,   319,   321,   322,   323,
     325,   326,   328,   330,   332,   334,   335,   337,   338,   340,
     342,   343,   345,   347,   348,   349,   350,   352,   354,   355,
     357,   359,   360,   362,   364,   365,   367,   368,   370,   371,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   386,   387,   389,   390,   392,   393,   395,   396,
     398,   399,   401,   402,   404,   405,   407,   408,   410,   411,
     412,   414,   415,   416,   417,   418,   420,   421,   422,   424,
     425,   426,   428,   429,   430,   431,   433,   434,   435,   436,
     437,   438,   439,   441,   442,   443,   444,   445,   446,   448,
     449,   451,   452,   457,   459,   460,   462,   463,   465,   467,
     468,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   483,   484,   486,   487,   489,   490,   492,
     493,   495,   496,   498,   499,   501,   502,   503,   505,   506,
     507,   508,   509,   511,   512,   513,   515,   516,   517,   519,
     520,   521,   522,   524,   525,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   538,   539,   540,   541,   542,
     544,   545,   546,   547,   549,   550,   551,   553
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
  "_QUESTION", "_CARET", "_CARETEQ", "_SYMB_1", "_SYMB_2", "_SYMB_3",
  "_KW_break", "_KW_case", "_KW_char", "_KW_continue", "_KW_default",
  "_KW_double", "_KW_else", "_KW_float", "_KW_if", "_KW_int", "_KW_long",
  "_KW_return", "_KW_short", "_KW_struct", "_KW_switch", "_KW_unsigned",
  "_KW_void", "_KW_while", "_BAR", "_BAREQ", "_DBAR", "_TILDE",
  "T_BLOCKATTRIBUTE", "T_CONST", "T_LBRACE", "T_LBRACKET", "T_RBRACE",
  "T_RBRACKET", "T_RESTRICT", "T_SIGNED", "T_VOLATILE", "_CHAR_",
  "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept", "Program", "Globals",
  "Global", "FunctionDef", "FunctionDefStart", "DeclSpecList",
  "DeclSpecListNoNamed", "TypeSpec", "Declarator", "PointerOpt",
  "DirectDecl", "AttributesWithAsm", "RestParList", "ParameterDecl",
  "ListParameterDecl", "GhostParameterOpt", "IdOrTypename",
  "IdOrTypenameAsId", "Declaration", "DeclAndInitDeclAttrList",
  "InitDeclaratorAttr", "ListInitDeclaratorAttr", "InitDeclarator",
  "StructDeclList", "FieldDecl", "ListFieldDecl", "Attribute",
  "ListAttribute", "Block", "BlockAttrs", "BlockElement",
  "ListBlockElement", "Statement", "Attr", "ListAttr", "Attr1", "Attr2",
  "Attr3", "Attr4", "Attr5", "Attr6", "Attr7", "Attr8", "Attr9", "Attr10",
  "Attr11", "Attr12", "Attr13", "Attr14", "BasicAttribute",
  "AnnotatedStmt", "ElsePart", "OptExpression", "Expression",
  "ListExpression", "AssignExpr", "AssignExpr1", "AssignExpr2",
  "AssignExpr3", "AssignExpr4", "AssignExpr5", "AssignExpr6",
  "AssignExpr7", "AssignExpr8", "AssignExpr9", "AssignExpr10",
  "AssignExpr11", "AssignExpr12", "AssignExpr13", "AssignExpr14",
  "AssignExpr15", "Constant", "TypeName", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-269)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-31)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     473,   473,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,   -30,  -269,  -269,  -269,    40,  -269,   473,  -269,   -26,
      50,   517,  -269,  -269,   496,  -269,   -18,  -269,  -269,  -269,
      29,  -269,  -269,  -269,    77,    73,   131,   144,  -269,   517,
     496,    71,    93,   496,   158,  -269,     3,   162,  -269,  -269,
     165,  -269,  -269,   496,  -269,   175,   187,  -269,   132,   415,
     152,  -269,  -269,  -269,   395,  -269,  -269,   204,  -269,  -269,
    -269,   165,   496,  -269,   415,   415,   415,   415,   415,   415,
     415,  -269,  -269,   213,   209,   226,   212,    16,   238,   186,
     222,   244,    20,    66,    57,   123,    61,  -269,     5,  -269,
    -269,   325,   325,    73,   235,   325,   325,   401,   325,   401,
    -269,   237,   325,   239,   236,   259,   245,   265,   269,   325,
    -269,  -269,  -269,  -269,  -269,    50,  -269,  -269,  -269,  -269,
     263,   255,  -269,  -269,    27,   275,   223,   251,   286,    42,
      76,    70,   171,   141,   481,  -269,   154,  -269,  -269,   214,
    -269,     1,   290,   285,  -269,   165,  -269,  -269,  -269,  -269,
     293,  -269,  -269,  -269,  -269,    11,   415,  -269,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,    73,    73,
     415,  -269,  -269,  -269,  -269,   294,   295,   296,  -269,  -269,
      37,  -269,  -269,  -269,  -269,    58,  -269,   311,   325,  -269,
     325,   325,  -269,   325,  -269,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,  -269,  -269,    73,    73,   298,
    -269,  -269,  -269,   214,  -269,  -269,  -269,   304,  -269,  -269,
     291,   238,   186,   222,   244,    20,    66,    66,    57,    57,
      57,    57,   123,   123,    61,    61,  -269,  -269,  -269,  -269,
    -269,   249,  -269,  -269,   325,   325,   311,  -269,  -269,   305,
     313,   316,  -269,   308,  -269,   275,  -269,   223,   251,   286,
      42,    76,    76,    70,    70,    70,    70,   171,   171,   141,
     141,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,   415,  -269,  -269,   310,  -269,   311,   311,   311,   325,
    -269,   311,   272,  -269,  -269,  -269,  -269,   311,  -269,  -269
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     3,    16,    18,    21,    15,    23,    22,    19,    20,
      17,     0,    25,    14,    24,     0,     2,     3,     7,     0,
      30,    10,     6,     5,    53,    44,    26,    43,     1,     4,
      64,     8,    61,    46,    52,     0,     0,    47,    11,    12,
      53,    30,     0,    53,     0,    68,    30,    35,    32,    45,
      30,    13,    55,    53,    57,    58,     0,    28,     0,     0,
       0,    60,    31,    62,     0,    29,    52,    50,    48,    49,
      54,    30,    53,    27,     0,     0,     0,     0,     0,     0,
       0,   131,   132,     0,    84,     0,    82,    86,    88,    90,
      92,    94,    96,    98,   101,   106,   109,   112,   116,   123,
     129,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,   206,   204,   205,   200,    30,    66,    72,    69,    67,
     139,     0,   138,   141,   153,   155,   157,   159,   161,   163,
     165,   168,   173,   176,   179,   183,   185,   195,   201,     0,
      42,    38,     0,    40,    36,    30,    59,    56,   121,   120,
       0,   119,   117,   118,   122,     0,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,   191,   194,   207,     0,     0,     0,   190,   188,
       0,   186,   189,   187,    80,     0,    81,     0,     0,    79,
       0,     0,   193,     0,    71,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,   199,     0,     0,     0,
      33,    37,    42,     0,    51,   130,   125,     0,    85,    83,
       0,    89,    91,    93,    95,    97,   100,    99,   102,   104,
     103,   105,   107,   108,   110,   111,   115,   113,   114,   126,
     127,     0,   203,   202,     0,     0,     0,   133,    78,     0,
       0,     0,   140,     0,   137,   156,   179,   158,   160,   162,
     164,   167,   166,   169,   171,   170,   172,   174,   175,   177,
     178,   182,   180,   181,   147,   148,   145,   143,   144,   146,
     151,   142,   152,   150,   149,   197,   196,    39,    34,    41,
     124,     0,   128,   184,     0,    76,     0,     0,     0,     0,
      87,     0,   134,    74,    75,   154,    77,     0,    73,   135
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -269,  -269,    41,  -269,  -269,  -269,     0,   303,    44,   -10,
     297,  -269,  -269,  -269,   183,    94,    96,   -31,    -6,   289,
    -269,  -269,   191,   -16,    19,  -269,   279,  -269,  -269,   -11,
    -269,  -269,  -269,   292,   -55,   -56,  -156,  -269,   181,   182,
     189,   185,   180,   -39,    55,     6,     8,   -42,  -269,  -269,
    -269,  -268,  -269,  -269,  -101,   -60,   345,    23,  -269,   139,
     146,   147,   149,   151,    -2,    74,     9,    30,   -99,    72,
    -269,  -269,  -269,  -269
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    15,    16,    17,    18,    19,    41,    38,    21,    66,
      35,    47,    65,   152,   153,   154,   250,    26,    83,    22,
      36,    67,    68,    37,    42,    55,    56,    63,    46,   127,
      45,   128,    60,   287,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   288,   348,   293,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   197
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    20,   191,   192,    48,    27,   198,   199,    31,   202,
      34,   205,   259,   260,    32,    74,    32,    20,   335,    75,
     212,   160,    76,   256,    77,   175,    78,   188,   189,    27,
      79,    54,   158,   159,    69,   161,   162,   163,   164,    24,
      28,   101,    23,    30,   196,   102,   103,   221,   104,    25,
     105,    43,   106,   107,   176,   169,   108,   109,    29,    52,
     125,    54,    58,    32,   151,    39,   215,   185,   342,   343,
     344,    61,    70,   346,   186,   190,   222,    80,    33,   349,
     -30,   170,   285,    39,    32,   286,   187,   181,    81,    82,
      25,   157,   216,   195,   182,   177,    44,   193,   178,    53,
     227,   179,   180,   119,   194,   223,    30,   228,   224,   257,
     258,   225,   226,   121,   122,   123,   124,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   311,   312,   313,   281,   266,   267,   183,    69,
     196,   251,   184,   276,   277,   278,    -9,   231,   289,   151,
     290,   291,    25,   292,   232,   294,   101,   279,   280,    49,
     102,   103,    50,   104,    57,   105,   233,   106,   107,    59,
     245,   108,   109,    64,   246,   340,   247,   248,    32,   201,
     110,   203,    27,    27,   334,   333,   229,   272,   273,   195,
     230,   274,   275,    71,     2,     3,     4,   111,   112,     5,
     113,   114,     6,    73,     7,   115,     8,     9,   116,    10,
      11,   117,    12,    13,   118,    72,   325,   326,   119,   301,
     302,    30,   155,   120,   165,   149,    14,   166,   121,   122,
     123,   124,   268,   269,   270,   271,   307,   308,   167,   101,
     296,    27,    27,   102,   103,   168,   104,   171,   105,   172,
     106,   107,   174,   151,   108,   109,     2,     3,     4,   309,
     310,     5,   173,   207,     6,   204,     7,   206,     8,     9,
     208,    10,    11,   209,    12,    13,   210,     2,     3,     4,
     211,   213,     5,   214,   217,     6,   218,     7,    14,     8,
       9,   219,    10,    11,   220,    12,    13,   303,   304,   305,
     306,   119,   252,   253,    30,   255,   282,   283,   284,    14,
     327,   121,   122,   123,   124,   101,   330,   336,   331,   102,
     103,   332,   104,   347,   105,   337,   106,   107,   338,   101,
     108,   109,   249,   102,   103,   339,   104,   341,   105,   110,
     106,   107,    51,    62,   108,   109,   254,   329,   328,   126,
     156,   261,   129,   262,   265,   295,   111,   112,   264,   113,
     114,   263,   345,   297,   115,   298,     0,   116,   299,     0,
     117,   300,     0,   118,     0,     0,     0,   119,     0,     0,
      30,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   101,   149,   150,     0,   102,
     103,     0,   200,     0,   105,     0,   106,   107,     0,    74,
     108,   109,     0,    75,     0,     0,    76,     0,    77,     0,
      78,     0,     0,     0,    79,     0,     0,     2,     3,     4,
       0,     0,     5,     0,     0,     6,     0,     7,     0,     8,
       9,     0,    10,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,     0,    14,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,    80,     0,     0,     0,     0,     0,     0,   234,     0,
       0,   235,    81,    82,    25,   236,     0,     0,   237,     0,
       0,     1,   238,     0,     0,     0,     0,   239,     0,     0,
       0,     0,   240,     0,   241,     2,     3,     4,     0,   242,
       5,     0,   243,     6,    40,     7,     0,     8,     9,     0,
      10,    11,     0,    12,    13,     0,     0,     0,     2,     3,
       4,     0,     0,     5,     0,   244,     6,    14,     7,     0,
       8,     9,     0,    10,    11,     0,    12,    13,     0,     2,
       3,     4,     0,     0,     5,     0,     0,     6,     0,     7,
      14,     8,     9,     0,    10,    11,     0,    12,    13,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,    14
};

static const yytype_int16 yycheck[] =
{
       0,     1,   101,   102,    35,    11,   105,   106,    19,   108,
      20,   112,   168,   169,    13,     4,    13,    17,   286,     8,
     119,    76,    11,    12,    13,     5,    15,    22,    23,    35,
      19,    41,    74,    75,    50,    77,    78,    79,    80,    69,
       0,     4,     1,    69,   104,     8,     9,     5,    11,    79,
      13,    69,    15,    16,    34,    39,    19,    20,    17,    40,
      60,    71,    43,    13,    64,    21,    39,     6,   336,   337,
     338,    68,    53,   341,    13,    70,    34,    66,    28,   347,
      79,    65,    24,    39,    13,    27,    25,    30,    77,    78,
      79,    72,    65,   104,    37,    29,    67,   103,    32,    28,
      30,    35,    36,    66,   104,    29,    69,    37,    32,   165,
     166,    35,    36,    76,    77,    78,    79,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   190,   175,   176,    15,   155,
     200,   151,    19,   185,   186,   187,    69,     6,   208,   149,
     210,   211,    79,   213,    13,   215,     4,   188,   189,    28,
       8,     9,    18,    11,    71,    13,    25,    15,    16,    11,
      16,    19,    20,    11,    20,   331,    22,    23,    13,   107,
      28,   109,   188,   189,   285,   284,    15,   181,   182,   200,
      19,   183,   184,    18,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    71,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    28,   247,   248,    66,   221,
     222,    69,    18,    71,    11,    11,    74,    18,    76,    77,
      78,    79,   177,   178,   179,   180,   227,   228,    12,     4,
     339,   247,   248,     8,     9,    33,    11,     9,    13,    63,
      15,    16,     8,   253,    19,    20,    42,    43,    44,   229,
     230,    47,    40,    27,    50,    28,    52,    28,    54,    55,
      11,    57,    58,    28,    60,    61,    11,    42,    43,    44,
      11,    18,    47,    28,     9,    50,    63,    52,    74,    54,
      55,    40,    57,    58,     8,    60,    61,   223,   224,   225,
     226,    66,    12,    18,    69,    12,    12,    12,    12,    74,
      12,    76,    77,    78,    79,     4,    12,    12,    27,     8,
       9,    72,    11,    51,    13,    12,    15,    16,    12,     4,
      19,    20,   149,     8,     9,    27,    11,    27,    13,    28,
      15,    16,    39,    46,    19,    20,   155,   253,   252,    60,
      71,   170,    60,   171,   174,   216,    45,    46,   173,    48,
      49,   172,   339,   217,    53,   218,    -1,    56,   219,    -1,
      59,   220,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    79,     4,    11,    12,    -1,     8,
       9,    -1,    11,    -1,    13,    -1,    15,    16,    -1,     4,
      19,    20,    -1,     8,    -1,    -1,    11,    -1,    13,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    42,    43,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    52,    -1,    54,
      55,    -1,    57,    58,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79,    66,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    10,    77,    78,    79,    14,    -1,    -1,    17,    -1,
      -1,    28,    21,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    42,    43,    44,    -1,    38,
      47,    -1,    41,    50,    28,    52,    -1,    54,    55,    -1,
      57,    58,    -1,    60,    61,    -1,    -1,    -1,    42,    43,
      44,    -1,    -1,    47,    -1,    64,    50,    74,    52,    -1,
      54,    55,    -1,    57,    58,    -1,    60,    61,    -1,    42,
      43,    44,    -1,    -1,    47,    -1,    -1,    50,    -1,    52,
      74,    54,    55,    -1,    57,    58,    -1,    60,    61,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
      -1,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    42,    43,    44,    47,    50,    52,    54,    55,
      57,    58,    60,    61,    74,    81,    82,    83,    84,    85,
      86,    88,    99,    82,    69,    79,    97,    98,     0,    82,
      69,   109,    13,    28,    89,    90,   100,   103,    87,    88,
      28,    86,   104,    69,    67,   110,   108,    91,    97,    28,
      18,    87,   104,    28,    89,   105,   106,    71,   104,    11,
     112,    68,    90,   107,    11,    92,    89,   101,   102,   103,
     104,    18,    28,    71,     4,     8,    11,    13,    15,    19,
      66,    77,    78,    98,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,     4,     8,     9,    11,    13,    15,    16,    19,    20,
      28,    45,    46,    48,    49,    53,    56,    59,    62,    66,
      71,    76,    77,    78,    79,    86,    99,   109,   111,   113,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    11,
      12,    86,    93,    94,    95,    18,   106,   104,   127,   127,
     114,   127,   127,   127,   127,    11,    18,    12,    33,    39,
      65,     9,    63,    40,     8,     5,    34,    29,    32,    35,
      36,    30,    37,    15,    19,     6,    13,    25,    22,    23,
      70,   148,   148,    98,    86,   109,   135,   153,   148,   148,
      11,   149,   148,   149,    28,   134,    28,    27,    11,    28,
      11,    11,   148,    18,    28,    39,    65,     9,    63,    40,
       8,     5,    34,    29,    32,    35,    36,    30,    37,    15,
      19,     6,    13,    25,     7,    10,    14,    17,    21,    26,
      31,    33,    38,    41,    64,    16,    20,    22,    23,    94,
      96,    89,    12,    18,   102,    12,    12,   115,   115,   116,
     116,   118,   119,   120,   121,   122,   123,   123,   124,   124,
     124,   124,   125,   125,   126,   126,   127,   127,   127,    97,
      97,   114,    12,    12,    12,    24,    27,   113,   131,   135,
     135,   135,   135,   133,   135,   139,   148,   140,   141,   142,
     143,   144,   144,   145,   145,   145,   145,   146,   146,   147,
     147,   148,   148,   148,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,    97,    97,    12,    96,    95,
      12,    27,    72,   148,   134,   131,    12,    12,    12,    27,
     116,    27,   131,   131,   131,   137,   131,    51,   132,   131
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    82,    82,    83,    83,    84,    85,
      86,    86,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      90,    90,    91,    91,    91,    92,    93,    94,    94,    94,
      95,    95,    96,    97,    98,    99,    99,   100,   100,   101,
     102,   102,   103,   104,   104,   104,   104,   105,   106,   106,
     107,   108,   108,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   123,   123,   123,   123,   123,   124,   124,   124,   125,
     125,   125,   126,   126,   126,   126,   127,   127,   127,   127,
     127,   127,   127,   128,   128,   128,   128,   128,   128,   129,
     129,   130,   130,   131,   132,   132,   133,   133,   134,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   143,   143,   143,   144,   144,
     144,   144,   144,   145,   145,   145,   146,   146,   146,   147,
     147,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   150,   150,   150,   150,
     151,   151,   151,   151,   152,   152,   152,   153
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     2,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     5,     4,     3,
       0,     3,     1,     4,     5,     0,     1,     2,     1,     3,
       1,     3,     0,     1,     1,     3,     2,     1,     3,     1,
       1,     3,     1,     0,     3,     2,     4,     1,     1,     3,
       1,     0,     2,     4,     0,     4,     1,     1,     0,     2,
       1,     2,     1,     6,     5,     5,     4,     6,     3,     2,
       2,     2,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
       2,     2,     2,     1,     4,     3,     3,     3,     4,     1,
       3,     1,     1,     1,     0,     2,     0,     1,     1,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     4,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     3,     2,     2,
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
#line 273 "partial_bnfc_parser.y"
                  { (yyval.program_) = new partial_acsl::AProgram((yyvsp[0].globals_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1704 "Parser.C"
    break;

  case 3: /* Globals: %empty  */
#line 275 "partial_bnfc_parser.y"
                      { (yyval.globals_) = new partial_acsl::NoGlobals(); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1710 "Parser.C"
    break;

  case 4: /* Globals: Global Globals  */
#line 276 "partial_bnfc_parser.y"
                   { (yyval.globals_) = new partial_acsl::SimpleGlobals((yyvsp[-1].global_), (yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1716 "Parser.C"
    break;

  case 5: /* Globals: _SEMI Globals  */
#line 277 "partial_bnfc_parser.y"
                  { (yyval.globals_) = new partial_acsl::SemiColonGlobals((yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1722 "Parser.C"
    break;

  case 6: /* Global: Declaration  */
#line 279 "partial_bnfc_parser.y"
                     { (yyval.global_) = new partial_acsl::GlobalsDeclataion((yyvsp[0].declaration_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 1728 "Parser.C"
    break;

  case 7: /* Global: FunctionDef  */
#line 280 "partial_bnfc_parser.y"
                { (yyval.global_) = new partial_acsl::GlobalsFunctionDef((yyvsp[0].functiondef_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 1734 "Parser.C"
    break;

  case 8: /* FunctionDef: FunctionDefStart Block  */
#line 282 "partial_bnfc_parser.y"
                                     { (yyval.functiondef_) = new partial_acsl::SimpleFunctionDef((yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 1740 "Parser.C"
    break;

  case 9: /* FunctionDefStart: DeclSpecList Declarator  */
#line 284 "partial_bnfc_parser.y"
                                           { (yyval.functiondefstart_) = new partial_acsl::FunctionDefStartDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 1746 "Parser.C"
    break;

  case 10: /* DeclSpecList: TypeSpec  */
#line 286 "partial_bnfc_parser.y"
                        { (yyval.declspeclist_) = new partial_acsl::DeclSpecTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 1752 "Parser.C"
    break;

  case 11: /* DeclSpecList: TypeSpec DeclSpecListNoNamed  */
#line 287 "partial_bnfc_parser.y"
                                 { (yyval.declspeclist_) = new partial_acsl::DeclSpecTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 1758 "Parser.C"
    break;

  case 12: /* DeclSpecListNoNamed: TypeSpec  */
#line 289 "partial_bnfc_parser.y"
                               { (yyval.declspeclistnonamed_) = new partial_acsl::DeclSpecNoNamedTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 1764 "Parser.C"
    break;

  case 13: /* DeclSpecListNoNamed: TypeSpec DeclSpecListNoNamed  */
#line 290 "partial_bnfc_parser.y"
                                 { (yyval.declspeclistnonamed_) = new partial_acsl::DeclSpecNoNamedTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 1770 "Parser.C"
    break;

  case 14: /* TypeSpec: _KW_void  */
#line 292 "partial_bnfc_parser.y"
                    { (yyval.typespec_) = new partial_acsl::TypeSpecVoidKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1776 "Parser.C"
    break;

  case 15: /* TypeSpec: _KW_char  */
#line 293 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partial_acsl::TypeSpecCharKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1782 "Parser.C"
    break;

  case 16: /* TypeSpec: _SYMB_1  */
#line 294 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecBoolKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1788 "Parser.C"
    break;

  case 17: /* TypeSpec: _KW_short  */
#line 295 "partial_bnfc_parser.y"
              { (yyval.typespec_) = new partial_acsl::TypeSpecShortKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1794 "Parser.C"
    break;

  case 18: /* TypeSpec: _SYMB_2  */
#line 296 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecInt32KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1800 "Parser.C"
    break;

  case 19: /* TypeSpec: _KW_int  */
#line 297 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecIntKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1806 "Parser.C"
    break;

  case 20: /* TypeSpec: _KW_long  */
#line 298 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partial_acsl::TypeSpecLongKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1812 "Parser.C"
    break;

  case 21: /* TypeSpec: _SYMB_3  */
#line 299 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partial_acsl::TypeSpecInt64KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1818 "Parser.C"
    break;

  case 22: /* TypeSpec: _KW_float  */
#line 300 "partial_bnfc_parser.y"
              { (yyval.typespec_) = new partial_acsl::TypeSpecFloatKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1824 "Parser.C"
    break;

  case 23: /* TypeSpec: _KW_double  */
#line 301 "partial_bnfc_parser.y"
               { (yyval.typespec_) = new partial_acsl::TypeSpecDoubleKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1830 "Parser.C"
    break;

  case 24: /* TypeSpec: T_SIGNED  */
#line 302 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partial_acsl::TypeSpecSignedKeyWord((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1836 "Parser.C"
    break;

  case 25: /* TypeSpec: _KW_unsigned  */
#line 303 "partial_bnfc_parser.y"
                 { (yyval.typespec_) = new partial_acsl::TypeSpecUnsignedKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1842 "Parser.C"
    break;

  case 26: /* TypeSpec: _KW_struct IdOrTypename  */
#line 304 "partial_bnfc_parser.y"
                            { (yyval.typespec_) = new partial_acsl::StructId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1848 "Parser.C"
    break;

  case 27: /* TypeSpec: _KW_struct IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 305 "partial_bnfc_parser.y"
                                                             { (yyval.typespec_) = new partial_acsl::StructIdBraces((yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1854 "Parser.C"
    break;

  case 28: /* TypeSpec: _KW_struct T_LBRACE StructDeclList T_RBRACE  */
#line 306 "partial_bnfc_parser.y"
                                                { (yyval.typespec_) = new partial_acsl::StructBraces((yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1860 "Parser.C"
    break;

  case 29: /* Declarator: PointerOpt DirectDecl AttributesWithAsm  */
#line 308 "partial_bnfc_parser.y"
                                                     { (yyval.declarator_) = new partial_acsl::ADeclarator((yyvsp[-2].pointeropt_), (yyvsp[-1].directdecl_), (yyvsp[0].attributeswithasm_)); (yyval.declarator_)->line_number = (yyloc).first_line; (yyval.declarator_)->char_number = (yyloc).first_column; result->declarator_ = (yyval.declarator_); }
#line 1866 "Parser.C"
    break;

  case 30: /* PointerOpt: %empty  */
#line 310 "partial_bnfc_parser.y"
                         { (yyval.pointeropt_) = new partial_acsl::NoPointer(); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 1872 "Parser.C"
    break;

  case 31: /* PointerOpt: _STAR ListAttribute PointerOpt  */
#line 311 "partial_bnfc_parser.y"
                                   { (yyval.pointeropt_) = new partial_acsl::SomePointer((yyvsp[-1].listattribute_), (yyvsp[0].pointeropt_)); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 1878 "Parser.C"
    break;

  case 32: /* DirectDecl: IdOrTypename  */
#line 313 "partial_bnfc_parser.y"
                          { (yyval.directdecl_) = new partial_acsl::DirectDeclIdTypename((yyvsp[0].idortypename_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 1884 "Parser.C"
    break;

  case 33: /* DirectDecl: DirectDecl _LPAREN _RPAREN GhostParameterOpt  */
#line 314 "partial_bnfc_parser.y"
                                                 { (yyval.directdecl_) = new partial_acsl::DirectDeclGhostParam((yyvsp[-3].directdecl_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 1890 "Parser.C"
    break;

  case 34: /* DirectDecl: DirectDecl _LPAREN RestParList _RPAREN GhostParameterOpt  */
#line 315 "partial_bnfc_parser.y"
                                                             { (yyval.directdecl_) = new partial_acsl::DirectDeclGhostRestParParam((yyvsp[-4].directdecl_), (yyvsp[-2].restparlist_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 1896 "Parser.C"
    break;

  case 35: /* AttributesWithAsm: %empty  */
#line 317 "partial_bnfc_parser.y"
                                { (yyval.attributeswithasm_) = new partial_acsl::EmptyAttrWithASM(); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 1902 "Parser.C"
    break;

  case 36: /* RestParList: ListParameterDecl  */
#line 319 "partial_bnfc_parser.y"
                                { std::reverse((yyvsp[0].listparameterdecl_)->begin(),(yyvsp[0].listparameterdecl_)->end()) ;(yyval.restparlist_) = new partial_acsl::SimpleParameterDecl((yyvsp[0].listparameterdecl_)); (yyval.restparlist_)->line_number = (yyloc).first_line; (yyval.restparlist_)->char_number = (yyloc).first_column; result->restparlist_ = (yyval.restparlist_); }
#line 1908 "Parser.C"
    break;

  case 37: /* ParameterDecl: DeclSpecList Declarator  */
#line 321 "partial_bnfc_parser.y"
                                        { (yyval.parameterdecl_) = new partial_acsl::ParameterDeclSpecDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 1914 "Parser.C"
    break;

  case 38: /* ParameterDecl: DeclSpecList  */
#line 322 "partial_bnfc_parser.y"
                 { (yyval.parameterdecl_) = new partial_acsl::ParameterDeclSpec((yyvsp[0].declspeclist_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 1920 "Parser.C"
    break;

  case 39: /* ParameterDecl: _LPAREN ParameterDecl _RPAREN  */
#line 323 "partial_bnfc_parser.y"
                                  { (yyval.parameterdecl_) = new partial_acsl::ParameterDeclPar((yyvsp[-1].parameterdecl_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 1926 "Parser.C"
    break;

  case 40: /* ListParameterDecl: ParameterDecl  */
#line 325 "partial_bnfc_parser.y"
                                  { (yyval.listparameterdecl_) = new partial_acsl::ListParameterDecl(); (yyval.listparameterdecl_)->push_back((yyvsp[0].parameterdecl_)); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 1932 "Parser.C"
    break;

  case 41: /* ListParameterDecl: ParameterDecl _COMMA ListParameterDecl  */
#line 326 "partial_bnfc_parser.y"
                                           { (yyvsp[0].listparameterdecl_)->push_back((yyvsp[-2].parameterdecl_)); (yyval.listparameterdecl_) = (yyvsp[0].listparameterdecl_); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 1938 "Parser.C"
    break;

  case 42: /* GhostParameterOpt: %empty  */
#line 328 "partial_bnfc_parser.y"
                                { (yyval.ghostparameteropt_) = new partial_acsl::NoGhostParameter(); (yyval.ghostparameteropt_)->line_number = (yyloc).first_line; (yyval.ghostparameteropt_)->char_number = (yyloc).first_column; result->ghostparameteropt_ = (yyval.ghostparameteropt_); }
#line 1944 "Parser.C"
    break;

  case 43: /* IdOrTypename: IdOrTypenameAsId  */
#line 330 "partial_bnfc_parser.y"
                                { (yyval.idortypename_) = new partial_acsl::IdTypename((yyvsp[0].idortypenameasid_)); (yyval.idortypename_)->line_number = (yyloc).first_line; (yyval.idortypename_)->char_number = (yyloc).first_column; result->idortypename_ = (yyval.idortypename_); }
#line 1950 "Parser.C"
    break;

  case 44: /* IdOrTypenameAsId: _IDENT_  */
#line 332 "partial_bnfc_parser.y"
                           { (yyval.idortypenameasid_) = new partial_acsl::IdOrTypenameAsIdIdentifier((yyvsp[0]._string)); (yyval.idortypenameasid_)->line_number = (yyloc).first_line; (yyval.idortypenameasid_)->char_number = (yyloc).first_column; result->idortypenameasid_ = (yyval.idortypenameasid_); }
#line 1956 "Parser.C"
    break;

  case 45: /* Declaration: DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 334 "partial_bnfc_parser.y"
                                                         { (yyval.declaration_) = new partial_acsl::DeclSpecInitDecl((yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 1962 "Parser.C"
    break;

  case 46: /* Declaration: DeclSpecList _SEMI  */
#line 335 "partial_bnfc_parser.y"
                       { (yyval.declaration_) = new partial_acsl::DeclSpec((yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 1968 "Parser.C"
    break;

  case 47: /* DeclAndInitDeclAttrList: InitDeclarator  */
#line 337 "partial_bnfc_parser.y"
                                         { (yyval.declandinitdeclattrlist_) = new partial_acsl::InitDeclaration((yyvsp[0].initdeclarator_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 1974 "Parser.C"
    break;

  case 48: /* DeclAndInitDeclAttrList: InitDeclarator _COMMA ListInitDeclaratorAttr  */
#line 338 "partial_bnfc_parser.y"
                                                 { std::reverse((yyvsp[0].listinitdeclaratorattr_)->begin(),(yyvsp[0].listinitdeclaratorattr_)->end()) ;(yyval.declandinitdeclattrlist_) = new partial_acsl::InitDeclarationWithAttr((yyvsp[-2].initdeclarator_), (yyvsp[0].listinitdeclaratorattr_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 1980 "Parser.C"
    break;

  case 49: /* InitDeclaratorAttr: InitDeclarator  */
#line 340 "partial_bnfc_parser.y"
                                    { (yyval.initdeclaratorattr_) = new partial_acsl::InitDeclaratorAttribute((yyvsp[0].initdeclarator_)); (yyval.initdeclaratorattr_)->line_number = (yyloc).first_line; (yyval.initdeclaratorattr_)->char_number = (yyloc).first_column; result->initdeclaratorattr_ = (yyval.initdeclaratorattr_); }
#line 1986 "Parser.C"
    break;

  case 50: /* ListInitDeclaratorAttr: InitDeclaratorAttr  */
#line 342 "partial_bnfc_parser.y"
                                            { (yyval.listinitdeclaratorattr_) = new partial_acsl::ListInitDeclaratorAttr(); (yyval.listinitdeclaratorattr_)->push_back((yyvsp[0].initdeclaratorattr_)); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 1992 "Parser.C"
    break;

  case 51: /* ListInitDeclaratorAttr: InitDeclaratorAttr _COMMA ListInitDeclaratorAttr  */
#line 343 "partial_bnfc_parser.y"
                                                     { (yyvsp[0].listinitdeclaratorattr_)->push_back((yyvsp[-2].initdeclaratorattr_)); (yyval.listinitdeclaratorattr_) = (yyvsp[0].listinitdeclaratorattr_); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 1998 "Parser.C"
    break;

  case 52: /* InitDeclarator: Declarator  */
#line 345 "partial_bnfc_parser.y"
                            { (yyval.initdeclarator_) = new partial_acsl::SimpleInitDeclarator((yyvsp[0].declarator_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 2004 "Parser.C"
    break;

  case 53: /* StructDeclList: %empty  */
#line 347 "partial_bnfc_parser.y"
                             { (yyval.structdecllist_) = new partial_acsl::EmptyStructDecl(); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2010 "Parser.C"
    break;

  case 54: /* StructDeclList: DeclSpecList _SEMI StructDeclList  */
#line 348 "partial_bnfc_parser.y"
                                      { (yyval.structdecllist_) = new partial_acsl::DeclSpecStructDecl((yyvsp[-2].declspeclist_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2016 "Parser.C"
    break;

  case 55: /* StructDeclList: _SEMI StructDeclList  */
#line 349 "partial_bnfc_parser.y"
                         { (yyval.structdecllist_) = new partial_acsl::SemicolonStructDecl((yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2022 "Parser.C"
    break;

  case 56: /* StructDeclList: DeclSpecList ListFieldDecl _SEMI StructDeclList  */
#line 350 "partial_bnfc_parser.y"
                                                    { std::reverse((yyvsp[-2].listfielddecl_)->begin(),(yyvsp[-2].listfielddecl_)->end()) ;(yyval.structdecllist_) = new partial_acsl::SpecFieldDeclStructDecl((yyvsp[-3].declspeclist_), (yyvsp[-2].listfielddecl_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2028 "Parser.C"
    break;

  case 57: /* FieldDecl: Declarator  */
#line 352 "partial_bnfc_parser.y"
                       { (yyval.fielddecl_) = new partial_acsl::FieldDeclDeclarator((yyvsp[0].declarator_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 2034 "Parser.C"
    break;

  case 58: /* ListFieldDecl: FieldDecl  */
#line 354 "partial_bnfc_parser.y"
                          { (yyval.listfielddecl_) = new partial_acsl::ListFieldDecl(); (yyval.listfielddecl_)->push_back((yyvsp[0].fielddecl_)); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 2040 "Parser.C"
    break;

  case 59: /* ListFieldDecl: FieldDecl _COMMA ListFieldDecl  */
#line 355 "partial_bnfc_parser.y"
                                   { (yyvsp[0].listfielddecl_)->push_back((yyvsp[-2].fielddecl_)); (yyval.listfielddecl_) = (yyvsp[0].listfielddecl_); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 2046 "Parser.C"
    break;

  case 60: /* Attribute: T_CONST  */
#line 357 "partial_bnfc_parser.y"
                    { (yyval.attribute_) = new partial_acsl::AttributeConst((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 2052 "Parser.C"
    break;

  case 61: /* ListAttribute: %empty  */
#line 359 "partial_bnfc_parser.y"
                            { (yyval.listattribute_) = new partial_acsl::ListAttribute(); result->listattribute_ = (yyval.listattribute_); }
#line 2058 "Parser.C"
    break;

  case 62: /* ListAttribute: ListAttribute Attribute  */
#line 360 "partial_bnfc_parser.y"
                            { (yyvsp[-1].listattribute_)->push_back((yyvsp[0].attribute_)); (yyval.listattribute_) = (yyvsp[-1].listattribute_); result->listattribute_ = (yyval.listattribute_); }
#line 2064 "Parser.C"
    break;

  case 63: /* Block: T_LBRACE BlockAttrs ListBlockElement T_RBRACE  */
#line 362 "partial_bnfc_parser.y"
                                                      { (yyval.block_) = new partial_acsl::ABlock((yyvsp[-3]._string), (yyvsp[-2].blockattrs_), (yyvsp[-1].listblockelement_), (yyvsp[0]._string)); (yyval.block_)->line_number = (yyloc).first_line; (yyval.block_)->char_number = (yyloc).first_column; result->block_ = (yyval.block_); }
#line 2070 "Parser.C"
    break;

  case 64: /* BlockAttrs: %empty  */
#line 364 "partial_bnfc_parser.y"
                         { (yyval.blockattrs_) = new partial_acsl::NoBlockAttrs(); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 2076 "Parser.C"
    break;

  case 65: /* BlockAttrs: T_BLOCKATTRIBUTE _LPAREN ListAttr _RPAREN  */
#line 365 "partial_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.blockattrs_) = new partial_acsl::SomeBlockAttrs((yyvsp[-3]._string), (yyvsp[-1].listattr_)); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 2082 "Parser.C"
    break;

  case 66: /* BlockElement: Declaration  */
#line 367 "partial_bnfc_parser.y"
                           { (yyval.blockelement_) = new partial_acsl::DeclarationElement((yyvsp[0].declaration_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 2088 "Parser.C"
    break;

  case 67: /* BlockElement: Statement  */
#line 368 "partial_bnfc_parser.y"
              { (yyval.blockelement_) = new partial_acsl::StatementElement((yyvsp[0].statement_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 2094 "Parser.C"
    break;

  case 68: /* ListBlockElement: %empty  */
#line 370 "partial_bnfc_parser.y"
                               { (yyval.listblockelement_) = new partial_acsl::ListBlockElement(); result->listblockelement_ = (yyval.listblockelement_); }
#line 2100 "Parser.C"
    break;

  case 69: /* ListBlockElement: ListBlockElement BlockElement  */
#line 371 "partial_bnfc_parser.y"
                                  { (yyvsp[-1].listblockelement_)->push_back((yyvsp[0].blockelement_)); (yyval.listblockelement_) = (yyvsp[-1].listblockelement_); result->listblockelement_ = (yyval.listblockelement_); }
#line 2106 "Parser.C"
    break;

  case 70: /* Statement: _SEMI  */
#line 373 "partial_bnfc_parser.y"
                  { (yyval.statement_) = new partial_acsl::SemicolonStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2112 "Parser.C"
    break;

  case 71: /* Statement: ListExpression _SEMI  */
#line 374 "partial_bnfc_parser.y"
                         { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::ExprsStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2118 "Parser.C"
    break;

  case 72: /* Statement: Block  */
#line 375 "partial_bnfc_parser.y"
          { (yyval.statement_) = new partial_acsl::BlockStatement((yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2124 "Parser.C"
    break;

  case 73: /* Statement: _KW_if _LPAREN ListExpression _RPAREN AnnotatedStmt ElsePart  */
#line 376 "partial_bnfc_parser.y"
                                                                 { std::reverse((yyvsp[-3].listexpression_)->begin(),(yyvsp[-3].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::IfStatement((yyvsp[-3].listexpression_), (yyvsp[-1].annotatedstmt_), (yyvsp[0].elsepart_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2130 "Parser.C"
    break;

  case 74: /* Statement: _KW_switch _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 377 "partial_bnfc_parser.y"
                                                            { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::SwitchStatement((yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2136 "Parser.C"
    break;

  case 75: /* Statement: _KW_while _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 378 "partial_bnfc_parser.y"
                                                           { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new partial_acsl::WhileStatement((yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2142 "Parser.C"
    break;

  case 76: /* Statement: _KW_case Expression _COLON AnnotatedStmt  */
#line 379 "partial_bnfc_parser.y"
                                             { (yyval.statement_) = new partial_acsl::CaseStatement((yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2148 "Parser.C"
    break;

  case 77: /* Statement: _KW_case Expression _ELLIPSIS Expression _COLON AnnotatedStmt  */
#line 380 "partial_bnfc_parser.y"
                                                                  { (yyval.statement_) = new partial_acsl::CaseSliceStatement((yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2154 "Parser.C"
    break;

  case 78: /* Statement: _KW_default _COLON AnnotatedStmt  */
#line 381 "partial_bnfc_parser.y"
                                     { (yyval.statement_) = new partial_acsl::DefaultStatement((yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2160 "Parser.C"
    break;

  case 79: /* Statement: _KW_return _SEMI  */
#line 382 "partial_bnfc_parser.y"
                     { (yyval.statement_) = new partial_acsl::EmptyReturnStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2166 "Parser.C"
    break;

  case 80: /* Statement: _KW_break _SEMI  */
#line 383 "partial_bnfc_parser.y"
                    { (yyval.statement_) = new partial_acsl::BreakStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2172 "Parser.C"
    break;

  case 81: /* Statement: _KW_continue _SEMI  */
#line 384 "partial_bnfc_parser.y"
                       { (yyval.statement_) = new partial_acsl::ContinueStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2178 "Parser.C"
    break;

  case 82: /* Attr: Attr1  */
#line 386 "partial_bnfc_parser.y"
             { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2184 "Parser.C"
    break;

  case 83: /* Attr: Attr1 _EQ Attr1  */
#line 387 "partial_bnfc_parser.y"
                    { (yyval.attr_) = new partial_acsl::AnAttr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2190 "Parser.C"
    break;

  case 84: /* ListAttr: Attr  */
#line 389 "partial_bnfc_parser.y"
                { (yyval.listattr_) = new partial_acsl::ListAttr(); (yyval.listattr_)->push_back((yyvsp[0].attr_)); result->listattr_ = (yyval.listattr_); }
#line 2196 "Parser.C"
    break;

  case 85: /* ListAttr: Attr _COMMA ListAttr  */
#line 390 "partial_bnfc_parser.y"
                         { (yyvsp[0].listattr_)->push_back((yyvsp[-2].attr_)); (yyval.listattr_) = (yyvsp[0].listattr_); result->listattr_ = (yyval.listattr_); }
#line 2202 "Parser.C"
    break;

  case 86: /* Attr1: Attr2  */
#line 392 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2208 "Parser.C"
    break;

  case 87: /* Attr1: Attr2 _QUESTION Attr1 _COLON Attr1  */
#line 393 "partial_bnfc_parser.y"
                                       { (yyval.attr_) = new partial_acsl::TernaryCond((yyvsp[-4].attr_), (yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2214 "Parser.C"
    break;

  case 88: /* Attr2: Attr3  */
#line 395 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2220 "Parser.C"
    break;

  case 89: /* Attr2: Attr2 _DBAR Attr3  */
#line 396 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::Or((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2226 "Parser.C"
    break;

  case 90: /* Attr3: Attr4  */
#line 398 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2232 "Parser.C"
    break;

  case 91: /* Attr3: Attr3 _DAMP Attr4  */
#line 399 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::And((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2238 "Parser.C"
    break;

  case 92: /* Attr4: Attr5  */
#line 401 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2244 "Parser.C"
    break;

  case 93: /* Attr4: Attr4 _BAR Attr5  */
#line 402 "partial_bnfc_parser.y"
                     { (yyval.attr_) = new partial_acsl::BitOr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2250 "Parser.C"
    break;

  case 94: /* Attr5: Attr6  */
#line 404 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2256 "Parser.C"
    break;

  case 95: /* Attr5: Attr5 _CARET Attr6  */
#line 405 "partial_bnfc_parser.y"
                       { (yyval.attr_) = new partial_acsl::Xor((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2262 "Parser.C"
    break;

  case 96: /* Attr6: Attr7  */
#line 407 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2268 "Parser.C"
    break;

  case 97: /* Attr6: Attr6 _AMP Attr7  */
#line 408 "partial_bnfc_parser.y"
                     { (yyval.attr_) = new partial_acsl::BitAnd((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2274 "Parser.C"
    break;

  case 98: /* Attr7: Attr8  */
#line 410 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2280 "Parser.C"
    break;

  case 99: /* Attr7: Attr7 _DEQ Attr8  */
#line 411 "partial_bnfc_parser.y"
                     { (yyval.attr_) = new partial_acsl::EqualEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2286 "Parser.C"
    break;

  case 100: /* Attr7: Attr7 _BANGEQ Attr8  */
#line 412 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::NotEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2292 "Parser.C"
    break;

  case 101: /* Attr8: Attr9  */
#line 414 "partial_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2298 "Parser.C"
    break;

  case 102: /* Attr8: Attr8 _LT Attr9  */
#line 415 "partial_bnfc_parser.y"
                    { (yyval.attr_) = new partial_acsl::Less((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2304 "Parser.C"
    break;

  case 103: /* Attr8: Attr8 _GT Attr9  */
#line 416 "partial_bnfc_parser.y"
                    { (yyval.attr_) = new partial_acsl::Greater((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2310 "Parser.C"
    break;

  case 104: /* Attr8: Attr8 _LDARROW Attr9  */
#line 417 "partial_bnfc_parser.y"
                         { (yyval.attr_) = new partial_acsl::LessEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2316 "Parser.C"
    break;

  case 105: /* Attr8: Attr8 _GTEQ Attr9  */
#line 418 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::GreaterEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2322 "Parser.C"
    break;

  case 106: /* Attr9: Attr10  */
#line 420 "partial_bnfc_parser.y"
               { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2328 "Parser.C"
    break;

  case 107: /* Attr9: Attr9 _DLT Attr10  */
#line 421 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::LeftShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2334 "Parser.C"
    break;

  case 108: /* Attr9: Attr9 _DGT Attr10  */
#line 422 "partial_bnfc_parser.y"
                      { (yyval.attr_) = new partial_acsl::RightShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2340 "Parser.C"
    break;

  case 109: /* Attr10: Attr11  */
#line 424 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2346 "Parser.C"
    break;

  case 110: /* Attr10: Attr10 _PLUS Attr11  */
#line 425 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::AddOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2352 "Parser.C"
    break;

  case 111: /* Attr10: Attr10 _MINUS Attr11  */
#line 426 "partial_bnfc_parser.y"
                         { (yyval.attr_) = new partial_acsl::SubOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2358 "Parser.C"
    break;

  case 112: /* Attr11: Attr12  */
#line 428 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2364 "Parser.C"
    break;

  case 113: /* Attr11: Attr11 _STAR Attr12  */
#line 429 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::MultOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2370 "Parser.C"
    break;

  case 114: /* Attr11: Attr11 _SLASH Attr12  */
#line 430 "partial_bnfc_parser.y"
                         { (yyval.attr_) = new partial_acsl::DivOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2376 "Parser.C"
    break;

  case 115: /* Attr11: Attr11 _PERCENT Attr12  */
#line 431 "partial_bnfc_parser.y"
                           { (yyval.attr_) = new partial_acsl::ModOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2382 "Parser.C"
    break;

  case 116: /* Attr12: Attr13  */
#line 433 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2388 "Parser.C"
    break;

  case 117: /* Attr12: _PLUS Attr12  */
#line 434 "partial_bnfc_parser.y"
                 { (yyval.attr_) = new partial_acsl::PlusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2394 "Parser.C"
    break;

  case 118: /* Attr12: _MINUS Attr12  */
#line 435 "partial_bnfc_parser.y"
                  { (yyval.attr_) = new partial_acsl::MinusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2400 "Parser.C"
    break;

  case 119: /* Attr12: _STAR Attr12  */
#line 436 "partial_bnfc_parser.y"
                 { (yyval.attr_) = new partial_acsl::MultUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2406 "Parser.C"
    break;

  case 120: /* Attr12: _AMP Attr12  */
#line 437 "partial_bnfc_parser.y"
                { (yyval.attr_) = new partial_acsl::AmpUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2412 "Parser.C"
    break;

  case 121: /* Attr12: _BANG Attr12  */
#line 438 "partial_bnfc_parser.y"
                 { (yyval.attr_) = new partial_acsl::NotUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2418 "Parser.C"
    break;

  case 122: /* Attr12: _TILDE Attr12  */
#line 439 "partial_bnfc_parser.y"
                  { (yyval.attr_) = new partial_acsl::TildeUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2424 "Parser.C"
    break;

  case 123: /* Attr13: Attr14  */
#line 441 "partial_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2430 "Parser.C"
    break;

  case 124: /* Attr13: IdOrTypenameAsId _LPAREN ListAttr _RPAREN  */
#line 442 "partial_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.attr_) = new partial_acsl::FuncationCall((yyvsp[-3].idortypenameasid_), (yyvsp[-1].listattr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2436 "Parser.C"
    break;

  case 125: /* Attr13: IdOrTypenameAsId _LPAREN _RPAREN  */
#line 443 "partial_bnfc_parser.y"
                                     { (yyval.attr_) = new partial_acsl::ProcedureCall((yyvsp[-2].idortypenameasid_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2442 "Parser.C"
    break;

  case 126: /* Attr13: Attr13 _RARROW IdOrTypename  */
#line 444 "partial_bnfc_parser.y"
                                { (yyval.attr_) = new partial_acsl::ArrowAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2448 "Parser.C"
    break;

  case 127: /* Attr13: Attr13 _DOT IdOrTypename  */
#line 445 "partial_bnfc_parser.y"
                             { (yyval.attr_) = new partial_acsl::DotAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2454 "Parser.C"
    break;

  case 128: /* Attr13: Attr13 T_LBRACKET Attr T_RBRACKET  */
#line 446 "partial_bnfc_parser.y"
                                      { (yyval.attr_) = new partial_acsl::ArrayAttr((yyvsp[-3].attr_), (yyvsp[-2]._string), (yyvsp[-1].attr_), (yyvsp[0]._string)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2460 "Parser.C"
    break;

  case 129: /* Attr14: BasicAttribute  */
#line 448 "partial_bnfc_parser.y"
                        { (yyval.attr_) = new partial_acsl::BasicAttr((yyvsp[0].basicattribute_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2466 "Parser.C"
    break;

  case 130: /* Attr14: _LPAREN Attr _RPAREN  */
#line 449 "partial_bnfc_parser.y"
                         { (yyval.attr_) = (yyvsp[-1].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2472 "Parser.C"
    break;

  case 131: /* BasicAttribute: _INTEGER_  */
#line 451 "partial_bnfc_parser.y"
                           { (yyval.basicattribute_) = new partial_acsl::BasicAttrConsInt((yyvsp[0]._int)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 2478 "Parser.C"
    break;

  case 132: /* BasicAttribute: _DOUBLE_  */
#line 452 "partial_bnfc_parser.y"
             { (yyval.basicattribute_) = new partial_acsl::BasicAttrConsFloat((yyvsp[0]._double)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 2484 "Parser.C"
    break;

  case 133: /* AnnotatedStmt: Statement  */
#line 457 "partial_bnfc_parser.y"
                          { (yyval.annotatedstmt_) = new partial_acsl::AnnotatedStatement((yyvsp[0].statement_)); (yyval.annotatedstmt_)->line_number = (yyloc).first_line; (yyval.annotatedstmt_)->char_number = (yyloc).first_column; result->annotatedstmt_ = (yyval.annotatedstmt_); }
#line 2490 "Parser.C"
    break;

  case 134: /* ElsePart: %empty  */
#line 459 "partial_bnfc_parser.y"
                       { (yyval.elsepart_) = new partial_acsl::NoElsePart(); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 2496 "Parser.C"
    break;

  case 135: /* ElsePart: _KW_else AnnotatedStmt  */
#line 460 "partial_bnfc_parser.y"
                           { (yyval.elsepart_) = new partial_acsl::SimpleElsePart((yyvsp[0].annotatedstmt_)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 2502 "Parser.C"
    break;

  case 136: /* OptExpression: %empty  */
#line 462 "partial_bnfc_parser.y"
                            { (yyval.optexpression_) = new partial_acsl::NoExpression(); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 2508 "Parser.C"
    break;

  case 137: /* OptExpression: ListExpression  */
#line 463 "partial_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.optexpression_) = new partial_acsl::SomeExpression((yyvsp[0].listexpression_)); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 2514 "Parser.C"
    break;

  case 138: /* Expression: AssignExpr  */
#line 465 "partial_bnfc_parser.y"
                        { (yyval.expression_) = new partial_acsl::AssignmentExpr((yyvsp[0].assignexpr_)); (yyval.expression_)->line_number = (yyloc).first_line; (yyval.expression_)->char_number = (yyloc).first_column; result->expression_ = (yyval.expression_); }
#line 2520 "Parser.C"
    break;

  case 139: /* ListExpression: Expression  */
#line 467 "partial_bnfc_parser.y"
                            { (yyval.listexpression_) = new partial_acsl::ListExpression(); (yyval.listexpression_)->push_back((yyvsp[0].expression_)); result->listexpression_ = (yyval.listexpression_); }
#line 2526 "Parser.C"
    break;

  case 140: /* ListExpression: Expression _COMMA ListExpression  */
#line 468 "partial_bnfc_parser.y"
                                     { (yyvsp[0].listexpression_)->push_back((yyvsp[-2].expression_)); (yyval.listexpression_) = (yyvsp[0].listexpression_); result->listexpression_ = (yyval.listexpression_); }
#line 2532 "Parser.C"
    break;

  case 141: /* AssignExpr: AssignExpr1  */
#line 470 "partial_bnfc_parser.y"
                         { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2538 "Parser.C"
    break;

  case 142: /* AssignExpr: AssignExpr12 _EQ AssignExpr  */
#line 471 "partial_bnfc_parser.y"
                                { (yyval.assignexpr_) = new partial_acsl::EqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2544 "Parser.C"
    break;

  case 143: /* AssignExpr: AssignExpr12 _PLUSEQ AssignExpr  */
#line 472 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::PlusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2550 "Parser.C"
    break;

  case 144: /* AssignExpr: AssignExpr12 _MINUSEQ AssignExpr  */
#line 473 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::MinusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2556 "Parser.C"
    break;

  case 145: /* AssignExpr: AssignExpr12 _STAREQ AssignExpr  */
#line 474 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::MultEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2562 "Parser.C"
    break;

  case 146: /* AssignExpr: AssignExpr12 _SLASHEQ AssignExpr  */
#line 475 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::DivEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2568 "Parser.C"
    break;

  case 147: /* AssignExpr: AssignExpr12 _PERCENTEQ AssignExpr  */
#line 476 "partial_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new partial_acsl::ModEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2574 "Parser.C"
    break;

  case 148: /* AssignExpr: AssignExpr12 _AMPEQ AssignExpr  */
#line 477 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::AndEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2580 "Parser.C"
    break;

  case 149: /* AssignExpr: AssignExpr12 _BAREQ AssignExpr  */
#line 478 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::OrEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2586 "Parser.C"
    break;

  case 150: /* AssignExpr: AssignExpr12 _CARETEQ AssignExpr  */
#line 479 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::XorEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2592 "Parser.C"
    break;

  case 151: /* AssignExpr: AssignExpr12 _DLTEQ AssignExpr  */
#line 480 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::LeftShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2598 "Parser.C"
    break;

  case 152: /* AssignExpr: AssignExpr12 _DGTEQ AssignExpr  */
#line 481 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::RightShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2604 "Parser.C"
    break;

  case 153: /* AssignExpr1: AssignExpr2  */
#line 483 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2610 "Parser.C"
    break;

  case 154: /* AssignExpr1: AssignExpr2 _QUESTION OptExpression _COLON AssignExpr1  */
#line 484 "partial_bnfc_parser.y"
                                                           { (yyval.assignexpr_) = new partial_acsl::TernaryCondExpr((yyvsp[-4].assignexpr_), (yyvsp[-2].optexpression_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2616 "Parser.C"
    break;

  case 155: /* AssignExpr2: AssignExpr3  */
#line 486 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2622 "Parser.C"
    break;

  case 156: /* AssignExpr2: AssignExpr2 _DBAR AssignExpr3  */
#line 487 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::OrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2628 "Parser.C"
    break;

  case 157: /* AssignExpr3: AssignExpr4  */
#line 489 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2634 "Parser.C"
    break;

  case 158: /* AssignExpr3: AssignExpr3 _DAMP AssignExpr4  */
#line 490 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::AndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2640 "Parser.C"
    break;

  case 159: /* AssignExpr4: AssignExpr5  */
#line 492 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2646 "Parser.C"
    break;

  case 160: /* AssignExpr4: AssignExpr4 _BAR AssignExpr5  */
#line 493 "partial_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new partial_acsl::BitOrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2652 "Parser.C"
    break;

  case 161: /* AssignExpr5: AssignExpr6  */
#line 495 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2658 "Parser.C"
    break;

  case 162: /* AssignExpr5: AssignExpr5 _CARET AssignExpr6  */
#line 496 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::BitXorExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2664 "Parser.C"
    break;

  case 163: /* AssignExpr6: AssignExpr7  */
#line 498 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2670 "Parser.C"
    break;

  case 164: /* AssignExpr6: AssignExpr6 _AMP AssignExpr7  */
#line 499 "partial_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new partial_acsl::BitAndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2676 "Parser.C"
    break;

  case 165: /* AssignExpr7: AssignExpr8  */
#line 501 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2682 "Parser.C"
    break;

  case 166: /* AssignExpr7: AssignExpr7 _DEQ AssignExpr8  */
#line 502 "partial_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new partial_acsl::EqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2688 "Parser.C"
    break;

  case 167: /* AssignExpr7: AssignExpr7 _BANGEQ AssignExpr8  */
#line 503 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::NotEqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2694 "Parser.C"
    break;

  case 168: /* AssignExpr8: AssignExpr9  */
#line 505 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2700 "Parser.C"
    break;

  case 169: /* AssignExpr8: AssignExpr8 _LT AssignExpr9  */
#line 506 "partial_bnfc_parser.y"
                                { (yyval.assignexpr_) = new partial_acsl::LessExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2706 "Parser.C"
    break;

  case 170: /* AssignExpr8: AssignExpr8 _GT AssignExpr9  */
#line 507 "partial_bnfc_parser.y"
                                { (yyval.assignexpr_) = new partial_acsl::GreaterExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2712 "Parser.C"
    break;

  case 171: /* AssignExpr8: AssignExpr8 _LDARROW AssignExpr9  */
#line 508 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::LessEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2718 "Parser.C"
    break;

  case 172: /* AssignExpr8: AssignExpr8 _GTEQ AssignExpr9  */
#line 509 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::GreaterEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2724 "Parser.C"
    break;

  case 173: /* AssignExpr9: AssignExpr10  */
#line 511 "partial_bnfc_parser.y"
                           { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2730 "Parser.C"
    break;

  case 174: /* AssignExpr9: AssignExpr9 _DLT AssignExpr10  */
#line 512 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::LeftShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2736 "Parser.C"
    break;

  case 175: /* AssignExpr9: AssignExpr9 _DGT AssignExpr10  */
#line 513 "partial_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new partial_acsl::RightShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2742 "Parser.C"
    break;

  case 176: /* AssignExpr10: AssignExpr11  */
#line 515 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2748 "Parser.C"
    break;

  case 177: /* AssignExpr10: AssignExpr10 _PLUS AssignExpr11  */
#line 516 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::PlusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2754 "Parser.C"
    break;

  case 178: /* AssignExpr10: AssignExpr10 _MINUS AssignExpr11  */
#line 517 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::MinusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2760 "Parser.C"
    break;

  case 179: /* AssignExpr11: AssignExpr12  */
#line 519 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2766 "Parser.C"
    break;

  case 180: /* AssignExpr11: AssignExpr11 _STAR AssignExpr12  */
#line 520 "partial_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new partial_acsl::MulsExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2772 "Parser.C"
    break;

  case 181: /* AssignExpr11: AssignExpr11 _SLASH AssignExpr12  */
#line 521 "partial_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new partial_acsl::DivExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2778 "Parser.C"
    break;

  case 182: /* AssignExpr11: AssignExpr11 _PERCENT AssignExpr12  */
#line 522 "partial_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new partial_acsl::ModExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2784 "Parser.C"
    break;

  case 183: /* AssignExpr12: AssignExpr13  */
#line 524 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2790 "Parser.C"
    break;

  case 184: /* AssignExpr12: _LPAREN TypeName _RPAREN AssignExpr12  */
#line 525 "partial_bnfc_parser.y"
                                          { (yyval.assignexpr_) = new partial_acsl::CastExpr((yyvsp[-2].typename_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2796 "Parser.C"
    break;

  case 185: /* AssignExpr13: AssignExpr14  */
#line 527 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2802 "Parser.C"
    break;

  case 186: /* AssignExpr13: _DPLUS AssignExpr13  */
#line 528 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprPlusPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2808 "Parser.C"
    break;

  case 187: /* AssignExpr13: _DMINUS AssignExpr13  */
#line 529 "partial_bnfc_parser.y"
                         { (yyval.assignexpr_) = new partial_acsl::UnaryExprMinusMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2814 "Parser.C"
    break;

  case 188: /* AssignExpr13: _PLUS AssignExpr12  */
#line 530 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2820 "Parser.C"
    break;

  case 189: /* AssignExpr13: _MINUS AssignExpr12  */
#line 531 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2826 "Parser.C"
    break;

  case 190: /* AssignExpr13: _STAR AssignExpr12  */
#line 532 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprMult((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2832 "Parser.C"
    break;

  case 191: /* AssignExpr13: _AMP AssignExpr12  */
#line 533 "partial_bnfc_parser.y"
                      { (yyval.assignexpr_) = new partial_acsl::UnaryExprAmp((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2838 "Parser.C"
    break;

  case 192: /* AssignExpr13: _BANG AssignExpr12  */
#line 534 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::UnaryExprNot((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2844 "Parser.C"
    break;

  case 193: /* AssignExpr13: _TILDE AssignExpr12  */
#line 535 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::UnaryExprTilde((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2850 "Parser.C"
    break;

  case 194: /* AssignExpr13: _DAMP IdOrTypenameAsId  */
#line 536 "partial_bnfc_parser.y"
                           { (yyval.assignexpr_) = new partial_acsl::UnaryExprAddress((yyvsp[0].idortypenameasid_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2856 "Parser.C"
    break;

  case 195: /* AssignExpr14: AssignExpr15  */
#line 538 "partial_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2862 "Parser.C"
    break;

  case 196: /* AssignExpr14: AssignExpr14 _DOT IdOrTypename  */
#line 539 "partial_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new partial_acsl::DotPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2868 "Parser.C"
    break;

  case 197: /* AssignExpr14: AssignExpr14 _RARROW IdOrTypename  */
#line 540 "partial_bnfc_parser.y"
                                      { (yyval.assignexpr_) = new partial_acsl::ArrowPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2874 "Parser.C"
    break;

  case 198: /* AssignExpr14: AssignExpr14 _DPLUS  */
#line 541 "partial_bnfc_parser.y"
                        { (yyval.assignexpr_) = new partial_acsl::PlusPlusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2880 "Parser.C"
    break;

  case 199: /* AssignExpr14: AssignExpr14 _DMINUS  */
#line 542 "partial_bnfc_parser.y"
                         { (yyval.assignexpr_) = new partial_acsl::MinusMinusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2886 "Parser.C"
    break;

  case 200: /* AssignExpr15: _IDENT_  */
#line 544 "partial_bnfc_parser.y"
                       { (yyval.assignexpr_) = new partial_acsl::IdentifierPrimaryExpression((yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2892 "Parser.C"
    break;

  case 201: /* AssignExpr15: Constant  */
#line 545 "partial_bnfc_parser.y"
             { (yyval.assignexpr_) = new partial_acsl::ConstantPrimaryExpressin((yyvsp[0].constant_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2898 "Parser.C"
    break;

  case 202: /* AssignExpr15: _LPAREN ListExpression _RPAREN  */
#line 546 "partial_bnfc_parser.y"
                                   { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new partial_acsl::CommaExpressionPrimaryExpressin((yyvsp[-1].listexpression_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2904 "Parser.C"
    break;

  case 203: /* AssignExpr15: _LPAREN Block _RPAREN  */
#line 547 "partial_bnfc_parser.y"
                          { (yyval.assignexpr_) = new partial_acsl::BlockPrimaryExpressin((yyvsp[-1].block_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2910 "Parser.C"
    break;

  case 204: /* Constant: _INTEGER_  */
#line 549 "partial_bnfc_parser.y"
                     { (yyval.constant_) = new partial_acsl::ConstantInt((yyvsp[0]._int)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 2916 "Parser.C"
    break;

  case 205: /* Constant: _DOUBLE_  */
#line 550 "partial_bnfc_parser.y"
             { (yyval.constant_) = new partial_acsl::ConstantFloat((yyvsp[0]._double)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 2922 "Parser.C"
    break;

  case 206: /* Constant: _CHAR_  */
#line 551 "partial_bnfc_parser.y"
           { (yyval.constant_) = new partial_acsl::ConstantChar((yyvsp[0]._char)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 2928 "Parser.C"
    break;

  case 207: /* TypeName: DeclSpecList  */
#line 553 "partial_bnfc_parser.y"
                        { (yyval.typename_) = new partial_acsl::TypeNameDeclSpecList((yyvsp[0].declspeclist_)); (yyval.typename_)->line_number = (yyloc).first_line; (yyval.typename_)->char_number = (yyloc).first_column; result->typename_ = (yyval.typename_); }
#line 2934 "Parser.C"
    break;


#line 2938 "Parser.C"

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

#line 556 "partial_bnfc_parser.y"


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

/* Entrypoint: parse ListBasicAttribute* from file. */
ListBasicAttribute* pListBasicAttribute(FILE *inp)
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
std::reverse(result.listbasicattribute_->begin(), result.listbasicattribute_->end());
    return result.listbasicattribute_;
  }
}

/* Entrypoint: parse ListBasicAttribute* from string. */
ListBasicAttribute* psListBasicAttribute(const char *str)
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
std::reverse(result.listbasicattribute_->begin(), result.listbasicattribute_->end());
    return result.listbasicattribute_;
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
