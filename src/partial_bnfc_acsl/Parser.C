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
  YYSYMBOL__SYMB_35 = 12,                  /* _SYMB_35  */
  YYSYMBOL__PLUS = 13,                     /* _PLUS  */
  YYSYMBOL__COMMA = 14,                    /* _COMMA  */
  YYSYMBOL__MINUS = 15,                    /* _MINUS  */
  YYSYMBOL__SYMB_9 = 16,                   /* _SYMB_9  */
  YYSYMBOL__SLASH = 17,                    /* _SLASH  */
  YYSYMBOL__COLON = 18,                    /* _COLON  */
  YYSYMBOL__SEMI = 19,                     /* _SEMI  */
  YYSYMBOL__LT = 20,                       /* _LT  */
  YYSYMBOL__SYMB_10 = 21,                  /* _SYMB_10  */
  YYSYMBOL__DLT = 22,                      /* _DLT  */
  YYSYMBOL__LDARROW = 23,                  /* _LDARROW  */
  YYSYMBOL__SYMB_2 = 24,                   /* _SYMB_2  */
  YYSYMBOL__DEQ = 25,                      /* _DEQ  */
  YYSYMBOL__SYMB_1 = 26,                   /* _SYMB_1  */
  YYSYMBOL__GT = 27,                       /* _GT  */
  YYSYMBOL__GTEQ = 28,                     /* _GTEQ  */
  YYSYMBOL__DGT = 29,                      /* _DGT  */
  YYSYMBOL__QUESTION = 30,                 /* _QUESTION  */
  YYSYMBOL__LBRACK = 31,                   /* _LBRACK  */
  YYSYMBOL__SYMB_24 = 32,                  /* _SYMB_24  */
  YYSYMBOL__SYMB_25 = 33,                  /* _SYMB_25  */
  YYSYMBOL__SYMB_23 = 34,                  /* _SYMB_23  */
  YYSYMBOL__SYMB_11 = 35,                  /* _SYMB_11  */
  YYSYMBOL__SYMB_29 = 36,                  /* _SYMB_29  */
  YYSYMBOL__SYMB_41 = 37,                  /* _SYMB_41  */
  YYSYMBOL__SYMB_44 = 38,                  /* _SYMB_44  */
  YYSYMBOL__SYMB_26 = 39,                  /* _SYMB_26  */
  YYSYMBOL__SYMB_42 = 40,                  /* _SYMB_42  */
  YYSYMBOL__SYMB_43 = 41,                  /* _SYMB_43  */
  YYSYMBOL__SYMB_27 = 42,                  /* _SYMB_27  */
  YYSYMBOL__SYMB_22 = 43,                  /* _SYMB_22  */
  YYSYMBOL__SYMB_47 = 44,                  /* _SYMB_47  */
  YYSYMBOL__SYMB_28 = 45,                  /* _SYMB_28  */
  YYSYMBOL__RBRACK = 46,                   /* _RBRACK  */
  YYSYMBOL__CARET = 47,                    /* _CARET  */
  YYSYMBOL__DCARET = 48,                   /* _DCARET  */
  YYSYMBOL__KW_admit = 49,                 /* _KW_admit  */
  YYSYMBOL__KW_allocates = 50,             /* _KW_allocates  */
  YYSYMBOL__KW_assigns = 51,               /* _KW_assigns  */
  YYSYMBOL__KW_assumes = 52,               /* _KW_assumes  */
  YYSYMBOL__KW_behavior = 53,              /* _KW_behavior  */
  YYSYMBOL__KW_breaks = 54,                /* _KW_breaks  */
  YYSYMBOL__KW_check = 55,                 /* _KW_check  */
  YYSYMBOL__KW_complete = 56,              /* _KW_complete  */
  YYSYMBOL__KW_continues = 57,             /* _KW_continues  */
  YYSYMBOL__KW_decreases = 58,             /* _KW_decreases  */
  YYSYMBOL__KW_disjoint = 59,              /* _KW_disjoint  */
  YYSYMBOL__KW_ensures = 60,               /* _KW_ensures  */
  YYSYMBOL__KW_exits = 61,                 /* _KW_exits  */
  YYSYMBOL__KW_frees = 62,                 /* _KW_frees  */
  YYSYMBOL__KW_invariant = 63,             /* _KW_invariant  */
  YYSYMBOL__KW_lemma = 64,                 /* _KW_lemma  */
  YYSYMBOL__KW_loop = 65,                  /* _KW_loop  */
  YYSYMBOL__KW_requires = 66,              /* _KW_requires  */
  YYSYMBOL__KW_returns = 67,               /* _KW_returns  */
  YYSYMBOL__KW_sizeof = 68,                /* _KW_sizeof  */
  YYSYMBOL__BAR = 69,                      /* _BAR  */
  YYSYMBOL__DBAR = 70,                     /* _DBAR  */
  YYSYMBOL__TILDE = 71,                    /* _TILDE  */
  YYSYMBOL__STRING_ = 72,                  /* _STRING_  */
  YYSYMBOL__INTEGER_ = 73,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 74,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 75,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_Program = 77,                   /* Program  */
  YYSYMBOL_Annot = 78,                     /* Annot  */
  YYSYMBOL_Code_Annot = 79,                /* Code_Annot  */
  YYSYMBOL_Contract = 80,                  /* Contract  */
  YYSYMBOL_Requires = 81,                  /* Requires  */
  YYSYMBOL_NERequires = 82,                /* NERequires  */
  YYSYMBOL_Terminates = 83,                /* Terminates  */
  YYSYMBOL_Decreases = 84,                 /* Decreases  */
  YYSYMBOL_SimpleClauses = 85,             /* SimpleClauses  */
  YYSYMBOL_NESimpleClauses = 86,           /* NESimpleClauses  */
  YYSYMBOL_Behaviors = 87,                 /* Behaviors  */
  YYSYMBOL_CompleteOrDisjoint = 88,        /* CompleteOrDisjoint  */
  YYSYMBOL_Lexpr = 89,                     /* Lexpr  */
  YYSYMBOL_ListLexpr = 90,                 /* ListLexpr  */
  YYSYMBOL_Lexpr1 = 91,                    /* Lexpr1  */
  YYSYMBOL_LexprRelInner = 92,             /* LexprRelInner  */
  YYSYMBOL_ListLexprRelInner = 93,         /* ListLexprRelInner  */
  YYSYMBOL_Relation = 94,                  /* Relation  */
  YYSYMBOL_Lexpr2 = 95,                    /* Lexpr2  */
  YYSYMBOL_Lexpr3 = 96,                    /* Lexpr3  */
  YYSYMBOL_PostCond = 97,                  /* PostCond  */
  YYSYMBOL_FullIdentifier = 98,            /* FullIdentifier  */
  YYSYMBOL_Identifier = 99                 /* Identifier  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 82 "partial_bnfc_acsl_parser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, partial_bnfc_acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 250 "Parser.C"


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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   504

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  161

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


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
      75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   199,   199,   201,   206,   208,   210,   211,   213,   214,
     215,   237,   239,   241,   242,   244,   246,   248,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   265,   266,   268,   269,   271,   273,   274,   276,
     277,   278,   279,   280,   281,   283,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   337,   342
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
  "_SYMB_35", "_PLUS", "_COMMA", "_MINUS", "_SYMB_9", "_SLASH", "_COLON",
  "_SEMI", "_LT", "_SYMB_10", "_DLT", "_LDARROW", "_SYMB_2", "_DEQ",
  "_SYMB_1", "_GT", "_GTEQ", "_DGT", "_QUESTION", "_LBRACK", "_SYMB_24",
  "_SYMB_25", "_SYMB_23", "_SYMB_11", "_SYMB_29", "_SYMB_41", "_SYMB_44",
  "_SYMB_26", "_SYMB_42", "_SYMB_43", "_SYMB_27", "_SYMB_22", "_SYMB_47",
  "_SYMB_28", "_RBRACK", "_CARET", "_DCARET", "_KW_admit", "_KW_allocates",
  "_KW_assigns", "_KW_assumes", "_KW_behavior", "_KW_breaks", "_KW_check",
  "_KW_complete", "_KW_continues", "_KW_decreases", "_KW_disjoint",
  "_KW_ensures", "_KW_exits", "_KW_frees", "_KW_invariant", "_KW_lemma",
  "_KW_loop", "_KW_requires", "_KW_returns", "_KW_sizeof", "_BAR", "_DBAR",
  "_TILDE", "_STRING_", "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept",
  "Program", "Annot", "Code_Annot", "Contract", "Requires", "NERequires",
  "Terminates", "Decreases", "SimpleClauses", "NESimpleClauses",
  "Behaviors", "CompleteOrDisjoint", "Lexpr", "ListLexpr", "Lexpr1",
  "LexprRelInner", "ListLexprRelInner", "Relation", "Lexpr2", "Lexpr3",
  "PostCond", "FullIdentifier", "Identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-145)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-38)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -46,   -64,   -62,    59,    10,  -145,  -145,  -145,  -145,  -145,
      59,    59,    59,    59,    59,    59,    59,    59,  -145,  -145,
    -145,  -145,     3,  -145,  -145,  -145,     4,  -145,  -145,     5,
    -145,     7,    59,  -145,  -145,  -145,  -145,   130,  -145,  -145,
      20,     8,  -145,  -145,  -145,   145,   160,   460,   460,   196,
     460,   460,   460,    59,    59,    59,    59,   460,    59,    59,
      59,   -46,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      85,    59,    62,   -46,   -46,  -145,   211,   226,    -4,   262,
     277,  -145,  -145,  -145,  -145,  -145,  -145,  -145,   319,  -145,
    -145,  -145,  -145,  -145,   460,   460,   460,   460,   460,   460,
     460,   460,   334,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
      59,    14,     0,  -145,   254,  -145,  -145,  -145,  -145,  -145,
    -145,    59,  -145,  -145,  -145,    59,  -145,  -145,  -145,    59,
    -145,  -145,   436,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,   349,  -145,   385,  -145,    62,
    -145
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     0,    18,     0,     2,     3,     4,    11,     7,
      18,    18,     0,     0,    18,     0,     0,     0,    49,    50,
      48,    54,     0,    76,    51,    72,     0,    52,    47,     0,
      53,     0,     0,    57,    55,    56,    97,     0,    31,    34,
      45,    75,    96,     1,    12,     0,     0,    46,    69,     0,
      68,    66,    65,    18,    18,    18,    18,    67,     0,     0,
       0,     6,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,    18,    13,     6,     6,    79,     0,    32,     0,     0,
       0,    24,    22,    27,     8,    28,    20,    19,     0,    29,
      26,    23,    25,    21,    62,    60,    63,    58,    59,    61,
      78,    77,     0,    44,    39,    41,    43,    40,    42,    38,
       0,     0,     0,    83,     0,    84,    81,    82,    85,    16,
      14,    18,    10,     9,    71,    18,    73,    80,    70,    18,
      64,    35,    45,    74,    93,    94,    91,    92,    95,    88,
      89,    86,    87,    90,    17,     0,    33,    30,     5,    13,
      15
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,  -145,  -145,  -145,   -56,  -145,  -145,  -145,  -144,
    -145,  -145,  -145,    -3,   -80,   434,  -145,  -145,  -145,   -91,
       6,  -145,  -145,  -145
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,     8,     9,    44,    82,   129,
     130,   154,   158,    87,    88,    38,   119,    80,   120,    39,
      40,   131,    41,    42
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,   121,    10,     1,    11,    94,   136,    45,    46,     2,
      43,    49,    53,    54,    55,   160,    56,    81,    47,    48,
       3,    50,    51,    52,   143,   -37,    71,   132,   133,   141,
       0,    72,    73,    74,     0,    75,     0,    76,    57,     0,
     -37,     0,    77,   -37,     0,   -37,     0,   -37,   -37,    78,
      86,    79,    89,    90,   144,   156,     0,   145,     0,     0,
     146,   147,    98,    12,     0,     0,    13,   148,    14,     0,
      15,     0,    16,     0,    17,     0,   112,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,     0,     0,
     113,    18,    19,    20,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   114,     0,     0,   115,     0,
     116,   122,   117,   118,     0,     0,   123,   124,     0,   125,
       0,     0,   126,   127,     0,     0,   142,    31,   155,   128,
      32,    33,    34,    35,    36,     0,   157,    58,    59,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,    61,
       0,    62,    58,    59,    63,     0,    64,     0,     0,     0,
      65,    60,     0,     0,    83,    66,    62,    58,    59,    63,
       0,    64,     0,     0,     0,    65,    60,    67,    68,    84,
      66,    62,     0,     0,    63,     0,    64,     0,     0,     0,
      65,     0,    67,    68,     0,    66,     0,     0,     0,    69,
      70,     0,     0,    58,    59,     0,    85,    67,    68,     0,
       0,     0,    60,     0,    69,    70,     0,    62,    58,    59,
      63,   134,    64,     0,     0,     0,    65,    60,     0,    69,
      70,    66,    62,    58,    59,    63,     0,    64,     0,     0,
     135,    65,    60,    67,    68,     0,    66,    62,     0,     0,
      63,     0,    64,     0,     0,     0,    65,     0,    67,    68,
       0,    66,     0,     0,     0,    69,    70,     0,     0,    58,
      59,     0,   137,    67,    68,     0,     0,     0,    60,     0,
      69,    70,     0,    62,    58,    59,    63,   138,    64,     0,
       0,     0,    65,    60,     0,    69,    70,    66,    62,     0,
       0,    63,     0,    64,     0,     0,     0,    65,   149,    67,
      68,   150,    66,     0,   151,   152,     0,     0,     0,     0,
       0,   153,     0,     0,    67,    68,    58,    59,     0,     0,
       0,    69,    70,     0,     0,    60,     0,   139,     0,     0,
      62,    58,    59,    63,     0,    64,    69,    70,     0,    65,
      60,     0,     0,     0,    66,    62,    58,    59,    63,     0,
      64,     0,     0,     0,    65,    60,    67,    68,   159,    66,
      62,     0,     0,    63,     0,    64,     0,     0,     0,    65,
     140,    67,    68,     0,    66,     0,     0,     0,    69,    70,
       0,     0,    58,    59,     0,     0,    67,    68,     0,     0,
       0,    60,     0,    69,    70,     0,    62,     0,     0,    63,
       0,    64,     0,     0,     0,    65,     0,     0,    69,    70,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,     0,     0,     0,     0,     0,     0,
       0,   -36,    71,     0,     0,     0,     0,    72,    73,    74,
       0,    75,     0,    76,    69,    70,   -36,     0,    77,   -36,
       0,   -36,     0,   -36,   -36,    78,    71,    79,     0,     0,
       0,    72,    73,    74,     0,    75,     0,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,     0,    78,
       0,    79,    91,    92,    93,     0,    95,    96,    97,     0,
      99,   100,   101,   102,   103
};

static const yytype_int16 yycheck[] =
{
       3,    81,    66,    49,    66,    61,    10,    10,    11,    55,
       0,    14,     9,     9,     9,   159,     9,     9,    12,    13,
      66,    15,    16,    17,    10,     5,     6,    83,    84,   120,
      -1,    11,    12,    13,    -1,    15,    -1,    17,    32,    -1,
      20,    -1,    22,    23,    -1,    25,    -1,    27,    28,    29,
      53,    31,    55,    56,    54,   135,    -1,    57,    -1,    -1,
      60,    61,    65,     4,    -1,    -1,     7,    67,     9,    -1,
      11,    -1,    13,    -1,    15,    -1,    79,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
       5,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    20,    -1,    -1,    23,    -1,
      25,    49,    27,    28,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    60,    61,    -1,    -1,   120,    68,   131,    67,
      71,    72,    73,    74,    75,    -1,   139,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,
      -1,    21,     7,     8,    24,    -1,    26,    -1,    -1,    -1,
      30,    16,    -1,    -1,    19,    35,    21,     7,     8,    24,
      -1,    26,    -1,    -1,    -1,    30,    16,    47,    48,    19,
      35,    21,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      30,    -1,    47,    48,    -1,    35,    -1,    -1,    -1,    69,
      70,    -1,    -1,     7,     8,    -1,    10,    47,    48,    -1,
      -1,    -1,    16,    -1,    69,    70,    -1,    21,     7,     8,
      24,    10,    26,    -1,    -1,    -1,    30,    16,    -1,    69,
      70,    35,    21,     7,     8,    24,    -1,    26,    -1,    -1,
      14,    30,    16,    47,    48,    -1,    35,    21,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    30,    -1,    47,    48,
      -1,    35,    -1,    -1,    -1,    69,    70,    -1,    -1,     7,
       8,    -1,    10,    47,    48,    -1,    -1,    -1,    16,    -1,
      69,    70,    -1,    21,     7,     8,    24,    10,    26,    -1,
      -1,    -1,    30,    16,    -1,    69,    70,    35,    21,    -1,
      -1,    24,    -1,    26,    -1,    -1,    -1,    30,    54,    47,
      48,    57,    35,    -1,    60,    61,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    47,    48,     7,     8,    -1,    -1,
      -1,    69,    70,    -1,    -1,    16,    -1,    18,    -1,    -1,
      21,     7,     8,    24,    -1,    26,    69,    70,    -1,    30,
      16,    -1,    -1,    -1,    35,    21,     7,     8,    24,    -1,
      26,    -1,    -1,    -1,    30,    16,    47,    48,    19,    35,
      21,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    30,
      46,    47,    48,    -1,    35,    -1,    -1,    -1,    69,    70,
      -1,    -1,     7,     8,    -1,    -1,    47,    48,    -1,    -1,
      -1,    16,    -1,    69,    70,    -1,    21,    -1,    -1,    24,
      -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    69,    70,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,    -1,    -1,    -1,    -1,    11,    12,    13,
      -1,    15,    -1,    17,    69,    70,    20,    -1,    22,    23,
      -1,    25,    -1,    27,    28,    29,     6,    31,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    -1,    17,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    58,    59,    60,    -1,    62,    63,    64,    -1,
      66,    67,    68,    69,    70
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    55,    66,    77,    78,    79,    80,    81,    82,
      66,    66,     4,     7,     9,    11,    13,    15,    32,    33,
      34,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    68,    71,    72,    73,    74,    75,    89,    91,    95,
      96,    98,    99,     0,    83,    89,    89,    96,    96,    89,
      96,    96,    96,     9,     9,     9,     9,    96,     7,     8,
      16,    19,    21,    24,    26,    30,    35,    47,    48,    69,
      70,     6,    11,    12,    13,    15,    17,    22,    29,    31,
      93,     9,    84,    19,    19,    10,    89,    89,    90,    89,
      89,    91,    91,    91,    81,    91,    91,    91,    89,    91,
      91,    91,    91,    91,    96,    96,    96,    96,    96,    96,
      96,    96,    89,     5,    20,    23,    25,    27,    28,    92,
      94,    90,    49,    54,    55,    57,    60,    61,    67,    85,
      86,    97,    81,    81,    10,    14,    10,    10,    10,    18,
      46,    95,    96,    10,    54,    57,    60,    61,    67,    54,
      57,    60,    61,    67,    87,    89,    90,    89,    88,    19,
      85
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    79,    80,    81,    81,    82,    82,
      82,    83,    84,    85,    85,    86,    87,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    92,    93,    93,    94,
      94,    94,    94,    94,    94,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     6,     0,     1,     4,     5,
       5,     0,     0,     0,     1,     4,     0,     0,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     1,     1,     3,     1,     4,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     4,     2,     2,     2,     2,     2,
       4,     4,     1,     4,     4,     1,     1,     3,     3,     3,
       4,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1
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
#line 199 "partial_bnfc_acsl_parser.y"
                { (yyval.program_) = new partial_bnfc_acsl::AProgram((yyvsp[0].annot_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1522 "Parser.C"
    break;

  case 3: /* Annot: Code_Annot  */
#line 201 "partial_bnfc_acsl_parser.y"
                   { (yyval.annot_) = new partial_bnfc_acsl::CodeAnnot((yyvsp[0].code_annot_)); (yyval.annot_)->line_number = (yyloc).first_line; (yyval.annot_)->char_number = (yyloc).first_column; result->annot_ = (yyval.annot_); }
#line 1528 "Parser.C"
    break;

  case 4: /* Code_Annot: Contract  */
#line 206 "partial_bnfc_acsl_parser.y"
                      { (yyval.code_annot_) = new partial_bnfc_acsl::CodeAnnotContract((yyvsp[0].contract_)); (yyval.code_annot_)->line_number = (yyloc).first_line; (yyval.code_annot_)->char_number = (yyloc).first_column; result->code_annot_ = (yyval.code_annot_); }
#line 1534 "Parser.C"
    break;

  case 5: /* Contract: Requires Terminates Decreases SimpleClauses Behaviors CompleteOrDisjoint  */
#line 208 "partial_bnfc_acsl_parser.y"
                                                                                    { (yyval.contract_) = new partial_bnfc_acsl::SimpleContract((yyvsp[-5].requires_), (yyvsp[-4].terminates_), (yyvsp[-3].decreases_), (yyvsp[-2].simpleclauses_), (yyvsp[-1].behaviors_), (yyvsp[0].completeordisjoint_)); (yyval.contract_)->line_number = (yyloc).first_line; (yyval.contract_)->char_number = (yyloc).first_column; result->contract_ = (yyval.contract_); }
#line 1540 "Parser.C"
    break;

  case 6: /* Requires: %empty  */
#line 210 "partial_bnfc_acsl_parser.y"
                       { (yyval.requires_) = new partial_bnfc_acsl::NoRequires(); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 1546 "Parser.C"
    break;

  case 7: /* Requires: NERequires  */
#line 211 "partial_bnfc_acsl_parser.y"
               { (yyval.requires_) = new partial_bnfc_acsl::SomeRequires((yyvsp[0].nerequires_)); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 1552 "Parser.C"
    break;

  case 8: /* NERequires: _KW_requires Lexpr _SEMI Requires  */
#line 213 "partial_bnfc_acsl_parser.y"
                                               { (yyval.nerequires_) = new partial_bnfc_acsl::SimpleRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1558 "Parser.C"
    break;

  case 9: /* NERequires: _KW_check _KW_requires Lexpr _SEMI Requires  */
#line 214 "partial_bnfc_acsl_parser.y"
                                                { (yyval.nerequires_) = new partial_bnfc_acsl::CheckRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1564 "Parser.C"
    break;

  case 10: /* NERequires: _KW_admit _KW_requires Lexpr _SEMI Requires  */
#line 215 "partial_bnfc_acsl_parser.y"
                                                { (yyval.nerequires_) = new partial_bnfc_acsl::AdimtRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1570 "Parser.C"
    break;

  case 11: /* Terminates: %empty  */
#line 237 "partial_bnfc_acsl_parser.y"
                         { (yyval.terminates_) = new partial_bnfc_acsl::NoTerminate(); (yyval.terminates_)->line_number = (yyloc).first_line; (yyval.terminates_)->char_number = (yyloc).first_column; result->terminates_ = (yyval.terminates_); }
#line 1576 "Parser.C"
    break;

  case 12: /* Decreases: %empty  */
#line 239 "partial_bnfc_acsl_parser.y"
                        { (yyval.decreases_) = new partial_bnfc_acsl::NoDecreases(); (yyval.decreases_)->line_number = (yyloc).first_line; (yyval.decreases_)->char_number = (yyloc).first_column; result->decreases_ = (yyval.decreases_); }
#line 1582 "Parser.C"
    break;

  case 13: /* SimpleClauses: %empty  */
#line 241 "partial_bnfc_acsl_parser.y"
                            { (yyval.simpleclauses_) = new partial_bnfc_acsl::NoSimpleClauses(); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 1588 "Parser.C"
    break;

  case 14: /* SimpleClauses: NESimpleClauses  */
#line 242 "partial_bnfc_acsl_parser.y"
                    { (yyval.simpleclauses_) = new partial_bnfc_acsl::SomeSimpleClauses((yyvsp[0].nesimpleclauses_)); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 1594 "Parser.C"
    break;

  case 15: /* NESimpleClauses: PostCond Lexpr _SEMI SimpleClauses  */
#line 244 "partial_bnfc_acsl_parser.y"
                                                     { (yyval.nesimpleclauses_) = new partial_bnfc_acsl::PostCondSimpleClauses((yyvsp[-3].postcond_), (yyvsp[-2].lexpr_), (yyvsp[0].simpleclauses_)); (yyval.nesimpleclauses_)->line_number = (yyloc).first_line; (yyval.nesimpleclauses_)->char_number = (yyloc).first_column; result->nesimpleclauses_ = (yyval.nesimpleclauses_); }
#line 1600 "Parser.C"
    break;

  case 16: /* Behaviors: %empty  */
#line 246 "partial_bnfc_acsl_parser.y"
                        { (yyval.behaviors_) = new partial_bnfc_acsl::NoBehaviors(); (yyval.behaviors_)->line_number = (yyloc).first_line; (yyval.behaviors_)->char_number = (yyloc).first_column; result->behaviors_ = (yyval.behaviors_); }
#line 1606 "Parser.C"
    break;

  case 17: /* CompleteOrDisjoint: %empty  */
#line 248 "partial_bnfc_acsl_parser.y"
                                 { (yyval.completeordisjoint_) = new partial_bnfc_acsl::NoComplDisj(); (yyval.completeordisjoint_)->line_number = (yyloc).first_line; (yyval.completeordisjoint_)->char_number = (yyloc).first_column; result->completeordisjoint_ = (yyval.completeordisjoint_); }
#line 1612 "Parser.C"
    break;

  case 18: /* Lexpr: %empty  */
#line 250 "partial_bnfc_acsl_parser.y"
                    { (yyval.lexpr_) = new partial_bnfc_acsl::NoLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1618 "Parser.C"
    break;

  case 19: /* Lexpr: Lexpr _SYMB_1 Lexpr1  */
#line 251 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::ImplLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1624 "Parser.C"
    break;

  case 20: /* Lexpr: Lexpr _SYMB_2 Lexpr1  */
#line 252 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::IffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1630 "Parser.C"
    break;

  case 21: /* Lexpr: Lexpr _DBAR Lexpr1  */
#line 253 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::OrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1636 "Parser.C"
    break;

  case 22: /* Lexpr: Lexpr _DAMP Lexpr1  */
#line 254 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::AndLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1642 "Parser.C"
    break;

  case 23: /* Lexpr: Lexpr _DCARET Lexpr1  */
#line 255 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::HatHatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1648 "Parser.C"
    break;

  case 24: /* Lexpr: Lexpr _AMP Lexpr1  */
#line 256 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::AmpLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1654 "Parser.C"
    break;

  case 25: /* Lexpr: Lexpr _BAR Lexpr1  */
#line 257 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::PipeLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1660 "Parser.C"
    break;

  case 26: /* Lexpr: Lexpr _CARET Lexpr1  */
#line 258 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::HatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1666 "Parser.C"
    break;

  case 27: /* Lexpr: Lexpr _SYMB_9 Lexpr1  */
#line 259 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::BimpliesLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1672 "Parser.C"
    break;

  case 28: /* Lexpr: Lexpr _SYMB_10 Lexpr1  */
#line 260 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = new partial_bnfc_acsl::BiffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1678 "Parser.C"
    break;

  case 29: /* Lexpr: Lexpr _SYMB_11 Lexpr1  */
#line 261 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = new partial_bnfc_acsl::InLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1684 "Parser.C"
    break;

  case 30: /* Lexpr: Lexpr _QUESTION Lexpr _COLON Lexpr  */
#line 262 "partial_bnfc_acsl_parser.y"
                                       { (yyval.lexpr_) = new partial_bnfc_acsl::TernaryLexpr((yyvsp[-4].lexpr_), (yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1690 "Parser.C"
    break;

  case 31: /* Lexpr: Lexpr1  */
#line 263 "partial_bnfc_acsl_parser.y"
           { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1696 "Parser.C"
    break;

  case 32: /* ListLexpr: Lexpr  */
#line 265 "partial_bnfc_acsl_parser.y"
                  { (yyval.listlexpr_) = new partial_bnfc_acsl::ListLexpr(); (yyval.listlexpr_)->push_back((yyvsp[0].lexpr_)); result->listlexpr_ = (yyval.listlexpr_); }
#line 1702 "Parser.C"
    break;

  case 33: /* ListLexpr: Lexpr _COMMA ListLexpr  */
#line 266 "partial_bnfc_acsl_parser.y"
                           { (yyvsp[0].listlexpr_)->push_back((yyvsp[-2].lexpr_)); (yyval.listlexpr_) = (yyvsp[0].listlexpr_); result->listlexpr_ = (yyval.listlexpr_); }
#line 1708 "Parser.C"
    break;

  case 34: /* Lexpr1: Lexpr2  */
#line 268 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1714 "Parser.C"
    break;

  case 35: /* Lexpr1: Lexpr3 ListLexprRelInner Relation Lexpr2  */
#line 269 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::RelationLexpr((yyvsp[-3].lexpr_), (yyvsp[-2].listlexprrelinner_), (yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1720 "Parser.C"
    break;

  case 36: /* LexprRelInner: Relation Lexpr3  */
#line 271 "partial_bnfc_acsl_parser.y"
                                { (yyval.lexprrelinner_) = new partial_bnfc_acsl::RelInnerLexpr((yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexprrelinner_)->line_number = (yyloc).first_line; (yyval.lexprrelinner_)->char_number = (yyloc).first_column; result->lexprrelinner_ = (yyval.lexprrelinner_); }
#line 1726 "Parser.C"
    break;

  case 37: /* ListLexprRelInner: %empty  */
#line 273 "partial_bnfc_acsl_parser.y"
                                { (yyval.listlexprrelinner_) = new partial_bnfc_acsl::ListLexprRelInner(); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 1732 "Parser.C"
    break;

  case 38: /* ListLexprRelInner: ListLexprRelInner LexprRelInner  */
#line 274 "partial_bnfc_acsl_parser.y"
                                    { (yyvsp[-1].listlexprrelinner_)->push_back((yyvsp[0].lexprrelinner_)); (yyval.listlexprrelinner_) = (yyvsp[-1].listlexprrelinner_); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 1738 "Parser.C"
    break;

  case 39: /* Relation: _LT  */
#line 276 "partial_bnfc_acsl_parser.y"
               { (yyval.relation_) = new partial_bnfc_acsl::LessRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1744 "Parser.C"
    break;

  case 40: /* Relation: _GT  */
#line 277 "partial_bnfc_acsl_parser.y"
        { (yyval.relation_) = new partial_bnfc_acsl::GreaterRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1750 "Parser.C"
    break;

  case 41: /* Relation: _LDARROW  */
#line 278 "partial_bnfc_acsl_parser.y"
             { (yyval.relation_) = new partial_bnfc_acsl::LessEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1756 "Parser.C"
    break;

  case 42: /* Relation: _GTEQ  */
#line 279 "partial_bnfc_acsl_parser.y"
          { (yyval.relation_) = new partial_bnfc_acsl::GreaterEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1762 "Parser.C"
    break;

  case 43: /* Relation: _DEQ  */
#line 280 "partial_bnfc_acsl_parser.y"
         { (yyval.relation_) = new partial_bnfc_acsl::EqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1768 "Parser.C"
    break;

  case 44: /* Relation: _BANGEQ  */
#line 281 "partial_bnfc_acsl_parser.y"
            { (yyval.relation_) = new partial_bnfc_acsl::NotEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1774 "Parser.C"
    break;

  case 45: /* Lexpr2: Lexpr3  */
#line 283 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1780 "Parser.C"
    break;

  case 46: /* Lexpr3: _BANG Lexpr3  */
#line 285 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::NotLexprInner((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1786 "Parser.C"
    break;

  case 47: /* Lexpr3: _SYMB_22  */
#line 286 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::TrueLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1792 "Parser.C"
    break;

  case 48: /* Lexpr3: _SYMB_23  */
#line 287 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::FalseLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1798 "Parser.C"
    break;

  case 49: /* Lexpr3: _SYMB_24  */
#line 288 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::AutomaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1804 "Parser.C"
    break;

  case 50: /* Lexpr3: _SYMB_25  */
#line 289 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::DynamicLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1810 "Parser.C"
    break;

  case 51: /* Lexpr3: _SYMB_26  */
#line 290 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::RegisterLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1816 "Parser.C"
    break;

  case 52: /* Lexpr3: _SYMB_27  */
#line 291 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::StaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1822 "Parser.C"
    break;

  case 53: /* Lexpr3: _SYMB_28  */
#line 292 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::UnallocatedLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1828 "Parser.C"
    break;

  case 54: /* Lexpr3: _SYMB_29  */
#line 293 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::NullLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1834 "Parser.C"
    break;

  case 55: /* Lexpr3: _INTEGER_  */
#line 294 "partial_bnfc_acsl_parser.y"
              { (yyval.lexpr_) = new partial_bnfc_acsl::LexprIntConst((yyvsp[0]._int)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1840 "Parser.C"
    break;

  case 56: /* Lexpr3: _DOUBLE_  */
#line 295 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::LexprFloatConst((yyvsp[0]._double)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1846 "Parser.C"
    break;

  case 57: /* Lexpr3: _STRING_  */
#line 296 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::LexprStringConst((yyvsp[0]._string)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1852 "Parser.C"
    break;

  case 58: /* Lexpr3: Lexpr3 _PLUS Lexpr3  */
#line 297 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::AddLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1858 "Parser.C"
    break;

  case 59: /* Lexpr3: Lexpr3 _MINUS Lexpr3  */
#line 298 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::SubtrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1864 "Parser.C"
    break;

  case 60: /* Lexpr3: Lexpr3 _STAR Lexpr3  */
#line 299 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::MultLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1870 "Parser.C"
    break;

  case 61: /* Lexpr3: Lexpr3 _SLASH Lexpr3  */
#line 300 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::DivLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1876 "Parser.C"
    break;

  case 62: /* Lexpr3: Lexpr3 _PERCENT Lexpr3  */
#line 301 "partial_bnfc_acsl_parser.y"
                           { (yyval.lexpr_) = new partial_bnfc_acsl::ModLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1882 "Parser.C"
    break;

  case 63: /* Lexpr3: Lexpr3 _SYMB_35 Lexpr3  */
#line 302 "partial_bnfc_acsl_parser.y"
                           { (yyval.lexpr_) = new partial_bnfc_acsl::StarHatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1888 "Parser.C"
    break;

  case 64: /* Lexpr3: Lexpr3 _LBRACK Lexpr _RBRACK  */
#line 303 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexpr_) = new partial_bnfc_acsl::SquaresLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1894 "Parser.C"
    break;

  case 65: /* Lexpr3: _MINUS Lexpr3  */
#line 304 "partial_bnfc_acsl_parser.y"
                  { (yyval.lexpr_) = new partial_bnfc_acsl::MinusLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1900 "Parser.C"
    break;

  case 66: /* Lexpr3: _PLUS Lexpr3  */
#line 305 "partial_bnfc_acsl_parser.y"
                 { (yyval.lexpr_) = new partial_bnfc_acsl::PlusLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1906 "Parser.C"
    break;

  case 67: /* Lexpr3: _TILDE Lexpr3  */
#line 306 "partial_bnfc_acsl_parser.y"
                  { (yyval.lexpr_) = new partial_bnfc_acsl::TildeLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1912 "Parser.C"
    break;

  case 68: /* Lexpr3: _STAR Lexpr3  */
#line 307 "partial_bnfc_acsl_parser.y"
                 { (yyval.lexpr_) = new partial_bnfc_acsl::StarLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1918 "Parser.C"
    break;

  case 69: /* Lexpr3: _AMP Lexpr3  */
#line 308 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = new partial_bnfc_acsl::AmpUnaryLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1924 "Parser.C"
    break;

  case 70: /* Lexpr3: _KW_sizeof _LPAREN Lexpr _RPAREN  */
#line 309 "partial_bnfc_acsl_parser.y"
                                     { (yyval.lexpr_) = new partial_bnfc_acsl::SizeOfLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1930 "Parser.C"
    break;

  case 71: /* Lexpr3: _SYMB_41 _LPAREN Lexpr _RPAREN  */
#line 310 "partial_bnfc_acsl_parser.y"
                                   { (yyval.lexpr_) = new partial_bnfc_acsl::OldLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1936 "Parser.C"
    break;

  case 72: /* Lexpr3: _SYMB_42  */
#line 311 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::ResultLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1942 "Parser.C"
    break;

  case 73: /* Lexpr3: _SYMB_43 _LPAREN ListLexpr _RPAREN  */
#line 312 "partial_bnfc_acsl_parser.y"
                                       { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new partial_bnfc_acsl::SeparatedLexpr((yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1948 "Parser.C"
    break;

  case 74: /* Lexpr3: FullIdentifier _LPAREN ListLexpr _RPAREN  */
#line 313 "partial_bnfc_acsl_parser.y"
                                             { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new partial_bnfc_acsl::FullIdParenLexpr((yyvsp[-3].fullidentifier_), (yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1954 "Parser.C"
    break;

  case 75: /* Lexpr3: FullIdentifier  */
#line 314 "partial_bnfc_acsl_parser.y"
                   { (yyval.lexpr_) = new partial_bnfc_acsl::FullId((yyvsp[0].fullidentifier_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1960 "Parser.C"
    break;

  case 76: /* Lexpr3: _SYMB_44  */
#line 315 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::PiLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1966 "Parser.C"
    break;

  case 77: /* Lexpr3: Lexpr3 _DGT Lexpr3  */
#line 316 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::LessLessLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1972 "Parser.C"
    break;

  case 78: /* Lexpr3: Lexpr3 _DLT Lexpr3  */
#line 317 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::GreaterGreaterLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1978 "Parser.C"
    break;

  case 79: /* Lexpr3: _LPAREN Lexpr _RPAREN  */
#line 318 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = (yyvsp[-1].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1984 "Parser.C"
    break;

  case 80: /* Lexpr3: _SYMB_47 _LPAREN Lexpr _RPAREN  */
#line 319 "partial_bnfc_acsl_parser.y"
                                   { (yyval.lexpr_) = new partial_bnfc_acsl::TypeOfLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1990 "Parser.C"
    break;

  case 81: /* PostCond: _KW_ensures  */
#line 321 "partial_bnfc_acsl_parser.y"
                       { (yyval.postcond_) = new partial_bnfc_acsl::EnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 1996 "Parser.C"
    break;

  case 82: /* PostCond: _KW_exits  */
#line 322 "partial_bnfc_acsl_parser.y"
              { (yyval.postcond_) = new partial_bnfc_acsl::ExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2002 "Parser.C"
    break;

  case 83: /* PostCond: _KW_breaks  */
#line 323 "partial_bnfc_acsl_parser.y"
               { (yyval.postcond_) = new partial_bnfc_acsl::BreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2008 "Parser.C"
    break;

  case 84: /* PostCond: _KW_continues  */
#line 324 "partial_bnfc_acsl_parser.y"
                  { (yyval.postcond_) = new partial_bnfc_acsl::ContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2014 "Parser.C"
    break;

  case 85: /* PostCond: _KW_returns  */
#line 325 "partial_bnfc_acsl_parser.y"
                { (yyval.postcond_) = new partial_bnfc_acsl::ReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2020 "Parser.C"
    break;

  case 86: /* PostCond: _KW_check _KW_ensures  */
#line 326 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::CheckEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2026 "Parser.C"
    break;

  case 87: /* PostCond: _KW_check _KW_exits  */
#line 327 "partial_bnfc_acsl_parser.y"
                        { (yyval.postcond_) = new partial_bnfc_acsl::CheckExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2032 "Parser.C"
    break;

  case 88: /* PostCond: _KW_check _KW_breaks  */
#line 328 "partial_bnfc_acsl_parser.y"
                         { (yyval.postcond_) = new partial_bnfc_acsl::CheckBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2038 "Parser.C"
    break;

  case 89: /* PostCond: _KW_check _KW_continues  */
#line 329 "partial_bnfc_acsl_parser.y"
                            { (yyval.postcond_) = new partial_bnfc_acsl::CheckContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2044 "Parser.C"
    break;

  case 90: /* PostCond: _KW_check _KW_returns  */
#line 330 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::CheckReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2050 "Parser.C"
    break;

  case 91: /* PostCond: _KW_admit _KW_ensures  */
#line 331 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::AdmitEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2056 "Parser.C"
    break;

  case 92: /* PostCond: _KW_admit _KW_exits  */
#line 332 "partial_bnfc_acsl_parser.y"
                        { (yyval.postcond_) = new partial_bnfc_acsl::AdmitExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2062 "Parser.C"
    break;

  case 93: /* PostCond: _KW_admit _KW_breaks  */
#line 333 "partial_bnfc_acsl_parser.y"
                         { (yyval.postcond_) = new partial_bnfc_acsl::AdmitBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2068 "Parser.C"
    break;

  case 94: /* PostCond: _KW_admit _KW_continues  */
#line 334 "partial_bnfc_acsl_parser.y"
                            { (yyval.postcond_) = new partial_bnfc_acsl::AdmitContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2074 "Parser.C"
    break;

  case 95: /* PostCond: _KW_admit _KW_returns  */
#line 335 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::AdmitReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2080 "Parser.C"
    break;

  case 96: /* FullIdentifier: Identifier  */
#line 337 "partial_bnfc_acsl_parser.y"
                            { (yyval.fullidentifier_) = new partial_bnfc_acsl::SimpleIdentifierFull((yyvsp[0].identifier_)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2086 "Parser.C"
    break;

  case 97: /* Identifier: _IDENT_  */
#line 342 "partial_bnfc_acsl_parser.y"
                     { (yyval.identifier_) = new partial_bnfc_acsl::IdentifierIdent((yyvsp[0]._string)); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 2092 "Parser.C"
    break;


#line 2096 "Parser.C"

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

#line 345 "partial_bnfc_acsl_parser.y"


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

/* Entrypoint: parse ListAnnot* from file. */
ListAnnot* pListAnnot(FILE *inp)
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
    return result.listannot_;
  }
}

/* Entrypoint: parse ListAnnot* from string. */
ListAnnot* psListAnnot(const char *str)
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
    return result.listannot_;
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

/* Entrypoint: parse ClauseKW* from file. */
ClauseKW* pClauseKW(FILE *inp)
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
    return result.clausekw_;
  }
}

/* Entrypoint: parse ClauseKW* from string. */
ClauseKW* psClauseKW(const char *str)
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
    return result.clausekw_;
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


}
