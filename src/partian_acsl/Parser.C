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
#define yyparse         partian_acslparse
#define yylex           partian_acsllex
#define yyerror         partian_acslerror
#define yydebug         partian_acsldebug
#define yynerrs         partian_acslnerrs

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
extern YY_BUFFER_STATE partian_acsl_scan_string(const char *str, yyscan_t scanner);
extern void partian_acsl_delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void partian_acsllex_destroy(yyscan_t scanner);
extern char* partian_acslget_text(yyscan_t scanner);

extern yyscan_t partian_acsl_initialize_lexer(FILE * inp);

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
  YYSYMBOL__LPAREN = 4,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 5,                    /* _RPAREN  */
  YYSYMBOL__STAR = 6,                      /* _STAR  */
  YYSYMBOL__COMMA = 7,                     /* _COMMA  */
  YYSYMBOL__SEMI = 8,                      /* _SEMI  */
  YYSYMBOL__SYMB_1 = 9,                    /* _SYMB_1  */
  YYSYMBOL__SYMB_2 = 10,                   /* _SYMB_2  */
  YYSYMBOL__SYMB_3 = 11,                   /* _SYMB_3  */
  YYSYMBOL__KW_char = 12,                  /* _KW_char  */
  YYSYMBOL__KW_double = 13,                /* _KW_double  */
  YYSYMBOL__KW_float = 14,                 /* _KW_float  */
  YYSYMBOL__KW_int = 15,                   /* _KW_int  */
  YYSYMBOL__KW_long = 16,                  /* _KW_long  */
  YYSYMBOL__KW_short = 17,                 /* _KW_short  */
  YYSYMBOL__KW_struct = 18,                /* _KW_struct  */
  YYSYMBOL__KW_unsigned = 19,              /* _KW_unsigned  */
  YYSYMBOL__KW_void = 20,                  /* _KW_void  */
  YYSYMBOL_T_CONST = 21,                   /* T_CONST  */
  YYSYMBOL_T_LBRACE = 22,                  /* T_LBRACE  */
  YYSYMBOL_T_RBRACE = 23,                  /* T_RBRACE  */
  YYSYMBOL_T_RESTRICT = 24,                /* T_RESTRICT  */
  YYSYMBOL_T_SIGNED = 25,                  /* T_SIGNED  */
  YYSYMBOL_T_VOLATILE = 26,                /* T_VOLATILE  */
  YYSYMBOL__IDENT_ = 27,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 28,                  /* $accept  */
  YYSYMBOL_Program = 29,                   /* Program  */
  YYSYMBOL_Globals = 30,                   /* Globals  */
  YYSYMBOL_Global = 31,                    /* Global  */
  YYSYMBOL_FunctionDef = 32,               /* FunctionDef  */
  YYSYMBOL_Block = 33,                     /* Block  */
  YYSYMBOL_FunctionDefStart = 34,          /* FunctionDefStart  */
  YYSYMBOL_DeclSpecList = 35,              /* DeclSpecList  */
  YYSYMBOL_DeclSpecListNoNamed = 36,       /* DeclSpecListNoNamed  */
  YYSYMBOL_TypeSpec = 37,                  /* TypeSpec  */
  YYSYMBOL_Declarator = 38,                /* Declarator  */
  YYSYMBOL_PointerOpt = 39,                /* PointerOpt  */
  YYSYMBOL_DirectDecl = 40,                /* DirectDecl  */
  YYSYMBOL_AttributesWithAsm = 41,         /* AttributesWithAsm  */
  YYSYMBOL_RestParList = 42,               /* RestParList  */
  YYSYMBOL_ParameterDecl = 43,             /* ParameterDecl  */
  YYSYMBOL_ListParameterDecl = 44,         /* ListParameterDecl  */
  YYSYMBOL_GhostParameterOpt = 45,         /* GhostParameterOpt  */
  YYSYMBOL_IdOrTypename = 46,              /* IdOrTypename  */
  YYSYMBOL_IdOrTypenameAsId = 47,          /* IdOrTypenameAsId  */
  YYSYMBOL_Declaration = 48,               /* Declaration  */
  YYSYMBOL_DeclAndInitDeclAttrList = 49,   /* DeclAndInitDeclAttrList  */
  YYSYMBOL_InitDeclaratorAttr = 50,        /* InitDeclaratorAttr  */
  YYSYMBOL_ListInitDeclaratorAttr = 51,    /* ListInitDeclaratorAttr  */
  YYSYMBOL_InitDeclarator = 52,            /* InitDeclarator  */
  YYSYMBOL_StructDeclList = 53,            /* StructDeclList  */
  YYSYMBOL_FieldDecl = 54,                 /* FieldDecl  */
  YYSYMBOL_ListFieldDecl = 55,             /* ListFieldDecl  */
  YYSYMBOL_Attribute = 56,                 /* Attribute  */
  YYSYMBOL_ListAttribute = 57              /* ListAttribute  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 88 "partial_bnfc_parser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, partian_acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 208 "Parser.C"


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
typedef yytype_int8 yy_state_t;

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
#define YYLAST   137

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  89

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


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
      25,    26,    27
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   160,   160,   162,   163,   164,   166,   167,   169,   171,
     173,   175,   176,   178,   179,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     197,   199,   200,   202,   203,   204,   206,   208,   210,   211,
     212,   214,   215,   217,   219,   221,   223,   224,   226,   227,
     229,   231,   232,   234,   236,   237,   238,   239,   241,   243,
     244,   246,   248,   249
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
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_LPAREN",
  "_RPAREN", "_STAR", "_COMMA", "_SEMI", "_SYMB_1", "_SYMB_2", "_SYMB_3",
  "_KW_char", "_KW_double", "_KW_float", "_KW_int", "_KW_long",
  "_KW_short", "_KW_struct", "_KW_unsigned", "_KW_void", "T_CONST",
  "T_LBRACE", "T_RBRACE", "T_RESTRICT", "T_SIGNED", "T_VOLATILE",
  "_IDENT_", "$accept", "Program", "Globals", "Global", "FunctionDef",
  "Block", "FunctionDefStart", "DeclSpecList", "DeclSpecListNoNamed",
  "TypeSpec", "Declarator", "PointerOpt", "DirectDecl",
  "AttributesWithAsm", "RestParList", "ParameterDecl", "ListParameterDecl",
  "GhostParameterOpt", "IdOrTypename", "IdOrTypenameAsId", "Declaration",
  "DeclAndInitDeclAttrList", "InitDeclaratorAttr",
  "ListInitDeclaratorAttr", "InitDeclarator", "StructDeclList",
  "FieldDecl", "ListFieldDecl", "Attribute", "ListAttribute", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-32)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      77,    77,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -17,   -38,   -38,   -38,     4,   -38,    77,   -38,   -14,
       1,   112,   -38,   -38,    95,   -38,   -11,   -38,   -38,   -38,
      -7,   -38,   -38,   -38,    31,    29,    49,    47,   -38,   112,
      95,    44,    35,    95,   -38,    43,    56,   -38,   -38,    59,
     -38,   -38,    95,   -38,    55,    60,   -38,    50,   -38,   -38,
     -38,     9,   -38,   -38,    62,   -38,   -38,   -38,    59,    95,
     -38,    26,   -38,     6,    65,    67,   -38,    59,   -38,   -38,
      70,   -38,   -38,   -38,    26,   -38,   -38,   -38,   -38
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     3,    17,    19,    22,    16,    24,    23,    20,    21,
      18,     0,    26,    15,    25,     0,     2,     3,     7,     0,
      31,    11,     6,     5,    54,    45,    27,    44,     1,     4,
       0,     8,    62,    47,    53,     0,     0,    48,    12,    13,
      54,    31,     0,    54,     9,    31,    36,    33,    46,    31,
      14,    56,    54,    58,    59,     0,    29,     0,    61,    32,
      63,     0,    30,    53,    51,    49,    50,    55,    31,    54,
      28,     0,    43,    39,     0,    41,    37,    31,    60,    57,
       0,    34,    38,    43,     0,    52,    40,    35,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,    46,   -38,   -38,   -38,   -38,     0,    28,    27,
     -18,    32,   -38,   -38,   -38,     5,   -12,    -5,    45,   -38,
     -38,   -38,   -38,     2,    61,   -37,   -38,    14,   -38,   -38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    15,    16,    17,    18,    31,    19,    41,    38,    21,
      53,    35,    46,    62,    74,    75,    76,    81,    26,    27,
      22,    36,    64,    65,    66,    42,    54,    55,    60,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      20,    20,    34,    51,    28,    24,    57,    32,    30,    33,
      25,    43,    32,    71,    72,    67,    44,    20,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      71,    63,    79,   -31,    14,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    23,    39,    32,
      32,    14,    52,   -10,    49,    82,    25,    48,    56,    63,
      61,    73,    68,    29,    58,    32,    39,    50,    69,    77,
      83,    73,    88,    70,    84,    86,    80,    59,    87,    85,
      47,    37,    78,     0,    73,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,    14,    40,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
      14,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,    14
};

static const yytype_int8 yycheck[] =
{
       0,     1,    20,    40,     0,    22,    43,     6,    22,     8,
      27,    22,     6,     4,     5,    52,    23,    17,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       4,    49,    69,    27,    25,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     1,    21,     6,
       6,    25,     8,    22,     7,    73,    27,     8,    23,    77,
       4,    61,     7,    17,    21,     6,    39,    39,     8,     7,
       5,    71,    84,    23,     7,     5,    71,    45,    83,    77,
      35,    20,    68,    -1,    84,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    25,    29,    30,    31,    32,    34,
      35,    37,    48,    30,    22,    27,    46,    47,     0,    30,
      22,    33,     6,     8,    38,    39,    49,    52,    36,    37,
       8,    35,    53,    22,    23,    57,    40,    46,     8,     7,
      36,    53,     8,    38,    54,    55,    23,    53,    21,    39,
      56,     4,    41,    38,    50,    51,    52,    53,     7,     8,
      23,     4,     5,    35,    42,    43,    44,     7,    55,    53,
      43,    45,    38,     5,     7,    51,     5,    45,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    28,    29,    30,    30,    30,    31,    31,    32,    33,
      34,    35,    35,    36,    36,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      38,    39,    39,    40,    40,    40,    41,    42,    43,    43,
      43,    44,    44,    45,    46,    47,    48,    48,    49,    49,
      50,    51,    51,    52,    53,    53,    53,    53,    54,    55,
      55,    56,    57,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     2,     2,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     4,
       3,     0,     3,     1,     4,     5,     0,     1,     2,     1,
       3,     1,     3,     0,     1,     1,     3,     2,     1,     3,
       1,     1,     3,     1,     0,     3,     2,     4,     1,     1,
       3,     1,     0,     2
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
#line 160 "partial_bnfc_parser.y"
                  { (yyval.program_) = new partian_acsl::AProgram((yyvsp[0].globals_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1363 "Parser.C"
    break;

  case 3: /* Globals: %empty  */
#line 162 "partial_bnfc_parser.y"
                      { (yyval.globals_) = new partian_acsl::NoGlobals(); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1369 "Parser.C"
    break;

  case 4: /* Globals: Global Globals  */
#line 163 "partial_bnfc_parser.y"
                   { (yyval.globals_) = new partian_acsl::SimpleGlobals((yyvsp[-1].global_), (yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1375 "Parser.C"
    break;

  case 5: /* Globals: _SEMI Globals  */
#line 164 "partial_bnfc_parser.y"
                  { (yyval.globals_) = new partian_acsl::SemiColonGlobals((yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 1381 "Parser.C"
    break;

  case 6: /* Global: Declaration  */
#line 166 "partial_bnfc_parser.y"
                     { (yyval.global_) = new partian_acsl::GlobalsDeclataion((yyvsp[0].declaration_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 1387 "Parser.C"
    break;

  case 7: /* Global: FunctionDef  */
#line 167 "partial_bnfc_parser.y"
                { (yyval.global_) = new partian_acsl::GlobalsFunctionDef((yyvsp[0].functiondef_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 1393 "Parser.C"
    break;

  case 8: /* FunctionDef: FunctionDefStart Block  */
#line 169 "partial_bnfc_parser.y"
                                     { (yyval.functiondef_) = new partian_acsl::SimpleFunctionDef((yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 1399 "Parser.C"
    break;

  case 9: /* Block: T_LBRACE T_RBRACE  */
#line 171 "partial_bnfc_parser.y"
                          { (yyval.block_) = new partian_acsl::ABlock((yyvsp[-1]._string), (yyvsp[0]._string)); (yyval.block_)->line_number = (yyloc).first_line; (yyval.block_)->char_number = (yyloc).first_column; result->block_ = (yyval.block_); }
#line 1405 "Parser.C"
    break;

  case 10: /* FunctionDefStart: DeclSpecList Declarator  */
#line 173 "partial_bnfc_parser.y"
                                           { (yyval.functiondefstart_) = new partian_acsl::FunctionDefStartDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 1411 "Parser.C"
    break;

  case 11: /* DeclSpecList: TypeSpec  */
#line 175 "partial_bnfc_parser.y"
                        { (yyval.declspeclist_) = new partian_acsl::DeclSpecTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 1417 "Parser.C"
    break;

  case 12: /* DeclSpecList: TypeSpec DeclSpecListNoNamed  */
#line 176 "partial_bnfc_parser.y"
                                 { (yyval.declspeclist_) = new partian_acsl::DeclSpecTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 1423 "Parser.C"
    break;

  case 13: /* DeclSpecListNoNamed: TypeSpec  */
#line 178 "partial_bnfc_parser.y"
                               { (yyval.declspeclistnonamed_) = new partian_acsl::DeclSpecNoNamedTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 1429 "Parser.C"
    break;

  case 14: /* DeclSpecListNoNamed: TypeSpec DeclSpecListNoNamed  */
#line 179 "partial_bnfc_parser.y"
                                 { (yyval.declspeclistnonamed_) = new partian_acsl::DeclSpecNoNamedTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 1435 "Parser.C"
    break;

  case 15: /* TypeSpec: _KW_void  */
#line 181 "partial_bnfc_parser.y"
                    { (yyval.typespec_) = new partian_acsl::TypeSpecVoidKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1441 "Parser.C"
    break;

  case 16: /* TypeSpec: _KW_char  */
#line 182 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partian_acsl::TypeSpecCharKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1447 "Parser.C"
    break;

  case 17: /* TypeSpec: _SYMB_1  */
#line 183 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partian_acsl::TypeSpecBoolKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1453 "Parser.C"
    break;

  case 18: /* TypeSpec: _KW_short  */
#line 184 "partial_bnfc_parser.y"
              { (yyval.typespec_) = new partian_acsl::TypeSpecShortKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1459 "Parser.C"
    break;

  case 19: /* TypeSpec: _SYMB_2  */
#line 185 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partian_acsl::TypeSpecInt32KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1465 "Parser.C"
    break;

  case 20: /* TypeSpec: _KW_int  */
#line 186 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partian_acsl::TypeSpecIntKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1471 "Parser.C"
    break;

  case 21: /* TypeSpec: _KW_long  */
#line 187 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partian_acsl::TypeSpecLongKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1477 "Parser.C"
    break;

  case 22: /* TypeSpec: _SYMB_3  */
#line 188 "partial_bnfc_parser.y"
            { (yyval.typespec_) = new partian_acsl::TypeSpecInt64KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1483 "Parser.C"
    break;

  case 23: /* TypeSpec: _KW_float  */
#line 189 "partial_bnfc_parser.y"
              { (yyval.typespec_) = new partian_acsl::TypeSpecFloatKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1489 "Parser.C"
    break;

  case 24: /* TypeSpec: _KW_double  */
#line 190 "partial_bnfc_parser.y"
               { (yyval.typespec_) = new partian_acsl::TypeSpecDoubleKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1495 "Parser.C"
    break;

  case 25: /* TypeSpec: T_SIGNED  */
#line 191 "partial_bnfc_parser.y"
             { (yyval.typespec_) = new partian_acsl::TypeSpecSignedKeyWord((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1501 "Parser.C"
    break;

  case 26: /* TypeSpec: _KW_unsigned  */
#line 192 "partial_bnfc_parser.y"
                 { (yyval.typespec_) = new partian_acsl::TypeSpecUnsignedKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1507 "Parser.C"
    break;

  case 27: /* TypeSpec: _KW_struct IdOrTypename  */
#line 193 "partial_bnfc_parser.y"
                            { (yyval.typespec_) = new partian_acsl::StructId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1513 "Parser.C"
    break;

  case 28: /* TypeSpec: _KW_struct IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 194 "partial_bnfc_parser.y"
                                                             { (yyval.typespec_) = new partian_acsl::StructIdBraces((yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1519 "Parser.C"
    break;

  case 29: /* TypeSpec: _KW_struct T_LBRACE StructDeclList T_RBRACE  */
#line 195 "partial_bnfc_parser.y"
                                                { (yyval.typespec_) = new partian_acsl::StructBraces((yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 1525 "Parser.C"
    break;

  case 30: /* Declarator: PointerOpt DirectDecl AttributesWithAsm  */
#line 197 "partial_bnfc_parser.y"
                                                     { (yyval.declarator_) = new partian_acsl::ADeclarator((yyvsp[-2].pointeropt_), (yyvsp[-1].directdecl_), (yyvsp[0].attributeswithasm_)); (yyval.declarator_)->line_number = (yyloc).first_line; (yyval.declarator_)->char_number = (yyloc).first_column; result->declarator_ = (yyval.declarator_); }
#line 1531 "Parser.C"
    break;

  case 31: /* PointerOpt: %empty  */
#line 199 "partial_bnfc_parser.y"
                         { (yyval.pointeropt_) = new partian_acsl::NoPointer(); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 1537 "Parser.C"
    break;

  case 32: /* PointerOpt: _STAR ListAttribute PointerOpt  */
#line 200 "partial_bnfc_parser.y"
                                   { (yyval.pointeropt_) = new partian_acsl::SomePointer((yyvsp[-1].listattribute_), (yyvsp[0].pointeropt_)); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 1543 "Parser.C"
    break;

  case 33: /* DirectDecl: IdOrTypename  */
#line 202 "partial_bnfc_parser.y"
                          { (yyval.directdecl_) = new partian_acsl::DirectDeclIdTypename((yyvsp[0].idortypename_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 1549 "Parser.C"
    break;

  case 34: /* DirectDecl: DirectDecl _LPAREN _RPAREN GhostParameterOpt  */
#line 203 "partial_bnfc_parser.y"
                                                 { (yyval.directdecl_) = new partian_acsl::DirectDeclGhostParam((yyvsp[-3].directdecl_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 1555 "Parser.C"
    break;

  case 35: /* DirectDecl: DirectDecl _LPAREN RestParList _RPAREN GhostParameterOpt  */
#line 204 "partial_bnfc_parser.y"
                                                             { (yyval.directdecl_) = new partian_acsl::DirectDeclGhostRestParParam((yyvsp[-4].directdecl_), (yyvsp[-2].restparlist_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 1561 "Parser.C"
    break;

  case 36: /* AttributesWithAsm: %empty  */
#line 206 "partial_bnfc_parser.y"
                                { (yyval.attributeswithasm_) = new partian_acsl::EmptyAttrWithASM(); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 1567 "Parser.C"
    break;

  case 37: /* RestParList: ListParameterDecl  */
#line 208 "partial_bnfc_parser.y"
                                { std::reverse((yyvsp[0].listparameterdecl_)->begin(),(yyvsp[0].listparameterdecl_)->end()) ;(yyval.restparlist_) = new partian_acsl::SimpleParameterDecl((yyvsp[0].listparameterdecl_)); (yyval.restparlist_)->line_number = (yyloc).first_line; (yyval.restparlist_)->char_number = (yyloc).first_column; result->restparlist_ = (yyval.restparlist_); }
#line 1573 "Parser.C"
    break;

  case 38: /* ParameterDecl: DeclSpecList Declarator  */
#line 210 "partial_bnfc_parser.y"
                                        { (yyval.parameterdecl_) = new partian_acsl::ParameterDeclSpecDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 1579 "Parser.C"
    break;

  case 39: /* ParameterDecl: DeclSpecList  */
#line 211 "partial_bnfc_parser.y"
                 { (yyval.parameterdecl_) = new partian_acsl::ParameterDeclSpec((yyvsp[0].declspeclist_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 1585 "Parser.C"
    break;

  case 40: /* ParameterDecl: _LPAREN ParameterDecl _RPAREN  */
#line 212 "partial_bnfc_parser.y"
                                  { (yyval.parameterdecl_) = new partian_acsl::ParameterDeclPar((yyvsp[-1].parameterdecl_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 1591 "Parser.C"
    break;

  case 41: /* ListParameterDecl: ParameterDecl  */
#line 214 "partial_bnfc_parser.y"
                                  { (yyval.listparameterdecl_) = new partian_acsl::ListParameterDecl(); (yyval.listparameterdecl_)->push_back((yyvsp[0].parameterdecl_)); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 1597 "Parser.C"
    break;

  case 42: /* ListParameterDecl: ParameterDecl _COMMA ListParameterDecl  */
#line 215 "partial_bnfc_parser.y"
                                           { (yyvsp[0].listparameterdecl_)->push_back((yyvsp[-2].parameterdecl_)); (yyval.listparameterdecl_) = (yyvsp[0].listparameterdecl_); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 1603 "Parser.C"
    break;

  case 43: /* GhostParameterOpt: %empty  */
#line 217 "partial_bnfc_parser.y"
                                { (yyval.ghostparameteropt_) = new partian_acsl::NoGhostParameter(); (yyval.ghostparameteropt_)->line_number = (yyloc).first_line; (yyval.ghostparameteropt_)->char_number = (yyloc).first_column; result->ghostparameteropt_ = (yyval.ghostparameteropt_); }
#line 1609 "Parser.C"
    break;

  case 44: /* IdOrTypename: IdOrTypenameAsId  */
#line 219 "partial_bnfc_parser.y"
                                { (yyval.idortypename_) = new partian_acsl::IdTypename((yyvsp[0].idortypenameasid_)); (yyval.idortypename_)->line_number = (yyloc).first_line; (yyval.idortypename_)->char_number = (yyloc).first_column; result->idortypename_ = (yyval.idortypename_); }
#line 1615 "Parser.C"
    break;

  case 45: /* IdOrTypenameAsId: _IDENT_  */
#line 221 "partial_bnfc_parser.y"
                           { (yyval.idortypenameasid_) = new partian_acsl::IdOrTypenameAsIdIdentifier((yyvsp[0]._string)); (yyval.idortypenameasid_)->line_number = (yyloc).first_line; (yyval.idortypenameasid_)->char_number = (yyloc).first_column; result->idortypenameasid_ = (yyval.idortypenameasid_); }
#line 1621 "Parser.C"
    break;

  case 46: /* Declaration: DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 223 "partial_bnfc_parser.y"
                                                         { (yyval.declaration_) = new partian_acsl::DeclSpecInitDecl((yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 1627 "Parser.C"
    break;

  case 47: /* Declaration: DeclSpecList _SEMI  */
#line 224 "partial_bnfc_parser.y"
                       { (yyval.declaration_) = new partian_acsl::DeclSpec((yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 1633 "Parser.C"
    break;

  case 48: /* DeclAndInitDeclAttrList: InitDeclarator  */
#line 226 "partial_bnfc_parser.y"
                                         { (yyval.declandinitdeclattrlist_) = new partian_acsl::InitDeclaration((yyvsp[0].initdeclarator_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 1639 "Parser.C"
    break;

  case 49: /* DeclAndInitDeclAttrList: InitDeclarator _COMMA ListInitDeclaratorAttr  */
#line 227 "partial_bnfc_parser.y"
                                                 { std::reverse((yyvsp[0].listinitdeclaratorattr_)->begin(),(yyvsp[0].listinitdeclaratorattr_)->end()) ;(yyval.declandinitdeclattrlist_) = new partian_acsl::InitDeclarationWithAttr((yyvsp[-2].initdeclarator_), (yyvsp[0].listinitdeclaratorattr_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 1645 "Parser.C"
    break;

  case 50: /* InitDeclaratorAttr: InitDeclarator  */
#line 229 "partial_bnfc_parser.y"
                                    { (yyval.initdeclaratorattr_) = new partian_acsl::InitDeclaratorAttribute((yyvsp[0].initdeclarator_)); (yyval.initdeclaratorattr_)->line_number = (yyloc).first_line; (yyval.initdeclaratorattr_)->char_number = (yyloc).first_column; result->initdeclaratorattr_ = (yyval.initdeclaratorattr_); }
#line 1651 "Parser.C"
    break;

  case 51: /* ListInitDeclaratorAttr: InitDeclaratorAttr  */
#line 231 "partial_bnfc_parser.y"
                                            { (yyval.listinitdeclaratorattr_) = new partian_acsl::ListInitDeclaratorAttr(); (yyval.listinitdeclaratorattr_)->push_back((yyvsp[0].initdeclaratorattr_)); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 1657 "Parser.C"
    break;

  case 52: /* ListInitDeclaratorAttr: InitDeclaratorAttr _COMMA ListInitDeclaratorAttr  */
#line 232 "partial_bnfc_parser.y"
                                                     { (yyvsp[0].listinitdeclaratorattr_)->push_back((yyvsp[-2].initdeclaratorattr_)); (yyval.listinitdeclaratorattr_) = (yyvsp[0].listinitdeclaratorattr_); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 1663 "Parser.C"
    break;

  case 53: /* InitDeclarator: Declarator  */
#line 234 "partial_bnfc_parser.y"
                            { (yyval.initdeclarator_) = new partian_acsl::SimpleInitDeclarator((yyvsp[0].declarator_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 1669 "Parser.C"
    break;

  case 54: /* StructDeclList: %empty  */
#line 236 "partial_bnfc_parser.y"
                             { (yyval.structdecllist_) = new partian_acsl::EmptyStructDecl(); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 1675 "Parser.C"
    break;

  case 55: /* StructDeclList: DeclSpecList _SEMI StructDeclList  */
#line 237 "partial_bnfc_parser.y"
                                      { (yyval.structdecllist_) = new partian_acsl::DeclSpecStructDecl((yyvsp[-2].declspeclist_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 1681 "Parser.C"
    break;

  case 56: /* StructDeclList: _SEMI StructDeclList  */
#line 238 "partial_bnfc_parser.y"
                         { (yyval.structdecllist_) = new partian_acsl::SemicolonStructDecl((yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 1687 "Parser.C"
    break;

  case 57: /* StructDeclList: DeclSpecList ListFieldDecl _SEMI StructDeclList  */
#line 239 "partial_bnfc_parser.y"
                                                    { std::reverse((yyvsp[-2].listfielddecl_)->begin(),(yyvsp[-2].listfielddecl_)->end()) ;(yyval.structdecllist_) = new partian_acsl::SpecFieldDeclStructDecl((yyvsp[-3].declspeclist_), (yyvsp[-2].listfielddecl_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 1693 "Parser.C"
    break;

  case 58: /* FieldDecl: Declarator  */
#line 241 "partial_bnfc_parser.y"
                       { (yyval.fielddecl_) = new partian_acsl::FieldDeclDeclarator((yyvsp[0].declarator_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 1699 "Parser.C"
    break;

  case 59: /* ListFieldDecl: FieldDecl  */
#line 243 "partial_bnfc_parser.y"
                          { (yyval.listfielddecl_) = new partian_acsl::ListFieldDecl(); (yyval.listfielddecl_)->push_back((yyvsp[0].fielddecl_)); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 1705 "Parser.C"
    break;

  case 60: /* ListFieldDecl: FieldDecl _COMMA ListFieldDecl  */
#line 244 "partial_bnfc_parser.y"
                                   { (yyvsp[0].listfielddecl_)->push_back((yyvsp[-2].fielddecl_)); (yyval.listfielddecl_) = (yyvsp[0].listfielddecl_); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 1711 "Parser.C"
    break;

  case 61: /* Attribute: T_CONST  */
#line 246 "partial_bnfc_parser.y"
                    { (yyval.attribute_) = new partian_acsl::AttributeConst((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 1717 "Parser.C"
    break;

  case 62: /* ListAttribute: %empty  */
#line 248 "partial_bnfc_parser.y"
                            { (yyval.listattribute_) = new partian_acsl::ListAttribute(); result->listattribute_ = (yyval.listattribute_); }
#line 1723 "Parser.C"
    break;

  case 63: /* ListAttribute: ListAttribute Attribute  */
#line 249 "partial_bnfc_parser.y"
                            { (yyvsp[-1].listattribute_)->push_back((yyvsp[0].attribute_)); (yyval.listattribute_) = (yyvsp[-1].listattribute_); result->listattribute_ = (yyval.listattribute_); }
#line 1729 "Parser.C"
    break;


#line 1733 "Parser.C"

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

#line 252 "partial_bnfc_parser.y"


namespace partian_acsl
{
/* Entrypoint: parse Program* from file. */
Program* pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.functiondef_;
  }
}

/* Entrypoint: parse Block* from file. */
Block* pBlock(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.block_;
  }
}

/* Entrypoint: parse FunctionDefStart* from file. */
FunctionDefStart* pFunctionDefStart(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  partian_acsllex_destroy(scanner);
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
  yyscan_t scanner = partian_acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = partian_acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  partian_acsl_delete_buffer(buf, scanner);
  partian_acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listattribute_;
  }
}


}
