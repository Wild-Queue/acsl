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
#define yyparse         partial_bnfc_acslparse
#define yylex           partial_bnfc_acsllex
#define yyerror         partial_bnfc_acslerror
#define yydebug         partial_bnfc_acsldebug
#define yynerrs         partial_bnfc_acslnerrs

/* First part of user prologue.  */
#line 22 "partial_bnfc_acsl_parser.y"

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
extern YY_BUFFER_STATE partial_bnfc_acsl_scan_string(const char *str, yyscan_t scanner);
extern void partial_bnfc_acsl_delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void partial_bnfc_acsllex_destroy(yyscan_t scanner);
extern char* partial_bnfc_acslget_text(yyscan_t scanner);

extern yyscan_t partial_bnfc_acsl_initialize_lexer(FILE * inp);

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
  YYSYMBOL__AMP = 7,                       /* _AMP  */
  YYSYMBOL__DAMP = 8,                      /* _DAMP  */
  YYSYMBOL__LPAREN = 9,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 10,                   /* _RPAREN  */
  YYSYMBOL__STAR = 11,                     /* _STAR  */
  YYSYMBOL__PLUS = 12,                     /* _PLUS  */
  YYSYMBOL__COMMA = 13,                    /* _COMMA  */
  YYSYMBOL__MINUS = 14,                    /* _MINUS  */
  YYSYMBOL__SYMB_11 = 15,                  /* _SYMB_11  */
  YYSYMBOL__DDOT = 16,                     /* _DDOT  */
  YYSYMBOL__SLASH = 17,                    /* _SLASH  */
  YYSYMBOL__COLON = 18,                    /* _COLON  */
  YYSYMBOL__SEMI = 19,                     /* _SEMI  */
  YYSYMBOL__LT = 20,                       /* _LT  */
  YYSYMBOL__SYMB_12 = 21,                  /* _SYMB_12  */
  YYSYMBOL__LDARROW = 22,                  /* _LDARROW  */
  YYSYMBOL__SYMB_4 = 23,                   /* _SYMB_4  */
  YYSYMBOL__DEQ = 24,                      /* _DEQ  */
  YYSYMBOL__SYMB_3 = 25,                   /* _SYMB_3  */
  YYSYMBOL__GT = 26,                       /* _GT  */
  YYSYMBOL__GTEQ = 27,                     /* _GTEQ  */
  YYSYMBOL__QUESTION = 28,                 /* _QUESTION  */
  YYSYMBOL__LBRACK = 29,                   /* _LBRACK  */
  YYSYMBOL__SYMB_46 = 30,                  /* _SYMB_46  */
  YYSYMBOL__SYMB_48 = 31,                  /* _SYMB_48  */
  YYSYMBOL__SYMB_61 = 32,                  /* _SYMB_61  */
  YYSYMBOL__SYMB_49 = 33,                  /* _SYMB_49  */
  YYSYMBOL__SYMB_43 = 34,                  /* _SYMB_43  */
  YYSYMBOL__SYMB_44 = 35,                  /* _SYMB_44  */
  YYSYMBOL__SYMB_41 = 36,                  /* _SYMB_41  */
  YYSYMBOL__SYMB_50 = 37,                  /* _SYMB_50  */
  YYSYMBOL__SYMB_25 = 38,                  /* _SYMB_25  */
  YYSYMBOL__SYMB_33 = 39,                  /* _SYMB_33  */
  YYSYMBOL__SYMB_24 = 40,                  /* _SYMB_24  */
  YYSYMBOL__SYMB_47 = 41,                  /* _SYMB_47  */
  YYSYMBOL__SYMB_42 = 42,                  /* _SYMB_42  */
  YYSYMBOL__SYMB_1 = 43,                   /* _SYMB_1  */
  YYSYMBOL__SYMB_13 = 44,                  /* _SYMB_13  */
  YYSYMBOL__SYMB_40 = 45,                  /* _SYMB_40  */
  YYSYMBOL__SYMB_26 = 46,                  /* _SYMB_26  */
  YYSYMBOL__SYMB_2 = 47,                   /* _SYMB_2  */
  YYSYMBOL__SYMB_54 = 48,                  /* _SYMB_54  */
  YYSYMBOL__SYMB_34 = 49,                  /* _SYMB_34  */
  YYSYMBOL__SYMB_45 = 50,                  /* _SYMB_45  */
  YYSYMBOL__SYMB_60 = 51,                  /* _SYMB_60  */
  YYSYMBOL__SYMB_64 = 52,                  /* _SYMB_64  */
  YYSYMBOL__SYMB_51 = 53,                  /* _SYMB_51  */
  YYSYMBOL__SYMB_62 = 54,                  /* _SYMB_62  */
  YYSYMBOL__SYMB_63 = 55,                  /* _SYMB_63  */
  YYSYMBOL__SYMB_52 = 56,                  /* _SYMB_52  */
  YYSYMBOL__SYMB_32 = 57,                  /* _SYMB_32  */
  YYSYMBOL__SYMB_53 = 58,                  /* _SYMB_53  */
  YYSYMBOL__SYMB_35 = 59,                  /* _SYMB_35  */
  YYSYMBOL__SYMB_37 = 60,                  /* _SYMB_37  */
  YYSYMBOL__SYMB_38 = 61,                  /* _SYMB_38  */
  YYSYMBOL__SYMB_39 = 62,                  /* _SYMB_39  */
  YYSYMBOL__SYMB_36 = 63,                  /* _SYMB_36  */
  YYSYMBOL__RBRACK = 64,                   /* _RBRACK  */
  YYSYMBOL__CARET = 65,                    /* _CARET  */
  YYSYMBOL__DCARET = 66,                   /* _DCARET  */
  YYSYMBOL__SYMB_68 = 67,                  /* _SYMB_68  */
  YYSYMBOL__KW_admit = 68,                 /* _KW_admit  */
  YYSYMBOL__KW_allocates = 69,             /* _KW_allocates  */
  YYSYMBOL__KW_assert = 70,                /* _KW_assert  */
  YYSYMBOL__KW_assigns = 71,               /* _KW_assigns  */
  YYSYMBOL__KW_assumes = 72,               /* _KW_assumes  */
  YYSYMBOL__KW_at = 73,                    /* _KW_at  */
  YYSYMBOL__KW_axiom = 74,                 /* _KW_axiom  */
  YYSYMBOL__KW_axiomatic = 75,             /* _KW_axiomatic  */
  YYSYMBOL__KW_behavior = 76,              /* _KW_behavior  */
  YYSYMBOL__KW_behaviors = 77,             /* _KW_behaviors  */
  YYSYMBOL__KW_boolean = 78,               /* _KW_boolean  */
  YYSYMBOL__KW_breaks = 79,                /* _KW_breaks  */
  YYSYMBOL__KW_char = 80,                  /* _KW_char  */
  YYSYMBOL__KW_check = 81,                 /* _KW_check  */
  YYSYMBOL__KW_complete = 82,              /* _KW_complete  */
  YYSYMBOL__KW_continues = 83,             /* _KW_continues  */
  YYSYMBOL__KW_contract = 84,              /* _KW_contract  */
  YYSYMBOL__KW_decreases = 85,             /* _KW_decreases  */
  YYSYMBOL__KW_disjoint = 86,              /* _KW_disjoint  */
  YYSYMBOL__KW_double = 87,                /* _KW_double  */
  YYSYMBOL__KW_ensures = 88,               /* _KW_ensures  */
  YYSYMBOL__KW_exits = 89,                 /* _KW_exits  */
  YYSYMBOL__KW_float = 90,                 /* _KW_float  */
  YYSYMBOL__KW_for = 91,                   /* _KW_for  */
  YYSYMBOL__KW_frees = 92,                 /* _KW_frees  */
  YYSYMBOL__KW_function = 93,              /* _KW_function  */
  YYSYMBOL__KW_global = 94,                /* _KW_global  */
  YYSYMBOL__KW_impact = 95,                /* _KW_impact  */
  YYSYMBOL__KW_include = 96,               /* _KW_include  */
  YYSYMBOL__KW_inductive = 97,             /* _KW_inductive  */
  YYSYMBOL__KW_int = 98,                   /* _KW_int  */
  YYSYMBOL__KW_integer = 99,               /* _KW_integer  */
  YYSYMBOL__KW_invariant = 100,            /* _KW_invariant  */
  YYSYMBOL__KW_label = 101,                /* _KW_label  */
  YYSYMBOL__KW_lemma = 102,                /* _KW_lemma  */
  YYSYMBOL__KW_let = 103,                  /* _KW_let  */
  YYSYMBOL__KW_logic = 104,                /* _KW_logic  */
  YYSYMBOL__KW_long = 105,                 /* _KW_long  */
  YYSYMBOL__KW_loop = 106,                 /* _KW_loop  */
  YYSYMBOL__KW_model = 107,                /* _KW_model  */
  YYSYMBOL__KW_module = 108,               /* _KW_module  */
  YYSYMBOL__KW_pragma = 109,               /* _KW_pragma  */
  YYSYMBOL__KW_predicate = 110,            /* _KW_predicate  */
  YYSYMBOL__KW_reads = 111,                /* _KW_reads  */
  YYSYMBOL__KW_real = 112,                 /* _KW_real  */
  YYSYMBOL__KW_requires = 113,             /* _KW_requires  */
  YYSYMBOL__KW_returns = 114,              /* _KW_returns  */
  YYSYMBOL__KW_short = 115,                /* _KW_short  */
  YYSYMBOL__KW_signed = 116,               /* _KW_signed  */
  YYSYMBOL__KW_sizeof = 117,               /* _KW_sizeof  */
  YYSYMBOL__KW_slice = 118,                /* _KW_slice  */
  YYSYMBOL__KW_terminates = 119,           /* _KW_terminates  */
  YYSYMBOL__KW_type = 120,                 /* _KW_type  */
  YYSYMBOL__KW_unsigned = 121,             /* _KW_unsigned  */
  YYSYMBOL__KW_variant = 122,              /* _KW_variant  */
  YYSYMBOL__KW_void = 123,                 /* _KW_void  */
  YYSYMBOL__KW_writes = 124,               /* _KW_writes  */
  YYSYMBOL__LBRACE = 125,                  /* _LBRACE  */
  YYSYMBOL__BAR = 126,                     /* _BAR  */
  YYSYMBOL__DBAR = 127,                    /* _DBAR  */
  YYSYMBOL__RBRACE = 128,                  /* _RBRACE  */
  YYSYMBOL__TILDE = 129,                   /* _TILDE  */
  YYSYMBOL__STRING_ = 130,                 /* _STRING_  */
  YYSYMBOL__INTEGER_ = 131,                /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 132,                 /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 133,                  /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 134,                 /* $accept  */
  YYSYMBOL_Program = 135,                  /* Program  */
  YYSYMBOL_Annot = 136,                    /* Annot  */
  YYSYMBOL_Code_Annot = 137,               /* Code_Annot  */
  YYSYMBOL_Contract = 138,                 /* Contract  */
  YYSYMBOL_Requires = 139,                 /* Requires  */
  YYSYMBOL_NERequires = 140,               /* NERequires  */
  YYSYMBOL_Terminates = 141,               /* Terminates  */
  YYSYMBOL_Decreases = 142,                /* Decreases  */
  YYSYMBOL_SimpleClauses = 143,            /* SimpleClauses  */
  YYSYMBOL_NESimpleClauses = 144,          /* NESimpleClauses  */
  YYSYMBOL_Assigns = 145,                  /* Assigns  */
  YYSYMBOL_Zones = 146,                    /* Zones  */
  YYSYMBOL_Behaviors = 147,                /* Behaviors  */
  YYSYMBOL_CompleteOrDisjoint = 148,       /* CompleteOrDisjoint  */
  YYSYMBOL_Lexpr = 149,                    /* Lexpr  */
  YYSYMBOL_ListLexpr = 150,                /* ListLexpr  */
  YYSYMBOL_Lexpr1 = 151,                   /* Lexpr1  */
  YYSYMBOL_LexprRelInner = 152,            /* LexprRelInner  */
  YYSYMBOL_ListLexprRelInner = 153,        /* ListLexprRelInner  */
  YYSYMBOL_Relation = 154,                 /* Relation  */
  YYSYMBOL_Lexpr2 = 155,                   /* Lexpr2  */
  YYSYMBOL_LexprBinder = 156,              /* LexprBinder  */
  YYSYMBOL_Binders = 157,                  /* Binders  */
  YYSYMBOL_TypeSpecOFTYPENAME = 158,       /* TypeSpecOFTYPENAME  */
  YYSYMBOL_BindersReentrance = 159,        /* BindersReentrance  */
  YYSYMBOL_ListBindersReentrance = 160,    /* ListBindersReentrance  */
  YYSYMBOL_VarSpec = 161,                  /* VarSpec  */
  YYSYMBOL_Stars = 162,                    /* Stars  */
  YYSYMBOL_ListStars = 163,                /* ListStars  */
  YYSYMBOL_VarSpec1 = 164,                 /* VarSpec1  */
  YYSYMBOL_ArraySize = 165,                /* ArraySize  */
  YYSYMBOL_Lexpr3 = 166,                   /* Lexpr3  */
  YYSYMBOL_OptLabel1 = 167,                /* OptLabel1  */
  YYSYMBOL_OptLabel2 = 168,                /* OptLabel2  */
  YYSYMBOL_OptLabelList = 169,             /* OptLabelList  */
  YYSYMBOL_LabelName = 170,                /* LabelName  */
  YYSYMBOL_ListLabelName = 171,            /* ListLabelName  */
  YYSYMBOL_Range = 172,                    /* Range  */
  YYSYMBOL_LexprOption = 173,              /* LexprOption  */
  YYSYMBOL_AnyIdentifier = 174,            /* AnyIdentifier  */
  YYSYMBOL_PostCond = 175,                 /* PostCond  */
  YYSYMBOL_FullIdentifier = 176,           /* FullIdentifier  */
  YYSYMBOL_Identifier = 177,               /* Identifier  */
  YYSYMBOL_TypeSpecSimple = 178,           /* TypeSpecSimple  */
  YYSYMBOL_LogicPTreeAnnot = 179,          /* LogicPTreeAnnot  */
  YYSYMBOL_Annotation = 180,               /* Annotation  */
  YYSYMBOL_LoopAnnotStack = 181,           /* LoopAnnotStack  */
  YYSYMBOL_LoopAnnotOpt = 182,             /* LoopAnnotOpt  */
  YYSYMBOL_LoopInvariant = 183,            /* LoopInvariant  */
  YYSYMBOL_LoopAllocation = 184,           /* LoopAllocation  */
  YYSYMBOL_Allocation = 185,               /* Allocation  */
  YYSYMBOL_LoopVariant = 186,              /* LoopVariant  */
  YYSYMBOL_LoopEffects = 187,              /* LoopEffects  */
  YYSYMBOL_Variant = 188                   /* Variant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 109 "partial_bnfc_acsl_parser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, partial_bnfc_acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 339 "Parser.C"


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
#define YYFINAL  121
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1007

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  430

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   388


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   313,   313,   314,   316,   318,   320,   321,   322,   323,
     325,   326,   328,   329,   330,   332,   334,   336,   337,   339,
     340,   342,   343,   345,   346,   348,   350,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     366,   367,   369,   370,   372,   374,   375,   377,   378,   379,
     380,   381,   382,   384,   385,   386,   388,   389,   390,   392,
     394,   395,   397,   398,   400,   401,   403,   404,   406,   408,
     409,   411,   412,   413,   415,   416,   417,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   468,   470,   472,   473,   475,
     477,   478,   480,   482,   483,   485,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   547,   548,   549,   550,   551,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   587,
     589,   591,   592,   593,   594,   596,   597,   599,   600,   601,
     603,   605,   606,   608,   610,   612,   613
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
  "_BANGEQ", "_PERCENT", "_AMP", "_DAMP", "_LPAREN", "_RPAREN", "_STAR",
  "_PLUS", "_COMMA", "_MINUS", "_SYMB_11", "_DDOT", "_SLASH", "_COLON",
  "_SEMI", "_LT", "_SYMB_12", "_LDARROW", "_SYMB_4", "_DEQ", "_SYMB_3",
  "_GT", "_GTEQ", "_QUESTION", "_LBRACK", "_SYMB_46", "_SYMB_48",
  "_SYMB_61", "_SYMB_49", "_SYMB_43", "_SYMB_44", "_SYMB_41", "_SYMB_50",
  "_SYMB_25", "_SYMB_33", "_SYMB_24", "_SYMB_47", "_SYMB_42", "_SYMB_1",
  "_SYMB_13", "_SYMB_40", "_SYMB_26", "_SYMB_2", "_SYMB_54", "_SYMB_34",
  "_SYMB_45", "_SYMB_60", "_SYMB_64", "_SYMB_51", "_SYMB_62", "_SYMB_63",
  "_SYMB_52", "_SYMB_32", "_SYMB_53", "_SYMB_35", "_SYMB_37", "_SYMB_38",
  "_SYMB_39", "_SYMB_36", "_RBRACK", "_CARET", "_DCARET", "_SYMB_68",
  "_KW_admit", "_KW_allocates", "_KW_assert", "_KW_assigns", "_KW_assumes",
  "_KW_at", "_KW_axiom", "_KW_axiomatic", "_KW_behavior", "_KW_behaviors",
  "_KW_boolean", "_KW_breaks", "_KW_char", "_KW_check", "_KW_complete",
  "_KW_continues", "_KW_contract", "_KW_decreases", "_KW_disjoint",
  "_KW_double", "_KW_ensures", "_KW_exits", "_KW_float", "_KW_for",
  "_KW_frees", "_KW_function", "_KW_global", "_KW_impact", "_KW_include",
  "_KW_inductive", "_KW_int", "_KW_integer", "_KW_invariant", "_KW_label",
  "_KW_lemma", "_KW_let", "_KW_logic", "_KW_long", "_KW_loop", "_KW_model",
  "_KW_module", "_KW_pragma", "_KW_predicate", "_KW_reads", "_KW_real",
  "_KW_requires", "_KW_returns", "_KW_short", "_KW_signed", "_KW_sizeof",
  "_KW_slice", "_KW_terminates", "_KW_type", "_KW_unsigned", "_KW_variant",
  "_KW_void", "_KW_writes", "_LBRACE", "_BAR", "_DBAR", "_RBRACE",
  "_TILDE", "_STRING_", "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept",
  "Program", "Annot", "Code_Annot", "Contract", "Requires", "NERequires",
  "Terminates", "Decreases", "SimpleClauses", "NESimpleClauses", "Assigns",
  "Zones", "Behaviors", "CompleteOrDisjoint", "Lexpr", "ListLexpr",
  "Lexpr1", "LexprRelInner", "ListLexprRelInner", "Relation", "Lexpr2",
  "LexprBinder", "Binders", "TypeSpecOFTYPENAME", "BindersReentrance",
  "ListBindersReentrance", "VarSpec", "Stars", "ListStars", "VarSpec1",
  "ArraySize", "Lexpr3", "OptLabel1", "OptLabel2", "OptLabelList",
  "LabelName", "ListLabelName", "Range", "LexprOption", "AnyIdentifier",
  "PostCond", "FullIdentifier", "Identifier", "TypeSpecSimple",
  "LogicPTreeAnnot", "Annotation", "LoopAnnotStack", "LoopAnnotOpt",
  "LoopInvariant", "LoopAllocation", "Allocation", "LoopVariant",
  "LoopEffects", "Variant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-400)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-192)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -50,   -44,   168,   -16,   509,    16,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,     2,     2,     2,     2,   -90,   509,
     -67,   509,   379,   379,   379,   509,   509,    66,   227,   623,
     509,   623,   623,   623,   -15,   -15,   122,  -400,   -15,   -15,
     -15,  -400,   -26,  -400,   -26,   -15,   -15,   -15,   -26,  -400,
     -15,   -15,   141,  -400,  -400,  -400,   228,  -400,  -400,  -400,
     -15,   239,   -15,   -15,   -15,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,   241,  -400,  -400,  -400,  -400,  -400,   623,
    -400,  -400,  -400,  -400,    21,    22,  -400,  -400,   266,   242,
    -400,  -400,  -400,    68,   115,  -400,  -400,  -400,  -400,  -400,
     509,    86,   509,   111,  -400,  -400,    37,  -400,   235,  -400,
     233,  -400,   189,   -23,   260,  -400,  -400,   126,    -3,   275,
     271,   126,   126,   126,   -53,   280,  -400,   285,   509,   287,
     292,   293,  -400,  -400,  -400,  -400,  -400,  -400,  -400,   -59,
    -400,   206,   -38,    18,  -400,  -400,   284,   808,  -400,   286,
     297,   298,  -400,   300,   291,   302,   303,   509,   509,   305,
     509,   316,   318,   325,   509,   126,   -54,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   623,
     623,   623,   623,   623,   509,   165,   509,    32,   224,   -54,
     225,   -54,   509,  -400,   379,  -400,   -53,  -400,  -400,  -400,
     509,   324,   234,  -400,  -400,   509,   509,   134,   509,   509,
     509,  -400,  -400,   240,  -400,  -400,  -400,   177,   248,  -400,
    -400,   186,   254,   509,   808,  -400,  -400,   334,   247,   335,
    -400,   509,   509,   509,   509,   509,   509,   509,    10,   353,
     509,    65,   509,   509,   509,    71,   255,   257,  -400,    -9,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   126,   126,   126,   126,   126,   -20,   309,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,   509,   364,    13,   379,  -400,
      46,  -400,  -400,  -400,  -400,  -400,   -62,   509,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,   344,  -400,   -53,  -400,    81,
      94,   -53,   108,   114,   131,  -400,  -400,   277,  -400,  -400,
     278,  -400,   344,   367,   365,  -400,   335,   874,   344,   156,
     139,   197,   344,   199,   210,  -400,  -400,   212,  -400,   160,
     205,   213,  -400,   509,  -400,  -400,  -400,   815,  -400,  -400,
    -400,  -400,  -400,  -400,   360,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,   236,  -400,  -400,  -400,   371,  -400,
    -400,  -400,  -400,  -400,  -400,   692,  -400,  -400,   320,  -400,
    -400,   509,  -400,  -400,  -400,  -400,   509,   509,  -400,   344,
      32,  -400,    32,  -400,   132,   808,  -400,  -400,   214,   218,
     217,  -400,  -400,  -400,  -400,  -400,  -400,   509,   219,  -400
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,     0,     0,     0,     0,     0,     2,     4,     5,    15,
      11,     3,   229,   230,   235,   235,   235,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,     0,     0,   127,   127,     0,    94,   127,   127,
     127,    95,     0,    78,     0,   127,   127,   127,     0,    99,
     127,   127,     0,   122,    96,   118,     0,    97,    77,    98,
     127,     0,   127,   127,   127,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   192,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   175,   174,
     176,   193,   177,   178,   179,   180,   181,   182,   183,   184,
     194,   185,   186,     0,   187,   188,   189,   190,   195,     0,
     102,   100,   101,   191,     0,    39,    42,    54,    53,   121,
     151,     1,    16,     0,     0,   236,   231,   233,   234,   232,
       0,     0,     0,     0,    24,   241,    40,    23,     0,    21,
      23,   242,     0,   246,     0,   240,    55,   114,   134,     0,
       0,   113,   111,   110,     0,     0,   125,     0,     0,     0,
       0,     0,   200,   198,   201,   227,   226,   204,   196,   214,
     197,   208,     0,   207,   199,    60,     0,     0,    61,     0,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   133,     0,     0,    17,     0,    10,
       0,    10,     0,   244,     0,   237,     0,   243,   123,   124,
     133,   130,     0,   129,   135,     0,     0,     0,     0,     0,
       0,   228,   218,   220,   211,   202,   205,   215,   209,   203,
     206,   216,   210,     0,     0,    68,    64,    69,     0,    66,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      32,    30,    35,    36,    28,    27,    37,    34,    31,    33,
      29,   107,   105,   103,   104,   106,   134,     0,    52,    47,
      49,    51,    48,    50,    46,     0,     0,     0,     0,   138,
       0,   139,   136,   137,   140,    25,    18,     0,   239,    14,
     238,    13,    41,    22,   245,   134,   132,     0,   128,     0,
       0,     0,     0,     0,     0,   223,   217,   221,   212,   219,
     222,   213,    57,     0,    59,    70,    67,    76,    56,     0,
       0,     0,    58,     0,     0,   116,   119,     0,    82,     0,
       0,     0,   115,     0,   109,   108,    43,    53,   120,   148,
     149,   146,   147,   150,     0,   143,   144,   141,   142,   145,
      26,     9,     7,     8,     0,   131,    91,    93,     0,    88,
      89,    86,   224,   225,    73,     0,    65,    74,     0,    75,
      92,     0,    85,    79,    90,    80,     0,     0,    81,    38,
      17,     6,    17,   117,    60,     0,    63,    72,     0,     0,
       0,    20,    18,    19,    62,    87,    83,     0,     0,    84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -400,  -400,  -400,  -400,  -400,  -102,  -400,  -400,  -400,  -399,
     170,    74,   -18,  -400,  -400,    -4,   -11,  -400,  -400,  -400,
    -400,    80,   361,   128,    -1,  -400,  -400,  -251,  -400,   135,
     137,  -400,     3,   118,  -400,   350,    67,    72,   187,   174,
     179,  -400,  -176,  -152,  -400,  -400,  -400,   400,   283,  -400,
    -400,  -400,  -400,  -400,  -400
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,     7,     8,     9,    10,   122,   217,   315,
     422,   138,   139,   380,   411,   136,   137,   115,   304,   215,
     305,   116,   117,   176,   177,   396,   344,   256,   257,   258,
     259,   398,   118,   155,   181,   156,   231,   232,   149,   150,
     233,   317,   119,   120,   178,    11,    12,   125,   126,    14,
      15,    27,    16,    17,   144
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,   260,   234,   343,   135,   197,   141,   228,   197,   363,
     130,   421,   140,   423,   276,   131,   121,   133,     1,   197,
     355,   142,   143,   381,    74,   197,   148,   277,   241,   198,
     199,     2,   147,   132,   151,   152,   153,   200,   197,   242,
     196,   162,   245,   201,   364,   202,   243,   203,    91,   197,
     222,   382,   163,    22,   164,    23,     3,   383,   100,     4,
     246,   165,    18,     4,   166,   197,   204,   247,   226,    19,
     123,   108,   167,   168,   234,   358,    24,   248,   260,   169,
     113,   362,   260,   124,    25,   145,   170,   205,   206,   171,
     172,   386,   369,   197,   278,   173,   370,   174,   249,   197,
     307,   371,   372,   308,   387,   219,    26,   175,     3,   197,
     154,   309,   195,   310,   197,   311,   250,   319,   389,   321,
     312,   313,   197,   251,   390,   375,   218,   373,   220,   376,
     221,   158,   209,   252,   377,   378,   197,   210,   211,   197,
     212,   391,   197,   213,   416,  -191,   314,   331,   207,   208,
     187,  -191,   401,   157,   237,   214,   159,   160,   161,   197,
     379,  -191,   197,   180,   424,   183,   400,   197,   185,   186,
     298,   399,   179,   406,    18,   234,   184,   269,   189,   234,
     191,   192,   193,   268,   197,   299,   271,   300,   197,   301,
     275,   302,   303,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   306,   323,   402,   225,   403,
     296,   322,   291,   292,   293,   294,   295,   197,   407,   260,
     404,    20,   405,   408,   425,   197,   325,   197,   426,   429,
     427,   329,   330,   197,   332,   333,   334,   188,   197,   260,
     197,   197,   197,   318,   320,   197,   197,   197,   190,   342,
     194,   216,   197,   197,   223,   412,   254,   348,   349,   350,
     351,   352,   353,   354,   197,    42,   357,    44,   359,   360,
     361,   -45,   209,    48,    20,   336,   224,   210,   211,   227,
     212,    21,   337,   213,   339,   229,   -45,   230,   -45,   235,
     -45,   340,   -45,   -45,   236,   214,   238,   140,   127,   128,
     129,   239,   240,   253,   244,   261,   262,   263,   367,   264,
     265,   266,   267,   384,   270,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   272,    75,   273,    76,    77,
      78,    79,    80,    81,   274,    82,    83,   327,   335,    84,
      85,    86,    87,    88,    89,   255,   338,    90,    91,    92,
      93,    94,   341,    95,    96,    97,    98,    99,   100,   409,
     101,   102,   328,   356,   347,   104,   105,   106,    19,   107,
      21,   108,   197,   365,   368,   392,   393,   394,   395,   410,
     113,   413,   374,    28,   417,   366,    29,   316,    30,   146,
      31,    32,   345,    33,   415,   346,   182,   418,   388,   385,
      13,   297,   419,   420,   326,   324,     0,     0,     0,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     0,   428,    47,    48,   134,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     0,    75,     0,
      76,    77,    78,    79,    80,    81,     0,    82,    83,     0,
       0,    84,    85,    86,    87,    88,    89,     0,     0,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    98,    99,
     100,     0,   101,   102,     0,     0,   103,   104,   105,   106,
       0,   107,     0,   108,     0,     0,     0,     0,   109,   110,
     111,   112,   113,    28,     0,     0,    29,     0,    30,     0,
      31,    32,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     0,     0,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     0,    75,     0,
      76,    77,    78,    79,    80,    81,     0,    82,    83,     0,
       0,    84,    85,    86,    87,    88,    89,     0,     0,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    98,    99,
     100,     0,   101,   102,     0,     0,   103,   104,   105,   106,
      29,   107,    30,   108,    31,    32,     0,    33,   109,   110,
     111,   112,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    40,
      41,     0,    43,     0,    45,    46,     0,     0,    47,     0,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,   254,    75,   255,    76,    77,    78,    79,    80,    81,
       0,    82,    83,     0,     0,    84,    85,    86,    87,    88,
      89,     0,     0,    90,    91,    92,    93,    94,     0,    95,
      96,    97,    98,    99,   100,     0,   101,   102,     0,     0,
     103,   104,   105,   106,     0,   107,     0,   108,     0,     0,
       0,     0,   109,   110,   111,   112,   113,     0,     0,   162,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
     163,    75,   164,    76,    77,    78,    79,    80,    81,   165,
      82,    83,   166,     0,    84,    85,    86,    87,    88,    89,
     167,   168,    90,    91,    92,    93,    94,   169,    95,    96,
      97,    98,    99,   100,   170,   101,   102,   171,   172,     0,
     104,   105,   106,   173,   107,   174,   108,   254,     0,   255,
     -44,   209,     0,     0,     0,   414,   210,   211,     0,   212,
       0,     0,   213,     0,     0,   -44,     0,   -44,     0,   -44,
       0,   -44,   -44,     0,   214,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,     0,    76,
      77,    78,    79,    80,    81,     0,    82,    83,     0,     0,
      84,    85,    86,    87,    88,    89,     0,     0,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    98,    99,   100,
       0,   101,   102,     0,     0,     0,   104,   105,   106,     0,
     107,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,   113,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     0,    75,     0,    76,    77,    78,    79,    80,
      81,     0,    82,    83,     0,     0,    84,    85,    86,    87,
      88,    89,     0,     0,    90,    91,    92,    93,    94,     0,
      95,    96,    97,    98,    99,   100,     0,   101,   102,     0,
       0,     0,   104,   105,   106,     0,   107,     0,   108,     0,
       0,     0,     0,     0,     0,   397,     0,   113
};

static const yytype_int16 yycheck[] =
{
       4,   177,   154,   254,    22,    28,    24,    10,    28,    18,
     100,   410,    23,   412,    68,    19,     0,    21,    68,    28,
      10,    25,    26,    85,    77,    28,    30,    81,    87,     7,
       8,    81,    29,   100,    31,    32,    33,    15,    28,    98,
      19,    67,    80,    21,    64,    23,   105,    25,   101,    28,
      13,   113,    78,    69,    80,    71,   106,   119,   111,   113,
      98,    87,   106,   113,    90,    28,    44,   105,    91,   113,
      68,   124,    98,    99,   226,    10,    92,   115,   254,   105,
     133,    10,   258,    81,   100,    19,   112,    65,    66,   115,
     116,    10,    79,    28,   196,   121,    83,   123,    80,    28,
      68,    88,    89,    71,    10,    19,   122,   133,   106,    28,
     125,    79,   109,    81,    28,    83,    98,   219,    10,   221,
      88,    89,    28,   105,    10,    79,   130,   114,   132,    83,
      19,     9,     6,   115,    88,    89,    28,    11,    12,    28,
      14,    10,    28,    17,   395,    13,   114,    13,   126,   127,
       9,    19,    13,    35,   158,    29,    38,    39,    40,    28,
     114,    29,    28,    45,   415,    47,    10,    28,    50,    51,
       5,   347,    44,    13,   106,   327,    48,   188,    60,   331,
      62,    63,    64,   187,    28,    20,   190,    22,    28,    24,
     194,    26,    27,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   216,   224,    10,    19,    10,
     214,   222,   209,   210,   211,   212,   213,    28,    13,   395,
      10,   106,    10,    10,    10,    28,   230,    28,    10,    10,
      13,   235,   236,    28,   238,   239,   240,     9,    28,   415,
      28,    28,    28,    19,    19,    28,    28,    28,     9,   253,
       9,     9,    28,    28,    19,    19,     9,   261,   262,   263,
     264,   265,   266,   267,    28,    38,   270,    40,   272,   273,
     274,     5,     6,    46,   106,    98,    43,    11,    12,    19,
      14,   113,   105,    17,    98,    10,    20,    16,    22,     9,
      24,   105,    26,    27,     9,    29,     9,   308,    15,    16,
      17,     9,     9,    19,    98,    19,     9,     9,   305,     9,
      19,     9,     9,   317,     9,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     9,    79,     9,    81,    82,
      83,    84,    85,    86,     9,    88,    89,    13,    98,    92,
      93,    94,    95,    96,    97,    11,    98,   100,   101,   102,
     103,   104,    98,   106,   107,   108,   109,   110,   111,   363,
     113,   114,   128,    10,    29,   118,   119,   120,   113,   122,
     113,   124,    28,    64,    10,    98,    98,    10,    13,    19,
     133,    10,   308,     4,    64,   305,     7,   217,     9,    28,
      11,    12,   257,    14,   395,   258,    46,   401,   331,   327,
       0,   214,   406,   407,   230,   226,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,   427,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    -1,
      -1,    92,    93,    94,    95,    96,    97,    -1,    -1,   100,
     101,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,    -1,    -1,   117,   118,   119,   120,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,     4,    -1,    -1,     7,    -1,     9,    -1,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    79,    -1,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    -1,
      -1,    92,    93,    94,    95,    96,    97,    -1,    -1,   100,
     101,   102,   103,   104,    -1,   106,   107,   108,   109,   110,
     111,    -1,   113,   114,    -1,    -1,   117,   118,   119,   120,
       7,   122,     9,   124,    11,    12,    -1,    14,   129,   130,
     131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,    42,    -1,    -1,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     9,    79,    11,    81,    82,    83,    84,    85,    86,
      -1,    88,    89,    -1,    -1,    92,    93,    94,    95,    96,
      97,    -1,    -1,   100,   101,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,   111,    -1,   113,   114,    -1,    -1,
     117,   118,   119,   120,    -1,   122,    -1,   124,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,   133,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,   122,   123,   124,     9,    -1,    11,
       5,     6,    -1,    -1,    -1,   133,    11,    12,    -1,    14,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    79,    -1,    81,
      82,    83,    84,    85,    86,    -1,    88,    89,    -1,    -1,
      92,    93,    94,    95,    96,    97,    -1,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,   111,
      -1,   113,   114,    -1,    -1,    -1,   118,   119,   120,    -1,
     122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
      86,    -1,    88,    89,    -1,    -1,    92,    93,    94,    95,
      96,    97,    -1,    -1,   100,   101,   102,   103,   104,    -1,
     106,   107,   108,   109,   110,   111,    -1,   113,   114,    -1,
      -1,    -1,   118,   119,   120,    -1,   122,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,   133
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    68,    81,   106,   113,   135,   136,   137,   138,   139,
     140,   179,   180,   181,   183,   184,   186,   187,   106,   113,
     106,   113,    69,    71,    92,   100,   122,   185,     4,     7,
       9,    11,    12,    14,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    45,    46,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    79,    81,    82,    83,    84,
      85,    86,    88,    89,    92,    93,    94,    95,    96,    97,
     100,   101,   102,   103,   104,   106,   107,   108,   109,   110,
     111,   113,   114,   117,   118,   119,   120,   122,   124,   129,
     130,   131,   132,   133,   149,   151,   155,   156,   166,   176,
     177,     0,   141,    68,    81,   181,   182,   182,   182,   182,
     100,   149,   100,   149,    47,   146,   149,   150,   145,   146,
     150,   146,   149,   149,   188,    19,   156,   166,   149,   172,
     173,   166,   166,   166,   125,   167,   169,   167,     9,   167,
     167,   167,    67,    78,    80,    87,    90,    98,    99,   105,
     112,   115,   116,   121,   123,   133,   157,   158,   178,   157,
     167,   168,   169,   167,   157,   167,   167,     9,     9,   167,
       9,   167,   167,   167,     9,   166,    19,    28,     7,     8,
      15,    21,    23,    25,    44,    65,    66,   126,   127,     6,
      11,    12,    14,    17,    29,   153,     9,   142,   149,    19,
     149,    19,    13,    19,    43,    19,    91,    19,    10,    10,
      16,   170,   171,   174,   177,     9,     9,   149,     9,     9,
       9,    87,    98,   105,    98,    80,    98,   105,   115,    80,
      98,   105,   115,    19,     9,    11,   161,   162,   163,   164,
     176,    19,     9,     9,     9,    19,     9,     9,   149,   150,
       9,   149,     9,     9,     9,   149,    68,    81,   139,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   166,   166,   166,   166,   166,   149,   172,     5,    20,
      22,    24,    26,    27,   152,   154,   150,    68,    71,    79,
      81,    83,    88,    89,   114,   143,   144,   175,    19,   139,
      19,   139,   150,   146,   174,   149,   173,    13,   128,   149,
     149,    13,   149,   149,   149,    98,    98,   105,    98,    98,
     105,    98,   149,   161,   160,   163,   164,    29,   149,   149,
     149,   149,   149,   149,   149,    10,    10,   149,    10,   149,
     149,   149,    10,    18,    64,    64,   155,   166,    10,    79,
      83,    88,    89,   114,   145,    79,    83,    88,    89,   114,
     147,    85,   113,   119,   149,   171,    10,    10,   170,    10,
      10,    10,    98,    98,    10,    13,   159,   131,   165,   176,
      10,    13,    10,    10,    10,    10,    13,    13,    10,   149,
      19,   148,    19,    10,   133,   158,   161,    64,   149,   149,
     149,   143,   144,   143,   161,    10,    10,    13,   149,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   134,   135,   135,   136,   137,   138,   138,   138,   138,
     139,   139,   140,   140,   140,   141,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   148,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     150,   150,   151,   151,   152,   153,   153,   154,   154,   154,
     154,   154,   154,   155,   155,   155,   156,   156,   156,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   163,
     163,   164,   164,   164,   165,   165,   165,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   168,   169,   169,   170,
     171,   171,   172,   173,   173,   174,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   177,   177,   177,   177,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   179,
     180,   181,   181,   181,   181,   182,   182,   183,   183,   183,
     184,   185,   185,   186,   187,   188,   188
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     6,     5,     5,     5,
       0,     1,     4,     5,     5,     0,     0,     0,     1,     4,
       4,     1,     3,     1,     1,     0,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     1,
       1,     3,     1,     4,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     4,     4,     3,
       1,     1,     3,     2,     0,     2,     1,     2,     1,     1,
       2,     1,     4,     3,     1,     1,     0,     1,     1,     5,
       5,     5,     4,     7,     9,     5,     5,     7,     5,     5,
       5,     5,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     4,     4,
       2,     2,     2,     2,     2,     4,     4,     6,     1,     4,
       4,     1,     1,     3,     3,     1,     1,     0,     3,     1,
       1,     3,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     1,     1,     2,
       2,     2,     3,     3,     1,     2,     2,     3,     2,     3,
       2,     3,     3,     3,     4,     4,     1,     1,     2,     1,
       1,     2,     2,     2,     2,     0,     1,     4,     5,     5,
       3,     2,     2,     4,     4,     3,     1
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
  case 2: /* Program: Annot  */
#line 313 "partial_bnfc_acsl_parser.y"
                { (yyval.program_) = new partial_bnfc_acsl::AnnotProgram((yyvsp[0].annot_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1863 "Parser.C"
    break;

  case 3: /* Program: LogicPTreeAnnot  */
#line 314 "partial_bnfc_acsl_parser.y"
                    { (yyval.program_) = new partial_bnfc_acsl::AnnotationProgram((yyvsp[0].logicptreeannot_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1869 "Parser.C"
    break;

  case 4: /* Annot: Code_Annot  */
#line 316 "partial_bnfc_acsl_parser.y"
                   { (yyval.annot_) = new partial_bnfc_acsl::CodeAnnot((yyvsp[0].code_annot_)); (yyval.annot_)->line_number = (yyloc).first_line; (yyval.annot_)->char_number = (yyloc).first_column; result->annot_ = (yyval.annot_); }
#line 1875 "Parser.C"
    break;

  case 5: /* Code_Annot: Contract  */
#line 318 "partial_bnfc_acsl_parser.y"
                      { (yyval.code_annot_) = new partial_bnfc_acsl::CodeAnnotContract((yyvsp[0].contract_)); (yyval.code_annot_)->line_number = (yyloc).first_line; (yyval.code_annot_)->char_number = (yyloc).first_column; result->code_annot_ = (yyval.code_annot_); }
#line 1881 "Parser.C"
    break;

  case 6: /* Contract: Requires Terminates Decreases SimpleClauses Behaviors CompleteOrDisjoint  */
#line 320 "partial_bnfc_acsl_parser.y"
                                                                                    { (yyval.contract_) = new partial_bnfc_acsl::SimpleContract((yyvsp[-5].requires_), (yyvsp[-4].terminates_), (yyvsp[-3].decreases_), (yyvsp[-2].simpleclauses_), (yyvsp[-1].behaviors_), (yyvsp[0].completeordisjoint_)); (yyval.contract_)->line_number = (yyloc).first_line; (yyval.contract_)->char_number = (yyloc).first_column; result->contract_ = (yyval.contract_); }
#line 1887 "Parser.C"
    break;

  case 7: /* Contract: Requires Terminates Decreases NESimpleClauses _KW_requires  */
#line 321 "partial_bnfc_acsl_parser.y"
                                                               { (yyval.contract_) = new partial_bnfc_acsl::ClausesRequiresContract((yyvsp[-4].requires_), (yyvsp[-3].terminates_), (yyvsp[-2].decreases_), (yyvsp[-1].nesimpleclauses_)); (yyval.contract_)->line_number = (yyloc).first_line; (yyval.contract_)->char_number = (yyloc).first_column; result->contract_ = (yyval.contract_); }
#line 1893 "Parser.C"
    break;

  case 8: /* Contract: Requires Terminates Decreases NESimpleClauses _KW_terminates  */
#line 322 "partial_bnfc_acsl_parser.y"
                                                                 { (yyval.contract_) = new partial_bnfc_acsl::ClausesTerminatesContract((yyvsp[-4].requires_), (yyvsp[-3].terminates_), (yyvsp[-2].decreases_), (yyvsp[-1].nesimpleclauses_)); (yyval.contract_)->line_number = (yyloc).first_line; (yyval.contract_)->char_number = (yyloc).first_column; result->contract_ = (yyval.contract_); }
#line 1899 "Parser.C"
    break;

  case 9: /* Contract: Requires Terminates Decreases NESimpleClauses _KW_decreases  */
#line 323 "partial_bnfc_acsl_parser.y"
                                                                { (yyval.contract_) = new partial_bnfc_acsl::ClausesDecreasesContract((yyvsp[-4].requires_), (yyvsp[-3].terminates_), (yyvsp[-2].decreases_), (yyvsp[-1].nesimpleclauses_)); (yyval.contract_)->line_number = (yyloc).first_line; (yyval.contract_)->char_number = (yyloc).first_column; result->contract_ = (yyval.contract_); }
#line 1905 "Parser.C"
    break;

  case 10: /* Requires: %empty  */
#line 325 "partial_bnfc_acsl_parser.y"
                       { (yyval.requires_) = new partial_bnfc_acsl::NoRequires(); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 1911 "Parser.C"
    break;

  case 11: /* Requires: NERequires  */
#line 326 "partial_bnfc_acsl_parser.y"
               { (yyval.requires_) = new partial_bnfc_acsl::SomeRequires((yyvsp[0].nerequires_)); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 1917 "Parser.C"
    break;

  case 12: /* NERequires: _KW_requires Lexpr _SEMI Requires  */
#line 328 "partial_bnfc_acsl_parser.y"
                                               { (yyval.nerequires_) = new partial_bnfc_acsl::SimpleRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1923 "Parser.C"
    break;

  case 13: /* NERequires: _KW_check _KW_requires Lexpr _SEMI Requires  */
#line 329 "partial_bnfc_acsl_parser.y"
                                                { (yyval.nerequires_) = new partial_bnfc_acsl::CheckRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1929 "Parser.C"
    break;

  case 14: /* NERequires: _KW_admit _KW_requires Lexpr _SEMI Requires  */
#line 330 "partial_bnfc_acsl_parser.y"
                                                { (yyval.nerequires_) = new partial_bnfc_acsl::AdimtRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1935 "Parser.C"
    break;

  case 15: /* Terminates: %empty  */
#line 332 "partial_bnfc_acsl_parser.y"
                         { (yyval.terminates_) = new partial_bnfc_acsl::NoTerminate(); (yyval.terminates_)->line_number = (yyloc).first_line; (yyval.terminates_)->char_number = (yyloc).first_column; result->terminates_ = (yyval.terminates_); }
#line 1941 "Parser.C"
    break;

  case 16: /* Decreases: %empty  */
#line 334 "partial_bnfc_acsl_parser.y"
                        { (yyval.decreases_) = new partial_bnfc_acsl::NoDecreases(); (yyval.decreases_)->line_number = (yyloc).first_line; (yyval.decreases_)->char_number = (yyloc).first_column; result->decreases_ = (yyval.decreases_); }
#line 1947 "Parser.C"
    break;

  case 17: /* SimpleClauses: %empty  */
#line 336 "partial_bnfc_acsl_parser.y"
                            { (yyval.simpleclauses_) = new partial_bnfc_acsl::NoSimpleClauses(); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 1953 "Parser.C"
    break;

  case 18: /* SimpleClauses: NESimpleClauses  */
#line 337 "partial_bnfc_acsl_parser.y"
                    { (yyval.simpleclauses_) = new partial_bnfc_acsl::SomeSimpleClauses((yyvsp[0].nesimpleclauses_)); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 1959 "Parser.C"
    break;

  case 19: /* NESimpleClauses: PostCond Lexpr _SEMI SimpleClauses  */
#line 339 "partial_bnfc_acsl_parser.y"
                                                     { (yyval.nesimpleclauses_) = new partial_bnfc_acsl::PostCondSimpleClauses((yyvsp[-3].postcond_), (yyvsp[-2].lexpr_), (yyvsp[0].simpleclauses_)); (yyval.nesimpleclauses_)->line_number = (yyloc).first_line; (yyval.nesimpleclauses_)->char_number = (yyloc).first_column; result->nesimpleclauses_ = (yyval.nesimpleclauses_); }
#line 1965 "Parser.C"
    break;

  case 20: /* NESimpleClauses: _KW_assigns Assigns _SEMI SimpleClauses  */
#line 340 "partial_bnfc_acsl_parser.y"
                                            { (yyval.nesimpleclauses_) = new partial_bnfc_acsl::AssignsSimpleClauses((yyvsp[-2].assigns_), (yyvsp[0].simpleclauses_)); (yyval.nesimpleclauses_)->line_number = (yyloc).first_line; (yyval.nesimpleclauses_)->char_number = (yyloc).first_column; result->nesimpleclauses_ = (yyval.nesimpleclauses_); }
#line 1971 "Parser.C"
    break;

  case 21: /* Assigns: Zones  */
#line 342 "partial_bnfc_acsl_parser.y"
                { (yyval.assigns_) = new partial_bnfc_acsl::AssignZone((yyvsp[0].zones_)); (yyval.assigns_)->line_number = (yyloc).first_line; (yyval.assigns_)->char_number = (yyloc).first_column; result->assigns_ = (yyval.assigns_); }
#line 1977 "Parser.C"
    break;

  case 22: /* Assigns: ListLexpr _SYMB_1 Zones  */
#line 343 "partial_bnfc_acsl_parser.y"
                            { std::reverse((yyvsp[-2].listlexpr_)->begin(),(yyvsp[-2].listlexpr_)->end()) ;(yyval.assigns_) = new partial_bnfc_acsl::AssignZoneFromZone((yyvsp[-2].listlexpr_), (yyvsp[0].zones_)); (yyval.assigns_)->line_number = (yyloc).first_line; (yyval.assigns_)->char_number = (yyloc).first_column; result->assigns_ = (yyval.assigns_); }
#line 1983 "Parser.C"
    break;

  case 23: /* Zones: ListLexpr  */
#line 345 "partial_bnfc_acsl_parser.y"
                  { std::reverse((yyvsp[0].listlexpr_)->begin(),(yyvsp[0].listlexpr_)->end()) ;(yyval.zones_) = new partial_bnfc_acsl::SomeZone((yyvsp[0].listlexpr_)); (yyval.zones_)->line_number = (yyloc).first_line; (yyval.zones_)->char_number = (yyloc).first_column; result->zones_ = (yyval.zones_); }
#line 1989 "Parser.C"
    break;

  case 24: /* Zones: _SYMB_2  */
#line 346 "partial_bnfc_acsl_parser.y"
            { (yyval.zones_) = new partial_bnfc_acsl::NoZone(); (yyval.zones_)->line_number = (yyloc).first_line; (yyval.zones_)->char_number = (yyloc).first_column; result->zones_ = (yyval.zones_); }
#line 1995 "Parser.C"
    break;

  case 25: /* Behaviors: %empty  */
#line 348 "partial_bnfc_acsl_parser.y"
                        { (yyval.behaviors_) = new partial_bnfc_acsl::NoBehaviors(); (yyval.behaviors_)->line_number = (yyloc).first_line; (yyval.behaviors_)->char_number = (yyloc).first_column; result->behaviors_ = (yyval.behaviors_); }
#line 2001 "Parser.C"
    break;

  case 26: /* CompleteOrDisjoint: %empty  */
#line 350 "partial_bnfc_acsl_parser.y"
                                 { (yyval.completeordisjoint_) = new partial_bnfc_acsl::NoComplDisj(); (yyval.completeordisjoint_)->line_number = (yyloc).first_line; (yyval.completeordisjoint_)->char_number = (yyloc).first_column; result->completeordisjoint_ = (yyval.completeordisjoint_); }
#line 2007 "Parser.C"
    break;

  case 27: /* Lexpr: Lexpr1 _SYMB_3 Lexpr  */
#line 352 "partial_bnfc_acsl_parser.y"
                             { (yyval.lexpr_) = new partial_bnfc_acsl::ImplLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2013 "Parser.C"
    break;

  case 28: /* Lexpr: Lexpr1 _SYMB_4 Lexpr  */
#line 353 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::IffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2019 "Parser.C"
    break;

  case 29: /* Lexpr: Lexpr1 _DBAR Lexpr  */
#line 354 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::OrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2025 "Parser.C"
    break;

  case 30: /* Lexpr: Lexpr1 _DAMP Lexpr  */
#line 355 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::AndLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2031 "Parser.C"
    break;

  case 31: /* Lexpr: Lexpr1 _DCARET Lexpr  */
#line 356 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::HatHatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2037 "Parser.C"
    break;

  case 32: /* Lexpr: Lexpr1 _AMP Lexpr  */
#line 357 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::AmpLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2043 "Parser.C"
    break;

  case 33: /* Lexpr: Lexpr1 _BAR Lexpr  */
#line 358 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::PipeLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2049 "Parser.C"
    break;

  case 34: /* Lexpr: Lexpr1 _CARET Lexpr  */
#line 359 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::HatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2055 "Parser.C"
    break;

  case 35: /* Lexpr: Lexpr1 _SYMB_11 Lexpr  */
#line 360 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = new partial_bnfc_acsl::BimpliesLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2061 "Parser.C"
    break;

  case 36: /* Lexpr: Lexpr1 _SYMB_12 Lexpr  */
#line 361 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = new partial_bnfc_acsl::BiffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2067 "Parser.C"
    break;

  case 37: /* Lexpr: Lexpr1 _SYMB_13 Lexpr  */
#line 362 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = new partial_bnfc_acsl::InLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2073 "Parser.C"
    break;

  case 38: /* Lexpr: Lexpr _QUESTION Lexpr _COLON Lexpr  */
#line 363 "partial_bnfc_acsl_parser.y"
                                       { (yyval.lexpr_) = new partial_bnfc_acsl::TernaryLexpr((yyvsp[-4].lexpr_), (yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2079 "Parser.C"
    break;

  case 39: /* Lexpr: Lexpr1  */
#line 364 "partial_bnfc_acsl_parser.y"
           { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2085 "Parser.C"
    break;

  case 40: /* ListLexpr: Lexpr  */
#line 366 "partial_bnfc_acsl_parser.y"
                  { (yyval.listlexpr_) = new partial_bnfc_acsl::ListLexpr(); (yyval.listlexpr_)->push_back((yyvsp[0].lexpr_)); result->listlexpr_ = (yyval.listlexpr_); }
#line 2091 "Parser.C"
    break;

  case 41: /* ListLexpr: Lexpr _COMMA ListLexpr  */
#line 367 "partial_bnfc_acsl_parser.y"
                           { (yyvsp[0].listlexpr_)->push_back((yyvsp[-2].lexpr_)); (yyval.listlexpr_) = (yyvsp[0].listlexpr_); result->listlexpr_ = (yyval.listlexpr_); }
#line 2097 "Parser.C"
    break;

  case 42: /* Lexpr1: Lexpr2  */
#line 369 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2103 "Parser.C"
    break;

  case 43: /* Lexpr1: Lexpr3 ListLexprRelInner Relation Lexpr2  */
#line 370 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::RelationLexpr((yyvsp[-3].lexpr_), (yyvsp[-2].listlexprrelinner_), (yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2109 "Parser.C"
    break;

  case 44: /* LexprRelInner: Relation Lexpr3  */
#line 372 "partial_bnfc_acsl_parser.y"
                                { (yyval.lexprrelinner_) = new partial_bnfc_acsl::RelInnerLexpr((yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexprrelinner_)->line_number = (yyloc).first_line; (yyval.lexprrelinner_)->char_number = (yyloc).first_column; result->lexprrelinner_ = (yyval.lexprrelinner_); }
#line 2115 "Parser.C"
    break;

  case 45: /* ListLexprRelInner: %empty  */
#line 374 "partial_bnfc_acsl_parser.y"
                                { (yyval.listlexprrelinner_) = new partial_bnfc_acsl::ListLexprRelInner(); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 2121 "Parser.C"
    break;

  case 46: /* ListLexprRelInner: ListLexprRelInner LexprRelInner  */
#line 375 "partial_bnfc_acsl_parser.y"
                                    { (yyvsp[-1].listlexprrelinner_)->push_back((yyvsp[0].lexprrelinner_)); (yyval.listlexprrelinner_) = (yyvsp[-1].listlexprrelinner_); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 2127 "Parser.C"
    break;

  case 47: /* Relation: _LT  */
#line 377 "partial_bnfc_acsl_parser.y"
               { (yyval.relation_) = new partial_bnfc_acsl::LessRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 2133 "Parser.C"
    break;

  case 48: /* Relation: _GT  */
#line 378 "partial_bnfc_acsl_parser.y"
        { (yyval.relation_) = new partial_bnfc_acsl::GreaterRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 2139 "Parser.C"
    break;

  case 49: /* Relation: _LDARROW  */
#line 379 "partial_bnfc_acsl_parser.y"
             { (yyval.relation_) = new partial_bnfc_acsl::LessEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 2145 "Parser.C"
    break;

  case 50: /* Relation: _GTEQ  */
#line 380 "partial_bnfc_acsl_parser.y"
          { (yyval.relation_) = new partial_bnfc_acsl::GreaterEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 2151 "Parser.C"
    break;

  case 51: /* Relation: _DEQ  */
#line 381 "partial_bnfc_acsl_parser.y"
         { (yyval.relation_) = new partial_bnfc_acsl::EqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 2157 "Parser.C"
    break;

  case 52: /* Relation: _BANGEQ  */
#line 382 "partial_bnfc_acsl_parser.y"
            { (yyval.relation_) = new partial_bnfc_acsl::NotEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 2163 "Parser.C"
    break;

  case 53: /* Lexpr2: Lexpr3  */
#line 384 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2169 "Parser.C"
    break;

  case 54: /* Lexpr2: LexprBinder  */
#line 385 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = new partial_bnfc_acsl::BinderLexpr((yyvsp[0].lexprbinder_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2175 "Parser.C"
    break;

  case 55: /* Lexpr2: _BANG LexprBinder  */
#line 386 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::NotBinderLexpr((yyvsp[0].lexprbinder_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2181 "Parser.C"
    break;

  case 56: /* LexprBinder: _SYMB_24 Binders _SEMI Lexpr  */
#line 388 "partial_bnfc_acsl_parser.y"
                                           { (yyval.lexprbinder_) = new partial_bnfc_acsl::ForallBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 2187 "Parser.C"
    break;

  case 57: /* LexprBinder: _SYMB_25 Binders _SEMI Lexpr  */
#line 389 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexprbinder_) = new partial_bnfc_acsl::ExistBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 2193 "Parser.C"
    break;

  case 58: /* LexprBinder: _SYMB_26 Binders _SEMI Lexpr  */
#line 390 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexprbinder_) = new partial_bnfc_acsl::LambdaBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 2199 "Parser.C"
    break;

  case 59: /* Binders: TypeSpecOFTYPENAME VarSpec ListBindersReentrance  */
#line 392 "partial_bnfc_acsl_parser.y"
                                                           { (yyval.binders_) = new partial_bnfc_acsl::TheBinders((yyvsp[-2].typespecoftypename_), (yyvsp[-1].varspec_), (yyvsp[0].listbindersreentrance_)); (yyval.binders_)->line_number = (yyloc).first_line; (yyval.binders_)->char_number = (yyloc).first_column; result->binders_ = (yyval.binders_); }
#line 2205 "Parser.C"
    break;

  case 60: /* TypeSpecOFTYPENAME: _IDENT_  */
#line 394 "partial_bnfc_acsl_parser.y"
                             { (yyval.typespecoftypename_) = new partial_bnfc_acsl::TypeSpecTYPENAME((yyvsp[0]._string)); (yyval.typespecoftypename_)->line_number = (yyloc).first_line; (yyval.typespecoftypename_)->char_number = (yyloc).first_column; result->typespecoftypename_ = (yyval.typespecoftypename_); }
#line 2211 "Parser.C"
    break;

  case 61: /* TypeSpecOFTYPENAME: TypeSpecSimple  */
#line 395 "partial_bnfc_acsl_parser.y"
                   { (yyval.typespecoftypename_) = new partial_bnfc_acsl::TypeSpecSimpleFromTypenameTypeSpec((yyvsp[0].typespecsimple_)); (yyval.typespecoftypename_)->line_number = (yyloc).first_line; (yyval.typespecoftypename_)->char_number = (yyloc).first_column; result->typespecoftypename_ = (yyval.typespecoftypename_); }
#line 2217 "Parser.C"
    break;

  case 62: /* BindersReentrance: _COMMA TypeSpecOFTYPENAME VarSpec  */
#line 397 "partial_bnfc_acsl_parser.y"
                                                      { (yyval.bindersreentrance_) = new partial_bnfc_acsl::BindersReentranceDeclSpec((yyvsp[-1].typespecoftypename_), (yyvsp[0].varspec_)); (yyval.bindersreentrance_)->line_number = (yyloc).first_line; (yyval.bindersreentrance_)->char_number = (yyloc).first_column; result->bindersreentrance_ = (yyval.bindersreentrance_); }
#line 2223 "Parser.C"
    break;

  case 63: /* BindersReentrance: _COMMA VarSpec  */
#line 398 "partial_bnfc_acsl_parser.y"
                   { (yyval.bindersreentrance_) = new partial_bnfc_acsl::BindersReentranceVarSpec((yyvsp[0].varspec_)); (yyval.bindersreentrance_)->line_number = (yyloc).first_line; (yyval.bindersreentrance_)->char_number = (yyloc).first_column; result->bindersreentrance_ = (yyval.bindersreentrance_); }
#line 2229 "Parser.C"
    break;

  case 64: /* ListBindersReentrance: %empty  */
#line 400 "partial_bnfc_acsl_parser.y"
                                    { (yyval.listbindersreentrance_) = new partial_bnfc_acsl::ListBindersReentrance(); result->listbindersreentrance_ = (yyval.listbindersreentrance_); }
#line 2235 "Parser.C"
    break;

  case 65: /* ListBindersReentrance: ListBindersReentrance BindersReentrance  */
#line 401 "partial_bnfc_acsl_parser.y"
                                            { (yyvsp[-1].listbindersreentrance_)->push_back((yyvsp[0].bindersreentrance_)); (yyval.listbindersreentrance_) = (yyvsp[-1].listbindersreentrance_); result->listbindersreentrance_ = (yyval.listbindersreentrance_); }
#line 2241 "Parser.C"
    break;

  case 66: /* VarSpec: VarSpec1  */
#line 403 "partial_bnfc_acsl_parser.y"
                   { (yyval.varspec_) = (yyvsp[0].varspec_); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 2247 "Parser.C"
    break;

  case 67: /* VarSpec: ListStars VarSpec1  */
#line 404 "partial_bnfc_acsl_parser.y"
                       { std::reverse((yyvsp[-1].liststars_)->begin(),(yyvsp[-1].liststars_)->end()) ;(yyval.varspec_) = new partial_bnfc_acsl::StartVarSpec((yyvsp[-1].liststars_), (yyvsp[0].varspec_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 2253 "Parser.C"
    break;

  case 68: /* Stars: _STAR  */
#line 406 "partial_bnfc_acsl_parser.y"
              { (yyval.stars_) = new partial_bnfc_acsl::Star(); (yyval.stars_)->line_number = (yyloc).first_line; (yyval.stars_)->char_number = (yyloc).first_column; result->stars_ = (yyval.stars_); }
#line 2259 "Parser.C"
    break;

  case 69: /* ListStars: Stars  */
#line 408 "partial_bnfc_acsl_parser.y"
                  { (yyval.liststars_) = new partial_bnfc_acsl::ListStars(); (yyval.liststars_)->push_back((yyvsp[0].stars_)); result->liststars_ = (yyval.liststars_); }
#line 2265 "Parser.C"
    break;

  case 70: /* ListStars: Stars ListStars  */
#line 409 "partial_bnfc_acsl_parser.y"
                    { (yyvsp[0].liststars_)->push_back((yyvsp[-1].stars_)); (yyval.liststars_) = (yyvsp[0].liststars_); result->liststars_ = (yyval.liststars_); }
#line 2271 "Parser.C"
    break;

  case 71: /* VarSpec1: FullIdentifier  */
#line 411 "partial_bnfc_acsl_parser.y"
                          { (yyval.varspec_) = new partial_bnfc_acsl::SimpleSpec((yyvsp[0].fullidentifier_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 2277 "Parser.C"
    break;

  case 72: /* VarSpec1: VarSpec1 _LBRACK ArraySize _RBRACK  */
#line 412 "partial_bnfc_acsl_parser.y"
                                       { (yyval.varspec_) = new partial_bnfc_acsl::ArraySpec((yyvsp[-3].varspec_), (yyvsp[-1].arraysize_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 2283 "Parser.C"
    break;

  case 73: /* VarSpec1: _LPAREN VarSpec _RPAREN  */
#line 413 "partial_bnfc_acsl_parser.y"
                            { (yyval.varspec_) = (yyvsp[-1].varspec_); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 2289 "Parser.C"
    break;

  case 74: /* ArraySize: _INTEGER_  */
#line 415 "partial_bnfc_acsl_parser.y"
                      { (yyval.arraysize_) = new partial_bnfc_acsl::IntConstArraySize((yyvsp[0]._int)); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 2295 "Parser.C"
    break;

  case 75: /* ArraySize: FullIdentifier  */
#line 416 "partial_bnfc_acsl_parser.y"
                   { (yyval.arraysize_) = new partial_bnfc_acsl::SomeArraySize((yyvsp[0].fullidentifier_)); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 2301 "Parser.C"
    break;

  case 76: /* ArraySize: %empty  */
#line 417 "partial_bnfc_acsl_parser.y"
                { (yyval.arraysize_) = new partial_bnfc_acsl::NoSize(); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 2307 "Parser.C"
    break;

  case 77: /* Lexpr3: _SYMB_32  */
#line 419 "partial_bnfc_acsl_parser.y"
                  { (yyval.lexpr_) = new partial_bnfc_acsl::TrueLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2313 "Parser.C"
    break;

  case 78: /* Lexpr3: _SYMB_33  */
#line 420 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::FalseLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2319 "Parser.C"
    break;

  case 79: /* Lexpr3: _SYMB_34 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 421 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::PointerLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2325 "Parser.C"
    break;

  case 80: /* Lexpr3: _SYMB_35 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 422 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::ValidLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2331 "Parser.C"
    break;

  case 81: /* Lexpr3: _SYMB_36 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 423 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::ValidReadLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2337 "Parser.C"
    break;

  case 82: /* Lexpr3: _SYMB_37 _LPAREN Lexpr _RPAREN  */
#line 424 "partial_bnfc_acsl_parser.y"
                                   { (yyval.lexpr_) = new partial_bnfc_acsl::ValidFuncLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2343 "Parser.C"
    break;

  case 83: /* Lexpr3: _SYMB_38 OptLabel1 _LPAREN Lexpr _COMMA Lexpr _RPAREN  */
#line 425 "partial_bnfc_acsl_parser.y"
                                                          { (yyval.lexpr_) = new partial_bnfc_acsl::ValidIndxLexpr((yyvsp[-5].optlabel_), (yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2349 "Parser.C"
    break;

  case 84: /* Lexpr3: _SYMB_39 OptLabel1 _LPAREN Lexpr _COMMA Lexpr _COMMA Lexpr _RPAREN  */
#line 426 "partial_bnfc_acsl_parser.y"
                                                                       { (yyval.lexpr_) = new partial_bnfc_acsl::ValidRangeLexpr((yyvsp[-7].optlabel_), (yyvsp[-5].lexpr_), (yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2355 "Parser.C"
    break;

  case 85: /* Lexpr3: _SYMB_40 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 427 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::InitializedLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2361 "Parser.C"
    break;

  case 86: /* Lexpr3: _SYMB_41 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 428 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::DanglingLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2367 "Parser.C"
    break;

  case 87: /* Lexpr3: _SYMB_42 OptLabel2 _LPAREN Lexpr _COMMA Lexpr _RPAREN  */
#line 429 "partial_bnfc_acsl_parser.y"
                                                          { (yyval.lexpr_) = new partial_bnfc_acsl::FreshLexpr((yyvsp[-5].optlabel_), (yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2373 "Parser.C"
    break;

  case 88: /* Lexpr3: _SYMB_43 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 430 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::BaseAddrLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2379 "Parser.C"
    break;

  case 89: /* Lexpr3: _SYMB_44 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 431 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::BlockLengthLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2385 "Parser.C"
    break;

  case 90: /* Lexpr3: _SYMB_45 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 432 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::OffsetLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2391 "Parser.C"
    break;

  case 91: /* Lexpr3: _SYMB_46 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 433 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::AllocableLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2397 "Parser.C"
    break;

  case 92: /* Lexpr3: _SYMB_47 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 434 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::FreeableLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2403 "Parser.C"
    break;

  case 93: /* Lexpr3: _SYMB_48 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 435 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::AllocationLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2409 "Parser.C"
    break;

  case 94: /* Lexpr3: _SYMB_49  */
#line 436 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::AutomaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2415 "Parser.C"
    break;

  case 95: /* Lexpr3: _SYMB_50  */
#line 437 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::DynamicLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2421 "Parser.C"
    break;

  case 96: /* Lexpr3: _SYMB_51  */
#line 438 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::RegisterLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2427 "Parser.C"
    break;

  case 97: /* Lexpr3: _SYMB_52  */
#line 439 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::StaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2433 "Parser.C"
    break;

  case 98: /* Lexpr3: _SYMB_53  */
#line 440 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::UnallocatedLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2439 "Parser.C"
    break;

  case 99: /* Lexpr3: _SYMB_54  */
#line 441 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::NullLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2445 "Parser.C"
    break;

  case 100: /* Lexpr3: _INTEGER_  */
#line 442 "partial_bnfc_acsl_parser.y"
              { (yyval.lexpr_) = new partial_bnfc_acsl::LexprIntConst((yyvsp[0]._int)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2451 "Parser.C"
    break;

  case 101: /* Lexpr3: _DOUBLE_  */
#line 443 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::LexprFloatConst((yyvsp[0]._double)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2457 "Parser.C"
    break;

  case 102: /* Lexpr3: _STRING_  */
#line 444 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::LexprStringConst((yyvsp[0]._string)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2463 "Parser.C"
    break;

  case 103: /* Lexpr3: Lexpr3 _PLUS Lexpr3  */
#line 445 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::AddLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2469 "Parser.C"
    break;

  case 104: /* Lexpr3: Lexpr3 _MINUS Lexpr3  */
#line 446 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::SubtrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2475 "Parser.C"
    break;

  case 105: /* Lexpr3: Lexpr3 _STAR Lexpr3  */
#line 447 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::MultLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2481 "Parser.C"
    break;

  case 106: /* Lexpr3: Lexpr3 _SLASH Lexpr3  */
#line 448 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::DivLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2487 "Parser.C"
    break;

  case 107: /* Lexpr3: Lexpr3 _PERCENT Lexpr3  */
#line 449 "partial_bnfc_acsl_parser.y"
                           { (yyval.lexpr_) = new partial_bnfc_acsl::ModLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2493 "Parser.C"
    break;

  case 108: /* Lexpr3: Lexpr3 _LBRACK Range _RBRACK  */
#line 450 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexpr_) = new partial_bnfc_acsl::SquaresRangeLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].range_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2499 "Parser.C"
    break;

  case 109: /* Lexpr3: Lexpr3 _LBRACK Lexpr _RBRACK  */
#line 451 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexpr_) = new partial_bnfc_acsl::SquaresLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2505 "Parser.C"
    break;

  case 110: /* Lexpr3: _MINUS Lexpr3  */
#line 452 "partial_bnfc_acsl_parser.y"
                  { (yyval.lexpr_) = new partial_bnfc_acsl::MinusLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2511 "Parser.C"
    break;

  case 111: /* Lexpr3: _PLUS Lexpr3  */
#line 453 "partial_bnfc_acsl_parser.y"
                 { (yyval.lexpr_) = new partial_bnfc_acsl::PlusLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2517 "Parser.C"
    break;

  case 112: /* Lexpr3: _TILDE Lexpr3  */
#line 454 "partial_bnfc_acsl_parser.y"
                  { (yyval.lexpr_) = new partial_bnfc_acsl::TildeLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2523 "Parser.C"
    break;

  case 113: /* Lexpr3: _STAR Lexpr3  */
#line 455 "partial_bnfc_acsl_parser.y"
                 { (yyval.lexpr_) = new partial_bnfc_acsl::StarLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2529 "Parser.C"
    break;

  case 114: /* Lexpr3: _AMP Lexpr3  */
#line 456 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = new partial_bnfc_acsl::AmpUnaryLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2535 "Parser.C"
    break;

  case 115: /* Lexpr3: _KW_sizeof _LPAREN Lexpr _RPAREN  */
#line 457 "partial_bnfc_acsl_parser.y"
                                     { (yyval.lexpr_) = new partial_bnfc_acsl::SizeOfLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2541 "Parser.C"
    break;

  case 116: /* Lexpr3: _SYMB_60 _LPAREN Lexpr _RPAREN  */
#line 458 "partial_bnfc_acsl_parser.y"
                                   { (yyval.lexpr_) = new partial_bnfc_acsl::OldLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2547 "Parser.C"
    break;

  case 117: /* Lexpr3: _SYMB_61 _LPAREN Lexpr _COMMA LabelName _RPAREN  */
#line 459 "partial_bnfc_acsl_parser.y"
                                                    { (yyval.lexpr_) = new partial_bnfc_acsl::AtLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].labelname_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2553 "Parser.C"
    break;

  case 118: /* Lexpr3: _SYMB_62  */
#line 460 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::ResultLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2559 "Parser.C"
    break;

  case 119: /* Lexpr3: _SYMB_63 _LPAREN ListLexpr _RPAREN  */
#line 461 "partial_bnfc_acsl_parser.y"
                                       { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new partial_bnfc_acsl::SeparatedLexpr((yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2565 "Parser.C"
    break;

  case 120: /* Lexpr3: FullIdentifier _LPAREN ListLexpr _RPAREN  */
#line 462 "partial_bnfc_acsl_parser.y"
                                             { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new partial_bnfc_acsl::FullIdParenLexpr((yyvsp[-3].fullidentifier_), (yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2571 "Parser.C"
    break;

  case 121: /* Lexpr3: FullIdentifier  */
#line 463 "partial_bnfc_acsl_parser.y"
                   { (yyval.lexpr_) = new partial_bnfc_acsl::FullId((yyvsp[0].fullidentifier_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2577 "Parser.C"
    break;

  case 122: /* Lexpr3: _SYMB_64  */
#line 464 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::PiLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2583 "Parser.C"
    break;

  case 123: /* Lexpr3: _LPAREN Lexpr _RPAREN  */
#line 465 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = (yyvsp[-1].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2589 "Parser.C"
    break;

  case 124: /* Lexpr3: _LPAREN Range _RPAREN  */
#line 466 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = new partial_bnfc_acsl::ParenRangeLexpr((yyvsp[-1].range_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2595 "Parser.C"
    break;

  case 125: /* OptLabel1: OptLabelList  */
#line 468 "partial_bnfc_acsl_parser.y"
                         { (yyval.optlabel_) = new partial_bnfc_acsl::OptLabelOne((yyvsp[0].optlabellist_)); (yyval.optlabel_)->line_number = (yyloc).first_line; (yyval.optlabel_)->char_number = (yyloc).first_column; result->optlabel_ = (yyval.optlabel_); }
#line 2601 "Parser.C"
    break;

  case 126: /* OptLabel2: OptLabelList  */
#line 470 "partial_bnfc_acsl_parser.y"
                         { (yyval.optlabel_) = new partial_bnfc_acsl::OptLabelTwo((yyvsp[0].optlabellist_)); (yyval.optlabel_)->line_number = (yyloc).first_line; (yyval.optlabel_)->char_number = (yyloc).first_column; result->optlabel_ = (yyval.optlabel_); }
#line 2607 "Parser.C"
    break;

  case 127: /* OptLabelList: %empty  */
#line 472 "partial_bnfc_acsl_parser.y"
                           { (yyval.optlabellist_) = new partial_bnfc_acsl::NoLableList(); (yyval.optlabellist_)->line_number = (yyloc).first_line; (yyval.optlabellist_)->char_number = (yyloc).first_column; result->optlabellist_ = (yyval.optlabellist_); }
#line 2613 "Parser.C"
    break;

  case 128: /* OptLabelList: _LBRACE ListLabelName _RBRACE  */
#line 473 "partial_bnfc_acsl_parser.y"
                                  { std::reverse((yyvsp[-1].listlabelname_)->begin(),(yyvsp[-1].listlabelname_)->end()) ;(yyval.optlabellist_) = new partial_bnfc_acsl::LableList((yyvsp[-1].listlabelname_)); (yyval.optlabellist_)->line_number = (yyloc).first_line; (yyval.optlabellist_)->char_number = (yyloc).first_column; result->optlabellist_ = (yyval.optlabellist_); }
#line 2619 "Parser.C"
    break;

  case 129: /* LabelName: AnyIdentifier  */
#line 475 "partial_bnfc_acsl_parser.y"
                          { (yyval.labelname_) = new partial_bnfc_acsl::LableName((yyvsp[0].anyidentifier_)); (yyval.labelname_)->line_number = (yyloc).first_line; (yyval.labelname_)->char_number = (yyloc).first_column; result->labelname_ = (yyval.labelname_); }
#line 2625 "Parser.C"
    break;

  case 130: /* ListLabelName: LabelName  */
#line 477 "partial_bnfc_acsl_parser.y"
                          { (yyval.listlabelname_) = new partial_bnfc_acsl::ListLabelName(); (yyval.listlabelname_)->push_back((yyvsp[0].labelname_)); result->listlabelname_ = (yyval.listlabelname_); }
#line 2631 "Parser.C"
    break;

  case 131: /* ListLabelName: LabelName _COMMA ListLabelName  */
#line 478 "partial_bnfc_acsl_parser.y"
                                   { (yyvsp[0].listlabelname_)->push_back((yyvsp[-2].labelname_)); (yyval.listlabelname_) = (yyvsp[0].listlabelname_); result->listlabelname_ = (yyval.listlabelname_); }
#line 2637 "Parser.C"
    break;

  case 132: /* Range: LexprOption _DDOT LexprOption  */
#line 480 "partial_bnfc_acsl_parser.y"
                                      { (yyval.range_) = new partial_bnfc_acsl::LexprRange((yyvsp[-2].lexproption_), (yyvsp[0].lexproption_)); (yyval.range_)->line_number = (yyloc).first_line; (yyval.range_)->char_number = (yyloc).first_column; result->range_ = (yyval.range_); }
#line 2643 "Parser.C"
    break;

  case 133: /* LexprOption: %empty  */
#line 482 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexproption_) = new partial_bnfc_acsl::NoLexprOption(); (yyval.lexproption_)->line_number = (yyloc).first_line; (yyval.lexproption_)->char_number = (yyloc).first_column; result->lexproption_ = (yyval.lexproption_); }
#line 2649 "Parser.C"
    break;

  case 134: /* LexprOption: Lexpr  */
#line 483 "partial_bnfc_acsl_parser.y"
          { (yyval.lexproption_) = new partial_bnfc_acsl::SomeLexprOption((yyvsp[0].lexpr_)); (yyval.lexproption_)->line_number = (yyloc).first_line; (yyval.lexproption_)->char_number = (yyloc).first_column; result->lexproption_ = (yyval.lexproption_); }
#line 2655 "Parser.C"
    break;

  case 135: /* AnyIdentifier: Identifier  */
#line 485 "partial_bnfc_acsl_parser.y"
                           { (yyval.anyidentifier_) = new partial_bnfc_acsl::SimpleIdentifierAny((yyvsp[0].identifier_)); (yyval.anyidentifier_)->line_number = (yyloc).first_line; (yyval.anyidentifier_)->char_number = (yyloc).first_column; result->anyidentifier_ = (yyval.anyidentifier_); }
#line 2661 "Parser.C"
    break;

  case 136: /* PostCond: _KW_ensures  */
#line 487 "partial_bnfc_acsl_parser.y"
                       { (yyval.postcond_) = new partial_bnfc_acsl::EnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2667 "Parser.C"
    break;

  case 137: /* PostCond: _KW_exits  */
#line 488 "partial_bnfc_acsl_parser.y"
              { (yyval.postcond_) = new partial_bnfc_acsl::ExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2673 "Parser.C"
    break;

  case 138: /* PostCond: _KW_breaks  */
#line 489 "partial_bnfc_acsl_parser.y"
               { (yyval.postcond_) = new partial_bnfc_acsl::BreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2679 "Parser.C"
    break;

  case 139: /* PostCond: _KW_continues  */
#line 490 "partial_bnfc_acsl_parser.y"
                  { (yyval.postcond_) = new partial_bnfc_acsl::ContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2685 "Parser.C"
    break;

  case 140: /* PostCond: _KW_returns  */
#line 491 "partial_bnfc_acsl_parser.y"
                { (yyval.postcond_) = new partial_bnfc_acsl::ReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2691 "Parser.C"
    break;

  case 141: /* PostCond: _KW_check _KW_ensures  */
#line 492 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::CheckEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2697 "Parser.C"
    break;

  case 142: /* PostCond: _KW_check _KW_exits  */
#line 493 "partial_bnfc_acsl_parser.y"
                        { (yyval.postcond_) = new partial_bnfc_acsl::CheckExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2703 "Parser.C"
    break;

  case 143: /* PostCond: _KW_check _KW_breaks  */
#line 494 "partial_bnfc_acsl_parser.y"
                         { (yyval.postcond_) = new partial_bnfc_acsl::CheckBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2709 "Parser.C"
    break;

  case 144: /* PostCond: _KW_check _KW_continues  */
#line 495 "partial_bnfc_acsl_parser.y"
                            { (yyval.postcond_) = new partial_bnfc_acsl::CheckContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2715 "Parser.C"
    break;

  case 145: /* PostCond: _KW_check _KW_returns  */
#line 496 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::CheckReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2721 "Parser.C"
    break;

  case 146: /* PostCond: _KW_admit _KW_ensures  */
#line 497 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::AdmitEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2727 "Parser.C"
    break;

  case 147: /* PostCond: _KW_admit _KW_exits  */
#line 498 "partial_bnfc_acsl_parser.y"
                        { (yyval.postcond_) = new partial_bnfc_acsl::AdmitExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2733 "Parser.C"
    break;

  case 148: /* PostCond: _KW_admit _KW_breaks  */
#line 499 "partial_bnfc_acsl_parser.y"
                         { (yyval.postcond_) = new partial_bnfc_acsl::AdmitBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2739 "Parser.C"
    break;

  case 149: /* PostCond: _KW_admit _KW_continues  */
#line 500 "partial_bnfc_acsl_parser.y"
                            { (yyval.postcond_) = new partial_bnfc_acsl::AdmitContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2745 "Parser.C"
    break;

  case 150: /* PostCond: _KW_admit _KW_returns  */
#line 501 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::AdmitReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2751 "Parser.C"
    break;

  case 151: /* FullIdentifier: Identifier  */
#line 503 "partial_bnfc_acsl_parser.y"
                            { (yyval.fullidentifier_) = new partial_bnfc_acsl::SimpleIdentifierFull((yyvsp[0].identifier_)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2757 "Parser.C"
    break;

  case 152: /* FullIdentifier: _KW_admit  */
#line 504 "partial_bnfc_acsl_parser.y"
              { (yyval.fullidentifier_) = new partial_bnfc_acsl::AdmitKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2763 "Parser.C"
    break;

  case 153: /* FullIdentifier: _KW_allocates  */
#line 505 "partial_bnfc_acsl_parser.y"
                  { (yyval.fullidentifier_) = new partial_bnfc_acsl::AllocatesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2769 "Parser.C"
    break;

  case 154: /* FullIdentifier: _KW_assert  */
#line 506 "partial_bnfc_acsl_parser.y"
               { (yyval.fullidentifier_) = new partial_bnfc_acsl::AssertKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2775 "Parser.C"
    break;

  case 155: /* FullIdentifier: _KW_assigns  */
#line 507 "partial_bnfc_acsl_parser.y"
                { (yyval.fullidentifier_) = new partial_bnfc_acsl::AssignsKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2781 "Parser.C"
    break;

  case 156: /* FullIdentifier: _KW_assumes  */
#line 508 "partial_bnfc_acsl_parser.y"
                { (yyval.fullidentifier_) = new partial_bnfc_acsl::AssumesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2787 "Parser.C"
    break;

  case 157: /* FullIdentifier: _KW_at  */
#line 509 "partial_bnfc_acsl_parser.y"
           { (yyval.fullidentifier_) = new partial_bnfc_acsl::AtKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2793 "Parser.C"
    break;

  case 158: /* FullIdentifier: _KW_axiom  */
#line 510 "partial_bnfc_acsl_parser.y"
              { (yyval.fullidentifier_) = new partial_bnfc_acsl::AxiomKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2799 "Parser.C"
    break;

  case 159: /* FullIdentifier: _KW_axiomatic  */
#line 511 "partial_bnfc_acsl_parser.y"
                  { (yyval.fullidentifier_) = new partial_bnfc_acsl::AxiomaticKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2805 "Parser.C"
    break;

  case 160: /* FullIdentifier: _KW_behavior  */
#line 512 "partial_bnfc_acsl_parser.y"
                 { (yyval.fullidentifier_) = new partial_bnfc_acsl::BehaviorKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2811 "Parser.C"
    break;

  case 161: /* FullIdentifier: _KW_breaks  */
#line 513 "partial_bnfc_acsl_parser.y"
               { (yyval.fullidentifier_) = new partial_bnfc_acsl::BreaksKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2817 "Parser.C"
    break;

  case 162: /* FullIdentifier: _KW_check  */
#line 514 "partial_bnfc_acsl_parser.y"
              { (yyval.fullidentifier_) = new partial_bnfc_acsl::CheckKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2823 "Parser.C"
    break;

  case 163: /* FullIdentifier: _KW_complete  */
#line 515 "partial_bnfc_acsl_parser.y"
                 { (yyval.fullidentifier_) = new partial_bnfc_acsl::CompleteKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2829 "Parser.C"
    break;

  case 164: /* FullIdentifier: _KW_continues  */
#line 516 "partial_bnfc_acsl_parser.y"
                  { (yyval.fullidentifier_) = new partial_bnfc_acsl::ContinuesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2835 "Parser.C"
    break;

  case 165: /* FullIdentifier: _KW_contract  */
#line 517 "partial_bnfc_acsl_parser.y"
                 { (yyval.fullidentifier_) = new partial_bnfc_acsl::ContractKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2841 "Parser.C"
    break;

  case 166: /* FullIdentifier: _KW_decreases  */
#line 518 "partial_bnfc_acsl_parser.y"
                  { (yyval.fullidentifier_) = new partial_bnfc_acsl::DecreasesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2847 "Parser.C"
    break;

  case 167: /* FullIdentifier: _KW_disjoint  */
#line 519 "partial_bnfc_acsl_parser.y"
                 { (yyval.fullidentifier_) = new partial_bnfc_acsl::DisjointKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2853 "Parser.C"
    break;

  case 168: /* FullIdentifier: _KW_ensures  */
#line 520 "partial_bnfc_acsl_parser.y"
                { (yyval.fullidentifier_) = new partial_bnfc_acsl::EnsuresKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2859 "Parser.C"
    break;

  case 169: /* FullIdentifier: _KW_exits  */
#line 521 "partial_bnfc_acsl_parser.y"
              { (yyval.fullidentifier_) = new partial_bnfc_acsl::ExitsKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2865 "Parser.C"
    break;

  case 170: /* FullIdentifier: _KW_frees  */
#line 522 "partial_bnfc_acsl_parser.y"
              { (yyval.fullidentifier_) = new partial_bnfc_acsl::FreesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2871 "Parser.C"
    break;

  case 171: /* FullIdentifier: _KW_function  */
#line 523 "partial_bnfc_acsl_parser.y"
                 { (yyval.fullidentifier_) = new partial_bnfc_acsl::FunctionKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2877 "Parser.C"
    break;

  case 172: /* FullIdentifier: _KW_global  */
#line 524 "partial_bnfc_acsl_parser.y"
               { (yyval.fullidentifier_) = new partial_bnfc_acsl::GlobalKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2883 "Parser.C"
    break;

  case 173: /* FullIdentifier: _KW_impact  */
#line 525 "partial_bnfc_acsl_parser.y"
               { (yyval.fullidentifier_) = new partial_bnfc_acsl::ImpactKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2889 "Parser.C"
    break;

  case 174: /* FullIdentifier: _KW_inductive  */
#line 526 "partial_bnfc_acsl_parser.y"
                  { (yyval.fullidentifier_) = new partial_bnfc_acsl::InductiveKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2895 "Parser.C"
    break;

  case 175: /* FullIdentifier: _KW_include  */
#line 527 "partial_bnfc_acsl_parser.y"
                { (yyval.fullidentifier_) = new partial_bnfc_acsl::IncludeKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2901 "Parser.C"
    break;

  case 176: /* FullIdentifier: _KW_invariant  */
#line 528 "partial_bnfc_acsl_parser.y"
                  { (yyval.fullidentifier_) = new partial_bnfc_acsl::InvariantKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2907 "Parser.C"
    break;

  case 177: /* FullIdentifier: _KW_lemma  */
#line 529 "partial_bnfc_acsl_parser.y"
              { (yyval.fullidentifier_) = new partial_bnfc_acsl::LemmaKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2913 "Parser.C"
    break;

  case 178: /* FullIdentifier: _KW_let  */
#line 530 "partial_bnfc_acsl_parser.y"
            { (yyval.fullidentifier_) = new partial_bnfc_acsl::LetKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2919 "Parser.C"
    break;

  case 179: /* FullIdentifier: _KW_logic  */
#line 531 "partial_bnfc_acsl_parser.y"
              { (yyval.fullidentifier_) = new partial_bnfc_acsl::LogicKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2925 "Parser.C"
    break;

  case 180: /* FullIdentifier: _KW_loop  */
#line 532 "partial_bnfc_acsl_parser.y"
             { (yyval.fullidentifier_) = new partial_bnfc_acsl::LoopKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2931 "Parser.C"
    break;

  case 181: /* FullIdentifier: _KW_model  */
#line 533 "partial_bnfc_acsl_parser.y"
              { (yyval.fullidentifier_) = new partial_bnfc_acsl::ModelKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2937 "Parser.C"
    break;

  case 182: /* FullIdentifier: _KW_module  */
#line 534 "partial_bnfc_acsl_parser.y"
               { (yyval.fullidentifier_) = new partial_bnfc_acsl::ModuleKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2943 "Parser.C"
    break;

  case 183: /* FullIdentifier: _KW_pragma  */
#line 535 "partial_bnfc_acsl_parser.y"
               { (yyval.fullidentifier_) = new partial_bnfc_acsl::PragmaKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2949 "Parser.C"
    break;

  case 184: /* FullIdentifier: _KW_predicate  */
#line 536 "partial_bnfc_acsl_parser.y"
                  { (yyval.fullidentifier_) = new partial_bnfc_acsl::PredicateKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2955 "Parser.C"
    break;

  case 185: /* FullIdentifier: _KW_requires  */
#line 537 "partial_bnfc_acsl_parser.y"
                 { (yyval.fullidentifier_) = new partial_bnfc_acsl::RequiresKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2961 "Parser.C"
    break;

  case 186: /* FullIdentifier: _KW_returns  */
#line 538 "partial_bnfc_acsl_parser.y"
                { (yyval.fullidentifier_) = new partial_bnfc_acsl::ReturnsKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2967 "Parser.C"
    break;

  case 187: /* FullIdentifier: _KW_slice  */
#line 539 "partial_bnfc_acsl_parser.y"
              { (yyval.fullidentifier_) = new partial_bnfc_acsl::SliceKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2973 "Parser.C"
    break;

  case 188: /* FullIdentifier: _KW_terminates  */
#line 540 "partial_bnfc_acsl_parser.y"
                   { (yyval.fullidentifier_) = new partial_bnfc_acsl::TerminatesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2979 "Parser.C"
    break;

  case 189: /* FullIdentifier: _KW_type  */
#line 541 "partial_bnfc_acsl_parser.y"
             { (yyval.fullidentifier_) = new partial_bnfc_acsl::TypeKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2985 "Parser.C"
    break;

  case 190: /* FullIdentifier: _KW_variant  */
#line 542 "partial_bnfc_acsl_parser.y"
                { (yyval.fullidentifier_) = new partial_bnfc_acsl::VariantKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2991 "Parser.C"
    break;

  case 191: /* Identifier: _IDENT_  */
#line 547 "partial_bnfc_acsl_parser.y"
                     { (yyval.identifier_) = new partial_bnfc_acsl::IdentifierIdent((yyvsp[0]._string)); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 2997 "Parser.C"
    break;

  case 192: /* Identifier: _KW_behaviors  */
#line 548 "partial_bnfc_acsl_parser.y"
                  { (yyval.identifier_) = new partial_bnfc_acsl::BehaviorsKeyWord(); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 3003 "Parser.C"
    break;

  case 193: /* Identifier: _KW_label  */
#line 549 "partial_bnfc_acsl_parser.y"
              { (yyval.identifier_) = new partial_bnfc_acsl::LabelKeyWord(); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 3009 "Parser.C"
    break;

  case 194: /* Identifier: _KW_reads  */
#line 550 "partial_bnfc_acsl_parser.y"
              { (yyval.identifier_) = new partial_bnfc_acsl::ReadsKeyWord(); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 3015 "Parser.C"
    break;

  case 195: /* Identifier: _KW_writes  */
#line 551 "partial_bnfc_acsl_parser.y"
               { (yyval.identifier_) = new partial_bnfc_acsl::WritesKeyWord(); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 3021 "Parser.C"
    break;

  case 196: /* TypeSpecSimple: _KW_integer  */
#line 553 "partial_bnfc_acsl_parser.y"
                             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleIntegerKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3027 "Parser.C"
    break;

  case 197: /* TypeSpecSimple: _KW_real  */
#line 554 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleRealKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3033 "Parser.C"
    break;

  case 198: /* TypeSpecSimple: _KW_boolean  */
#line 555 "partial_bnfc_acsl_parser.y"
                { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleBooleanKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3039 "Parser.C"
    break;

  case 199: /* TypeSpecSimple: _KW_void  */
#line 556 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleVoidKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3045 "Parser.C"
    break;

  case 200: /* TypeSpecSimple: _SYMB_68  */
#line 557 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleBoolKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3051 "Parser.C"
    break;

  case 201: /* TypeSpecSimple: _KW_char  */
#line 558 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3057 "Parser.C"
    break;

  case 202: /* TypeSpecSimple: _KW_signed _KW_char  */
#line 559 "partial_bnfc_acsl_parser.y"
                        { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3063 "Parser.C"
    break;

  case 203: /* TypeSpecSimple: _KW_unsigned _KW_char  */
#line 560 "partial_bnfc_acsl_parser.y"
                          { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3069 "Parser.C"
    break;

  case 204: /* TypeSpecSimple: _KW_int  */
#line 561 "partial_bnfc_acsl_parser.y"
            { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3075 "Parser.C"
    break;

  case 205: /* TypeSpecSimple: _KW_signed _KW_int  */
#line 562 "partial_bnfc_acsl_parser.y"
                       { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3081 "Parser.C"
    break;

  case 206: /* TypeSpecSimple: _KW_unsigned _KW_int  */
#line 563 "partial_bnfc_acsl_parser.y"
                         { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3087 "Parser.C"
    break;

  case 207: /* TypeSpecSimple: _KW_unsigned  */
#line 564 "partial_bnfc_acsl_parser.y"
                 { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3093 "Parser.C"
    break;

  case 208: /* TypeSpecSimple: _KW_short  */
#line 565 "partial_bnfc_acsl_parser.y"
              { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleShortKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3099 "Parser.C"
    break;

  case 209: /* TypeSpecSimple: _KW_signed _KW_short  */
#line 566 "partial_bnfc_acsl_parser.y"
                         { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedShortKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3105 "Parser.C"
    break;

  case 210: /* TypeSpecSimple: _KW_unsigned _KW_short  */
#line 567 "partial_bnfc_acsl_parser.y"
                           { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedShortKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3111 "Parser.C"
    break;

  case 211: /* TypeSpecSimple: _KW_short _KW_int  */
#line 568 "partial_bnfc_acsl_parser.y"
                      { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleShortIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3117 "Parser.C"
    break;

  case 212: /* TypeSpecSimple: _KW_signed _KW_short _KW_int  */
#line 569 "partial_bnfc_acsl_parser.y"
                                 { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedShortIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3123 "Parser.C"
    break;

  case 213: /* TypeSpecSimple: _KW_unsigned _KW_short _KW_int  */
#line 570 "partial_bnfc_acsl_parser.y"
                                   { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedShortIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3129 "Parser.C"
    break;

  case 214: /* TypeSpecSimple: _KW_long  */
#line 571 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3135 "Parser.C"
    break;

  case 215: /* TypeSpecSimple: _KW_signed _KW_long  */
#line 572 "partial_bnfc_acsl_parser.y"
                        { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3141 "Parser.C"
    break;

  case 216: /* TypeSpecSimple: _KW_unsigned _KW_long  */
#line 573 "partial_bnfc_acsl_parser.y"
                          { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3147 "Parser.C"
    break;

  case 217: /* TypeSpecSimple: _KW_signed _KW_long _KW_int  */
#line 574 "partial_bnfc_acsl_parser.y"
                                { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3153 "Parser.C"
    break;

  case 218: /* TypeSpecSimple: _KW_long _KW_int  */
#line 575 "partial_bnfc_acsl_parser.y"
                     { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3159 "Parser.C"
    break;

  case 219: /* TypeSpecSimple: _KW_unsigned _KW_long _KW_int  */
#line 576 "partial_bnfc_acsl_parser.y"
                                  { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3165 "Parser.C"
    break;

  case 220: /* TypeSpecSimple: _KW_long _KW_long  */
#line 577 "partial_bnfc_acsl_parser.y"
                      { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3171 "Parser.C"
    break;

  case 221: /* TypeSpecSimple: _KW_signed _KW_long _KW_long  */
#line 578 "partial_bnfc_acsl_parser.y"
                                 { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedLongLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3177 "Parser.C"
    break;

  case 222: /* TypeSpecSimple: _KW_unsigned _KW_long _KW_long  */
#line 579 "partial_bnfc_acsl_parser.y"
                                   { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedLongLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3183 "Parser.C"
    break;

  case 223: /* TypeSpecSimple: _KW_long _KW_long _KW_int  */
#line 580 "partial_bnfc_acsl_parser.y"
                              { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3189 "Parser.C"
    break;

  case 224: /* TypeSpecSimple: _KW_signed _KW_long _KW_long _KW_int  */
#line 581 "partial_bnfc_acsl_parser.y"
                                         { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedLongLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3195 "Parser.C"
    break;

  case 225: /* TypeSpecSimple: _KW_unsigned _KW_long _KW_long _KW_int  */
#line 582 "partial_bnfc_acsl_parser.y"
                                           { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedLongLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3201 "Parser.C"
    break;

  case 226: /* TypeSpecSimple: _KW_float  */
#line 583 "partial_bnfc_acsl_parser.y"
              { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleFloatKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3207 "Parser.C"
    break;

  case 227: /* TypeSpecSimple: _KW_double  */
#line 584 "partial_bnfc_acsl_parser.y"
               { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleDoubleKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3213 "Parser.C"
    break;

  case 228: /* TypeSpecSimple: _KW_long _KW_double  */
#line 585 "partial_bnfc_acsl_parser.y"
                        { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongDoubleKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 3219 "Parser.C"
    break;

  case 229: /* LogicPTreeAnnot: Annotation  */
#line 587 "partial_bnfc_acsl_parser.y"
                             { (yyval.logicptreeannot_) = new partial_bnfc_acsl::AnAnnotation((yyvsp[0].annotation_)); (yyval.logicptreeannot_)->line_number = (yyloc).first_line; (yyval.logicptreeannot_)->char_number = (yyloc).first_column; result->logicptreeannot_ = (yyval.logicptreeannot_); }
#line 3225 "Parser.C"
    break;

  case 230: /* Annotation: LoopAnnotStack  */
#line 589 "partial_bnfc_acsl_parser.y"
                            { (yyval.annotation_) = new partial_bnfc_acsl::LoopAnnotation((yyvsp[0].loopannotstack_)); (yyval.annotation_)->line_number = (yyloc).first_line; (yyval.annotation_)->char_number = (yyloc).first_column; result->annotation_ = (yyval.annotation_); }
#line 3231 "Parser.C"
    break;

  case 231: /* LoopAnnotStack: LoopInvariant LoopAnnotOpt  */
#line 591 "partial_bnfc_acsl_parser.y"
                                            { (yyval.loopannotstack_) = new partial_bnfc_acsl::LoopAnnotStackInvariant((yyvsp[-1].loopinvariant_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 3237 "Parser.C"
    break;

  case 232: /* LoopAnnotStack: LoopEffects LoopAnnotOpt  */
#line 592 "partial_bnfc_acsl_parser.y"
                             { (yyval.loopannotstack_) = new partial_bnfc_acsl::LoopAnnotStackEffects((yyvsp[-1].loopeffects_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 3243 "Parser.C"
    break;

  case 233: /* LoopAnnotStack: LoopAllocation LoopAnnotOpt  */
#line 593 "partial_bnfc_acsl_parser.y"
                                { (yyval.loopannotstack_) = new partial_bnfc_acsl::LoopAnnotStackAllocation((yyvsp[-1].loopallocation_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 3249 "Parser.C"
    break;

  case 234: /* LoopAnnotStack: LoopVariant LoopAnnotOpt  */
#line 594 "partial_bnfc_acsl_parser.y"
                             { (yyval.loopannotstack_) = new partial_bnfc_acsl::LoopAnnotStackVariant((yyvsp[-1].loopvariant_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 3255 "Parser.C"
    break;

  case 235: /* LoopAnnotOpt: %empty  */
#line 596 "partial_bnfc_acsl_parser.y"
                           { (yyval.loopannotopt_) = new partial_bnfc_acsl::NoLoopAnnot(); (yyval.loopannotopt_)->line_number = (yyloc).first_line; (yyval.loopannotopt_)->char_number = (yyloc).first_column; result->loopannotopt_ = (yyval.loopannotopt_); }
#line 3261 "Parser.C"
    break;

  case 236: /* LoopAnnotOpt: LoopAnnotStack  */
#line 597 "partial_bnfc_acsl_parser.y"
                   { (yyval.loopannotopt_) = new partial_bnfc_acsl::SomeLoopAnnot((yyvsp[0].loopannotstack_)); (yyval.loopannotopt_)->line_number = (yyloc).first_line; (yyval.loopannotopt_)->char_number = (yyloc).first_column; result->loopannotopt_ = (yyval.loopannotopt_); }
#line 3267 "Parser.C"
    break;

  case 237: /* LoopInvariant: _KW_loop _KW_invariant Lexpr _SEMI  */
#line 599 "partial_bnfc_acsl_parser.y"
                                                   { (yyval.loopinvariant_) = new partial_bnfc_acsl::SimpleLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 3273 "Parser.C"
    break;

  case 238: /* LoopInvariant: _KW_check _KW_loop _KW_invariant Lexpr _SEMI  */
#line 600 "partial_bnfc_acsl_parser.y"
                                                 { (yyval.loopinvariant_) = new partial_bnfc_acsl::CheckLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 3279 "Parser.C"
    break;

  case 239: /* LoopInvariant: _KW_admit _KW_loop _KW_invariant Lexpr _SEMI  */
#line 601 "partial_bnfc_acsl_parser.y"
                                                 { (yyval.loopinvariant_) = new partial_bnfc_acsl::AdmitLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 3285 "Parser.C"
    break;

  case 240: /* LoopAllocation: _KW_loop Allocation _SEMI  */
#line 603 "partial_bnfc_acsl_parser.y"
                                           { (yyval.loopallocation_) = new partial_bnfc_acsl::SimpleLoopAllocation((yyvsp[-1].allocation_)); (yyval.loopallocation_)->line_number = (yyloc).first_line; (yyval.loopallocation_)->char_number = (yyloc).first_column; result->loopallocation_ = (yyval.loopallocation_); }
#line 3291 "Parser.C"
    break;

  case 241: /* Allocation: _KW_allocates Zones  */
#line 605 "partial_bnfc_acsl_parser.y"
                                 { (yyval.allocation_) = new partial_bnfc_acsl::AllocatesZones((yyvsp[0].zones_)); (yyval.allocation_)->line_number = (yyloc).first_line; (yyval.allocation_)->char_number = (yyloc).first_column; result->allocation_ = (yyval.allocation_); }
#line 3297 "Parser.C"
    break;

  case 242: /* Allocation: _KW_frees Zones  */
#line 606 "partial_bnfc_acsl_parser.y"
                    { (yyval.allocation_) = new partial_bnfc_acsl::FreesZones((yyvsp[0].zones_)); (yyval.allocation_)->line_number = (yyloc).first_line; (yyval.allocation_)->char_number = (yyloc).first_column; result->allocation_ = (yyval.allocation_); }
#line 3303 "Parser.C"
    break;

  case 243: /* LoopVariant: _KW_loop _KW_variant Variant _SEMI  */
#line 608 "partial_bnfc_acsl_parser.y"
                                                 { (yyval.loopvariant_) = new partial_bnfc_acsl::SimpleLoopVariant((yyvsp[-1].variant_)); (yyval.loopvariant_)->line_number = (yyloc).first_line; (yyval.loopvariant_)->char_number = (yyloc).first_column; result->loopvariant_ = (yyval.loopvariant_); }
#line 3309 "Parser.C"
    break;

  case 244: /* LoopEffects: _KW_loop _KW_assigns Assigns _SEMI  */
#line 610 "partial_bnfc_acsl_parser.y"
                                                 { (yyval.loopeffects_) = new partial_bnfc_acsl::LoopAssigns((yyvsp[-1].assigns_)); (yyval.loopeffects_)->line_number = (yyloc).first_line; (yyval.loopeffects_)->char_number = (yyloc).first_column; result->loopeffects_ = (yyval.loopeffects_); }
#line 3315 "Parser.C"
    break;

  case 245: /* Variant: Lexpr _KW_for AnyIdentifier  */
#line 612 "partial_bnfc_acsl_parser.y"
                                      { (yyval.variant_) = new partial_bnfc_acsl::ForVariant((yyvsp[-2].lexpr_), (yyvsp[0].anyidentifier_)); (yyval.variant_)->line_number = (yyloc).first_line; (yyval.variant_)->char_number = (yyloc).first_column; result->variant_ = (yyval.variant_); }
#line 3321 "Parser.C"
    break;

  case 246: /* Variant: Lexpr  */
#line 613 "partial_bnfc_acsl_parser.y"
          { (yyval.variant_) = new partial_bnfc_acsl::LexprVariant((yyvsp[0].lexpr_)); (yyval.variant_)->line_number = (yyloc).first_line; (yyval.variant_)->char_number = (yyloc).first_column; result->variant_ = (yyval.variant_); }
#line 3327 "Parser.C"
    break;


#line 3331 "Parser.C"

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

#line 616 "partial_bnfc_acsl_parser.y"


namespace partial_bnfc_acsl
{
/* Entrypoint: parse Program* from file. */
Program* pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
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
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Annot* from file. */
Annot* pAnnot(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annot_;
  }
}

/* Entrypoint: parse Annot* from string. */
Annot* psAnnot(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annot_;
  }
}

/* Entrypoint: parse Code_Annot* from file. */
Code_Annot* pCode_Annot(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.code_annot_;
  }
}

/* Entrypoint: parse Code_Annot* from string. */
Code_Annot* psCode_Annot(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.code_annot_;
  }
}

/* Entrypoint: parse Contract* from file. */
Contract* pContract(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.contract_;
  }
}

/* Entrypoint: parse Contract* from string. */
Contract* psContract(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.contract_;
  }
}

/* Entrypoint: parse Requires* from file. */
Requires* pRequires(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.requires_;
  }
}

/* Entrypoint: parse Requires* from string. */
Requires* psRequires(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.requires_;
  }
}

/* Entrypoint: parse NERequires* from file. */
NERequires* pNERequires(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.nerequires_;
  }
}

/* Entrypoint: parse NERequires* from string. */
NERequires* psNERequires(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.nerequires_;
  }
}

/* Entrypoint: parse Terminates* from file. */
Terminates* pTerminates(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.terminates_;
  }
}

/* Entrypoint: parse Terminates* from string. */
Terminates* psTerminates(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.terminates_;
  }
}

/* Entrypoint: parse Decreases* from file. */
Decreases* pDecreases(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.decreases_;
  }
}

/* Entrypoint: parse Decreases* from string. */
Decreases* psDecreases(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.decreases_;
  }
}

/* Entrypoint: parse SimpleClauses* from file. */
SimpleClauses* pSimpleClauses(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.simpleclauses_;
  }
}

/* Entrypoint: parse SimpleClauses* from string. */
SimpleClauses* psSimpleClauses(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.simpleclauses_;
  }
}

/* Entrypoint: parse NESimpleClauses* from file. */
NESimpleClauses* pNESimpleClauses(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.nesimpleclauses_;
  }
}

/* Entrypoint: parse NESimpleClauses* from string. */
NESimpleClauses* psNESimpleClauses(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.nesimpleclauses_;
  }
}

/* Entrypoint: parse Assigns* from file. */
Assigns* pAssigns(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assigns_;
  }
}

/* Entrypoint: parse Assigns* from string. */
Assigns* psAssigns(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.assigns_;
  }
}

/* Entrypoint: parse Zones* from file. */
Zones* pZones(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.zones_;
  }
}

/* Entrypoint: parse Zones* from string. */
Zones* psZones(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.zones_;
  }
}

/* Entrypoint: parse Behaviors* from file. */
Behaviors* pBehaviors(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.behaviors_;
  }
}

/* Entrypoint: parse Behaviors* from string. */
Behaviors* psBehaviors(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.behaviors_;
  }
}

/* Entrypoint: parse CompleteOrDisjoint* from file. */
CompleteOrDisjoint* pCompleteOrDisjoint(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.completeordisjoint_;
  }
}

/* Entrypoint: parse CompleteOrDisjoint* from string. */
CompleteOrDisjoint* psCompleteOrDisjoint(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.completeordisjoint_;
  }
}

/* Entrypoint: parse Lexpr* from file. */
Lexpr* pLexpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexpr_;
  }
}

/* Entrypoint: parse Lexpr* from string. */
Lexpr* psLexpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexpr_;
  }
}

/* Entrypoint: parse ListLexpr* from file. */
ListLexpr* pListLexpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlexpr_->begin(), result.listlexpr_->end());
    return result.listlexpr_;
  }
}

/* Entrypoint: parse ListLexpr* from string. */
ListLexpr* psListLexpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlexpr_->begin(), result.listlexpr_->end());
    return result.listlexpr_;
  }
}

/* Entrypoint: parse Lexpr* from file. */
Lexpr* pLexpr1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexpr_;
  }
}

/* Entrypoint: parse Lexpr* from string. */
Lexpr* psLexpr1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexpr_;
  }
}

/* Entrypoint: parse LexprRelInner* from file. */
LexprRelInner* pLexprRelInner(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexprrelinner_;
  }
}

/* Entrypoint: parse LexprRelInner* from string. */
LexprRelInner* psLexprRelInner(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexprrelinner_;
  }
}

/* Entrypoint: parse ListLexprRelInner* from file. */
ListLexprRelInner* pListLexprRelInner(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listlexprrelinner_;
  }
}

/* Entrypoint: parse ListLexprRelInner* from string. */
ListLexprRelInner* psListLexprRelInner(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listlexprrelinner_;
  }
}

/* Entrypoint: parse Relation* from file. */
Relation* pRelation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.relation_;
  }
}

/* Entrypoint: parse Relation* from string. */
Relation* psRelation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.relation_;
  }
}

/* Entrypoint: parse Lexpr* from file. */
Lexpr* pLexpr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexpr_;
  }
}

/* Entrypoint: parse Lexpr* from string. */
Lexpr* psLexpr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexpr_;
  }
}

/* Entrypoint: parse LexprBinder* from file. */
LexprBinder* pLexprBinder(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexprbinder_;
  }
}

/* Entrypoint: parse LexprBinder* from string. */
LexprBinder* psLexprBinder(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexprbinder_;
  }
}

/* Entrypoint: parse Binders* from file. */
Binders* pBinders(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.binders_;
  }
}

/* Entrypoint: parse Binders* from string. */
Binders* psBinders(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.binders_;
  }
}

/* Entrypoint: parse TypeSpecOFTYPENAME* from file. */
TypeSpecOFTYPENAME* pTypeSpecOFTYPENAME(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typespecoftypename_;
  }
}

/* Entrypoint: parse TypeSpecOFTYPENAME* from string. */
TypeSpecOFTYPENAME* psTypeSpecOFTYPENAME(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typespecoftypename_;
  }
}

/* Entrypoint: parse BindersReentrance* from file. */
BindersReentrance* pBindersReentrance(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.bindersreentrance_;
  }
}

/* Entrypoint: parse BindersReentrance* from string. */
BindersReentrance* psBindersReentrance(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.bindersreentrance_;
  }
}

/* Entrypoint: parse ListBindersReentrance* from file. */
ListBindersReentrance* pListBindersReentrance(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listbindersreentrance_;
  }
}

/* Entrypoint: parse ListBindersReentrance* from string. */
ListBindersReentrance* psListBindersReentrance(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listbindersreentrance_;
  }
}

/* Entrypoint: parse VarSpec* from file. */
VarSpec* pVarSpec(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.varspec_;
  }
}

/* Entrypoint: parse VarSpec* from string. */
VarSpec* psVarSpec(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.varspec_;
  }
}

/* Entrypoint: parse Stars* from file. */
Stars* pStars(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.stars_;
  }
}

/* Entrypoint: parse Stars* from string. */
Stars* psStars(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.stars_;
  }
}

/* Entrypoint: parse ListStars* from file. */
ListStars* pListStars(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.liststars_->begin(), result.liststars_->end());
    return result.liststars_;
  }
}

/* Entrypoint: parse ListStars* from string. */
ListStars* psListStars(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.liststars_->begin(), result.liststars_->end());
    return result.liststars_;
  }
}

/* Entrypoint: parse VarSpec* from file. */
VarSpec* pVarSpec1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.varspec_;
  }
}

/* Entrypoint: parse VarSpec* from string. */
VarSpec* psVarSpec1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.varspec_;
  }
}

/* Entrypoint: parse ArraySize* from file. */
ArraySize* pArraySize(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.arraysize_;
  }
}

/* Entrypoint: parse ArraySize* from string. */
ArraySize* psArraySize(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.arraysize_;
  }
}

/* Entrypoint: parse Lexpr* from file. */
Lexpr* pLexpr3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexpr_;
  }
}

/* Entrypoint: parse Lexpr* from string. */
Lexpr* psLexpr3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexpr_;
  }
}

/* Entrypoint: parse OptLabel* from file. */
OptLabel* pOptLabel1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optlabel_;
  }
}

/* Entrypoint: parse OptLabel* from string. */
OptLabel* psOptLabel1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optlabel_;
  }
}

/* Entrypoint: parse OptLabel* from file. */
OptLabel* pOptLabel2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optlabel_;
  }
}

/* Entrypoint: parse OptLabel* from string. */
OptLabel* psOptLabel2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optlabel_;
  }
}

/* Entrypoint: parse OptLabelList* from file. */
OptLabelList* pOptLabelList(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optlabellist_;
  }
}

/* Entrypoint: parse OptLabelList* from string. */
OptLabelList* psOptLabelList(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.optlabellist_;
  }
}

/* Entrypoint: parse LabelName* from file. */
LabelName* pLabelName(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.labelname_;
  }
}

/* Entrypoint: parse LabelName* from string. */
LabelName* psLabelName(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.labelname_;
  }
}

/* Entrypoint: parse ListLabelName* from file. */
ListLabelName* pListLabelName(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlabelname_->begin(), result.listlabelname_->end());
    return result.listlabelname_;
  }
}

/* Entrypoint: parse ListLabelName* from string. */
ListLabelName* psListLabelName(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlabelname_->begin(), result.listlabelname_->end());
    return result.listlabelname_;
  }
}

/* Entrypoint: parse Range* from file. */
Range* pRange(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.range_;
  }
}

/* Entrypoint: parse Range* from string. */
Range* psRange(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.range_;
  }
}

/* Entrypoint: parse LexprOption* from file. */
LexprOption* pLexprOption(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexproption_;
  }
}

/* Entrypoint: parse LexprOption* from string. */
LexprOption* psLexprOption(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.lexproption_;
  }
}

/* Entrypoint: parse AnyIdentifier* from file. */
AnyIdentifier* pAnyIdentifier(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.anyidentifier_;
  }
}

/* Entrypoint: parse AnyIdentifier* from string. */
AnyIdentifier* psAnyIdentifier(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.anyidentifier_;
  }
}

/* Entrypoint: parse PostCond* from file. */
PostCond* pPostCond(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.postcond_;
  }
}

/* Entrypoint: parse PostCond* from string. */
PostCond* psPostCond(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.postcond_;
  }
}

/* Entrypoint: parse FullIdentifier* from file. */
FullIdentifier* pFullIdentifier(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.fullidentifier_;
  }
}

/* Entrypoint: parse FullIdentifier* from string. */
FullIdentifier* psFullIdentifier(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.fullidentifier_;
  }
}

/* Entrypoint: parse ListFullIdentifier* from file. */
ListFullIdentifier* pListFullIdentifier(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listfullidentifier_->begin(), result.listfullidentifier_->end());
    return result.listfullidentifier_;
  }
}

/* Entrypoint: parse ListFullIdentifier* from string. */
ListFullIdentifier* psListFullIdentifier(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listfullidentifier_->begin(), result.listfullidentifier_->end());
    return result.listfullidentifier_;
  }
}

/* Entrypoint: parse Identifier* from file. */
Identifier* pIdentifier(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.identifier_;
  }
}

/* Entrypoint: parse Identifier* from string. */
Identifier* psIdentifier(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.identifier_;
  }
}

/* Entrypoint: parse TypeSpecSimple* from file. */
TypeSpecSimple* pTypeSpecSimple(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typespecsimple_;
  }
}

/* Entrypoint: parse TypeSpecSimple* from string. */
TypeSpecSimple* psTypeSpecSimple(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typespecsimple_;
  }
}

/* Entrypoint: parse LogicPTreeAnnot* from file. */
LogicPTreeAnnot* pLogicPTreeAnnot(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.logicptreeannot_;
  }
}

/* Entrypoint: parse LogicPTreeAnnot* from string. */
LogicPTreeAnnot* psLogicPTreeAnnot(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.logicptreeannot_;
  }
}

/* Entrypoint: parse Annotation* from file. */
Annotation* pAnnotation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotation_;
  }
}

/* Entrypoint: parse Annotation* from string. */
Annotation* psAnnotation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotation_;
  }
}

/* Entrypoint: parse LoopAnnotStack* from file. */
LoopAnnotStack* pLoopAnnotStack(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopannotstack_;
  }
}

/* Entrypoint: parse LoopAnnotStack* from string. */
LoopAnnotStack* psLoopAnnotStack(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopannotstack_;
  }
}

/* Entrypoint: parse LoopAnnotOpt* from file. */
LoopAnnotOpt* pLoopAnnotOpt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopannotopt_;
  }
}

/* Entrypoint: parse LoopAnnotOpt* from string. */
LoopAnnotOpt* psLoopAnnotOpt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopannotopt_;
  }
}

/* Entrypoint: parse LoopInvariant* from file. */
LoopInvariant* pLoopInvariant(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopinvariant_;
  }
}

/* Entrypoint: parse LoopInvariant* from string. */
LoopInvariant* psLoopInvariant(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopinvariant_;
  }
}

/* Entrypoint: parse LoopAllocation* from file. */
LoopAllocation* pLoopAllocation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopallocation_;
  }
}

/* Entrypoint: parse LoopAllocation* from string. */
LoopAllocation* psLoopAllocation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopallocation_;
  }
}

/* Entrypoint: parse Allocation* from file. */
Allocation* pAllocation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.allocation_;
  }
}

/* Entrypoint: parse Allocation* from string. */
Allocation* psAllocation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.allocation_;
  }
}

/* Entrypoint: parse LoopVariant* from file. */
LoopVariant* pLoopVariant(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopvariant_;
  }
}

/* Entrypoint: parse LoopVariant* from string. */
LoopVariant* psLoopVariant(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopvariant_;
  }
}

/* Entrypoint: parse LoopEffects* from file. */
LoopEffects* pLoopEffects(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopeffects_;
  }
}

/* Entrypoint: parse LoopEffects* from string. */
LoopEffects* psLoopEffects(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.loopeffects_;
  }
}

/* Entrypoint: parse Variant* from file. */
Variant* pVariant(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variant_;
  }
}

/* Entrypoint: parse Variant* from string. */
Variant* psVariant(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = partial_bnfc_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partial_bnfc_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partial_bnfc_acsl_delete_buffer(buf, scanner);
  partial_bnfc_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.variant_;
  }
}


}
