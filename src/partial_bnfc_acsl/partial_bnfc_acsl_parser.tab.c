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
  YYSYMBOL_ClauseKW = 83,                  /* ClauseKW  */
  YYSYMBOL_Terminates = 84,                /* Terminates  */
  YYSYMBOL_Decreases = 85,                 /* Decreases  */
  YYSYMBOL_SimpleClauses = 86,             /* SimpleClauses  */
  YYSYMBOL_NESimpleClauses = 87,           /* NESimpleClauses  */
  YYSYMBOL_Behaviors = 88,                 /* Behaviors  */
  YYSYMBOL_CompleteOrDisjoint = 89,        /* CompleteOrDisjoint  */
  YYSYMBOL_Lexpr = 90,                     /* Lexpr  */
  YYSYMBOL_ListLexpr = 91,                 /* ListLexpr  */
  YYSYMBOL_Lexpr1 = 92,                    /* Lexpr1  */
  YYSYMBOL_LexprRelInner = 93,             /* LexprRelInner  */
  YYSYMBOL_ListLexprRelInner = 94,         /* ListLexprRelInner  */
  YYSYMBOL_Relation = 95,                  /* Relation  */
  YYSYMBOL_Lexpr2 = 96,                    /* Lexpr2  */
  YYSYMBOL_Lexpr3 = 97,                    /* Lexpr3  */
  YYSYMBOL_PostCond = 98,                  /* PostCond  */
  YYSYMBOL_FullIdentifier = 99,            /* FullIdentifier  */
  YYSYMBOL_Identifier = 100                /* Identifier  */
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

#line 251 "partial_bnfc_acsl_parser.tab.c"


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
#define YYLAST   623

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

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
     215,   216,   217,   218,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   240,   242,   244,   245,   247,   248,   250,
     252,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   269,   270,   272,   273,   275,
     277,   278,   280,   281,   282,   283,   284,   285,   287,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   341,
     346
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
  "ClauseKW", "Terminates", "Decreases", "SimpleClauses",
  "NESimpleClauses", "Behaviors", "CompleteOrDisjoint", "Lexpr",
  "ListLexpr", "Lexpr1", "LexprRelInner", "ListLexprRelInner", "Relation",
  "Lexpr2", "Lexpr3", "PostCond", "FullIdentifier", "Identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,   -46,   -43,    31,    24,  -142,  -142,  -142,  -142,  -142,
      31,    31,    31,    31,    31,    31,    31,    31,  -142,  -142,
    -142,  -142,    17,  -142,  -142,  -142,    18,  -142,  -142,    19,
    -142,    21,    31,  -142,  -142,  -142,  -142,   124,  -142,  -142,
     565,    22,  -142,  -142,  -142,   180,   236,   108,   108,   356,
     108,   108,   108,    31,    31,    31,    31,   108,    31,    31,
      31,   -33,    31,    31,    31,    31,    31,    31,    31,    -6,
    -142,  -142,  -142,  -142,  -142,   157,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,    31,    31,  -142,  -142,    31,
      31,    31,    31,    31,    31,    31,    31,    31,     9,    31,
     103,   -33,  -142,   -33,  -142,  -142,   363,   392,    29,   421,
     428,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   478,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,   108,   108,   108,   108,   108,   108,   108,   108,
     485,  -142,  -142,  -142,  -142,  -142,  -142,  -142,    31,    37,
     -42,   207,  -142,  -142,    31,  -142,  -142,  -142,    31,  -142,
    -142,  -142,    31,  -142,  -142,   592,  -142,  -142,   292,  -142,
     514,  -142,   103,  -142,  -142
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     0,    41,     0,     2,     3,     4,    33,     7,
      41,    41,     0,     0,    41,     0,     0,     0,    72,    73,
      71,    77,     0,    99,    74,    95,     0,    75,    70,     0,
      76,     0,     0,    80,    78,    79,   120,    32,    54,    57,
      68,    98,   119,     1,    34,    32,    32,    69,    92,     0,
      91,    89,    88,    41,    41,    41,    41,    90,     0,     0,
       0,     6,     0,     0,     0,    41,     0,     0,     0,     0,
      28,    24,    23,    27,   106,     0,    30,   107,    26,    31,
     104,   105,    29,    22,   108,     0,     0,    11,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    41,
      35,     6,    13,     6,    12,   102,     0,    55,     0,     0,
       0,    47,    45,    50,     8,    51,    43,    42,     0,    52,
      49,    46,   116,   117,   114,   115,    15,    16,    17,    14,
     118,   111,   112,   109,   110,    19,    20,    21,    18,   113,
      48,    44,    85,    83,    86,    81,    82,    84,   101,   100,
       0,    67,    62,    64,    66,    63,    65,    61,     0,     0,
       0,     0,    39,    36,    41,    10,     9,    94,    41,    96,
     103,    93,    41,    87,    58,    68,    97,    40,    32,    56,
      53,     5,    35,    38,    37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,  -142,  -142,   -58,  -142,   -36,  -142,  -142,
    -141,  -142,  -142,  -142,    -3,   -82,    49,  -142,  -142,  -142,
    -109,   -11,   -87,  -142,  -142
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,     8,     9,    87,    44,   100,
     162,   163,   177,   181,   107,   108,    38,   157,    98,   158,
      39,    40,    88,    41,    42
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    47,    48,   114,    50,    51,    52,    45,    46,   102,
     104,    49,   122,   164,   151,   123,     1,   159,   124,   125,
      10,    57,     2,    11,    43,   130,    53,    54,    55,   152,
      56,    99,   153,     3,   154,    12,   155,   156,    13,   169,
      14,   184,    15,   165,    16,   166,    17,   176,   122,   174,
     106,   123,   109,   110,   124,   125,     0,   126,   127,   128,
     129,   130,   118,    18,    19,    20,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,   142,   143,
     144,   145,   146,   147,   148,   149,   179,     0,     0,     0,
       0,     0,     0,     0,   150,   164,     0,     0,     0,    31,
       0,     0,    32,    33,    34,    35,    36,   111,   112,   113,
       0,   115,   116,   117,    89,   119,   120,   121,     0,    90,
      91,    92,     0,    93,     0,    94,     0,     0,     0,     0,
      95,    58,    59,     0,   140,   141,     0,    96,     0,    97,
      60,     0,   183,    61,     0,    62,     0,   175,    63,     0,
      64,     0,   160,     0,    65,     0,     0,    74,   161,    66,
      77,   178,     0,    80,    81,     0,     0,     0,     0,   180,
      84,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    58,    59,     0,
      83,    84,     0,    85,    86,     0,    60,     0,     0,   101,
       0,    62,     0,     0,    63,     0,    64,     0,     0,     0,
      65,   131,     0,     0,   132,    66,     0,   133,   134,     0,
     135,   136,   137,   138,   139,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    58,    59,     0,    83,    84,     0,    85,
      86,     0,    60,     0,     0,   103,     0,    62,     0,     0,
      63,   131,    64,     0,   132,     0,    65,   133,   134,     0,
       0,    66,     0,     0,   139,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    58,
      59,     0,    83,    84,     0,    85,    86,     0,    60,     0,
       0,   182,     0,    62,     0,     0,    63,     0,    64,     0,
       0,     0,    65,     0,     0,     0,     0,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,    83,    84,
       0,    85,    86,    58,    59,     0,   105,     0,     0,     0,
      58,    59,    60,   167,     0,     0,     0,    62,     0,    60,
      63,     0,    64,     0,    62,     0,    65,    63,     0,    64,
       0,    66,     0,    65,     0,     0,     0,     0,    66,    58,
      59,     0,     0,    67,    68,     0,   168,     0,    60,     0,
      67,    68,     0,    62,     0,     0,    63,     0,    64,     0,
       0,     0,    65,     0,     0,    85,    86,    66,    58,    59,
       0,   170,    85,    86,     0,    58,    59,    60,   171,    67,
      68,     0,    62,     0,    60,    63,     0,    64,     0,    62,
       0,    65,    63,     0,    64,     0,    66,     0,    65,     0,
       0,    85,    86,    66,     0,     0,     0,     0,    67,    68,
       0,     0,     0,     0,     0,    67,    68,     0,     0,     0,
       0,     0,     0,     0,     0,    58,    59,     0,     0,     0,
      85,    86,    58,    59,    60,     0,   172,    85,    86,    62,
       0,    60,    63,     0,    64,     0,    62,     0,    65,    63,
       0,    64,     0,    66,     0,    65,     0,     0,     0,     0,
      66,    58,    59,     0,     0,    67,    68,     0,     0,     0,
      60,   173,    67,    68,     0,    62,     0,     0,    63,     0,
      64,     0,     0,     0,    65,     0,     0,    85,    86,    66,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     0,
       0,    67,    68,     0,     0,     0,     0,     0,     0,     0,
     -60,    89,     0,     0,     0,     0,    90,    91,    92,     0,
      93,     0,    94,    85,    86,   -60,     0,    95,   -60,     0,
     -60,     0,   -60,   -60,    96,     0,    97,   -59,    89,     0,
       0,     0,     0,    90,    91,    92,     0,    93,     0,    94,
       0,     0,   -59,     0,    95,   -59,     0,   -59,     0,   -59,
     -59,    96,     0,    97
};

static const yytype_int16 yycheck[] =
{
       3,    12,    13,    61,    15,    16,    17,    10,    11,    45,
      46,    14,    54,   100,     5,    57,    49,    99,    60,    61,
      66,    32,    55,    66,     0,    67,     9,     9,     9,    20,
       9,     9,    23,    66,    25,     4,    27,    28,     7,    10,
       9,   182,    11,   101,    13,   103,    15,    10,    54,   158,
      53,    57,    55,    56,    60,    61,    -1,    63,    64,    65,
      66,    67,    65,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,   182,    -1,    -1,    -1,    68,
      -1,    -1,    71,    72,    73,    74,    75,    58,    59,    60,
      -1,    62,    63,    64,     6,    66,    67,    68,    -1,    11,
      12,    13,    -1,    15,    -1,    17,    -1,    -1,    -1,    -1,
      22,     7,     8,    -1,    85,    86,    -1,    29,    -1,    31,
      16,    -1,   178,    19,    -1,    21,    -1,   158,    24,    -1,
      26,    -1,    49,    -1,    30,    -1,    -1,    54,    55,    35,
      57,   164,    -1,    60,    61,    -1,    -1,    -1,    -1,   172,
      67,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     7,     8,    -1,
      66,    67,    -1,    69,    70,    -1,    16,    -1,    -1,    19,
      -1,    21,    -1,    -1,    24,    -1,    26,    -1,    -1,    -1,
      30,    54,    -1,    -1,    57,    35,    -1,    60,    61,    -1,
      63,    64,    65,    66,    67,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     7,     8,    -1,    66,    67,    -1,    69,
      70,    -1,    16,    -1,    -1,    19,    -1,    21,    -1,    -1,
      24,    54,    26,    -1,    57,    -1,    30,    60,    61,    -1,
      -1,    35,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     7,
       8,    -1,    66,    67,    -1,    69,    70,    -1,    16,    -1,
      -1,    19,    -1,    21,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    66,    67,
      -1,    69,    70,     7,     8,    -1,    10,    -1,    -1,    -1,
       7,     8,    16,    10,    -1,    -1,    -1,    21,    -1,    16,
      24,    -1,    26,    -1,    21,    -1,    30,    24,    -1,    26,
      -1,    35,    -1,    30,    -1,    -1,    -1,    -1,    35,     7,
       8,    -1,    -1,    47,    48,    -1,    14,    -1,    16,    -1,
      47,    48,    -1,    21,    -1,    -1,    24,    -1,    26,    -1,
      -1,    -1,    30,    -1,    -1,    69,    70,    35,     7,     8,
      -1,    10,    69,    70,    -1,     7,     8,    16,    10,    47,
      48,    -1,    21,    -1,    16,    24,    -1,    26,    -1,    21,
      -1,    30,    24,    -1,    26,    -1,    35,    -1,    30,    -1,
      -1,    69,    70,    35,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      69,    70,     7,     8,    16,    -1,    18,    69,    70,    21,
      -1,    16,    24,    -1,    26,    -1,    21,    -1,    30,    24,
      -1,    26,    -1,    35,    -1,    30,    -1,    -1,    -1,    -1,
      35,     7,     8,    -1,    -1,    47,    48,    -1,    -1,    -1,
      16,    46,    47,    48,    -1,    21,    -1,    -1,    24,    -1,
      26,    -1,    -1,    -1,    30,    -1,    -1,    69,    70,    35,
      -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,
      15,    -1,    17,    69,    70,    20,    -1,    22,    23,    -1,
      25,    -1,    27,    28,    29,    -1,    31,     5,     6,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,    17,
      -1,    -1,    20,    -1,    22,    23,    -1,    25,    -1,    27,
      28,    29,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    49,    55,    66,    77,    78,    79,    80,    81,    82,
      66,    66,     4,     7,     9,    11,    13,    15,    32,    33,
      34,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    68,    71,    72,    73,    74,    75,    90,    92,    96,
      97,    99,   100,     0,    84,    90,    90,    97,    97,    90,
      97,    97,    97,     9,     9,     9,     9,    97,     7,     8,
      16,    19,    21,    24,    26,    30,    35,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    66,    67,    69,    70,    83,    98,     6,
      11,    12,    13,    15,    17,    22,    29,    31,    94,     9,
      85,    19,    83,    19,    83,    10,    90,    90,    91,    90,
      90,    92,    92,    92,    81,    92,    92,    92,    90,    92,
      92,    92,    54,    57,    60,    61,    63,    64,    65,    66,
      67,    54,    57,    60,    61,    63,    64,    65,    66,    67,
      92,    92,    97,    97,    97,    97,    97,    97,    97,    97,
      90,     5,    20,    23,    25,    27,    28,    93,    95,    91,
      49,    55,    86,    87,    98,    81,    81,    10,    14,    10,
      10,    10,    18,    46,    96,    97,    10,    88,    90,    91,
      90,    89,    19,    83,    86
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    79,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    85,    86,    86,    87,    87,    88,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    92,    92,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
     100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     6,     0,     1,     4,     5,
       5,     3,     4,     4,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     0,     0,     1,     4,     3,     0,
       0,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     1,     1,     3,     1,     4,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     4,     2,     2,
       2,     2,     2,     4,     4,     1,     4,     4,     1,     1,
       3,     3,     3,     4,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
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
  case 2: /* Program: Annot  */
#line 199 "partial_bnfc_acsl_parser.y"
                { (yyval.program_) = new partial_bnfc_acsl::AProgram((yyvsp[0].annot_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1562 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 3: /* Annot: Code_Annot  */
#line 201 "partial_bnfc_acsl_parser.y"
                   { (yyval.annot_) = new partial_bnfc_acsl::CodeAnnot((yyvsp[0].code_annot_)); (yyval.annot_)->line_number = (yyloc).first_line; (yyval.annot_)->char_number = (yyloc).first_column; result->annot_ = (yyval.annot_); }
#line 1568 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 4: /* Code_Annot: Contract  */
#line 206 "partial_bnfc_acsl_parser.y"
                      { (yyval.code_annot_) = new partial_bnfc_acsl::CodeAnnotContract((yyvsp[0].contract_)); (yyval.code_annot_)->line_number = (yyloc).first_line; (yyval.code_annot_)->char_number = (yyloc).first_column; result->code_annot_ = (yyval.code_annot_); }
#line 1574 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 5: /* Contract: Requires Terminates Decreases SimpleClauses Behaviors CompleteOrDisjoint  */
#line 208 "partial_bnfc_acsl_parser.y"
                                                                                    { (yyval.contract_) = new partial_bnfc_acsl::SimpleContract((yyvsp[-5].requires_), (yyvsp[-4].terminates_), (yyvsp[-3].decreases_), (yyvsp[-2].simpleclauses_), (yyvsp[-1].behaviors_), (yyvsp[0].completeordisjoint_)); (yyval.contract_)->line_number = (yyloc).first_line; (yyval.contract_)->char_number = (yyloc).first_column; result->contract_ = (yyval.contract_); }
#line 1580 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 6: /* Requires: %empty  */
#line 210 "partial_bnfc_acsl_parser.y"
                       { (yyval.requires_) = new partial_bnfc_acsl::NoRequires(); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 1586 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 7: /* Requires: NERequires  */
#line 211 "partial_bnfc_acsl_parser.y"
               { (yyval.requires_) = new partial_bnfc_acsl::SomeRequires((yyvsp[0].nerequires_)); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 1592 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 8: /* NERequires: _KW_requires Lexpr _SEMI Requires  */
#line 213 "partial_bnfc_acsl_parser.y"
                                               { (yyval.nerequires_) = new partial_bnfc_acsl::SimpleRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1598 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 9: /* NERequires: _KW_check _KW_requires Lexpr _SEMI Requires  */
#line 214 "partial_bnfc_acsl_parser.y"
                                                { (yyval.nerequires_) = new partial_bnfc_acsl::CheckRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1604 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 10: /* NERequires: _KW_admit _KW_requires Lexpr _SEMI Requires  */
#line 215 "partial_bnfc_acsl_parser.y"
                                                { (yyval.nerequires_) = new partial_bnfc_acsl::AdimtRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1610 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 11: /* NERequires: _KW_requires Lexpr ClauseKW  */
#line 216 "partial_bnfc_acsl_parser.y"
                                { (yyval.nerequires_) = new partial_bnfc_acsl::ClauseSimpleRequires((yyvsp[-1].lexpr_), (yyvsp[0].clausekw_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1616 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 12: /* NERequires: _KW_check _KW_requires Lexpr ClauseKW  */
#line 217 "partial_bnfc_acsl_parser.y"
                                          { (yyval.nerequires_) = new partial_bnfc_acsl::ClauseCheckRequires((yyvsp[-1].lexpr_), (yyvsp[0].clausekw_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1622 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 13: /* NERequires: _KW_admit _KW_requires Lexpr ClauseKW  */
#line 218 "partial_bnfc_acsl_parser.y"
                                          { (yyval.nerequires_) = new partial_bnfc_acsl::ClauseAdimtRequires((yyvsp[-1].lexpr_), (yyvsp[0].clausekw_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 1628 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 14: /* ClauseKW: _KW_admit _KW_requires  */
#line 220 "partial_bnfc_acsl_parser.y"
                                  { (yyval.clausekw_) = new partial_bnfc_acsl::AdmitRequiresClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1634 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 15: /* ClauseKW: _KW_admit _KW_invariant  */
#line 221 "partial_bnfc_acsl_parser.y"
                            { (yyval.clausekw_) = new partial_bnfc_acsl::AdmitInvariantClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1640 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 16: /* ClauseKW: _KW_admit _KW_lemma  */
#line 222 "partial_bnfc_acsl_parser.y"
                        { (yyval.clausekw_) = new partial_bnfc_acsl::AdmitLemmaClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1646 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 17: /* ClauseKW: _KW_admit _KW_loop  */
#line 223 "partial_bnfc_acsl_parser.y"
                       { (yyval.clausekw_) = new partial_bnfc_acsl::AdmitLoopClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1652 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 18: /* ClauseKW: _KW_check _KW_requires  */
#line 224 "partial_bnfc_acsl_parser.y"
                           { (yyval.clausekw_) = new partial_bnfc_acsl::CheckRequiresClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1658 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 19: /* ClauseKW: _KW_check _KW_invariant  */
#line 225 "partial_bnfc_acsl_parser.y"
                            { (yyval.clausekw_) = new partial_bnfc_acsl::CheckInvariantClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1664 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 20: /* ClauseKW: _KW_check _KW_lemma  */
#line 226 "partial_bnfc_acsl_parser.y"
                        { (yyval.clausekw_) = new partial_bnfc_acsl::CheckLemmaClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1670 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 21: /* ClauseKW: _KW_check _KW_loop  */
#line 227 "partial_bnfc_acsl_parser.y"
                       { (yyval.clausekw_) = new partial_bnfc_acsl::CheckLoopClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1676 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 22: /* ClauseKW: _KW_requires  */
#line 228 "partial_bnfc_acsl_parser.y"
                 { (yyval.clausekw_) = new partial_bnfc_acsl::RequiresClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1682 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 23: /* ClauseKW: _KW_assumes  */
#line 229 "partial_bnfc_acsl_parser.y"
                { (yyval.clausekw_) = new partial_bnfc_acsl::AssumesClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1688 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 24: /* ClauseKW: _KW_assigns  */
#line 230 "partial_bnfc_acsl_parser.y"
                { (yyval.clausekw_) = new partial_bnfc_acsl::AssignsClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1694 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 25: /* ClauseKW: PostCond  */
#line 231 "partial_bnfc_acsl_parser.y"
             { (yyval.clausekw_) = new partial_bnfc_acsl::PostCondClause((yyvsp[0].postcond_)); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1700 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 26: /* ClauseKW: _KW_decreases  */
#line 232 "partial_bnfc_acsl_parser.y"
                  { (yyval.clausekw_) = new partial_bnfc_acsl::DecreasesClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1706 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 27: /* ClauseKW: _KW_behavior  */
#line 233 "partial_bnfc_acsl_parser.y"
                 { (yyval.clausekw_) = new partial_bnfc_acsl::BehaviorClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1712 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 28: /* ClauseKW: _KW_allocates  */
#line 234 "partial_bnfc_acsl_parser.y"
                  { (yyval.clausekw_) = new partial_bnfc_acsl::AllocatesClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1718 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 29: /* ClauseKW: _KW_frees  */
#line 235 "partial_bnfc_acsl_parser.y"
              { (yyval.clausekw_) = new partial_bnfc_acsl::FreesClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1724 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 30: /* ClauseKW: _KW_complete  */
#line 236 "partial_bnfc_acsl_parser.y"
                 { (yyval.clausekw_) = new partial_bnfc_acsl::CompleteClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1730 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 31: /* ClauseKW: _KW_disjoint  */
#line 237 "partial_bnfc_acsl_parser.y"
                 { (yyval.clausekw_) = new partial_bnfc_acsl::DisjointClause(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1736 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 32: /* ClauseKW: %empty  */
#line 238 "partial_bnfc_acsl_parser.y"
                { (yyval.clausekw_) = new partial_bnfc_acsl::EmptyClauseKW(); (yyval.clausekw_)->line_number = (yyloc).first_line; (yyval.clausekw_)->char_number = (yyloc).first_column; result->clausekw_ = (yyval.clausekw_); }
#line 1742 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 33: /* Terminates: %empty  */
#line 240 "partial_bnfc_acsl_parser.y"
                         { (yyval.terminates_) = new partial_bnfc_acsl::NoTerminate(); (yyval.terminates_)->line_number = (yyloc).first_line; (yyval.terminates_)->char_number = (yyloc).first_column; result->terminates_ = (yyval.terminates_); }
#line 1748 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 34: /* Decreases: %empty  */
#line 242 "partial_bnfc_acsl_parser.y"
                        { (yyval.decreases_) = new partial_bnfc_acsl::NoDecreases(); (yyval.decreases_)->line_number = (yyloc).first_line; (yyval.decreases_)->char_number = (yyloc).first_column; result->decreases_ = (yyval.decreases_); }
#line 1754 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 35: /* SimpleClauses: %empty  */
#line 244 "partial_bnfc_acsl_parser.y"
                            { (yyval.simpleclauses_) = new partial_bnfc_acsl::NoSimpleClauses(); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 1760 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 36: /* SimpleClauses: NESimpleClauses  */
#line 245 "partial_bnfc_acsl_parser.y"
                    { (yyval.simpleclauses_) = new partial_bnfc_acsl::SomeSimpleClauses((yyvsp[0].nesimpleclauses_)); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 1766 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 37: /* NESimpleClauses: PostCond Lexpr _SEMI SimpleClauses  */
#line 247 "partial_bnfc_acsl_parser.y"
                                                     { (yyval.nesimpleclauses_) = new partial_bnfc_acsl::PostCondSimpleClauses((yyvsp[-3].postcond_), (yyvsp[-2].lexpr_), (yyvsp[0].simpleclauses_)); (yyval.nesimpleclauses_)->line_number = (yyloc).first_line; (yyval.nesimpleclauses_)->char_number = (yyloc).first_column; result->nesimpleclauses_ = (yyval.nesimpleclauses_); }
#line 1772 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 38: /* NESimpleClauses: PostCond Lexpr ClauseKW  */
#line 248 "partial_bnfc_acsl_parser.y"
                            { (yyval.nesimpleclauses_) = new partial_bnfc_acsl::ClausesPostCondSimpleClauses((yyvsp[-2].postcond_), (yyvsp[-1].lexpr_), (yyvsp[0].clausekw_)); (yyval.nesimpleclauses_)->line_number = (yyloc).first_line; (yyval.nesimpleclauses_)->char_number = (yyloc).first_column; result->nesimpleclauses_ = (yyval.nesimpleclauses_); }
#line 1778 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 39: /* Behaviors: %empty  */
#line 250 "partial_bnfc_acsl_parser.y"
                        { (yyval.behaviors_) = new partial_bnfc_acsl::NoBehaviors(); (yyval.behaviors_)->line_number = (yyloc).first_line; (yyval.behaviors_)->char_number = (yyloc).first_column; result->behaviors_ = (yyval.behaviors_); }
#line 1784 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 40: /* CompleteOrDisjoint: %empty  */
#line 252 "partial_bnfc_acsl_parser.y"
                                 { (yyval.completeordisjoint_) = new partial_bnfc_acsl::NoComplDisj(); (yyval.completeordisjoint_)->line_number = (yyloc).first_line; (yyval.completeordisjoint_)->char_number = (yyloc).first_column; result->completeordisjoint_ = (yyval.completeordisjoint_); }
#line 1790 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 41: /* Lexpr: %empty  */
#line 254 "partial_bnfc_acsl_parser.y"
                    { (yyval.lexpr_) = new partial_bnfc_acsl::NoLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1796 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 42: /* Lexpr: Lexpr _SYMB_1 Lexpr1  */
#line 255 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::ImplLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1802 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 43: /* Lexpr: Lexpr _SYMB_2 Lexpr1  */
#line 256 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::IffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1808 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 44: /* Lexpr: Lexpr _DBAR Lexpr1  */
#line 257 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::OrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1814 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 45: /* Lexpr: Lexpr _DAMP Lexpr1  */
#line 258 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::AndLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1820 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 46: /* Lexpr: Lexpr _DCARET Lexpr1  */
#line 259 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::HatHatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1826 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 47: /* Lexpr: Lexpr _AMP Lexpr1  */
#line 260 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::AmpLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1832 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 48: /* Lexpr: Lexpr _BAR Lexpr1  */
#line 261 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::PipeLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1838 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 49: /* Lexpr: Lexpr _CARET Lexpr1  */
#line 262 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::HatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1844 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 50: /* Lexpr: Lexpr _SYMB_9 Lexpr1  */
#line 263 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::BimpliesLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1850 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 51: /* Lexpr: Lexpr _SYMB_10 Lexpr1  */
#line 264 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = new partial_bnfc_acsl::BiffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1856 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 52: /* Lexpr: Lexpr _SYMB_11 Lexpr1  */
#line 265 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = new partial_bnfc_acsl::InLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1862 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 53: /* Lexpr: Lexpr _QUESTION Lexpr _COLON Lexpr  */
#line 266 "partial_bnfc_acsl_parser.y"
                                       { (yyval.lexpr_) = new partial_bnfc_acsl::TernaryLexpr((yyvsp[-4].lexpr_), (yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1868 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 54: /* Lexpr: Lexpr1  */
#line 267 "partial_bnfc_acsl_parser.y"
           { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1874 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 55: /* ListLexpr: Lexpr  */
#line 269 "partial_bnfc_acsl_parser.y"
                  { (yyval.listlexpr_) = new partial_bnfc_acsl::ListLexpr(); (yyval.listlexpr_)->push_back((yyvsp[0].lexpr_)); result->listlexpr_ = (yyval.listlexpr_); }
#line 1880 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 56: /* ListLexpr: Lexpr _COMMA ListLexpr  */
#line 270 "partial_bnfc_acsl_parser.y"
                           { (yyvsp[0].listlexpr_)->push_back((yyvsp[-2].lexpr_)); (yyval.listlexpr_) = (yyvsp[0].listlexpr_); result->listlexpr_ = (yyval.listlexpr_); }
#line 1886 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 57: /* Lexpr1: Lexpr2  */
#line 272 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1892 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 58: /* Lexpr1: Lexpr3 ListLexprRelInner Relation Lexpr2  */
#line 273 "partial_bnfc_acsl_parser.y"
                                             { (yyval.lexpr_) = new partial_bnfc_acsl::RelationLexpr((yyvsp[-3].lexpr_), (yyvsp[-2].listlexprrelinner_), (yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1898 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 59: /* LexprRelInner: Relation Lexpr3  */
#line 275 "partial_bnfc_acsl_parser.y"
                                { (yyval.lexprrelinner_) = new partial_bnfc_acsl::RelInnerLexpr((yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexprrelinner_)->line_number = (yyloc).first_line; (yyval.lexprrelinner_)->char_number = (yyloc).first_column; result->lexprrelinner_ = (yyval.lexprrelinner_); }
#line 1904 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 60: /* ListLexprRelInner: %empty  */
#line 277 "partial_bnfc_acsl_parser.y"
                                { (yyval.listlexprrelinner_) = new partial_bnfc_acsl::ListLexprRelInner(); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 1910 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 61: /* ListLexprRelInner: ListLexprRelInner LexprRelInner  */
#line 278 "partial_bnfc_acsl_parser.y"
                                    { (yyvsp[-1].listlexprrelinner_)->push_back((yyvsp[0].lexprrelinner_)); (yyval.listlexprrelinner_) = (yyvsp[-1].listlexprrelinner_); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 1916 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 62: /* Relation: _LT  */
#line 280 "partial_bnfc_acsl_parser.y"
               { (yyval.relation_) = new partial_bnfc_acsl::LessRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1922 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 63: /* Relation: _GT  */
#line 281 "partial_bnfc_acsl_parser.y"
        { (yyval.relation_) = new partial_bnfc_acsl::GreaterRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1928 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 64: /* Relation: _LDARROW  */
#line 282 "partial_bnfc_acsl_parser.y"
             { (yyval.relation_) = new partial_bnfc_acsl::LessEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1934 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 65: /* Relation: _GTEQ  */
#line 283 "partial_bnfc_acsl_parser.y"
          { (yyval.relation_) = new partial_bnfc_acsl::GreaterEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1940 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 66: /* Relation: _DEQ  */
#line 284 "partial_bnfc_acsl_parser.y"
         { (yyval.relation_) = new partial_bnfc_acsl::EqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1946 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 67: /* Relation: _BANGEQ  */
#line 285 "partial_bnfc_acsl_parser.y"
            { (yyval.relation_) = new partial_bnfc_acsl::NotEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 1952 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 68: /* Lexpr2: Lexpr3  */
#line 287 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1958 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 69: /* Lexpr3: _BANG Lexpr3  */
#line 289 "partial_bnfc_acsl_parser.y"
                      { (yyval.lexpr_) = new partial_bnfc_acsl::NotLexprInner((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1964 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 70: /* Lexpr3: _SYMB_22  */
#line 290 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::TrueLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1970 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 71: /* Lexpr3: _SYMB_23  */
#line 291 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::FalseLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1976 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 72: /* Lexpr3: _SYMB_24  */
#line 292 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::AutomaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1982 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 73: /* Lexpr3: _SYMB_25  */
#line 293 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::DynamicLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1988 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 74: /* Lexpr3: _SYMB_26  */
#line 294 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::RegisterLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 1994 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 75: /* Lexpr3: _SYMB_27  */
#line 295 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::StaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2000 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 76: /* Lexpr3: _SYMB_28  */
#line 296 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::UnallocatedLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2006 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 77: /* Lexpr3: _SYMB_29  */
#line 297 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::NullLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2012 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 78: /* Lexpr3: _INTEGER_  */
#line 298 "partial_bnfc_acsl_parser.y"
              { (yyval.lexpr_) = new partial_bnfc_acsl::LexprIntConst((yyvsp[0]._int)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2018 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 79: /* Lexpr3: _DOUBLE_  */
#line 299 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::LexprFloatConst((yyvsp[0]._double)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2024 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 80: /* Lexpr3: _STRING_  */
#line 300 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::LexprStringConst((yyvsp[0]._string)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2030 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 81: /* Lexpr3: Lexpr3 _PLUS Lexpr3  */
#line 301 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::AddLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2036 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 82: /* Lexpr3: Lexpr3 _MINUS Lexpr3  */
#line 302 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::SubtrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2042 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 83: /* Lexpr3: Lexpr3 _STAR Lexpr3  */
#line 303 "partial_bnfc_acsl_parser.y"
                        { (yyval.lexpr_) = new partial_bnfc_acsl::MultLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2048 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 84: /* Lexpr3: Lexpr3 _SLASH Lexpr3  */
#line 304 "partial_bnfc_acsl_parser.y"
                         { (yyval.lexpr_) = new partial_bnfc_acsl::DivLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2054 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 85: /* Lexpr3: Lexpr3 _PERCENT Lexpr3  */
#line 305 "partial_bnfc_acsl_parser.y"
                           { (yyval.lexpr_) = new partial_bnfc_acsl::ModLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2060 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 86: /* Lexpr3: Lexpr3 _SYMB_35 Lexpr3  */
#line 306 "partial_bnfc_acsl_parser.y"
                           { (yyval.lexpr_) = new partial_bnfc_acsl::StarHatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2066 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 87: /* Lexpr3: Lexpr3 _LBRACK Lexpr _RBRACK  */
#line 307 "partial_bnfc_acsl_parser.y"
                                 { (yyval.lexpr_) = new partial_bnfc_acsl::SquaresLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2072 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 88: /* Lexpr3: _MINUS Lexpr3  */
#line 308 "partial_bnfc_acsl_parser.y"
                  { (yyval.lexpr_) = new partial_bnfc_acsl::MinusLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2078 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 89: /* Lexpr3: _PLUS Lexpr3  */
#line 309 "partial_bnfc_acsl_parser.y"
                 { (yyval.lexpr_) = new partial_bnfc_acsl::PlusLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2084 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 90: /* Lexpr3: _TILDE Lexpr3  */
#line 310 "partial_bnfc_acsl_parser.y"
                  { (yyval.lexpr_) = new partial_bnfc_acsl::TildeLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2090 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 91: /* Lexpr3: _STAR Lexpr3  */
#line 311 "partial_bnfc_acsl_parser.y"
                 { (yyval.lexpr_) = new partial_bnfc_acsl::StarLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2096 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 92: /* Lexpr3: _AMP Lexpr3  */
#line 312 "partial_bnfc_acsl_parser.y"
                { (yyval.lexpr_) = new partial_bnfc_acsl::AmpUnaryLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2102 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 93: /* Lexpr3: _KW_sizeof _LPAREN Lexpr _RPAREN  */
#line 313 "partial_bnfc_acsl_parser.y"
                                     { (yyval.lexpr_) = new partial_bnfc_acsl::SizeOfLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2108 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 94: /* Lexpr3: _SYMB_41 _LPAREN Lexpr _RPAREN  */
#line 314 "partial_bnfc_acsl_parser.y"
                                   { (yyval.lexpr_) = new partial_bnfc_acsl::OldLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2114 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 95: /* Lexpr3: _SYMB_42  */
#line 315 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::ResultLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2120 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 96: /* Lexpr3: _SYMB_43 _LPAREN ListLexpr _RPAREN  */
#line 316 "partial_bnfc_acsl_parser.y"
                                       { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new partial_bnfc_acsl::SeparatedLexpr((yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2126 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 97: /* Lexpr3: FullIdentifier _LPAREN ListLexpr _RPAREN  */
#line 317 "partial_bnfc_acsl_parser.y"
                                             { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new partial_bnfc_acsl::FullIdParenLexpr((yyvsp[-3].fullidentifier_), (yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2132 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 98: /* Lexpr3: FullIdentifier  */
#line 318 "partial_bnfc_acsl_parser.y"
                   { (yyval.lexpr_) = new partial_bnfc_acsl::FullId((yyvsp[0].fullidentifier_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2138 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 99: /* Lexpr3: _SYMB_44  */
#line 319 "partial_bnfc_acsl_parser.y"
             { (yyval.lexpr_) = new partial_bnfc_acsl::PiLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2144 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 100: /* Lexpr3: Lexpr3 _DGT Lexpr3  */
#line 320 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::LessLessLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2150 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 101: /* Lexpr3: Lexpr3 _DLT Lexpr3  */
#line 321 "partial_bnfc_acsl_parser.y"
                       { (yyval.lexpr_) = new partial_bnfc_acsl::GreaterGreaterLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2156 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 102: /* Lexpr3: _LPAREN Lexpr _RPAREN  */
#line 322 "partial_bnfc_acsl_parser.y"
                          { (yyval.lexpr_) = (yyvsp[-1].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2162 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 103: /* Lexpr3: _SYMB_47 _LPAREN Lexpr _RPAREN  */
#line 323 "partial_bnfc_acsl_parser.y"
                                   { (yyval.lexpr_) = new partial_bnfc_acsl::TypeOfLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 2168 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 104: /* PostCond: _KW_ensures  */
#line 325 "partial_bnfc_acsl_parser.y"
                       { (yyval.postcond_) = new partial_bnfc_acsl::EnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2174 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 105: /* PostCond: _KW_exits  */
#line 326 "partial_bnfc_acsl_parser.y"
              { (yyval.postcond_) = new partial_bnfc_acsl::ExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2180 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 106: /* PostCond: _KW_breaks  */
#line 327 "partial_bnfc_acsl_parser.y"
               { (yyval.postcond_) = new partial_bnfc_acsl::BreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2186 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 107: /* PostCond: _KW_continues  */
#line 328 "partial_bnfc_acsl_parser.y"
                  { (yyval.postcond_) = new partial_bnfc_acsl::ContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2192 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 108: /* PostCond: _KW_returns  */
#line 329 "partial_bnfc_acsl_parser.y"
                { (yyval.postcond_) = new partial_bnfc_acsl::ReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2198 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 109: /* PostCond: _KW_check _KW_ensures  */
#line 330 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::CheckEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2204 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 110: /* PostCond: _KW_check _KW_exits  */
#line 331 "partial_bnfc_acsl_parser.y"
                        { (yyval.postcond_) = new partial_bnfc_acsl::CheckExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2210 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 111: /* PostCond: _KW_check _KW_breaks  */
#line 332 "partial_bnfc_acsl_parser.y"
                         { (yyval.postcond_) = new partial_bnfc_acsl::CheckBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2216 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 112: /* PostCond: _KW_check _KW_continues  */
#line 333 "partial_bnfc_acsl_parser.y"
                            { (yyval.postcond_) = new partial_bnfc_acsl::CheckContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2222 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 113: /* PostCond: _KW_check _KW_returns  */
#line 334 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::CheckReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2228 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 114: /* PostCond: _KW_admit _KW_ensures  */
#line 335 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::AdmitEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2234 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 115: /* PostCond: _KW_admit _KW_exits  */
#line 336 "partial_bnfc_acsl_parser.y"
                        { (yyval.postcond_) = new partial_bnfc_acsl::AdmitExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2240 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 116: /* PostCond: _KW_admit _KW_breaks  */
#line 337 "partial_bnfc_acsl_parser.y"
                         { (yyval.postcond_) = new partial_bnfc_acsl::AdmitBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2246 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 117: /* PostCond: _KW_admit _KW_continues  */
#line 338 "partial_bnfc_acsl_parser.y"
                            { (yyval.postcond_) = new partial_bnfc_acsl::AdmitContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2252 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 118: /* PostCond: _KW_admit _KW_returns  */
#line 339 "partial_bnfc_acsl_parser.y"
                          { (yyval.postcond_) = new partial_bnfc_acsl::AdmitReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 2258 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 119: /* FullIdentifier: Identifier  */
#line 341 "partial_bnfc_acsl_parser.y"
                            { (yyval.fullidentifier_) = new partial_bnfc_acsl::SimpleIdentifierFull((yyvsp[0].identifier_)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 2264 "partial_bnfc_acsl_parser.tab.c"
    break;

  case 120: /* Identifier: _IDENT_  */
#line 346 "partial_bnfc_acsl_parser.y"
                     { (yyval.identifier_) = new partial_bnfc_acsl::IdentifierIdent((yyvsp[0]._string)); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 2270 "partial_bnfc_acsl_parser.tab.c"
    break;


#line 2274 "partial_bnfc_acsl_parser.tab.c"

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

#line 349 "partial_bnfc_acsl_parser.y"


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
