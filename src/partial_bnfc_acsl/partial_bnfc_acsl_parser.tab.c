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

#line 105 "partial_bnfc_acsl_parser.tab.c"

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
  YYSYMBOL__DAMP = 6,                      /* _DAMP  */
  YYSYMBOL__LPAREN = 7,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 8,                    /* _RPAREN  */
  YYSYMBOL__STAR = 9,                      /* _STAR  */
  YYSYMBOL__PLUS = 10,                     /* _PLUS  */
  YYSYMBOL__COMMA = 11,                    /* _COMMA  */
  YYSYMBOL__MINUS = 12,                    /* _MINUS  */
  YYSYMBOL__DDOT = 13,                     /* _DDOT  */
  YYSYMBOL__SEMI = 14,                     /* _SEMI  */
  YYSYMBOL__LT = 15,                       /* _LT  */
  YYSYMBOL__LDARROW = 16,                  /* _LDARROW  */
  YYSYMBOL__SYMB_4 = 17,                   /* _SYMB_4  */
  YYSYMBOL__DEQ = 18,                      /* _DEQ  */
  YYSYMBOL__SYMB_3 = 19,                   /* _SYMB_3  */
  YYSYMBOL__GT = 20,                       /* _GT  */
  YYSYMBOL__GTEQ = 21,                     /* _GTEQ  */
  YYSYMBOL__LBRACK = 22,                   /* _LBRACK  */
  YYSYMBOL__SYMB_27 = 23,                  /* _SYMB_27  */
  YYSYMBOL__SYMB_28 = 24,                  /* _SYMB_28  */
  YYSYMBOL__SYMB_17 = 25,                  /* _SYMB_17  */
  YYSYMBOL__SYMB_25 = 26,                  /* _SYMB_25  */
  YYSYMBOL__SYMB_16 = 27,                  /* _SYMB_16  */
  YYSYMBOL__SYMB_1 = 28,                   /* _SYMB_1  */
  YYSYMBOL__SYMB_18 = 29,                  /* _SYMB_18  */
  YYSYMBOL__SYMB_2 = 30,                   /* _SYMB_2  */
  YYSYMBOL__SYMB_32 = 31,                  /* _SYMB_32  */
  YYSYMBOL__SYMB_36 = 32,                  /* _SYMB_36  */
  YYSYMBOL__SYMB_29 = 33,                  /* _SYMB_29  */
  YYSYMBOL__SYMB_35 = 34,                  /* _SYMB_35  */
  YYSYMBOL__SYMB_30 = 35,                  /* _SYMB_30  */
  YYSYMBOL__SYMB_24 = 36,                  /* _SYMB_24  */
  YYSYMBOL__SYMB_31 = 37,                  /* _SYMB_31  */
  YYSYMBOL__SYMB_26 = 38,                  /* _SYMB_26  */
  YYSYMBOL__RBRACK = 39,                   /* _RBRACK  */
  YYSYMBOL__DCARET = 40,                   /* _DCARET  */
  YYSYMBOL__SYMB_40 = 41,                  /* _SYMB_40  */
  YYSYMBOL__KW_admit = 42,                 /* _KW_admit  */
  YYSYMBOL__KW_assigns = 43,               /* _KW_assigns  */
  YYSYMBOL__KW_boolean = 44,               /* _KW_boolean  */
  YYSYMBOL__KW_breaks = 45,                /* _KW_breaks  */
  YYSYMBOL__KW_char = 46,                  /* _KW_char  */
  YYSYMBOL__KW_check = 47,                 /* _KW_check  */
  YYSYMBOL__KW_continues = 48,             /* _KW_continues  */
  YYSYMBOL__KW_double = 49,                /* _KW_double  */
  YYSYMBOL__KW_ensures = 50,               /* _KW_ensures  */
  YYSYMBOL__KW_exits = 51,                 /* _KW_exits  */
  YYSYMBOL__KW_float = 52,                 /* _KW_float  */
  YYSYMBOL__KW_for = 53,                   /* _KW_for  */
  YYSYMBOL__KW_int = 54,                   /* _KW_int  */
  YYSYMBOL__KW_integer = 55,               /* _KW_integer  */
  YYSYMBOL__KW_invariant = 56,             /* _KW_invariant  */
  YYSYMBOL__KW_long = 57,                  /* _KW_long  */
  YYSYMBOL__KW_loop = 58,                  /* _KW_loop  */
  YYSYMBOL__KW_real = 59,                  /* _KW_real  */
  YYSYMBOL__KW_requires = 60,              /* _KW_requires  */
  YYSYMBOL__KW_returns = 61,               /* _KW_returns  */
  YYSYMBOL__KW_short = 62,                 /* _KW_short  */
  YYSYMBOL__KW_signed = 63,                /* _KW_signed  */
  YYSYMBOL__KW_unsigned = 64,              /* _KW_unsigned  */
  YYSYMBOL__KW_variant = 65,               /* _KW_variant  */
  YYSYMBOL__KW_void = 66,                  /* _KW_void  */
  YYSYMBOL__LBRACE = 67,                   /* _LBRACE  */
  YYSYMBOL__DBAR = 68,                     /* _DBAR  */
  YYSYMBOL__RBRACE = 69,                   /* _RBRACE  */
  YYSYMBOL__STRING_ = 70,                  /* _STRING_  */
  YYSYMBOL__INTEGER_ = 71,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 72,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 73,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_Program = 75,                   /* Program  */
  YYSYMBOL_Annot = 76,                     /* Annot  */
  YYSYMBOL_Code_Annot = 77,                /* Code_Annot  */
  YYSYMBOL_Contract = 78,                  /* Contract  */
  YYSYMBOL_Requires = 79,                  /* Requires  */
  YYSYMBOL_NERequires = 80,                /* NERequires  */
  YYSYMBOL_Terminates = 81,                /* Terminates  */
  YYSYMBOL_Decreases = 82,                 /* Decreases  */
  YYSYMBOL_SimpleClauses = 83,             /* SimpleClauses  */
  YYSYMBOL_NESimpleClauses = 84,           /* NESimpleClauses  */
  YYSYMBOL_Assigns = 85,                   /* Assigns  */
  YYSYMBOL_Zones = 86,                     /* Zones  */
  YYSYMBOL_Behaviors = 87,                 /* Behaviors  */
  YYSYMBOL_CompleteOrDisjoint = 88,        /* CompleteOrDisjoint  */
  YYSYMBOL_Lexpr = 89,                     /* Lexpr  */
  YYSYMBOL_ListLexpr = 90,                 /* ListLexpr  */
  YYSYMBOL_Lexpr1 = 91,                    /* Lexpr1  */
  YYSYMBOL_LexprRelInner = 92,             /* LexprRelInner  */
  YYSYMBOL_ListLexprRelInner = 93,         /* ListLexprRelInner  */
  YYSYMBOL_Relation = 94,                  /* Relation  */
  YYSYMBOL_Lexpr2 = 95,                    /* Lexpr2  */
  YYSYMBOL_LexprBinder = 96,               /* LexprBinder  */
  YYSYMBOL_Binders = 97,                   /* Binders  */
  YYSYMBOL_TypeSpecOFTYPENAME = 98,        /* TypeSpecOFTYPENAME  */
  YYSYMBOL_BindersReentrance = 99,         /* BindersReentrance  */
  YYSYMBOL_ListBindersReentrance = 100,    /* ListBindersReentrance  */
  YYSYMBOL_VarSpec = 101,                  /* VarSpec  */
  YYSYMBOL_Stars = 102,                    /* Stars  */
  YYSYMBOL_ListStars = 103,                /* ListStars  */
  YYSYMBOL_VarSpec1 = 104,                 /* VarSpec1  */
  YYSYMBOL_ArraySize = 105,                /* ArraySize  */
  YYSYMBOL_Lexpr3 = 106,                   /* Lexpr3  */
  YYSYMBOL_OptLabel1 = 107,                /* OptLabel1  */
  YYSYMBOL_OptLabelList = 108,             /* OptLabelList  */
  YYSYMBOL_LabelName = 109,                /* LabelName  */
  YYSYMBOL_ListLabelName = 110,            /* ListLabelName  */
  YYSYMBOL_Range = 111,                    /* Range  */
  YYSYMBOL_LexprOption = 112,              /* LexprOption  */
  YYSYMBOL_AnyIdentifier = 113,            /* AnyIdentifier  */
  YYSYMBOL_PostCond = 114,                 /* PostCond  */
  YYSYMBOL_FullIdentifier = 115,           /* FullIdentifier  */
  YYSYMBOL_Identifier = 116,               /* Identifier  */
  YYSYMBOL_TypeSpecSimple = 117,           /* TypeSpecSimple  */
  YYSYMBOL_LogicPTreeAnnot = 118,          /* LogicPTreeAnnot  */
  YYSYMBOL_Annotation = 119,               /* Annotation  */
  YYSYMBOL_LoopAnnotStack = 120,           /* LoopAnnotStack  */
  YYSYMBOL_LoopAnnotOpt = 121,             /* LoopAnnotOpt  */
  YYSYMBOL_LoopInvariant = 122,            /* LoopInvariant  */
  YYSYMBOL_LoopVariant = 123,              /* LoopVariant  */
  YYSYMBOL_LoopEffects = 124,              /* LoopEffects  */
  YYSYMBOL_Variant = 125                   /* Variant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 107 "partial_bnfc_acsl_parser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, partial_bnfc_acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 276 "partial_bnfc_acsl_parser.tab.c"


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
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   249,   249,   250,   252,   254,   256,   258,   259,   261,
     262,   263,   265,   267,   269,   270,   272,   273,   275,   276,
     278,   279,   281,   283,   285,   286,   287,   288,   289,   290,
     292,   293,   295,   296,   298,   300,   301,   303,   304,   305,
     306,   307,   308,   310,   311,   312,   314,   315,   316,   318,
     320,   321,   323,   324,   326,   327,   329,   330,   332,   334,
     335,   337,   338,   339,   341,   342,   343,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   368,
     372,   373,   375,   377,   378,   380,   382,   383,   385,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   403,   408,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   444,
     446,   448,   449,   450,   452,   453,   455,   456,   457,   459,
     461,   463,   464
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
  "_BANGEQ", "_DAMP", "_LPAREN", "_RPAREN", "_STAR", "_PLUS", "_COMMA",
  "_MINUS", "_DDOT", "_SEMI", "_LT", "_LDARROW", "_SYMB_4", "_DEQ",
  "_SYMB_3", "_GT", "_GTEQ", "_LBRACK", "_SYMB_27", "_SYMB_28", "_SYMB_17",
  "_SYMB_25", "_SYMB_16", "_SYMB_1", "_SYMB_18", "_SYMB_2", "_SYMB_32",
  "_SYMB_36", "_SYMB_29", "_SYMB_35", "_SYMB_30", "_SYMB_24", "_SYMB_31",
  "_SYMB_26", "_RBRACK", "_DCARET", "_SYMB_40", "_KW_admit", "_KW_assigns",
  "_KW_boolean", "_KW_breaks", "_KW_char", "_KW_check", "_KW_continues",
  "_KW_double", "_KW_ensures", "_KW_exits", "_KW_float", "_KW_for",
  "_KW_int", "_KW_integer", "_KW_invariant", "_KW_long", "_KW_loop",
  "_KW_real", "_KW_requires", "_KW_returns", "_KW_short", "_KW_signed",
  "_KW_unsigned", "_KW_variant", "_KW_void", "_LBRACE", "_DBAR", "_RBRACE",
  "_STRING_", "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept", "Program",
  "Annot", "Code_Annot", "Contract", "Requires", "NERequires",
  "Terminates", "Decreases", "SimpleClauses", "NESimpleClauses", "Assigns",
  "Zones", "Behaviors", "CompleteOrDisjoint", "Lexpr", "ListLexpr",
  "Lexpr1", "LexprRelInner", "ListLexprRelInner", "Relation", "Lexpr2",
  "LexprBinder", "Binders", "TypeSpecOFTYPENAME", "BindersReentrance",
  "ListBindersReentrance", "VarSpec", "Stars", "ListStars", "VarSpec1",
  "ArraySize", "Lexpr3", "OptLabel1", "OptLabelList", "LabelName",
  "ListLabelName", "Range", "LexprOption", "AnyIdentifier", "PostCond",
  "FullIdentifier", "Identifier", "TypeSpecSimple", "LogicPTreeAnnot",
  "Annotation", "LoopAnnotStack", "LoopAnnotOpt", "LoopInvariant",
  "LoopVariant", "LoopEffects", "Variant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-116)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -35,   -38,    25,     2,    55,    24,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,    65,    65,    65,    -8,    55,     0,
      55,     4,    55,    55,   -12,    55,  -135,  -135,   259,  -135,
     259,   259,  -135,  -135,  -135,    61,  -135,  -135,  -135,     6,
    -135,  -135,  -135,  -135,   124,  -135,  -135,  -135,   321,   108,
    -135,  -135,  -135,    71,    94,  -135,  -135,  -135,  -135,    55,
     166,    55,   188,  -135,   140,  -135,   102,   138,   195,   198,
     173,  -135,   202,   161,   175,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,    15,  -135,   145,   186,   244,  -135,  -135,   189,
      -3,  -135,   197,   199,    55,   147,   211,  -135,    55,    64,
      55,    55,    55,    55,   125,   125,    55,    45,    55,    53,
     210,    64,   227,    64,  -135,    55,     4,  -135,   147,  -135,
    -135,  -135,    55,  -135,  -135,   168,  -135,  -135,  -135,    -5,
     169,  -135,  -135,    96,   171,    55,    -3,  -135,  -135,   221,
      -2,   209,  -135,    55,    55,   228,   234,   178,  -135,  -135,
      55,  -135,   193,   201,  -135,  -135,  -135,  -135,  -135,   155,
     155,   220,   218,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
      55,   264,   204,     4,  -135,   232,  -135,  -135,  -135,  -135,
    -135,  -135,    55,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,   252,  -135,  -135,  -135,   230,  -135,  -135,   231,  -135,
     252,   266,   275,  -135,   209,    49,   252,   252,  -135,   147,
    -135,   256,  -135,  -135,  -135,   335,  -135,  -135,  -135,  -135,
    -135,  -135,   273,  -135,  -135,  -135,  -135,  -135,  -135,   262,
    -135,  -135,  -135,   127,  -135,  -135,   250,  -135,  -135,  -135,
      53,  -135,    53,    83,    -3,  -135,  -135,  -135,  -135,  -135
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     0,     0,     0,     2,     4,     5,    12,
       8,     3,   149,   150,   154,   154,   154,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    70,    71,     0,    68,
       0,     0,    75,    86,    72,     0,    73,    67,    74,    90,
      78,    76,    77,   115,     0,    29,    32,    44,    43,    85,
     114,     1,    13,     0,     0,   155,   151,   153,   152,     0,
       0,     0,     0,    21,     0,    18,    30,    20,     0,   162,
       0,    45,    97,     0,     0,   120,   118,   121,   147,   146,
     124,   116,   134,   117,   128,     0,   127,   119,    50,     0,
       0,    51,     0,     0,     0,     0,     0,    89,     0,     7,
       0,     0,     0,     0,     0,     0,    96,     0,     0,    14,
       0,     7,     0,     7,   160,     0,     0,   156,     0,   159,
      87,    88,    96,   148,   138,   140,   131,   122,   125,   135,
     129,   123,   126,   136,   130,     0,     0,    58,    54,    59,
       0,    56,    61,     0,     0,     0,    93,     0,    92,    98,
       0,    27,     0,     0,     9,    25,    24,    28,    26,    79,
      80,    97,     0,    42,    37,    39,    41,    38,    40,    36,
       0,     0,     0,     0,   101,     0,   102,    99,   100,   103,
      22,    15,     0,   158,    11,   157,    10,    31,    19,    20,
     161,    97,    95,   143,   137,   141,   132,   139,   142,   133,
      47,     0,    49,    60,    57,    66,    46,    48,    83,     0,
      91,     0,    82,    81,    33,    43,    84,   111,   112,   109,
     110,   113,     0,   106,   107,   104,   105,   108,    23,     0,
     144,   145,    63,     0,    55,    64,     0,    65,    94,    69,
      14,     6,    14,    50,     0,    53,    62,    17,    16,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,  -135,  -135,    34,  -135,  -135,  -135,  -105,
    -135,   118,   181,  -135,  -135,    -4,   -62,   260,  -135,  -135,
    -135,   129,   270,   -21,    74,  -135,  -135,  -134,  -135,   165,
     170,  -135,   -61,  -135,  -135,  -135,   100,   206,   205,   216,
    -135,   -89,   -92,  -135,  -135,  -135,   315,   159,  -135,  -135,
    -135,  -135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,     9,    10,    52,   109,   180,
     181,    64,    65,   228,   241,    66,    67,    45,   169,   107,
     170,    46,    47,    89,    90,   234,   202,   138,   139,   140,
     141,   236,    48,    96,    97,   146,   147,    73,    74,   148,
     182,    49,    50,    91,    11,    12,    55,    56,    14,    15,
      16,    70
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   142,   201,   149,   136,   136,   137,     1,    24,    92,
      93,    25,     2,    28,    60,    30,    62,    31,    68,    69,
      17,    72,    18,     3,    51,     4,   149,    26,    27,    28,
      29,    30,   145,    31,    63,    32,    33,    34,    35,    36,
      37,    38,    39,   159,   160,    21,   171,   142,    59,   194,
     163,   142,   195,   187,   189,   110,    61,   112,    22,    24,
     164,   165,    25,   166,   123,   167,   168,    23,    94,   124,
      43,    43,   125,    95,    40,    41,    42,    43,    26,    27,
      28,    29,    30,    19,    31,    20,    32,    33,    34,    35,
      36,    37,    38,    39,  -115,   172,   173,  -115,   174,   245,
     175,   176,   161,   177,   178,  -115,   152,    53,    98,   215,
     249,   153,    54,   115,   179,   108,   237,   149,   191,   100,
     235,   101,    43,     3,     4,    40,    41,    42,    43,    17,
      98,   200,    25,   154,   136,   247,   137,   248,    99,   206,
     207,   100,   102,   101,   142,   184,   211,   186,    26,    27,
     197,    29,    19,   198,   114,   142,    32,    33,    34,    35,
      36,    37,    38,    39,   102,   104,   116,   105,    75,   121,
     103,    76,    98,    77,    57,    58,    78,   106,   229,    79,
     111,    80,    81,   100,    82,   101,    83,   119,   122,    84,
      85,    86,   103,    87,    98,    40,    41,    42,    43,   126,
     243,    98,   113,   135,    98,   100,   102,   101,    98,   117,
     120,   143,   100,   144,   101,   100,    98,   101,   150,   100,
      43,   101,   193,   196,   183,   199,    98,   100,   102,   101,
     137,   205,   127,    98,   103,   102,   208,   100,   102,   101,
     128,   185,   102,   129,   100,   209,   101,   210,   130,   217,
     102,   118,   218,    18,   219,   220,   103,   213,    98,   212,
     102,    20,    98,   103,   239,   221,   103,   102,    98,   100,
     103,   101,   216,   100,   232,   101,   242,   223,   103,   100,
     224,   101,   225,   226,   230,   231,   233,   240,   103,   246,
     131,   222,   102,   227,    71,   103,   102,   188,   132,   214,
      75,   133,   102,    76,   203,    77,   134,   244,    78,   238,
     204,    79,   162,    80,    81,    13,    82,     0,    83,     0,
     103,    84,    85,    86,   103,    87,   -35,   192,     0,     0,
     103,   104,    88,   105,   190,     0,   -35,   -35,     0,   -35,
     -34,   -35,   -35,   106,     0,   104,     0,   105,     0,     0,
     -34,   -34,     0,   -34,     0,   -34,   -34,   106,   151,     0,
     155,   156,   157,   158
};

static const yytype_int16 yycheck[] =
{
       4,    90,   136,    95,     7,     7,     9,    42,     4,    30,
      31,     7,    47,    25,    18,    27,    20,    29,    22,    23,
      58,    25,    60,    58,     0,    60,   118,    23,    24,    25,
      26,    27,    94,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   104,   105,    43,   108,   136,    56,    54,
       5,   140,    57,   115,   116,    59,    56,    61,    56,     4,
      15,    16,     7,    18,    49,    20,    21,    65,     7,    54,
      73,    73,    57,    67,    70,    71,    72,    73,    23,    24,
      25,    26,    27,    58,    29,    60,    31,    32,    33,    34,
      35,    36,    37,    38,    11,    42,    43,    14,    45,   233,
      47,    48,   106,    50,    51,    22,    42,    42,     6,   170,
     244,    47,    47,    11,    61,     7,   205,   209,   122,    17,
      71,    19,    73,    58,    60,    70,    71,    72,    73,    58,
       6,   135,     7,    99,     7,   240,     9,   242,    14,   143,
     144,    17,    40,    19,   233,   111,   150,   113,    23,    24,
      54,    26,    58,    57,    14,   244,    31,    32,    33,    34,
      35,    36,    37,    38,    40,    10,    28,    12,    41,     8,
      68,    44,     6,    46,    15,    16,    49,    22,   182,    52,
      14,    54,    55,    17,    57,    19,    59,    14,    13,    62,
      63,    64,    68,    66,     6,    70,    71,    72,    73,    54,
      73,     6,    14,    14,     6,    17,    40,    19,     6,    14,
       8,    14,    17,    14,    19,    17,     6,    19,     7,    17,
      73,    19,    54,    54,    14,    54,     6,    17,    40,    19,
       9,    22,    46,     6,    68,    40,     8,    17,    40,    19,
      54,    14,    40,    57,    17,    11,    19,    69,    62,    45,
      40,    53,    48,    60,    50,    51,    68,    39,     6,    39,
      40,    60,     6,    68,     8,    61,    68,    40,     6,    17,
      68,    19,     8,    17,     8,    19,    14,    45,    68,    17,
      48,    19,    50,    51,    54,    54,    11,    14,    68,    39,
      46,   173,    40,    61,    24,    68,    40,   116,    54,   170,
      41,    57,    40,    44,   139,    46,    62,   233,    49,   209,
     140,    52,   106,    54,    55,     0,    57,    -1,    59,    -1,
      68,    62,    63,    64,    68,    66,     5,   122,    -1,    -1,
      68,    10,    73,    12,   118,    -1,    15,    16,    -1,    18,
       5,    20,    21,    22,    -1,    10,    -1,    12,    -1,    -1,
      15,    16,    -1,    18,    -1,    20,    21,    22,    98,    -1,
     100,   101,   102,   103
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    47,    58,    60,    75,    76,    77,    78,    79,
      80,   118,   119,   120,   122,   123,   124,    58,    60,    58,
      60,    43,    56,    65,     4,     7,    23,    24,    25,    26,
      27,    29,    31,    32,    33,    34,    35,    36,    37,    38,
      70,    71,    72,    73,    89,    91,    95,    96,   106,   115,
     116,     0,    81,    42,    47,   120,   121,   121,   121,    56,
      89,    56,    89,    30,    85,    86,    89,    90,    89,    89,
     125,    96,    89,   111,   112,    41,    44,    46,    49,    52,
      54,    55,    57,    59,    62,    63,    64,    66,    73,    97,
      98,   117,    97,    97,     7,    67,   107,   108,     6,    14,
      17,    19,    40,    68,    10,    12,    22,    93,     7,    82,
      89,    14,    89,    14,    14,    11,    28,    14,    53,    14,
       8,     8,    13,    49,    54,    57,    54,    46,    54,    57,
      62,    46,    54,    57,    62,    14,     7,     9,   101,   102,
     103,   104,   115,    14,    14,    90,   109,   110,   113,   116,
       7,    91,    42,    47,    79,    91,    91,    91,    91,   106,
     106,    89,   111,     5,    15,    16,    18,    20,    21,    92,
      94,    90,    42,    43,    45,    47,    48,    50,    51,    61,
      83,    84,   114,    14,    79,    14,    79,    90,    86,    90,
     113,    89,   112,    54,    54,    57,    54,    54,    57,    54,
      89,   101,   100,   103,   104,    22,    89,    89,     8,    11,
      69,    89,    39,    39,    95,   106,     8,    45,    48,    50,
      51,    61,    85,    45,    48,    50,    51,    61,    87,    89,
      54,    54,     8,    11,    99,    71,   105,   115,   110,     8,
      14,    88,    14,    73,    98,   101,    39,    83,    83,   101
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    75,    76,    77,    78,    79,    79,    80,
      80,    80,    81,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    88,    89,    89,    89,    89,    89,    89,
      90,    90,    91,    91,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    96,    96,    96,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   103,
     103,   104,   104,   104,   105,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   107,
     108,   108,   109,   110,   110,   111,   112,   112,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   115,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     119,   120,   120,   120,   121,   121,   122,   122,   122,   123,
     124,   125,   125
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     6,     0,     1,     4,
       5,     5,     0,     0,     0,     1,     4,     4,     1,     3,
       1,     1,     0,     0,     3,     3,     3,     3,     3,     1,
       1,     3,     1,     4,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     4,     4,     3,
       1,     1,     3,     2,     0,     2,     1,     2,     1,     1,
       2,     1,     4,     3,     1,     1,     0,     1,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     4,     4,     4,     4,     1,     1,     3,     3,     1,
       0,     3,     1,     1,     3,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     1,     1,     2,
       2,     2,     3,     3,     1,     2,     2,     3,     2,     3,
       2,     3,     3,     3,     4,     4,     1,     1,     2,     1,
       1,     2,     2,     2,     0,     1,     4,     5,     5,     4,
       4,     3,     1
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
#line 249 "partial_bnfc_acsl_parser.y"
                { (yyval.program_) = new partial_bnfc_acsl::AnnotProgram((yyvsp[0].annot_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1576 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 3: /* Program: LogicPTreeAnnot  */
#line 250 "partial_bnfc_acsl_parser.y"
                    { (yyval.program_) = new partial_bnfc_acsl::AnnotationProgram((yyvsp[0].logicptreeannot_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1582 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 4: /* Annot: Code_Annot  */
#line 252 "partial_bnfc_acsl_parser.y"
                   { (yyval.annot_) = new partial_bnfc_acsl::CodeAnnot((yyvsp[0].code_annot_)); (yyval.annot_)->line_number = (yyloc).first_line; (yyval.annot_)->char_number = (yyloc).first_column; result->annot_ = (yyval.annot_); }
#line 1588 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 5: /* Code_Annot: Contract  */
#line 254 "partial_bnfc_acsl_parser.y"
                      { (yyval.code_annot_) = new partial_bnfc_acsl::CodeAnnotContract((yyvsp[0].contract_)); (yyval.code_annot_)->line_number = (yyloc).first_line; (yyval.code_annot_)->char_number = (yyloc).first_column; result->code_annot_ = (yyval.code_annot_); }
#line 1594 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 6: /* Contract: Requires Terminates Decreases SimpleClauses Behaviors CompleteOrDisjoint  */
#line 256 "partial_bnfc_acsl_parser.y"
                                                                                    { (yyval.contract_) = new partial_bnfc_acsl::SimpleContract((yyvsp[-5].requires_), (yyvsp[-4].terminates_), (yyvsp[-3].decreases_), (yyvsp[-2].simpleclauses_), (yyvsp[-1].behaviors_), (yyvsp[0].completeordisjoint_)); (yyval.contract_)->line_number = (yyloc).first_line; (yyval.contract_)->char_number = (yyloc).first_column; result->contract_ = (yyval.contract_); }
#line 1600 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 7: /* Requires: %empty  */
#line 258 "partial_bnfc_acsl_parser.y"
                       { (yyval.requires_) = new partial_bnfc_acsl::NoRequires(); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 1606 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 8: /* Requires: NERequires  */
#line 259 "partial_bnfc_acsl_parser.y"
               { (yyval.requires_) = new partial_bnfc_acsl::SomeRequires((yyvsp[0].nerequires_)); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 1612 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 9: /* NERequires: _KW_requires Lexpr _SEMI Requires  */
#line 261 "partial_bnfc_acsl_parser.y"
                                               { (yyval.nerequires_) = new partial_bnfc_acsl::SimpleRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1618 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 10: /* NERequires: _KW_check _KW_requires Lexpr _SEMI Requires  */
#line 262 "partial_bnfc_acsl_parser.y"
                                                { (yyval.nerequires_) = new partial_bnfc_acsl::CheckRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1624 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 11: /* NERequires: _KW_admit _KW_requires Lexpr _SEMI Requires  */
#line 263 "partial_bnfc_acsl_parser.y"
                                                { (yyval.nerequires_) = new partial_bnfc_acsl::AdimtRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1630 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 12: /* Terminates: %empty  */
#line 265 "partial_bnfc_acsl_parser.y"
                         { (yyval.terminates_) = new partial_bnfc_acsl::NoTerminate(); (yyval.terminates_)->line_number = (yyloc).first_line; (yyval.terminates_)->char_number = (yyloc).first_column; result->terminates_ = (yyval.terminates_); }
#line 1636 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 13: /* Decreases: %empty  */
#line 267 "partial_bnfc_acsl_parser.y"
                        { (yyval.decreases_) = new partial_bnfc_acsl::NoDecreases(); (yyval.decreases_)->line_number = (yyloc).first_line; (yyval.decreases_)->char_number = (yyloc).first_column; result->decreases_ = (yyval.decreases_); }
#line 1642 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 14: /* SimpleClauses: %empty  */
#line 269 "partial_bnfc_acsl_parser.y"
                            { (yyval.simpleclauses_) = new partial_bnfc_acsl::NoSimpleClauses(); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 1648 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 15: /* SimpleClauses: NESimpleClauses  */
#line 270 "partial_bnfc_acsl_parser.y"
                    { (yyval.simpleclauses_) = new partial_bnfc_acsl::SomeSimpleClauses((yyvsp[0].nesimpleclauses_)); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 1654 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 16: /* NESimpleClauses: PostCond Lexpr _SEMI SimpleClauses  */
#line 272 "partial_bnfc_acsl_parser.y"
                                                     { (yyval.nesimpleclauses_) = new partial_bnfc_acsl::PostCondSimpleClauses((yyvsp[-3].postcond_), (yyvsp[-2].lexpr_), (yyvsp[0].simpleclauses_)); (yyval.nesimpleclauses_)->line_number = (yyloc).first_line; (yyval.nesimpleclauses_)->char_number = (yyloc).first_column; result->nesimpleclauses_ = (yyval.nesimpleclauses_); }
#line 1660 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 17: /* NESimpleClauses: _KW_assigns Assigns _SEMI SimpleClauses  */
#line 273 "partial_bnfc_acsl_parser.y"
                                            { (yyval.nesimpleclauses_) = new partial_bnfc_acsl::AssignsSimpleClauses((yyvsp[-2].assigns_), (yyvsp[0].simpleclauses_)); (yyval.nesimpleclauses_)->line_number = (yyloc).first_line; (yyval.nesimpleclauses_)->char_number = (yyloc).first_column; result->nesimpleclauses_ = (yyval.nesimpleclauses_); }
#line 1666 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 18: /* Assigns: Zones  */
#line 275 "partial_bnfc_acsl_parser.y"
                { (yyval.assigns_) = new partial_bnfc_acsl::AssignZone((yyvsp[0].zones_)); (yyval.assigns_)->line_number = (yyloc).first_line; (yyval.assigns_)->char_number = (yyloc).first_column; result->assigns_ = (yyval.assigns_); }
#line 1672 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 19: /* Assigns: ListLexpr _SYMB_1 Zones  */
#line 276 "partial_bnfc_acsl_parser.y"
                            { std::reverse((yyvsp[-2].listlexpr_)->begin(),(yyvsp[-2].listlexpr_)->end()) ;(yyval.assigns_) = new partial_bnfc_acsl::AssignZoneFromZone((yyvsp[-2].listlexpr_), (yyvsp[0].zones_)); (yyval.assigns_)->line_number = (yyloc).first_line; (yyval.assigns_)->char_number = (yyloc).first_column; result->assigns_ = (yyval.assigns_); }
#line 1678 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 20: /* Zones: ListLexpr  */
#line 278 "partial_bnfc_acsl_parser.y"
                  { std::reverse((yyvsp[0].listlexpr_)->begin(),(yyvsp[0].listlexpr_)->end()) ;(yyval.zones_) = new partial_bnfc_acsl::SomeZone((yyvsp[0].listlexpr_)); (yyval.zones_)->line_number = (yyloc).first_line; (yyval.zones_)->char_number = (yyloc).first_column; result->zones_ = (yyval.zones_); }
#line 1684 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 21: /* Zones: _SYMB_2  */
#line 279 "partial_bnfc_acsl_parser.y"
            { (yyval.zones_) = new partial_bnfc_acsl::NoZone(); (yyval.zones_)->line_number = (yyloc).first_line; (yyval.zones_)->char_number = (yyloc).first_column; result->zones_ = (yyval.zones_); }
#line 1690 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 22: /* Behaviors: %empty  */
#line 281 "partial_bnfc_acsl_parser.y"
                        { (yyval.behaviors_) = new partial_bnfc_acsl::NoBehaviors(); (yyval.behaviors_)->line_number = (yyloc).first_line; (yyval.behaviors_)->char_number = (yyloc).first_column; result->behaviors_ = (yyval.behaviors_); }
#line 1696 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 23: /* CompleteOrDisjoint: %empty  */
#line 283 "partial_bnfc_acsl_parser.y"
                                 { (yyval.completeordisjoint_) = new partial_bnfc_acsl::NoComplDisj(); (yyval.completeordisjoint_)->line_number = (yyloc).first_line; (yyval.completeordisjoint_)->char_number = (yyloc).first_column; result->completeordisjoint_ = (yyval.completeordisjoint_); }
#line 1702 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 24: /* Lexpr: Lexpr _SYMB_3 Lexpr1  */
#line 285 "partial_bnfc_acsl_parser.y"
                             { (yyval.lexpr_) = new partial_bnfc_acsl::ImplLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1708 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 25: /* Lexpr: Lexpr _SYMB_4 Lexpr1  */
#line 286 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::IffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1714 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 26: /* Lexpr: Lexpr _DBAR Lexpr1  */
#line 287 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::OrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1720 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 27: /* Lexpr: Lexpr _DAMP Lexpr1  */
#line 288 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::AndLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1726 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 28: /* Lexpr: Lexpr _DCARET Lexpr1  */
#line 289 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::HatHatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1732 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 29: /* Lexpr: Lexpr1  */
#line 290 "partial_bnfc_acsl_parser.y"
           { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1738 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 30: /* ListLexpr: Lexpr  */
#line 292 "partial_bnfc_acsl_parser.y"
                  { (yyval.listlexpr_) = new partial_bnfc_acsl::ListLexpr(); (yyval.listlexpr_)->push_back((yyvsp[0].lexpr_)); result->listlexpr_ = (yyval.listlexpr_); }
#line 1744 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 31: /* ListLexpr: Lexpr _COMMA ListLexpr  */
#line 293 "partial_bnfc_acsl_parser.y"
                           { (yyvsp[0].listlexpr_)->push_back((yyvsp[-2].lexpr_)); (yyval.listlexpr_) = (yyvsp[0].listlexpr_); result->listlexpr_ = (yyval.listlexpr_); }
#line 1750 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 32: /* Lexpr1: Lexpr2  */
#line 295 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1756 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 33: /* Lexpr1: Lexpr3 ListLexprRelInner Relation Lexpr2  */
#line 296 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::RelationLexpr((yyvsp[-3].lexpr_), (yyvsp[-2].listlexprrelinner_), (yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1762 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 34: /* LexprRelInner: Relation Lexpr3  */
#line 298 "partial_bnfc_acsl_parser.y"
                                { (yyval.lexprrelinner_) = new partial_bnfc_acsl::RelInnerLexpr((yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexprrelinner_)->line_number = (yyloc).first_line; (yyval.lexprrelinner_)->char_number = (yyloc).first_column; result->lexprrelinner_ = (yyval.lexprrelinner_); }
#line 1768 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 35: /* ListLexprRelInner: %empty  */
#line 300 "partial_bnfc_acsl_parser.y"
                                { (yyval.listlexprrelinner_) = new partial_bnfc_acsl::ListLexprRelInner(); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 1774 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 36: /* ListLexprRelInner: ListLexprRelInner LexprRelInner  */
#line 301 "partial_bnfc_acsl_parser.y"
                                    { (yyvsp[-1].listlexprrelinner_)->push_back((yyvsp[0].lexprrelinner_)); (yyval.listlexprrelinner_) = (yyvsp[-1].listlexprrelinner_); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 1780 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 37: /* Relation: _LT  */
#line 303 "partial_bnfc_acsl_parser.y"
               { (yyval.relation_) = new partial_bnfc_acsl::LessRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1786 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 38: /* Relation: _GT  */
#line 304 "partial_bnfc_acsl_parser.y"
        { (yyval.relation_) = new partial_bnfc_acsl::GreaterRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1792 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 39: /* Relation: _LDARROW  */
#line 305 "partial_bnfc_acsl_parser.y"
             { (yyval.relation_) = new partial_bnfc_acsl::LessEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1798 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 40: /* Relation: _GTEQ  */
#line 306 "partial_bnfc_acsl_parser.y"
          { (yyval.relation_) = new partial_bnfc_acsl::GreaterEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1804 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 41: /* Relation: _DEQ  */
#line 307 "partial_bnfc_acsl_parser.y"
         { (yyval.relation_) = new partial_bnfc_acsl::EqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1810 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 42: /* Relation: _BANGEQ  */
#line 308 "partial_bnfc_acsl_parser.y"
            { (yyval.relation_) = new partial_bnfc_acsl::NotEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1816 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 43: /* Lexpr2: Lexpr3  */
#line 310 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1822 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 44: /* Lexpr2: LexprBinder  */
#line 311 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = new partial_bnfc_acsl::BinderLexpr((yyvsp[0].lexprbinder_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1828 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 45: /* Lexpr2: _BANG LexprBinder  */
#line 312 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::NotBinderLexpr((yyvsp[0].lexprbinder_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1834 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 46: /* LexprBinder: _SYMB_16 Binders _SEMI Lexpr  */
#line 314 "partial_bnfc_acsl_parser.y"
                                           { (yyval.lexprbinder_) = new partial_bnfc_acsl::ForallBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 1840 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 47: /* LexprBinder: _SYMB_17 Binders _SEMI Lexpr  */
#line 315 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexprbinder_) = new partial_bnfc_acsl::ExistBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 1846 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 48: /* LexprBinder: _SYMB_18 Binders _SEMI Lexpr  */
#line 316 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexprbinder_) = new partial_bnfc_acsl::LambdaBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 1852 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 49: /* Binders: TypeSpecOFTYPENAME VarSpec ListBindersReentrance  */
#line 318 "partial_bnfc_acsl_parser.y"
                                                           { (yyval.binders_) = new partial_bnfc_acsl::TheBinders((yyvsp[-2].typespecoftypename_), (yyvsp[-1].varspec_), (yyvsp[0].listbindersreentrance_)); (yyval.binders_)->line_number = (yyloc).first_line; (yyval.binders_)->char_number = (yyloc).first_column; result->binders_ = (yyval.binders_); }
#line 1858 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 50: /* TypeSpecOFTYPENAME: _IDENT_  */
#line 320 "partial_bnfc_acsl_parser.y"
                             { (yyval.typespecoftypename_) = new partial_bnfc_acsl::TypeSpecTYPENAME((yyvsp[0]._string)); (yyval.typespecoftypename_)->line_number = (yyloc).first_line; (yyval.typespecoftypename_)->char_number = (yyloc).first_column; result->typespecoftypename_ = (yyval.typespecoftypename_); }
#line 1864 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 51: /* TypeSpecOFTYPENAME: TypeSpecSimple  */
#line 321 "partial_bnfc_acsl_parser.y"
                   { (yyval.typespecoftypename_) = new partial_bnfc_acsl::TypeSpecSimpleFromTypenameTypeSpec((yyvsp[0].typespecsimple_)); (yyval.typespecoftypename_)->line_number = (yyloc).first_line; (yyval.typespecoftypename_)->char_number = (yyloc).first_column; result->typespecoftypename_ = (yyval.typespecoftypename_); }
#line 1870 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 52: /* BindersReentrance: _COMMA TypeSpecOFTYPENAME VarSpec  */
#line 323 "partial_bnfc_acsl_parser.y"
                                                      { (yyval.bindersreentrance_) = new partial_bnfc_acsl::BindersReentranceDeclSpec((yyvsp[-1].typespecoftypename_), (yyvsp[0].varspec_)); (yyval.bindersreentrance_)->line_number = (yyloc).first_line; (yyval.bindersreentrance_)->char_number = (yyloc).first_column; result->bindersreentrance_ = (yyval.bindersreentrance_); }
#line 1876 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 53: /* BindersReentrance: _COMMA VarSpec  */
#line 324 "partial_bnfc_acsl_parser.y"
                   { (yyval.bindersreentrance_) = new partial_bnfc_acsl::BindersReentranceVarSpec((yyvsp[0].varspec_)); (yyval.bindersreentrance_)->line_number = (yyloc).first_line; (yyval.bindersreentrance_)->char_number = (yyloc).first_column; result->bindersreentrance_ = (yyval.bindersreentrance_); }
#line 1882 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 54: /* ListBindersReentrance: %empty  */
#line 326 "partial_bnfc_acsl_parser.y"
                                    { (yyval.listbindersreentrance_) = new partial_bnfc_acsl::ListBindersReentrance(); result->listbindersreentrance_ = (yyval.listbindersreentrance_); }
#line 1888 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 55: /* ListBindersReentrance: ListBindersReentrance BindersReentrance  */
#line 327 "partial_bnfc_acsl_parser.y"
                                            { (yyvsp[-1].listbindersreentrance_)->push_back((yyvsp[0].bindersreentrance_)); (yyval.listbindersreentrance_) = (yyvsp[-1].listbindersreentrance_); result->listbindersreentrance_ = (yyval.listbindersreentrance_); }
#line 1894 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 56: /* VarSpec: VarSpec1  */
#line 329 "partial_bnfc_acsl_parser.y"
                   { (yyval.varspec_) = (yyvsp[0].varspec_); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 1900 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 57: /* VarSpec: ListStars VarSpec1  */
#line 330 "partial_bnfc_acsl_parser.y"
                       { std::reverse((yyvsp[-1].liststars_)->begin(),(yyvsp[-1].liststars_)->end()) ;(yyval.varspec_) = new partial_bnfc_acsl::StartVarSpec((yyvsp[-1].liststars_), (yyvsp[0].varspec_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 1906 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 58: /* Stars: _STAR  */
#line 332 "partial_bnfc_acsl_parser.y"
              { (yyval.stars_) = new partial_bnfc_acsl::Star(); (yyval.stars_)->line_number = (yyloc).first_line; (yyval.stars_)->char_number = (yyloc).first_column; result->stars_ = (yyval.stars_); }
#line 1912 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 59: /* ListStars: Stars  */
#line 334 "partial_bnfc_acsl_parser.y"
                  { (yyval.liststars_) = new partial_bnfc_acsl::ListStars(); (yyval.liststars_)->push_back((yyvsp[0].stars_)); result->liststars_ = (yyval.liststars_); }
#line 1918 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 60: /* ListStars: Stars ListStars  */
#line 335 "partial_bnfc_acsl_parser.y"
                    { (yyvsp[0].liststars_)->push_back((yyvsp[-1].stars_)); (yyval.liststars_) = (yyvsp[0].liststars_); result->liststars_ = (yyval.liststars_); }
#line 1924 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 61: /* VarSpec1: FullIdentifier  */
#line 337 "partial_bnfc_acsl_parser.y"
                          { (yyval.varspec_) = new partial_bnfc_acsl::SimpleSpec((yyvsp[0].fullidentifier_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 1930 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 62: /* VarSpec1: VarSpec1 _LBRACK ArraySize _RBRACK  */
#line 338 "partial_bnfc_acsl_parser.y"
                                       { (yyval.varspec_) = new partial_bnfc_acsl::ArraySpec((yyvsp[-3].varspec_), (yyvsp[-1].arraysize_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 1936 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 63: /* VarSpec1: _LPAREN VarSpec _RPAREN  */
#line 339 "partial_bnfc_acsl_parser.y"
                            { (yyval.varspec_) = (yyvsp[-1].varspec_); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 1942 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 64: /* ArraySize: _INTEGER_  */
#line 341 "partial_bnfc_acsl_parser.y"
                      { (yyval.arraysize_) = new partial_bnfc_acsl::IntConstArraySize((yyvsp[0]._int)); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 1948 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 65: /* ArraySize: FullIdentifier  */
#line 342 "partial_bnfc_acsl_parser.y"
                   { (yyval.arraysize_) = new partial_bnfc_acsl::SomeArraySize((yyvsp[0].fullidentifier_)); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 1954 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 66: /* ArraySize: %empty  */
#line 343 "partial_bnfc_acsl_parser.y"
                { (yyval.arraysize_) = new partial_bnfc_acsl::NoSize(); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 1960 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 67: /* Lexpr3: _SYMB_24  */
#line 345 "partial_bnfc_acsl_parser.y"
                  { (yyval.lexpr_) = new partial_bnfc_acsl::TrueLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1966 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 68: /* Lexpr3: _SYMB_25  */
#line 346 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::FalseLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1972 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 69: /* Lexpr3: _SYMB_26 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 347 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::ValidLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1978 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 70: /* Lexpr3: _SYMB_27  */
#line 348 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::AutomaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1984 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 71: /* Lexpr3: _SYMB_28  */
#line 349 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::DynamicLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1990 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 72: /* Lexpr3: _SYMB_29  */
#line 350 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::RegisterLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1996 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 73: /* Lexpr3: _SYMB_30  */
#line 351 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::StaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2002 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 74: /* Lexpr3: _SYMB_31  */
#line 352 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::UnallocatedLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2008 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 75: /* Lexpr3: _SYMB_32  */
#line 353 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::NullLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2014 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 76: /* Lexpr3: _INTEGER_  */
#line 354 "partial_bnfc_acsl_parser.y"
              { (yyval.lexpr_) = new partial_bnfc_acsl::LexprIntConst((yyvsp[0]._int)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2020 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 77: /* Lexpr3: _DOUBLE_  */
#line 355 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::LexprFloatConst((yyvsp[0]._double)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2026 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 78: /* Lexpr3: _STRING_  */
#line 356 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::LexprStringConst((yyvsp[0]._string)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2032 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 79: /* Lexpr3: Lexpr3 _PLUS Lexpr3  */
#line 357 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::AddLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2038 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 80: /* Lexpr3: Lexpr3 _MINUS Lexpr3  */
#line 358 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::SubtrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2044 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 81: /* Lexpr3: Lexpr3 _LBRACK Range _RBRACK  */
#line 359 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexpr_) = new partial_bnfc_acsl::SquaresRangeLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].range_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2050 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 82: /* Lexpr3: Lexpr3 _LBRACK Lexpr _RBRACK  */
#line 360 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexpr_) = new partial_bnfc_acsl::SquaresLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2056 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 83: /* Lexpr3: _SYMB_35 _LPAREN ListLexpr _RPAREN  */
#line 361 "partial_bnfc_acsl_parser.y"
                                       { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new partial_bnfc_acsl::SeparatedLexpr((yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2062 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 84: /* Lexpr3: FullIdentifier _LPAREN ListLexpr _RPAREN  */
#line 362 "partial_bnfc_acsl_parser.y"
                                             { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new partial_bnfc_acsl::FullIdParenLexpr((yyvsp[-3].fullidentifier_), (yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2068 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 85: /* Lexpr3: FullIdentifier  */
#line 363 "partial_bnfc_acsl_parser.y"
                   { (yyval.lexpr_) = new partial_bnfc_acsl::FullId((yyvsp[0].fullidentifier_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2074 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 86: /* Lexpr3: _SYMB_36  */
#line 364 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::PiLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2080 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 87: /* Lexpr3: _LPAREN Lexpr _RPAREN  */
#line 365 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = (yyvsp[-1].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2086 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 88: /* Lexpr3: _LPAREN Range _RPAREN  */
#line 366 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = new partial_bnfc_acsl::ParenRangeLexpr((yyvsp[-1].range_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2092 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 89: /* OptLabel1: OptLabelList  */
#line 368 "partial_bnfc_acsl_parser.y"
                         { (yyval.optlabel_) = new partial_bnfc_acsl::OptLabelOne((yyvsp[0].optlabellist_)); (yyval.optlabel_)->line_number = (yyloc).first_line; (yyval.optlabel_)->char_number = (yyloc).first_column; result->optlabel_ = (yyval.optlabel_); }
#line 2098 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 90: /* OptLabelList: %empty  */
#line 372 "partial_bnfc_acsl_parser.y"
                           { (yyval.optlabellist_) = new partial_bnfc_acsl::NoLableList(); (yyval.optlabellist_)->line_number = (yyloc).first_line; (yyval.optlabellist_)->char_number = (yyloc).first_column; result->optlabellist_ = (yyval.optlabellist_); }
#line 2104 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 91: /* OptLabelList: _LBRACE ListLabelName _RBRACE  */
#line 373 "partial_bnfc_acsl_parser.y"
                                  { std::reverse((yyvsp[-1].listlabelname_)->begin(),(yyvsp[-1].listlabelname_)->end()) ;(yyval.optlabellist_) = new partial_bnfc_acsl::LableList((yyvsp[-1].listlabelname_)); (yyval.optlabellist_)->line_number = (yyloc).first_line; (yyval.optlabellist_)->char_number = (yyloc).first_column; result->optlabellist_ = (yyval.optlabellist_); }
#line 2110 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 92: /* LabelName: AnyIdentifier  */
#line 375 "partial_bnfc_acsl_parser.y"
                          { (yyval.labelname_) = new partial_bnfc_acsl::LableName((yyvsp[0].anyidentifier_)); (yyval.labelname_)->line_number = (yyloc).first_line; (yyval.labelname_)->char_number = (yyloc).first_column; result->labelname_ = (yyval.labelname_); }
#line 2116 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 93: /* ListLabelName: LabelName  */
#line 377 "partial_bnfc_acsl_parser.y"
                          { (yyval.listlabelname_) = new partial_bnfc_acsl::ListLabelName(); (yyval.listlabelname_)->push_back((yyvsp[0].labelname_)); result->listlabelname_ = (yyval.listlabelname_); }
#line 2122 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 94: /* ListLabelName: LabelName _COMMA ListLabelName  */
#line 378 "partial_bnfc_acsl_parser.y"
                                   { (yyvsp[0].listlabelname_)->push_back((yyvsp[-2].labelname_)); (yyval.listlabelname_) = (yyvsp[0].listlabelname_); result->listlabelname_ = (yyval.listlabelname_); }
#line 2128 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 95: /* Range: LexprOption _DDOT LexprOption  */
#line 380 "partial_bnfc_acsl_parser.y"
                                      { (yyval.range_) = new partial_bnfc_acsl::LexprRange((yyvsp[-2].lexproption_), (yyvsp[0].lexproption_)); (yyval.range_)->line_number = (yyloc).first_line; (yyval.range_)->char_number = (yyloc).first_column; result->range_ = (yyval.range_); }
#line 2134 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 96: /* LexprOption: %empty  */
#line 382 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexproption_) = new partial_bnfc_acsl::NoLexprOption(); (yyval.lexproption_)->line_number = (yyloc).first_line; (yyval.lexproption_)->char_number = (yyloc).first_column; result->lexproption_ = (yyval.lexproption_); }
#line 2140 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 97: /* LexprOption: Lexpr  */
#line 383 "partial_bnfc_acsl_parser.y"
          { (yyval.lexproption_) = new partial_bnfc_acsl::SomeLexprOption((yyvsp[0].lexpr_)); (yyval.lexproption_)->line_number = (yyloc).first_line; (yyval.lexproption_)->char_number = (yyloc).first_column; result->lexproption_ = (yyval.lexproption_); }
#line 2146 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 98: /* AnyIdentifier: Identifier  */
#line 385 "partial_bnfc_acsl_parser.y"
                           { (yyval.anyidentifier_) = new partial_bnfc_acsl::SimpleIdentifierAny((yyvsp[0].identifier_)); (yyval.anyidentifier_)->line_number = (yyloc).first_line; (yyval.anyidentifier_)->char_number = (yyloc).first_column; result->anyidentifier_ = (yyval.anyidentifier_); }
#line 2152 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 99: /* PostCond: _KW_ensures  */
#line 387 "partial_bnfc_acsl_parser.y"
                       { (yyval.postcond_) = new partial_bnfc_acsl::EnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2158 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 100: /* PostCond: _KW_exits  */
#line 388 "partial_bnfc_acsl_parser.y"
              { (yyval.postcond_) = new partial_bnfc_acsl::ExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2164 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 101: /* PostCond: _KW_breaks  */
#line 389 "partial_bnfc_acsl_parser.y"
               { (yyval.postcond_) = new partial_bnfc_acsl::BreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2170 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 102: /* PostCond: _KW_continues  */
#line 390 "partial_bnfc_acsl_parser.y"
                  { (yyval.postcond_) = new partial_bnfc_acsl::ContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2176 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 103: /* PostCond: _KW_returns  */
#line 391 "partial_bnfc_acsl_parser.y"
                { (yyval.postcond_) = new partial_bnfc_acsl::ReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2182 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 104: /* PostCond: _KW_check _KW_ensures  */
#line 392 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::CheckEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2188 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 105: /* PostCond: _KW_check _KW_exits  */
#line 393 "partial_bnfc_acsl_parser.y"
                        { (yyval.postcond_) = new partial_bnfc_acsl::CheckExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2194 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 106: /* PostCond: _KW_check _KW_breaks  */
#line 394 "partial_bnfc_acsl_parser.y"
                         { (yyval.postcond_) = new partial_bnfc_acsl::CheckBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2200 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 107: /* PostCond: _KW_check _KW_continues  */
#line 395 "partial_bnfc_acsl_parser.y"
                            { (yyval.postcond_) = new partial_bnfc_acsl::CheckContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2206 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 108: /* PostCond: _KW_check _KW_returns  */
#line 396 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::CheckReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2212 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 109: /* PostCond: _KW_admit _KW_ensures  */
#line 397 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::AdmitEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2218 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 110: /* PostCond: _KW_admit _KW_exits  */
#line 398 "partial_bnfc_acsl_parser.y"
                        { (yyval.postcond_) = new partial_bnfc_acsl::AdmitExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2224 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 111: /* PostCond: _KW_admit _KW_breaks  */
#line 399 "partial_bnfc_acsl_parser.y"
                         { (yyval.postcond_) = new partial_bnfc_acsl::AdmitBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2230 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 112: /* PostCond: _KW_admit _KW_continues  */
#line 400 "partial_bnfc_acsl_parser.y"
                            { (yyval.postcond_) = new partial_bnfc_acsl::AdmitContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2236 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 113: /* PostCond: _KW_admit _KW_returns  */
#line 401 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::AdmitReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2242 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 114: /* FullIdentifier: Identifier  */
#line 403 "partial_bnfc_acsl_parser.y"
                            { (yyval.fullidentifier_) = new partial_bnfc_acsl::SimpleIdentifierFull((yyvsp[0].identifier_)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2248 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 115: /* Identifier: _IDENT_  */
#line 408 "partial_bnfc_acsl_parser.y"
                     { (yyval.identifier_) = new partial_bnfc_acsl::IdentifierIdent((yyvsp[0]._string)); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 2254 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 116: /* TypeSpecSimple: _KW_integer  */
#line 410 "partial_bnfc_acsl_parser.y"
                             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleIntegerKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2260 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 117: /* TypeSpecSimple: _KW_real  */
#line 411 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleRealKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2266 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 118: /* TypeSpecSimple: _KW_boolean  */
#line 412 "partial_bnfc_acsl_parser.y"
                { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleBooleanKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2272 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 119: /* TypeSpecSimple: _KW_void  */
#line 413 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleVoidKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2278 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 120: /* TypeSpecSimple: _SYMB_40  */
#line 414 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleBoolKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2284 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 121: /* TypeSpecSimple: _KW_char  */
#line 415 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2290 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 122: /* TypeSpecSimple: _KW_signed _KW_char  */
#line 416 "partial_bnfc_acsl_parser.y"
                        { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2296 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 123: /* TypeSpecSimple: _KW_unsigned _KW_char  */
#line 417 "partial_bnfc_acsl_parser.y"
                          { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2302 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 124: /* TypeSpecSimple: _KW_int  */
#line 418 "partial_bnfc_acsl_parser.y"
            { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2308 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 125: /* TypeSpecSimple: _KW_signed _KW_int  */
#line 419 "partial_bnfc_acsl_parser.y"
                       { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2314 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 126: /* TypeSpecSimple: _KW_unsigned _KW_int  */
#line 420 "partial_bnfc_acsl_parser.y"
                         { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2320 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 127: /* TypeSpecSimple: _KW_unsigned  */
#line 421 "partial_bnfc_acsl_parser.y"
                 { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2326 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 128: /* TypeSpecSimple: _KW_short  */
#line 422 "partial_bnfc_acsl_parser.y"
              { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleShortKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2332 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 129: /* TypeSpecSimple: _KW_signed _KW_short  */
#line 423 "partial_bnfc_acsl_parser.y"
                         { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedShortKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2338 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 130: /* TypeSpecSimple: _KW_unsigned _KW_short  */
#line 424 "partial_bnfc_acsl_parser.y"
                           { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedShortKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2344 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 131: /* TypeSpecSimple: _KW_short _KW_int  */
#line 425 "partial_bnfc_acsl_parser.y"
                      { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleShortIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2350 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 132: /* TypeSpecSimple: _KW_signed _KW_short _KW_int  */
#line 426 "partial_bnfc_acsl_parser.y"
                                 { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedShortIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2356 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 133: /* TypeSpecSimple: _KW_unsigned _KW_short _KW_int  */
#line 427 "partial_bnfc_acsl_parser.y"
                                   { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedShortIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2362 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 134: /* TypeSpecSimple: _KW_long  */
#line 428 "partial_bnfc_acsl_parser.y"
             { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2368 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 135: /* TypeSpecSimple: _KW_signed _KW_long  */
#line 429 "partial_bnfc_acsl_parser.y"
                        { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2374 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 136: /* TypeSpecSimple: _KW_unsigned _KW_long  */
#line 430 "partial_bnfc_acsl_parser.y"
                          { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2380 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 137: /* TypeSpecSimple: _KW_signed _KW_long _KW_int  */
#line 431 "partial_bnfc_acsl_parser.y"
                                { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2386 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 138: /* TypeSpecSimple: _KW_long _KW_int  */
#line 432 "partial_bnfc_acsl_parser.y"
                     { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2392 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 139: /* TypeSpecSimple: _KW_unsigned _KW_long _KW_int  */
#line 433 "partial_bnfc_acsl_parser.y"
                                  { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2398 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 140: /* TypeSpecSimple: _KW_long _KW_long  */
#line 434 "partial_bnfc_acsl_parser.y"
                      { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2404 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 141: /* TypeSpecSimple: _KW_signed _KW_long _KW_long  */
#line 435 "partial_bnfc_acsl_parser.y"
                                 { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedLongLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2410 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 142: /* TypeSpecSimple: _KW_unsigned _KW_long _KW_long  */
#line 436 "partial_bnfc_acsl_parser.y"
                                   { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedLongLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2416 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 143: /* TypeSpecSimple: _KW_long _KW_long _KW_int  */
#line 437 "partial_bnfc_acsl_parser.y"
                              { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2422 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 144: /* TypeSpecSimple: _KW_signed _KW_long _KW_long _KW_int  */
#line 438 "partial_bnfc_acsl_parser.y"
                                         { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleSignedLongLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2428 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 145: /* TypeSpecSimple: _KW_unsigned _KW_long _KW_long _KW_int  */
#line 439 "partial_bnfc_acsl_parser.y"
                                           { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleUnsignedLongLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2434 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 146: /* TypeSpecSimple: _KW_float  */
#line 440 "partial_bnfc_acsl_parser.y"
              { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleFloatKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2440 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 147: /* TypeSpecSimple: _KW_double  */
#line 441 "partial_bnfc_acsl_parser.y"
               { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleDoubleKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2446 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 148: /* TypeSpecSimple: _KW_long _KW_double  */
#line 442 "partial_bnfc_acsl_parser.y"
                        { (yyval.typespecsimple_) = new partial_bnfc_acsl::TypeSpecSimpleLongDoubleKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 2452 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 149: /* LogicPTreeAnnot: Annotation  */
#line 444 "partial_bnfc_acsl_parser.y"
                             { (yyval.logicptreeannot_) = new partial_bnfc_acsl::AnAnnotation((yyvsp[0].annotation_)); (yyval.logicptreeannot_)->line_number = (yyloc).first_line; (yyval.logicptreeannot_)->char_number = (yyloc).first_column; result->logicptreeannot_ = (yyval.logicptreeannot_); }
#line 2458 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 150: /* Annotation: LoopAnnotStack  */
#line 446 "partial_bnfc_acsl_parser.y"
                            { (yyval.annotation_) = new partial_bnfc_acsl::LoopAnnotation((yyvsp[0].loopannotstack_)); (yyval.annotation_)->line_number = (yyloc).first_line; (yyval.annotation_)->char_number = (yyloc).first_column; result->annotation_ = (yyval.annotation_); }
#line 2464 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 151: /* LoopAnnotStack: LoopInvariant LoopAnnotOpt  */
#line 448 "partial_bnfc_acsl_parser.y"
                                            { (yyval.loopannotstack_) = new partial_bnfc_acsl::LoopAnnotStackInvariant((yyvsp[-1].loopinvariant_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 2470 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 152: /* LoopAnnotStack: LoopEffects LoopAnnotOpt  */
#line 449 "partial_bnfc_acsl_parser.y"
                             { (yyval.loopannotstack_) = new partial_bnfc_acsl::LoopAnnotStackEffects((yyvsp[-1].loopeffects_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 2476 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 153: /* LoopAnnotStack: LoopVariant LoopAnnotOpt  */
#line 450 "partial_bnfc_acsl_parser.y"
                             { (yyval.loopannotstack_) = new partial_bnfc_acsl::LoopAnnotStackVariant((yyvsp[-1].loopvariant_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 2482 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 154: /* LoopAnnotOpt: %empty  */
#line 452 "partial_bnfc_acsl_parser.y"
                           { (yyval.loopannotopt_) = new partial_bnfc_acsl::NoLoopAnnot(); (yyval.loopannotopt_)->line_number = (yyloc).first_line; (yyval.loopannotopt_)->char_number = (yyloc).first_column; result->loopannotopt_ = (yyval.loopannotopt_); }
#line 2488 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 155: /* LoopAnnotOpt: LoopAnnotStack  */
#line 453 "partial_bnfc_acsl_parser.y"
                   { (yyval.loopannotopt_) = new partial_bnfc_acsl::SomeLoopAnnot((yyvsp[0].loopannotstack_)); (yyval.loopannotopt_)->line_number = (yyloc).first_line; (yyval.loopannotopt_)->char_number = (yyloc).first_column; result->loopannotopt_ = (yyval.loopannotopt_); }
#line 2494 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 156: /* LoopInvariant: _KW_loop _KW_invariant Lexpr _SEMI  */
#line 455 "partial_bnfc_acsl_parser.y"
                                                   { (yyval.loopinvariant_) = new partial_bnfc_acsl::SimpleLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 2500 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 157: /* LoopInvariant: _KW_check _KW_loop _KW_invariant Lexpr _SEMI  */
#line 456 "partial_bnfc_acsl_parser.y"
                                                 { (yyval.loopinvariant_) = new partial_bnfc_acsl::CheckLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 2506 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 158: /* LoopInvariant: _KW_admit _KW_loop _KW_invariant Lexpr _SEMI  */
#line 457 "partial_bnfc_acsl_parser.y"
                                                 { (yyval.loopinvariant_) = new partial_bnfc_acsl::AdmitLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 2512 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 159: /* LoopVariant: _KW_loop _KW_variant Variant _SEMI  */
#line 459 "partial_bnfc_acsl_parser.y"
                                                 { (yyval.loopvariant_) = new partial_bnfc_acsl::SimpleLoopVariant((yyvsp[-1].variant_)); (yyval.loopvariant_)->line_number = (yyloc).first_line; (yyval.loopvariant_)->char_number = (yyloc).first_column; result->loopvariant_ = (yyval.loopvariant_); }
#line 2518 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 160: /* LoopEffects: _KW_loop _KW_assigns Assigns _SEMI  */
#line 461 "partial_bnfc_acsl_parser.y"
                                                 { (yyval.loopeffects_) = new partial_bnfc_acsl::LoopAssigns((yyvsp[-1].assigns_)); (yyval.loopeffects_)->line_number = (yyloc).first_line; (yyval.loopeffects_)->char_number = (yyloc).first_column; result->loopeffects_ = (yyval.loopeffects_); }
#line 2524 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 161: /* Variant: Lexpr _KW_for AnyIdentifier  */
#line 463 "partial_bnfc_acsl_parser.y"
                                      { (yyval.variant_) = new partial_bnfc_acsl::ForVariant((yyvsp[-2].lexpr_), (yyvsp[0].anyidentifier_)); (yyval.variant_)->line_number = (yyloc).first_line; (yyval.variant_)->char_number = (yyloc).first_column; result->variant_ = (yyval.variant_); }
#line 2530 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 162: /* Variant: Lexpr  */
#line 464 "partial_bnfc_acsl_parser.y"
          { (yyval.variant_) = new partial_bnfc_acsl::LexprVariant((yyvsp[0].lexpr_)); (yyval.variant_)->line_number = (yyloc).first_line; (yyval.variant_)->char_number = (yyloc).first_column; result->variant_ = (yyval.variant_); }
#line 2536 "partial_bnfc_acsl_parser.tab.c"
    break;


#line 2540 "partial_bnfc_acsl_parser.tab.c"

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

#line 467 "partial_bnfc_acsl_parser.y"


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
