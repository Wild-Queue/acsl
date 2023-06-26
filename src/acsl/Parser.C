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
#define yyparse         acslparse
#define yylex           acsllex
#define yyerror         acslerror
#define yydebug         acsldebug
#define yynerrs         acslnerrs

/* First part of user prologue.  */
#line 22 "full_bnfc_parser.y"

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
extern YY_BUFFER_STATE acsl_scan_string(const char *str, yyscan_t scanner);
extern void acsl_delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void acsllex_destroy(yyscan_t scanner);
extern char* acslget_text(yyscan_t scanner);

extern yyscan_t acsl_initialize_lexer(FILE * inp);

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
  YYSYMBOL__DDOT = 24,                     /* _DDOT  */
  YYSYMBOL__ELLIPSIS = 25,                 /* _ELLIPSIS  */
  YYSYMBOL__SLASH = 26,                    /* _SLASH  */
  YYSYMBOL__SLASHEQ = 27,                  /* _SLASHEQ  */
  YYSYMBOL__COLON = 28,                    /* _COLON  */
  YYSYMBOL__SEMI = 29,                     /* _SEMI  */
  YYSYMBOL__LT = 30,                       /* _LT  */
  YYSYMBOL__DLT = 31,                      /* _DLT  */
  YYSYMBOL__DLTEQ = 32,                    /* _DLTEQ  */
  YYSYMBOL__LDARROW = 33,                  /* _LDARROW  */
  YYSYMBOL__SYMB_52 = 34,                  /* _SYMB_52  */
  YYSYMBOL__EQ = 35,                       /* _EQ  */
  YYSYMBOL__DEQ = 36,                      /* _DEQ  */
  YYSYMBOL__SYMB_51 = 37,                  /* _SYMB_51  */
  YYSYMBOL__GT = 38,                       /* _GT  */
  YYSYMBOL__GTEQ = 39,                     /* _GTEQ  */
  YYSYMBOL__DGT = 40,                      /* _DGT  */
  YYSYMBOL__DGTEQ = 41,                    /* _DGTEQ  */
  YYSYMBOL__QUESTION = 42,                 /* _QUESTION  */
  YYSYMBOL__KW_69 = 43,                    /* _KW_69  */
  YYSYMBOL__KW_70 = 44,                    /* _KW_70  */
  YYSYMBOL__LBRACK = 45,                   /* _LBRACK  */
  YYSYMBOL__SYMB_60 = 46,                  /* _SYMB_60  */
  YYSYMBOL__SYMB_61 = 47,                  /* _SYMB_61  */
  YYSYMBOL__SYMB_55 = 48,                  /* _SYMB_55  */
  YYSYMBOL__SYMB_58 = 49,                  /* _SYMB_58  */
  YYSYMBOL__SYMB_54 = 50,                  /* _SYMB_54  */
  YYSYMBOL__SYMB_49 = 51,                  /* _SYMB_49  */
  YYSYMBOL__SYMB_56 = 52,                  /* _SYMB_56  */
  YYSYMBOL__SYMB_50 = 53,                  /* _SYMB_50  */
  YYSYMBOL__SYMB_65 = 54,                  /* _SYMB_65  */
  YYSYMBOL__SYMB_67 = 55,                  /* _SYMB_67  */
  YYSYMBOL__SYMB_62 = 56,                  /* _SYMB_62  */
  YYSYMBOL__SYMB_66 = 57,                  /* _SYMB_66  */
  YYSYMBOL__SYMB_63 = 58,                  /* _SYMB_63  */
  YYSYMBOL__SYMB_57 = 59,                  /* _SYMB_57  */
  YYSYMBOL__SYMB_64 = 60,                  /* _SYMB_64  */
  YYSYMBOL__SYMB_59 = 61,                  /* _SYMB_59  */
  YYSYMBOL__RBRACK = 62,                   /* _RBRACK  */
  YYSYMBOL__CARET = 63,                    /* _CARET  */
  YYSYMBOL__CARETEQ = 64,                  /* _CARETEQ  */
  YYSYMBOL__DCARET = 65,                   /* _DCARET  */
  YYSYMBOL__SYMB_1 = 66,                   /* _SYMB_1  */
  YYSYMBOL__SYMB_2 = 67,                   /* _SYMB_2  */
  YYSYMBOL__SYMB_3 = 68,                   /* _SYMB_3  */
  YYSYMBOL__KW_admit = 69,                 /* _KW_admit  */
  YYSYMBOL__KW_assigns = 70,               /* _KW_assigns  */
  YYSYMBOL__KW_boolean = 71,               /* _KW_boolean  */
  YYSYMBOL__KW_break = 72,                 /* _KW_break  */
  YYSYMBOL__KW_breaks = 73,                /* _KW_breaks  */
  YYSYMBOL__KW_case = 74,                  /* _KW_case  */
  YYSYMBOL__KW_char = 75,                  /* _KW_char  */
  YYSYMBOL__KW_check = 76,                 /* _KW_check  */
  YYSYMBOL__KW_continue = 77,              /* _KW_continue  */
  YYSYMBOL__KW_continues = 78,             /* _KW_continues  */
  YYSYMBOL__KW_default = 79,               /* _KW_default  */
  YYSYMBOL__KW_double = 80,                /* _KW_double  */
  YYSYMBOL__KW_else = 81,                  /* _KW_else  */
  YYSYMBOL__KW_ensures = 82,               /* _KW_ensures  */
  YYSYMBOL__KW_exits = 83,                 /* _KW_exits  */
  YYSYMBOL__KW_float = 84,                 /* _KW_float  */
  YYSYMBOL__KW_for = 85,                   /* _KW_for  */
  YYSYMBOL__KW_if = 86,                    /* _KW_if  */
  YYSYMBOL__KW_int = 87,                   /* _KW_int  */
  YYSYMBOL__KW_integer = 88,               /* _KW_integer  */
  YYSYMBOL__KW_invariant = 89,             /* _KW_invariant  */
  YYSYMBOL__KW_long = 90,                  /* _KW_long  */
  YYSYMBOL__KW_loop = 91,                  /* _KW_loop  */
  YYSYMBOL__KW_real = 92,                  /* _KW_real  */
  YYSYMBOL__KW_requires = 93,              /* _KW_requires  */
  YYSYMBOL__KW_return = 94,                /* _KW_return  */
  YYSYMBOL__KW_returns = 95,               /* _KW_returns  */
  YYSYMBOL__KW_short = 96,                 /* _KW_short  */
  YYSYMBOL__KW_99 = 97,                    /* _KW_99  */
  YYSYMBOL__KW_struct = 98,                /* _KW_struct  */
  YYSYMBOL__KW_switch = 99,                /* _KW_switch  */
  YYSYMBOL__KW_unsigned = 100,             /* _KW_unsigned  */
  YYSYMBOL__KW_variant = 101,              /* _KW_variant  */
  YYSYMBOL__KW_void = 102,                 /* _KW_void  */
  YYSYMBOL__KW_while = 103,                /* _KW_while  */
  YYSYMBOL__LBRACE = 104,                  /* _LBRACE  */
  YYSYMBOL__BAR = 105,                     /* _BAR  */
  YYSYMBOL__BAREQ = 106,                   /* _BAREQ  */
  YYSYMBOL__DBAR = 107,                    /* _DBAR  */
  YYSYMBOL__RBRACE = 108,                  /* _RBRACE  */
  YYSYMBOL__TILDE = 109,                   /* _TILDE  */
  YYSYMBOL_T_BLOCKATTRIBUTE = 110,         /* T_BLOCKATTRIBUTE  */
  YYSYMBOL_T_CONST = 111,                  /* T_CONST  */
  YYSYMBOL_T_LBRACE = 112,                 /* T_LBRACE  */
  YYSYMBOL_T_LBRACKET = 113,               /* T_LBRACKET  */
  YYSYMBOL_T_RBRACE = 114,                 /* T_RBRACE  */
  YYSYMBOL_T_RBRACKET = 115,               /* T_RBRACKET  */
  YYSYMBOL_T_RESTRICT = 116,               /* T_RESTRICT  */
  YYSYMBOL_T_SIGNED = 117,                 /* T_SIGNED  */
  YYSYMBOL_T_VOLATILE = 118,               /* T_VOLATILE  */
  YYSYMBOL__STRING_ = 119,                 /* _STRING_  */
  YYSYMBOL__CHAR_ = 120,                   /* _CHAR_  */
  YYSYMBOL__INTEGER_ = 121,                /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 122,                 /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 123,                  /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 124,                 /* $accept  */
  YYSYMBOL_Program = 125,                  /* Program  */
  YYSYMBOL_Globals = 126,                  /* Globals  */
  YYSYMBOL_Global = 127,                   /* Global  */
  YYSYMBOL_FunctionDef = 128,              /* FunctionDef  */
  YYSYMBOL_FunctionDefStart = 129,         /* FunctionDefStart  */
  YYSYMBOL_DeclSpecList = 130,             /* DeclSpecList  */
  YYSYMBOL_DeclSpecListNoNamed = 131,      /* DeclSpecListNoNamed  */
  YYSYMBOL_TypeSpec = 132,                 /* TypeSpec  */
  YYSYMBOL_Declarator = 133,               /* Declarator  */
  YYSYMBOL_PointerOpt = 134,               /* PointerOpt  */
  YYSYMBOL_DirectDecl = 135,               /* DirectDecl  */
  YYSYMBOL_AttributesWithAsm = 136,        /* AttributesWithAsm  */
  YYSYMBOL_RestParList = 137,              /* RestParList  */
  YYSYMBOL_ParameterDecl = 138,            /* ParameterDecl  */
  YYSYMBOL_ListParameterDecl = 139,        /* ListParameterDecl  */
  YYSYMBOL_GhostParameterOpt = 140,        /* GhostParameterOpt  */
  YYSYMBOL_IdOrTypename = 141,             /* IdOrTypename  */
  YYSYMBOL_IdOrTypenameAsId = 142,         /* IdOrTypenameAsId  */
  YYSYMBOL_Declaration = 143,              /* Declaration  */
  YYSYMBOL_DeclAndInitDeclAttrList = 144,  /* DeclAndInitDeclAttrList  */
  YYSYMBOL_InitDeclaratorAttr = 145,       /* InitDeclaratorAttr  */
  YYSYMBOL_ListInitDeclaratorAttr = 146,   /* ListInitDeclaratorAttr  */
  YYSYMBOL_InitDeclarator = 147,           /* InitDeclarator  */
  YYSYMBOL_StructDeclList = 148,           /* StructDeclList  */
  YYSYMBOL_FieldDecl = 149,                /* FieldDecl  */
  YYSYMBOL_ListFieldDecl = 150,            /* ListFieldDecl  */
  YYSYMBOL_Attribute = 151,                /* Attribute  */
  YYSYMBOL_ListAttribute = 152,            /* ListAttribute  */
  YYSYMBOL_Block = 153,                    /* Block  */
  YYSYMBOL_BlockAttrs = 154,               /* BlockAttrs  */
  YYSYMBOL_BlockElement = 155,             /* BlockElement  */
  YYSYMBOL_ListBlockElement = 156,         /* ListBlockElement  */
  YYSYMBOL_Statement = 157,                /* Statement  */
  YYSYMBOL_ForClause = 158,                /* ForClause  */
  YYSYMBOL_Attr = 159,                     /* Attr  */
  YYSYMBOL_ListAttr = 160,                 /* ListAttr  */
  YYSYMBOL_Attr1 = 161,                    /* Attr1  */
  YYSYMBOL_Attr2 = 162,                    /* Attr2  */
  YYSYMBOL_Attr3 = 163,                    /* Attr3  */
  YYSYMBOL_Attr4 = 164,                    /* Attr4  */
  YYSYMBOL_Attr5 = 165,                    /* Attr5  */
  YYSYMBOL_Attr6 = 166,                    /* Attr6  */
  YYSYMBOL_Attr7 = 167,                    /* Attr7  */
  YYSYMBOL_Attr8 = 168,                    /* Attr8  */
  YYSYMBOL_Attr9 = 169,                    /* Attr9  */
  YYSYMBOL_Attr10 = 170,                   /* Attr10  */
  YYSYMBOL_Attr11 = 171,                   /* Attr11  */
  YYSYMBOL_Attr12 = 172,                   /* Attr12  */
  YYSYMBOL_Attr13 = 173,                   /* Attr13  */
  YYSYMBOL_Attr14 = 174,                   /* Attr14  */
  YYSYMBOL_BasicAttribute = 175,           /* BasicAttribute  */
  YYSYMBOL_AnnotatedStmt = 176,            /* AnnotatedStmt  */
  YYSYMBOL_ElsePart = 177,                 /* ElsePart  */
  YYSYMBOL_OptExpression = 178,            /* OptExpression  */
  YYSYMBOL_Expression = 179,               /* Expression  */
  YYSYMBOL_ListExpression = 180,           /* ListExpression  */
  YYSYMBOL_AssignExpr = 181,               /* AssignExpr  */
  YYSYMBOL_AssignExpr1 = 182,              /* AssignExpr1  */
  YYSYMBOL_AssignExpr2 = 183,              /* AssignExpr2  */
  YYSYMBOL_AssignExpr3 = 184,              /* AssignExpr3  */
  YYSYMBOL_AssignExpr4 = 185,              /* AssignExpr4  */
  YYSYMBOL_AssignExpr5 = 186,              /* AssignExpr5  */
  YYSYMBOL_AssignExpr6 = 187,              /* AssignExpr6  */
  YYSYMBOL_AssignExpr7 = 188,              /* AssignExpr7  */
  YYSYMBOL_AssignExpr8 = 189,              /* AssignExpr8  */
  YYSYMBOL_AssignExpr9 = 190,              /* AssignExpr9  */
  YYSYMBOL_AssignExpr10 = 191,             /* AssignExpr10  */
  YYSYMBOL_AssignExpr11 = 192,             /* AssignExpr11  */
  YYSYMBOL_AssignExpr12 = 193,             /* AssignExpr12  */
  YYSYMBOL_AssignExpr13 = 194,             /* AssignExpr13  */
  YYSYMBOL_AssignExpr14 = 195,             /* AssignExpr14  */
  YYSYMBOL_AssignExpr15 = 196,             /* AssignExpr15  */
  YYSYMBOL_Constant = 197,                 /* Constant  */
  YYSYMBOL_TypeName = 198,                 /* TypeName  */
  YYSYMBOL_ACSLProgram = 199,              /* ACSLProgram  */
  YYSYMBOL_Annot = 200,                    /* Annot  */
  YYSYMBOL_Code_Annot = 201,               /* Code_Annot  */
  YYSYMBOL_Contract = 202,                 /* Contract  */
  YYSYMBOL_Requires = 203,                 /* Requires  */
  YYSYMBOL_NERequires = 204,               /* NERequires  */
  YYSYMBOL_Terminates = 205,               /* Terminates  */
  YYSYMBOL_Decreases = 206,                /* Decreases  */
  YYSYMBOL_SimpleClauses = 207,            /* SimpleClauses  */
  YYSYMBOL_NESimpleClauses = 208,          /* NESimpleClauses  */
  YYSYMBOL_Assigns = 209,                  /* Assigns  */
  YYSYMBOL_Zones = 210,                    /* Zones  */
  YYSYMBOL_Behaviors = 211,                /* Behaviors  */
  YYSYMBOL_CompleteOrDisjoint = 212,       /* CompleteOrDisjoint  */
  YYSYMBOL_Lexpr = 213,                    /* Lexpr  */
  YYSYMBOL_ListLexpr = 214,                /* ListLexpr  */
  YYSYMBOL_Lexpr1 = 215,                   /* Lexpr1  */
  YYSYMBOL_LexprRelInner = 216,            /* LexprRelInner  */
  YYSYMBOL_ListLexprRelInner = 217,        /* ListLexprRelInner  */
  YYSYMBOL_Relation = 218,                 /* Relation  */
  YYSYMBOL_Lexpr2 = 219,                   /* Lexpr2  */
  YYSYMBOL_LexprBinder = 220,              /* LexprBinder  */
  YYSYMBOL_Binders = 221,                  /* Binders  */
  YYSYMBOL_TypeSpecOFTYPENAME = 222,       /* TypeSpecOFTYPENAME  */
  YYSYMBOL_BindersReentrance = 223,        /* BindersReentrance  */
  YYSYMBOL_ListBindersReentrance = 224,    /* ListBindersReentrance  */
  YYSYMBOL_VarSpec = 225,                  /* VarSpec  */
  YYSYMBOL_Stars = 226,                    /* Stars  */
  YYSYMBOL_ListStars = 227,                /* ListStars  */
  YYSYMBOL_VarSpec1 = 228,                 /* VarSpec1  */
  YYSYMBOL_ArraySize = 229,                /* ArraySize  */
  YYSYMBOL_Lexpr3 = 230,                   /* Lexpr3  */
  YYSYMBOL_OptLabel1 = 231,                /* OptLabel1  */
  YYSYMBOL_OptLabelList = 232,             /* OptLabelList  */
  YYSYMBOL_LabelName = 233,                /* LabelName  */
  YYSYMBOL_ListLabelName = 234,            /* ListLabelName  */
  YYSYMBOL_Range = 235,                    /* Range  */
  YYSYMBOL_LexprOption = 236,              /* LexprOption  */
  YYSYMBOL_AnyIdentifier = 237,            /* AnyIdentifier  */
  YYSYMBOL_PostCond = 238,                 /* PostCond  */
  YYSYMBOL_FullIdentifier = 239,           /* FullIdentifier  */
  YYSYMBOL_Identifier = 240,               /* Identifier  */
  YYSYMBOL_TypeSpecSimple = 241,           /* TypeSpecSimple  */
  YYSYMBOL_LogicPTreeAnnot = 242,          /* LogicPTreeAnnot  */
  YYSYMBOL_Annotation = 243,               /* Annotation  */
  YYSYMBOL_LoopAnnotStack = 244,           /* LoopAnnotStack  */
  YYSYMBOL_LoopAnnotOpt = 245,             /* LoopAnnotOpt  */
  YYSYMBOL_LoopInvariant = 246,            /* LoopInvariant  */
  YYSYMBOL_LoopVariant = 247,              /* LoopVariant  */
  YYSYMBOL_LoopEffects = 248,              /* LoopEffects  */
  YYSYMBOL_Variant = 249                   /* Variant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 152 "full_bnfc_parser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 400 "Parser.C"


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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1152

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  124
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  354
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  605

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   378


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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   418,   418,   420,   421,   422,   424,   425,   427,   428,
     430,   432,   433,   435,   436,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   455,   457,   458,   460,   461,   462,   464,   466,   468,
     469,   470,   472,   473,   475,   477,   479,   481,   482,   483,
     484,   486,   487,   489,   491,   492,   494,   496,   497,   498,
     499,   501,   503,   504,   506,   508,   509,   511,   513,   514,
     516,   517,   519,   520,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   538,
     539,   541,   542,   544,   545,   547,   548,   550,   551,   553,
     554,   556,   557,   559,   560,   562,   563,   565,   566,   567,
     569,   570,   571,   572,   573,   575,   576,   577,   579,   580,
     581,   583,   584,   585,   586,   588,   589,   590,   591,   592,
     593,   594,   596,   597,   598,   599,   600,   601,   603,   604,
     606,   607,   609,   611,   612,   614,   615,   617,   619,   620,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   635,   636,   638,   639,   641,   642,   644,   645,
     647,   648,   650,   651,   653,   654,   655,   657,   658,   659,
     660,   661,   663,   664,   665,   667,   668,   669,   671,   672,
     673,   674,   676,   677,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   690,   691,   692,   693,   694,   695,
     697,   698,   699,   700,   702,   703,   704,   706,   708,   709,
     711,   713,   715,   717,   718,   720,   721,   722,   724,   726,
     728,   729,   731,   732,   734,   735,   737,   738,   740,   742,
     744,   745,   746,   747,   748,   749,   751,   752,   754,   755,
     757,   759,   760,   762,   763,   764,   765,   766,   767,   769,
     770,   771,   773,   774,   775,   777,   779,   780,   782,   783,
     785,   786,   788,   789,   791,   793,   794,   796,   797,   798,
     800,   801,   802,   804,   805,   806,   807,   808,   809,   810,
     811,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   827,   831,   832,   834,   836,
     837,   839,   841,   842,   844,   846,   847,   848,   849,   850,
     851,   852,   853,   854,   855,   856,   857,   858,   859,   860,
     862,   867,   869,   870,   871,   872,   873,   874,   875,   876,
     877,   879,   881,   883,   884,   885,   887,   888,   890,   891,
     892,   894,   896,   898,   899
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
  "_COMMA", "_MINUS", "_DMINUS", "_MINUSEQ", "_RARROW", "_DOT", "_DDOT",
  "_ELLIPSIS", "_SLASH", "_SLASHEQ", "_COLON", "_SEMI", "_LT", "_DLT",
  "_DLTEQ", "_LDARROW", "_SYMB_52", "_EQ", "_DEQ", "_SYMB_51", "_GT",
  "_GTEQ", "_DGT", "_DGTEQ", "_QUESTION", "_KW_69", "_KW_70", "_LBRACK",
  "_SYMB_60", "_SYMB_61", "_SYMB_55", "_SYMB_58", "_SYMB_54", "_SYMB_49",
  "_SYMB_56", "_SYMB_50", "_SYMB_65", "_SYMB_67", "_SYMB_62", "_SYMB_66",
  "_SYMB_63", "_SYMB_57", "_SYMB_64", "_SYMB_59", "_RBRACK", "_CARET",
  "_CARETEQ", "_DCARET", "_SYMB_1", "_SYMB_2", "_SYMB_3", "_KW_admit",
  "_KW_assigns", "_KW_boolean", "_KW_break", "_KW_breaks", "_KW_case",
  "_KW_char", "_KW_check", "_KW_continue", "_KW_continues", "_KW_default",
  "_KW_double", "_KW_else", "_KW_ensures", "_KW_exits", "_KW_float",
  "_KW_for", "_KW_if", "_KW_int", "_KW_integer", "_KW_invariant",
  "_KW_long", "_KW_loop", "_KW_real", "_KW_requires", "_KW_return",
  "_KW_returns", "_KW_short", "_KW_99", "_KW_struct", "_KW_switch",
  "_KW_unsigned", "_KW_variant", "_KW_void", "_KW_while", "_LBRACE",
  "_BAR", "_BAREQ", "_DBAR", "_RBRACE", "_TILDE", "T_BLOCKATTRIBUTE",
  "T_CONST", "T_LBRACE", "T_LBRACKET", "T_RBRACE", "T_RBRACKET",
  "T_RESTRICT", "T_SIGNED", "T_VOLATILE", "_STRING_", "_CHAR_",
  "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept", "Program", "Globals",
  "Global", "FunctionDef", "FunctionDefStart", "DeclSpecList",
  "DeclSpecListNoNamed", "TypeSpec", "Declarator", "PointerOpt",
  "DirectDecl", "AttributesWithAsm", "RestParList", "ParameterDecl",
  "ListParameterDecl", "GhostParameterOpt", "IdOrTypename",
  "IdOrTypenameAsId", "Declaration", "DeclAndInitDeclAttrList",
  "InitDeclaratorAttr", "ListInitDeclaratorAttr", "InitDeclarator",
  "StructDeclList", "FieldDecl", "ListFieldDecl", "Attribute",
  "ListAttribute", "Block", "BlockAttrs", "BlockElement",
  "ListBlockElement", "Statement", "ForClause", "Attr", "ListAttr",
  "Attr1", "Attr2", "Attr3", "Attr4", "Attr5", "Attr6", "Attr7", "Attr8",
  "Attr9", "Attr10", "Attr11", "Attr12", "Attr13", "Attr14",
  "BasicAttribute", "AnnotatedStmt", "ElsePart", "OptExpression",
  "Expression", "ListExpression", "AssignExpr", "AssignExpr1",
  "AssignExpr2", "AssignExpr3", "AssignExpr4", "AssignExpr5",
  "AssignExpr6", "AssignExpr7", "AssignExpr8", "AssignExpr9",
  "AssignExpr10", "AssignExpr11", "AssignExpr12", "AssignExpr13",
  "AssignExpr14", "AssignExpr15", "Constant", "TypeName", "ACSLProgram",
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

#define YYPACT_NINF (-420)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-332)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     954,   954,   293,  -420,  -420,  -420,  -420,  -420,  -420,  -420,
    -420,  -420,  -420,    15,  -420,  -420,  -420,    33,  -420,   954,
    -420,    -6,   146,  1006,  -420,  1006,  -420,   167,   180,   -18,
     774,    23,  -420,  -420,  -420,  -420,    67,  -420,  -420,   162,
     162,   162,   980,  -420,   123,  -420,  -420,  -420,    11,  -420,
    -420,  -420,   138,    30,   116,   176,  -420,  1006,    -6,   155,
     170,   774,   185,   774,   678,   774,   774,    22,   774,  -420,
    -420,   812,  -420,   812,   812,  -420,  -420,  -420,   272,  -420,
    -420,  -420,   184,  -420,  -420,  -420,  -420,    79,  -420,  -420,
    -420,  1080,   292,  -420,  -420,  -420,  -420,   208,   215,  -420,
    -420,  -420,  -420,   980,   172,   211,   980,   305,  -420,     9,
     311,  -420,  -420,   319,  -420,  -420,  -420,   307,   774,   163,
     774,   247,  -420,   326,  -420,   273,   316,   306,   252,   347,
    -420,   336,   375,   365,  -420,  -420,  -420,  -420,  -420,  -420,
     314,  -420,  -420,  -420,   374,    17,  -420,   394,   396,   774,
     317,   434,  -420,   774,   100,   774,   774,   774,   774,    68,
      68,   774,   239,   774,   411,  -420,   980,  -420,   429,   421,
    -420,   346,   128,   433,  -420,  -420,  -420,   844,  -420,  -420,
     443,  -420,  -420,  -420,   487,   100,   561,   100,  -420,   774,
     678,  -420,   317,  -420,  -420,  -420,   774,  -420,   774,    17,
    -420,  -420,   450,     7,   423,  -420,   774,   774,   454,   455,
     366,  -420,  -420,   774,  -420,   386,   389,  -420,  -420,  -420,
    -420,  -420,    90,    90,    39,   424,  -420,  -420,  -420,  -420,
    -420,  -420,  -420,   774,   471,   356,   678,  -420,   465,  -420,
    -420,  -420,  -420,  -420,  -420,   774,  -420,   319,   980,  -420,
     128,   128,   128,   128,   128,   128,   128,  -420,  -420,   477,
     472,   479,   457,   -15,   486,   393,   439,   495,    41,   224,
      72,    48,    49,  -420,   157,  -420,  -420,   834,   834,    30,
     597,   834,   834,   857,   834,   857,  -420,   475,   834,   480,
     483,   503,   504,   456,   511,   514,  -420,   834,  -420,  -420,
    -420,  -420,   146,  -420,  -420,  -420,  -420,   508,   505,  -420,
    -420,   -13,   530,   435,   481,   537,    54,   352,   212,   151,
     288,   978,  -420,   308,  -420,  -420,   553,   906,  -420,    32,
     534,   531,  -420,   319,  -420,  -420,  -420,  -420,  -420,  -420,
    -420,  -420,   363,  -420,   363,   539,   540,  -420,   423,   125,
     363,   363,  -420,   317,  -420,   390,  -420,  -420,  -420,  1096,
    -420,  -420,  -420,  -420,  -420,  -420,   538,  -420,  -420,  -420,
    -420,  -420,  -420,   745,  -420,  -420,  -420,  -420,   547,  -420,
    -420,  -420,  -420,    28,   128,  -420,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,    30,    30,   128,  -420,
    -420,  -420,  -420,   551,   559,   562,  -420,  -420,   737,  -420,
    -420,  -420,  -420,   139,  -420,   289,   696,   834,  -420,   546,
     834,   834,  -420,   834,  -420,   834,   834,   834,   834,   834,
     834,   834,   834,   834,   834,   834,   834,   834,   834,   834,
     834,   834,   834,   834,   834,   834,   834,   834,   834,   834,
     834,   834,   834,   834,   834,  -420,  -420,    30,    30,   834,
     155,  -420,  -420,   289,   568,  -420,  -420,  -420,   906,  -420,
    -420,   254,  -420,  -420,   519,  -420,  -420,  -420,   411,  -420,
     411,  -420,  -420,   571,  -420,  -420,   556,   486,   393,   439,
     495,    41,   224,   224,    72,    72,    72,    72,    48,    48,
      49,    49,  -420,  -420,  -420,  -420,  -420,   523,  -420,  -420,
     834,   834,   289,  -420,  -420,   834,   557,  -420,  1006,   575,
    -420,   576,   577,  -420,   563,   530,  -420,   435,   481,   537,
      54,   352,   352,   212,   212,   212,   212,   151,   151,   288,
     288,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,  -420,
    -420,  -420,  -420,  -420,  -420,  -420,  -420,   541,  -420,  -420,
    -420,   113,    17,  -420,  -420,  -420,  -420,  -420,   128,  -420,
    -420,   564,  -420,   567,  -420,   289,   289,   289,   834,  -420,
    -420,  -420,   289,   834,   512,  -420,  -420,  -420,  -420,   587,
     289,  -420,   289,  -420,  -420
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     3,   223,    17,    19,    23,    16,    25,    24,    20,
      22,    18,    21,     0,    27,    15,    26,     0,     2,     3,
       6,     0,    32,    11,     7,     0,     5,     0,     0,     0,
       0,     0,   220,   221,   228,   224,     0,   341,   342,   346,
     346,   346,    57,    46,    28,    45,     1,     4,    68,     8,
      65,    48,    56,     0,     0,    51,    12,    13,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,   312,   286,
     287,     0,   284,     0,     0,   291,   302,   288,     0,   289,
     283,   290,   306,   294,   292,   293,   331,     0,   245,   248,
     260,   259,   301,   330,   218,   229,   219,     0,     0,   347,
     343,   345,   344,    57,    32,     0,    57,     0,    72,    32,
      37,    34,    47,    32,    14,     9,    50,     0,     0,     0,
       0,     0,   237,     0,   234,   246,   236,     0,   354,     0,
     261,   313,     0,     0,   336,   334,   337,   339,   338,   332,
       0,   333,   335,   266,     0,     0,   267,     0,     0,     0,
       0,     0,   305,     0,   223,     0,     0,     0,     0,     0,
       0,   312,     0,     0,   230,    59,    57,    61,    62,     0,
      30,     0,     0,     0,    64,    33,    66,     0,    31,    56,
      54,    52,    53,    49,     0,   223,     0,   223,   352,     0,
       0,   348,     0,   351,   303,   304,   312,   340,     0,     0,
     274,   270,   275,     0,   272,   277,     0,     0,     0,   309,
       0,   308,   314,     0,   243,     0,     0,   225,   241,   240,
     244,   242,   295,   296,   313,     0,   258,   253,   255,   257,
     254,   256,   252,     0,     0,     0,     0,   317,     0,   318,
     315,   316,   319,   238,   231,     0,    58,    32,    57,    29,
       0,     0,     0,     0,     0,     0,     0,   140,   141,     0,
      93,     0,    91,    95,    97,    99,   101,   103,   105,   107,
     110,   115,   118,   121,   125,   132,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,     0,   216,   214,
     215,   210,    32,    70,    77,    73,    71,   148,     0,   147,
     150,   162,   164,   166,   168,   170,   172,   174,   177,   182,
     185,   188,   192,   194,   204,   211,     0,     0,    44,    40,
       0,    42,    38,    32,   350,   227,   349,   226,   247,   235,
     236,   353,   313,   311,   263,     0,   265,   276,   273,   282,
     262,   264,   299,     0,   307,     0,   298,   297,   249,   259,
     300,   327,   328,   325,   326,   329,     0,   322,   323,   320,
     321,   324,   239,     0,    63,    60,   130,   129,     0,   128,
     126,   127,   131,     0,     0,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
     200,   203,   217,     0,     0,     0,   199,   197,     0,   195,
     198,   196,    87,     0,    88,     0,   145,     0,    85,     0,
       0,     0,   202,     0,    76,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   208,   209,     0,     0,     0,
      32,   142,    75,     0,     0,    35,    39,    44,     0,    55,
     279,     0,   271,   280,     0,   281,   310,   285,   230,   222,
     230,   139,   134,     0,    94,    92,     0,    98,   100,   102,
     104,   106,   109,   108,   111,   113,   112,   114,   116,   117,
     119,   120,   124,   122,   123,   135,   136,     0,   213,   212,
       0,     0,     0,    84,    90,   145,     0,   146,     0,     0,
      86,     0,     0,   149,     0,   165,   188,   167,   169,   171,
     173,   176,   175,   178,   180,   179,   181,   183,   184,   186,
     187,   191,   189,   190,   156,   157,   154,   152,   153,   155,
     160,   151,   161,   159,   158,   207,   206,     0,    41,    36,
      43,   266,     0,   269,   278,   233,   232,   133,     0,   137,
     193,     0,    82,     0,    89,     0,     0,     0,     0,   205,
     268,    96,     0,   145,   143,    79,    80,   163,    83,     0,
       0,    78,     0,   144,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -420,  -420,    59,  -420,  -420,   579,     0,   543,     8,    -8,
     493,  -420,  -420,  -420,   280,   131,   134,   -49,   -11,  -162,
     -50,  -420,   281,  -100,   -86,  -420,   368,  -420,  -420,   -14,
    -420,  -420,  -420,   445,  -420,  -237,   -88,  -352,  -420,   234,
     235,   233,   238,   242,   -29,  -192,   -21,    13,  -169,  -420,
    -420,  -420,  -404,  -420,  -419,  -276,  -270,   688,    43,  -420,
     199,   204,   198,   203,   205,   -25,   -38,   -26,   -17,  -228,
       2,  -420,  -420,  -420,  -420,     5,  -420,  -420,  -420,   -96,
    -420,  -420,  -420,  -177,  -420,   408,   458,  -420,  -420,    34,
     -56,   194,  -420,  -420,  -420,   413,   591,   362,   173,  -420,
    -420,  -191,  -420,   459,   463,  -420,  -122,  -420,  -420,  -420,
     318,   498,   464,   488,  -420,  -142,  -124,  -420,  -420,  -420,
     665,   418,  -420,  -420,  -420,  -420
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    17,    18,    19,    20,    21,   104,    56,    23,   179,
      53,   110,   178,   330,   331,   332,   475,    44,   259,    24,
      54,   180,   181,    55,   105,   168,   169,   176,   109,   304,
     108,   305,   173,   471,   525,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   472,   601,   526,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   415,   473,    31,    32,    33,    34,
      35,    95,   164,   243,   244,   123,   124,   372,   489,   125,
     126,    88,   232,   162,   233,    89,    90,   144,   145,   482,
     346,   201,   202,   203,   204,   484,    91,   151,   152,   209,
     210,   132,   133,   211,   245,    92,    93,   146,    36,    37,
      99,   100,    39,    40,    41,   129
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    22,    45,   205,   111,    25,    25,    49,   345,   117,
     414,   303,   423,   182,    52,   378,   534,   165,   199,    22,
     171,   523,    50,   429,    25,    59,   212,   387,   199,   435,
     200,    57,   250,    46,   495,   496,   251,   222,   223,   252,
     492,   253,    45,   254,   115,    50,   393,   255,   153,   409,
     410,    52,    64,   416,   417,   403,   420,   205,   217,   441,
      26,   205,   404,   401,    87,    57,    94,   402,   212,   432,
      71,    65,    73,   155,    74,   405,   156,   394,    47,    68,
     246,   376,   377,    66,   379,   380,   381,   382,   153,   335,
     442,   337,   388,   208,   436,   119,   167,   121,    48,   127,
     128,   356,   131,   399,   157,   159,   583,   234,   154,   160,
      96,   359,   400,   155,    69,    70,   156,    72,   582,    42,
     174,   107,    75,    76,    77,    78,    79,    80,    81,    82,
      86,  -331,   250,   338,   340,   161,   251,   256,    43,   252,
      86,   253,  -331,   254,   157,   112,   158,   255,   414,   257,
     258,    43,   184,    43,   186,   -32,   527,   529,  -331,    50,
     531,   532,   375,   533,   521,   527,   449,   522,    50,   215,
     450,   517,   153,   302,   599,    51,   216,   329,   326,   406,
     407,   594,   595,   596,   116,    50,   158,    83,   598,    84,
      85,    86,   185,    30,   113,   224,   603,   155,   604,   567,
     156,   166,   408,   504,   505,   506,   507,   485,   536,   536,
     536,   536,   536,   536,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   551,   552,   553,   591,   106,   157,   212,
     342,    97,   344,   182,   512,   513,   514,   256,    98,   167,
     350,   351,   -10,   447,   226,   581,   483,   355,    86,   257,
     258,    43,   448,    29,   395,   527,   153,   396,    60,   118,
      61,   153,   397,   398,   524,   199,   413,   200,   411,   227,
     158,    62,   228,    63,   120,   229,   187,   230,   231,   373,
     412,   155,   153,   149,   156,   419,   155,   421,   150,   156,
     573,   189,   580,   277,   451,   493,   494,   278,   279,    60,
     280,   452,   281,   163,   282,   283,    62,   155,   284,   285,
     156,   575,   157,   576,   453,   153,   172,   157,   286,   170,
     134,   476,   177,   527,   465,   135,   470,   329,   466,   136,
     467,   468,    50,     2,   137,   191,   183,   192,   157,   205,
     155,   138,   139,   156,   140,   153,   141,   214,   194,   218,
     219,   220,   221,   469,   158,   188,   142,   515,   516,   158,
     536,   287,    27,   288,   502,   503,   289,   190,   290,    28,
     155,   157,   153,   156,   291,   292,   193,   571,   508,   509,
     158,   590,   443,   293,    29,   444,    30,   195,   294,   196,
     445,   446,   295,    48,   197,    45,    45,   155,   297,   153,
     156,   157,   487,   198,   413,   543,   544,   545,   546,   298,
     299,   300,   301,   158,   510,   511,   541,   542,   565,   566,
     117,   547,   548,   206,   155,   207,   302,   156,   157,   361,
     205,   528,   549,   550,   362,   147,   148,   277,   363,   364,
      86,   278,   279,   158,   280,   213,   281,   247,   282,   283,
     248,   365,   284,   285,   249,   157,    45,    45,   101,   102,
     277,   333,   286,   200,   278,   279,   352,   280,   349,   281,
     158,   282,   283,   353,   354,   284,   285,     2,   329,    61,
     235,   236,    63,   360,   237,   428,   357,   238,   383,   239,
     384,   385,   386,   240,   241,   389,   153,   158,   390,     3,
       4,     5,   391,   392,   422,   287,   242,   288,     6,   424,
     289,   425,   290,     7,   426,   427,   334,     8,   291,   292,
       9,   155,   430,    10,   156,   431,   433,   293,   470,    11,
      12,    13,   294,    14,   434,    15,   295,    48,   367,   437,
     438,   296,   297,   368,   439,   440,   477,   369,   370,   478,
      16,   480,   157,   298,   299,   300,   301,   277,   481,   491,
     371,   278,   279,   518,   280,   297,   281,   488,   282,   283,
     153,   519,   284,   285,   520,   530,   298,   299,   300,   301,
     568,   574,   286,   577,   578,   579,   584,   585,   586,   587,
     336,   588,   592,   600,   158,   155,   593,     2,   156,   602,
     114,   277,   175,   589,    58,   278,   279,   474,   280,   570,
     281,   569,   282,   283,   479,   374,   284,   285,   306,     3,
       4,     5,   497,   499,   498,   287,   157,   288,     6,   500,
     289,   597,   290,     7,   501,   535,   538,     8,   291,   292,
       9,   537,   539,    10,   366,   540,   358,   293,   339,    11,
      12,    13,   294,    14,   572,    15,   295,    48,   130,   225,
     343,   347,   297,     3,     4,     5,   348,    38,   158,     0,
      16,   486,     6,   298,   299,   300,   301,     7,     0,     0,
     341,     8,    67,     0,     9,     0,     0,    10,     0,    68,
       0,     0,     0,    11,    12,    13,     0,    14,     0,    15,
     277,    48,     0,     0,   278,   279,   297,   280,     0,   281,
       0,   282,   283,     0,    16,   284,   285,   298,   299,   300,
     301,     0,     0,     0,    69,    70,    71,    72,    73,     0,
      74,   122,    75,    76,    77,    78,    79,    80,    81,    82,
       2,   277,     0,     0,     0,   278,   279,     0,   280,     0,
     281,     0,   282,   283,   153,     0,   284,   285,     0,     0,
       0,     0,     3,     4,     5,     0,     0,     0,     0,     0,
       0,     6,     0,     0,   490,     0,     7,     0,    67,   155,
       8,     0,   156,     9,     0,    68,    10,     0,     0,     0,
       0,     0,    11,    12,    13,     0,    14,    83,    15,    84,
      85,    86,     0,     0,     0,   297,     0,     0,     0,     0,
     157,     0,     0,    16,     0,     0,   298,   299,   300,   301,
      69,    70,    71,    72,    73,     0,    74,     0,    75,    76,
      77,    78,    79,    80,    81,    82,     0,     0,   277,     0,
       0,    48,   278,   279,     0,   280,   297,   281,     0,   282,
     283,     0,   158,   284,   285,   327,   328,   298,   299,   300,
     301,   277,     0,     0,     0,   278,   279,     0,   418,     0,
     281,     0,   282,   283,     0,     0,   284,   285,   134,     0,
       0,     0,     0,   135,     0,     0,     0,   136,     0,     0,
       0,     0,   137,    83,     0,    84,    85,    86,     0,   138,
     139,     0,   140,     0,   141,     0,     0,     0,     0,     0,
       3,     4,     5,     0,   142,     0,     0,   327,     0,     6,
       0,     0,     0,     0,     7,     0,     0,     0,     8,     0,
       0,     9,     0,     0,    10,   143,     0,     0,     0,     0,
      11,    12,    13,   297,    14,     0,    15,     0,     0,     0,
       0,     0,     0,     0,   298,   299,   300,   301,     0,     0,
       0,    16,     0,     0,     0,     0,   297,     0,     0,     0,
       0,     0,     3,     4,     5,     0,     0,   298,   299,   300,
     301,     6,     0,     1,     0,   454,     7,     0,   455,     0,
       8,     0,   456,     9,     0,   457,    10,     0,     2,   458,
       0,     0,    11,    12,    13,   459,    14,     0,    15,   103,
     460,     0,     0,   461,     0,     0,     0,     0,     0,   462,
       3,     4,     5,    16,     0,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     7,     0,     0,     0,     8,     0,
       0,     9,   463,     0,    10,     0,     3,     4,     5,     0,
      11,    12,    13,     0,    14,     6,    15,     0,     0,     0,
       7,     0,     0,     0,     8,     0,     0,     9,     0,     0,
      10,    16,     3,     4,     5,     0,    11,    12,    13,     0,
      14,     6,    15,     0,   464,  -251,     7,     0,     0,     0,
       8,     0,     0,     9,     0,   159,    10,    16,     0,   160,
       0,  -250,    11,    12,    13,     0,    14,     0,    15,     0,
    -251,   159,     0,  -251,     0,   160,  -251,     0,  -251,  -251,
       0,     0,     0,    16,     0,   161,  -250,     0,     0,  -250,
       0,     0,  -250,     0,  -250,  -250,     0,     0,     0,     0,
       0,   161,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564
};

static const yytype_int16 yycheck[] =
{
       0,     1,    13,   145,    53,     0,     1,    21,   199,    59,
     280,   173,   288,   113,    22,   252,   435,   103,    11,    19,
     106,   425,    13,   293,    19,    25,   150,    42,    11,    42,
      13,    23,     4,     0,   386,   387,     8,   159,   160,    11,
      12,    13,    53,    15,    58,    13,     5,    19,     9,   277,
     278,    59,    70,   281,   282,     6,   284,   199,   154,     5,
       1,   203,    13,    15,    30,    57,    43,    19,   192,   297,
      48,    89,    50,    34,    52,    26,    37,    36,    19,    11,
     166,   250,   251,   101,   253,   254,   255,   256,     9,   185,
      36,   187,   107,   149,   107,    61,   104,    63,   104,    65,
      66,    62,    68,    31,    65,    15,   525,   163,    29,    19,
      43,   233,    40,    34,    46,    47,    37,    49,   522,   104,
     111,   110,    54,    55,    56,    57,    58,    59,    60,    61,
     123,    18,     4,   189,   190,    45,     8,   109,   123,    11,
     123,    13,    29,    15,    65,    29,   107,    19,   418,   121,
     122,   123,   118,   123,   120,   123,   426,   427,    45,    13,
     430,   431,   248,   433,    25,   435,    15,    28,    13,    69,
      19,   408,     9,   173,   593,    29,    76,   177,   173,    22,
      23,   585,   586,   587,    29,    13,   107,   119,   592,   121,
     122,   123,    29,    93,    18,   161,   600,    34,   602,   469,
      37,    29,    45,   395,   396,   397,   398,   349,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   578,   104,    65,   353,
     196,    69,   198,   333,   403,   404,   405,   109,    76,   247,
     206,   207,   104,    31,     5,   521,   121,   213,   123,   121,
     122,   123,    40,    91,    30,   525,     9,    33,    91,    89,
      93,     9,    38,    39,   426,    11,   280,    13,   279,    30,
     107,    91,    33,    93,    89,    36,    29,    38,    39,   245,
     280,    34,     9,    11,    37,   283,    34,   285,   104,    37,
     481,    18,   520,     4,     6,   383,   384,     8,     9,    91,
      11,    13,    13,    11,    15,    16,    91,    34,    19,    20,
      37,   488,    65,   490,    26,     9,    11,    65,    29,   108,
      66,   329,    11,   593,    16,    71,   326,   327,    20,    75,
      22,    23,    13,    44,    80,    29,    29,    85,    65,   481,
      34,    87,    88,    37,    90,     9,    92,   153,    12,   155,
     156,   157,   158,    45,   107,    29,   102,   406,   407,   107,
     588,    72,    69,    74,   393,   394,    77,    51,    79,    76,
      34,    65,     9,    37,    85,    86,    29,   123,   399,   400,
     107,   572,    30,    94,    91,    33,    93,    12,    99,    24,
      38,    39,   103,   104,    80,   406,   407,    34,   109,     9,
      37,    65,    12,    29,   418,   443,   444,   445,   446,   120,
     121,   122,   123,   107,   401,   402,   441,   442,   467,   468,
     470,   447,   448,    29,    34,    29,   426,    37,    65,    73,
     572,   426,   449,   450,    78,    73,    74,     4,    82,    83,
     123,     8,     9,   107,    11,    11,    13,    18,    15,    16,
      29,    95,    19,    20,   108,    65,   467,   468,    40,    41,
       4,    18,    29,    13,     8,     9,    12,    11,    45,    13,
     107,    15,    16,    18,   108,    19,    20,    44,   478,    93,
      69,    70,    93,    12,    73,    29,    62,    76,    11,    78,
      18,    12,    35,    82,    83,     9,     9,   107,   105,    66,
      67,    68,    63,     8,    29,    72,    95,    74,    75,    29,
      77,    28,    79,    80,    11,    11,    29,    84,    85,    86,
      87,    34,    11,    90,    37,    11,    18,    94,   528,    96,
      97,    98,    99,   100,    29,   102,   103,   104,    73,     9,
     105,   108,   109,    78,    63,     8,    12,    82,    83,    18,
     117,    12,    65,   120,   121,   122,   123,     4,    18,    12,
      95,     8,     9,    12,    11,   109,    13,    29,    15,    16,
       9,    12,    19,    20,    12,    29,   120,   121,   122,   123,
      12,    62,    29,    12,    28,    62,    29,    12,    12,    12,
      29,    28,    28,    81,   107,    34,    29,    44,    37,    12,
      57,     4,   109,    62,    25,     8,     9,   327,    11,   478,
      13,   477,    15,    16,   333,   247,    19,    20,   173,    66,
      67,    68,   388,   390,   389,    72,    65,    74,    75,   391,
      77,   588,    79,    80,   392,   436,   438,    84,    85,    86,
      87,   437,   439,    90,   236,   440,   233,    94,   190,    96,
      97,    98,    99,   100,   481,   102,   103,   104,    67,   161,
     196,   202,   109,    66,    67,    68,   203,     2,   107,    -1,
     117,   353,    75,   120,   121,   122,   123,    80,    -1,    -1,
     192,    84,     4,    -1,    87,    -1,    -1,    90,    -1,    11,
      -1,    -1,    -1,    96,    97,    98,    -1,   100,    -1,   102,
       4,   104,    -1,    -1,     8,     9,   109,    11,    -1,    13,
      -1,    15,    16,    -1,   117,    19,    20,   120,   121,   122,
     123,    -1,    -1,    -1,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      44,     4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      13,    -1,    15,    16,     9,    -1,    19,    20,    -1,    -1,
      -1,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    29,    -1,    80,    -1,     4,    34,
      84,    -1,    37,    87,    -1,    11,    90,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    -1,   100,   119,   102,   121,
     122,   123,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      65,    -1,    -1,   117,    -1,    -1,   120,   121,   122,   123,
      46,    47,    48,    49,    50,    -1,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,     4,    -1,
      -1,   104,     8,     9,    -1,    11,   109,    13,    -1,    15,
      16,    -1,   107,    19,    20,    11,    12,   120,   121,   122,
     123,     4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    66,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    80,   119,    -1,   121,   122,   123,    -1,    87,
      88,    -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    -1,   102,    -1,    -1,    11,    -1,    75,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,
      -1,    87,    -1,    -1,    90,   123,    -1,    -1,    -1,    -1,
      96,    97,    98,   109,   100,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,   121,   122,   123,    -1,    -1,
      -1,   117,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    -1,    -1,   120,   121,   122,
     123,    75,    -1,    29,    -1,     7,    80,    -1,    10,    -1,
      84,    -1,    14,    87,    -1,    17,    90,    -1,    44,    21,
      -1,    -1,    96,    97,    98,    27,   100,    -1,   102,    29,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    41,
      66,    67,    68,   117,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,
      -1,    87,    64,    -1,    90,    -1,    66,    67,    68,    -1,
      96,    97,    98,    -1,   100,    75,   102,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,
      90,   117,    66,    67,    68,    -1,    96,    97,    98,    -1,
     100,    75,   102,    -1,   106,     5,    80,    -1,    -1,    -1,
      84,    -1,    -1,    87,    -1,    15,    90,   117,    -1,    19,
      -1,     5,    96,    97,    98,    -1,   100,    -1,   102,    -1,
      30,    15,    -1,    33,    -1,    19,    36,    -1,    38,    39,
      -1,    -1,    -1,   117,    -1,    45,    30,    -1,    -1,    33,
      -1,    -1,    36,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    44,    66,    67,    68,    75,    80,    84,    87,
      90,    96,    97,    98,   100,   102,   117,   125,   126,   127,
     128,   129,   130,   132,   143,   199,   126,    69,    76,    91,
      93,   200,   201,   202,   203,   204,   242,   243,   244,   246,
     247,   248,   104,   123,   141,   142,     0,   126,   104,   153,
      13,    29,   133,   134,   144,   147,   131,   132,   129,   130,
      91,    93,    91,    93,    70,    89,   101,     4,    11,    46,
      47,    48,    49,    50,    52,    54,    55,    56,    57,    58,
      59,    60,    61,   119,   121,   122,   123,   213,   215,   219,
     220,   230,   239,   240,    43,   205,    43,    69,    76,   244,
     245,   245,   245,    29,   130,   148,   104,   110,   154,   152,
     135,   141,    29,    18,   131,   153,    29,   144,    89,   213,
      89,   213,    53,   209,   210,   213,   214,   213,   213,   249,
     220,   213,   235,   236,    66,    71,    75,    80,    87,    88,
      90,    92,   102,   123,   221,   222,   241,   221,   221,    11,
     104,   231,   232,     9,    29,    34,    37,    65,   107,    15,
      19,    45,   217,    11,   206,   148,    29,   133,   149,   150,
     108,   148,    11,   156,   111,   134,   151,    11,   136,   133,
     145,   146,   147,    29,   213,    29,   213,    29,    29,    18,
      51,    29,    85,    29,    12,    12,    24,    80,    29,    11,
      13,   225,   226,   227,   228,   239,    29,    29,   214,   233,
     234,   237,   240,    11,   215,    69,    76,   203,   215,   215,
     215,   215,   230,   230,   213,   235,     5,    30,    33,    36,
      38,    39,   216,   218,   214,    69,    70,    73,    76,    78,
      82,    83,    95,   207,   208,   238,   148,    18,    29,   108,
       4,     8,    11,    13,    15,    19,   109,   121,   122,   142,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,     4,     8,     9,
      11,    13,    15,    16,    19,    20,    29,    72,    74,    77,
      79,    85,    86,    94,    99,   103,   108,   109,   120,   121,
     122,   123,   130,   143,   153,   155,   157,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   199,    11,    12,   130,
     137,   138,   139,    18,    29,   203,    29,   203,   214,   210,
     214,   237,   213,   236,   213,   225,   224,   227,   228,    45,
     213,   213,    12,    18,   108,   213,    62,    62,   219,   230,
      12,    73,    78,    82,    83,    95,   209,    73,    78,    82,
      83,    95,   211,   213,   150,   148,   172,   172,   159,   172,
     172,   172,   172,    11,    18,    12,    35,    42,   107,     9,
     105,    63,     8,     5,    36,    30,    33,    38,    39,    31,
      40,    15,    19,     6,    13,    26,    22,    23,    45,   193,
     193,   142,   130,   153,   180,   198,   193,   193,    11,   194,
     193,   194,    29,   179,    29,    28,    11,    11,    29,   180,
      11,    11,   193,    18,    29,    42,   107,     9,   105,    63,
       8,     5,    36,    30,    33,    38,    39,    31,    40,    15,
      19,     6,    13,    26,     7,    10,    14,    17,    21,    27,
      32,    35,    41,    64,   106,    16,    20,    22,    23,    45,
     130,   157,   176,   199,   138,   140,   133,    12,    18,   146,
      12,    18,   223,   121,   229,   239,   234,    12,    29,   212,
      29,    12,    12,   160,   160,   161,   161,   163,   164,   165,
     166,   167,   168,   168,   169,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   172,   141,   141,   159,    12,    12,
      12,    25,    28,   176,   143,   158,   178,   180,   199,   180,
      29,   180,   180,   180,   178,   184,   193,   185,   186,   187,
     188,   189,   189,   190,   190,   190,   190,   191,   191,   192,
     192,   193,   193,   193,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   141,   141,   180,    12,   140,
     139,   123,   222,   225,    62,   207,   207,    12,    28,    62,
     193,   179,   176,   178,    29,    12,    12,    12,    28,    62,
     225,   161,    28,    29,   176,   176,   176,   182,   176,   178,
      81,   177,    12,   176,   176
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   124,   125,   126,   126,   126,   127,   127,   128,   128,
     129,   130,   130,   131,   131,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   133,   134,   134,   135,   135,   135,   136,   137,   138,
     138,   138,   139,   139,   140,   141,   142,   143,   143,   143,
     143,   144,   144,   145,   146,   146,   147,   148,   148,   148,
     148,   149,   150,   150,   151,   152,   152,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   165,   165,   166,   166,   167,   167,   167,
     168,   168,   168,   168,   168,   169,   169,   169,   170,   170,
     170,   171,   171,   171,   171,   172,   172,   172,   172,   172,
     172,   172,   173,   173,   173,   173,   173,   173,   174,   174,
     175,   175,   176,   177,   177,   178,   178,   179,   180,   180,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   182,   182,   183,   183,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   188,   189,   189,   189,
     189,   189,   190,   190,   190,   191,   191,   191,   192,   192,
     192,   192,   193,   193,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   195,   195,   195,   195,   195,   195,
     196,   196,   196,   196,   197,   197,   197,   198,   199,   199,
     200,   201,   202,   203,   203,   204,   204,   204,   205,   206,
     207,   207,   208,   208,   209,   209,   210,   210,   211,   212,
     213,   213,   213,   213,   213,   213,   214,   214,   215,   215,
     216,   217,   217,   218,   218,   218,   218,   218,   218,   219,
     219,   219,   220,   220,   220,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   226,   227,   227,   228,   228,   228,
     229,   229,   229,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   231,   232,   232,   233,   234,
     234,   235,   236,   236,   237,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     239,   240,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   242,   243,   244,   244,   244,   245,   245,   246,   246,
     246,   247,   248,   249,   249
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     2,     3,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       4,     3,     0,     3,     1,     4,     5,     0,     1,     2,
       1,     3,     1,     3,     0,     1,     1,     3,     2,     4,
       3,     1,     3,     1,     1,     3,     1,     0,     3,     2,
       4,     1,     1,     3,     1,     0,     2,     4,     0,     4,
       1,     1,     0,     2,     1,     2,     2,     1,     6,     5,
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
       1,     1,     3,     3,     1,     1,     1,     1,     3,     3,
       1,     1,     6,     0,     1,     4,     5,     5,     0,     0,
       0,     1,     4,     4,     1,     3,     1,     1,     0,     0,
       3,     3,     3,     3,     3,     1,     1,     3,     1,     4,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     4,     4,     3,     1,     1,     3,     2,
       0,     2,     1,     2,     1,     1,     2,     1,     4,     3,
       1,     1,     0,     1,     1,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     4,     4,     4,
       4,     1,     1,     3,     3,     1,     0,     3,     1,     1,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     2,     2,     2,     0,     1,     4,     5,
       5,     4,     4,     3,     1
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
#line 418 "full_bnfc_parser.y"
                  { (yyval.program_) = new acsl::AProgram((yyvsp[0].globals_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 2068 "Parser.C"
    break;

  case 3: /* Globals: %empty  */
#line 420 "full_bnfc_parser.y"
                      { (yyval.globals_) = new acsl::NoGlobals(); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 2074 "Parser.C"
    break;

  case 4: /* Globals: Global Globals  */
#line 421 "full_bnfc_parser.y"
                   { (yyval.globals_) = new acsl::SimpleGlobals((yyvsp[-1].global_), (yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 2080 "Parser.C"
    break;

  case 5: /* Globals: _SEMI Globals  */
#line 422 "full_bnfc_parser.y"
                  { (yyval.globals_) = new acsl::SemiColonGlobals((yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 2086 "Parser.C"
    break;

  case 6: /* Global: FunctionDef  */
#line 424 "full_bnfc_parser.y"
                     { (yyval.global_) = new acsl::GlobalsFunctionDef((yyvsp[0].functiondef_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2092 "Parser.C"
    break;

  case 7: /* Global: Declaration  */
#line 425 "full_bnfc_parser.y"
                { (yyval.global_) = new acsl::GlobalsDeclataion((yyvsp[0].declaration_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2098 "Parser.C"
    break;

  case 8: /* FunctionDef: FunctionDefStart Block  */
#line 427 "full_bnfc_parser.y"
                                     { (yyval.functiondef_) = new acsl::SimpleFunctionDef((yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 2104 "Parser.C"
    break;

  case 9: /* FunctionDef: ACSLProgram FunctionDefStart Block  */
#line 428 "full_bnfc_parser.y"
                                       { (yyval.functiondef_) = new acsl::FunctionDefSpec((yyvsp[-2].acslprogram_), (yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 2110 "Parser.C"
    break;

  case 10: /* FunctionDefStart: DeclSpecList Declarator  */
#line 430 "full_bnfc_parser.y"
                                           { (yyval.functiondefstart_) = new acsl::FunctionDefStartDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 2116 "Parser.C"
    break;

  case 11: /* DeclSpecList: TypeSpec  */
#line 432 "full_bnfc_parser.y"
                        { (yyval.declspeclist_) = new acsl::DeclSpecTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 2122 "Parser.C"
    break;

  case 12: /* DeclSpecList: TypeSpec DeclSpecListNoNamed  */
#line 433 "full_bnfc_parser.y"
                                 { (yyval.declspeclist_) = new acsl::DeclSpecTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 2128 "Parser.C"
    break;

  case 13: /* DeclSpecListNoNamed: TypeSpec  */
#line 435 "full_bnfc_parser.y"
                               { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 2134 "Parser.C"
    break;

  case 14: /* DeclSpecListNoNamed: TypeSpec DeclSpecListNoNamed  */
#line 436 "full_bnfc_parser.y"
                                 { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 2140 "Parser.C"
    break;

  case 15: /* TypeSpec: _KW_void  */
#line 438 "full_bnfc_parser.y"
                    { (yyval.typespec_) = new acsl::TypeSpecVoidKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2146 "Parser.C"
    break;

  case 16: /* TypeSpec: _KW_char  */
#line 439 "full_bnfc_parser.y"
             { (yyval.typespec_) = new acsl::TypeSpecCharKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2152 "Parser.C"
    break;

  case 17: /* TypeSpec: _SYMB_1  */
#line 440 "full_bnfc_parser.y"
            { (yyval.typespec_) = new acsl::TypeSpecBoolKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2158 "Parser.C"
    break;

  case 18: /* TypeSpec: _KW_short  */
#line 441 "full_bnfc_parser.y"
              { (yyval.typespec_) = new acsl::TypeSpecShortKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2164 "Parser.C"
    break;

  case 19: /* TypeSpec: _SYMB_2  */
#line 442 "full_bnfc_parser.y"
            { (yyval.typespec_) = new acsl::TypeSpecInt32KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2170 "Parser.C"
    break;

  case 20: /* TypeSpec: _KW_int  */
#line 443 "full_bnfc_parser.y"
            { (yyval.typespec_) = new acsl::TypeSpecIntKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2176 "Parser.C"
    break;

  case 21: /* TypeSpec: _KW_99  */
#line 444 "full_bnfc_parser.y"
           { (yyval.typespec_) = new acsl::TypeSpecSizeTKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2182 "Parser.C"
    break;

  case 22: /* TypeSpec: _KW_long  */
#line 445 "full_bnfc_parser.y"
             { (yyval.typespec_) = new acsl::TypeSpecLongKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2188 "Parser.C"
    break;

  case 23: /* TypeSpec: _SYMB_3  */
#line 446 "full_bnfc_parser.y"
            { (yyval.typespec_) = new acsl::TypeSpecInt64KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2194 "Parser.C"
    break;

  case 24: /* TypeSpec: _KW_float  */
#line 447 "full_bnfc_parser.y"
              { (yyval.typespec_) = new acsl::TypeSpecFloatKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2200 "Parser.C"
    break;

  case 25: /* TypeSpec: _KW_double  */
#line 448 "full_bnfc_parser.y"
               { (yyval.typespec_) = new acsl::TypeSpecDoubleKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2206 "Parser.C"
    break;

  case 26: /* TypeSpec: T_SIGNED  */
#line 449 "full_bnfc_parser.y"
             { (yyval.typespec_) = new acsl::TypeSpecSignedKeyWord((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2212 "Parser.C"
    break;

  case 27: /* TypeSpec: _KW_unsigned  */
#line 450 "full_bnfc_parser.y"
                 { (yyval.typespec_) = new acsl::TypeSpecUnsignedKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2218 "Parser.C"
    break;

  case 28: /* TypeSpec: _KW_struct IdOrTypename  */
#line 451 "full_bnfc_parser.y"
                            { (yyval.typespec_) = new acsl::StructId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2224 "Parser.C"
    break;

  case 29: /* TypeSpec: _KW_struct IdOrTypename _LBRACE StructDeclList _RBRACE  */
#line 452 "full_bnfc_parser.y"
                                                           { (yyval.typespec_) = new acsl::StructIdBraces((yyvsp[-3].idortypename_), (yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2230 "Parser.C"
    break;

  case 30: /* TypeSpec: _KW_struct _LBRACE StructDeclList _RBRACE  */
#line 453 "full_bnfc_parser.y"
                                              { (yyval.typespec_) = new acsl::StructBraces((yyvsp[-1].structdecllist_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 2236 "Parser.C"
    break;

  case 31: /* Declarator: PointerOpt DirectDecl AttributesWithAsm  */
#line 455 "full_bnfc_parser.y"
                                                     { (yyval.declarator_) = new acsl::ADeclarator((yyvsp[-2].pointeropt_), (yyvsp[-1].directdecl_), (yyvsp[0].attributeswithasm_)); (yyval.declarator_)->line_number = (yyloc).first_line; (yyval.declarator_)->char_number = (yyloc).first_column; result->declarator_ = (yyval.declarator_); }
#line 2242 "Parser.C"
    break;

  case 32: /* PointerOpt: %empty  */
#line 457 "full_bnfc_parser.y"
                         { (yyval.pointeropt_) = new acsl::NoPointer(); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 2248 "Parser.C"
    break;

  case 33: /* PointerOpt: _STAR ListAttribute PointerOpt  */
#line 458 "full_bnfc_parser.y"
                                   { (yyval.pointeropt_) = new acsl::SomePointer((yyvsp[-1].listattribute_), (yyvsp[0].pointeropt_)); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 2254 "Parser.C"
    break;

  case 34: /* DirectDecl: IdOrTypename  */
#line 460 "full_bnfc_parser.y"
                          { (yyval.directdecl_) = new acsl::DirectDeclIdTypename((yyvsp[0].idortypename_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2260 "Parser.C"
    break;

  case 35: /* DirectDecl: DirectDecl _LPAREN _RPAREN GhostParameterOpt  */
#line 461 "full_bnfc_parser.y"
                                                 { (yyval.directdecl_) = new acsl::DirectDeclGhostParam((yyvsp[-3].directdecl_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2266 "Parser.C"
    break;

  case 36: /* DirectDecl: DirectDecl _LPAREN RestParList _RPAREN GhostParameterOpt  */
#line 462 "full_bnfc_parser.y"
                                                             { (yyval.directdecl_) = new acsl::DirectDeclGhostRestParParam((yyvsp[-4].directdecl_), (yyvsp[-2].restparlist_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 2272 "Parser.C"
    break;

  case 37: /* AttributesWithAsm: %empty  */
#line 464 "full_bnfc_parser.y"
                                { (yyval.attributeswithasm_) = new acsl::EmptyAttrWithASM(); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 2278 "Parser.C"
    break;

  case 38: /* RestParList: ListParameterDecl  */
#line 466 "full_bnfc_parser.y"
                                { std::reverse((yyvsp[0].listparameterdecl_)->begin(),(yyvsp[0].listparameterdecl_)->end()) ;(yyval.restparlist_) = new acsl::SimpleParameterDecl((yyvsp[0].listparameterdecl_)); (yyval.restparlist_)->line_number = (yyloc).first_line; (yyval.restparlist_)->char_number = (yyloc).first_column; result->restparlist_ = (yyval.restparlist_); }
#line 2284 "Parser.C"
    break;

  case 39: /* ParameterDecl: DeclSpecList Declarator  */
#line 468 "full_bnfc_parser.y"
                                        { (yyval.parameterdecl_) = new acsl::ParameterDeclSpecDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 2290 "Parser.C"
    break;

  case 40: /* ParameterDecl: DeclSpecList  */
#line 469 "full_bnfc_parser.y"
                 { (yyval.parameterdecl_) = new acsl::ParameterDeclSpec((yyvsp[0].declspeclist_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 2296 "Parser.C"
    break;

  case 41: /* ParameterDecl: _LPAREN ParameterDecl _RPAREN  */
#line 470 "full_bnfc_parser.y"
                                  { (yyval.parameterdecl_) = new acsl::ParameterDeclPar((yyvsp[-1].parameterdecl_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 2302 "Parser.C"
    break;

  case 42: /* ListParameterDecl: ParameterDecl  */
#line 472 "full_bnfc_parser.y"
                                  { (yyval.listparameterdecl_) = new acsl::ListParameterDecl(); (yyval.listparameterdecl_)->push_back((yyvsp[0].parameterdecl_)); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 2308 "Parser.C"
    break;

  case 43: /* ListParameterDecl: ParameterDecl _COMMA ListParameterDecl  */
#line 473 "full_bnfc_parser.y"
                                           { (yyvsp[0].listparameterdecl_)->push_back((yyvsp[-2].parameterdecl_)); (yyval.listparameterdecl_) = (yyvsp[0].listparameterdecl_); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 2314 "Parser.C"
    break;

  case 44: /* GhostParameterOpt: %empty  */
#line 475 "full_bnfc_parser.y"
                                { (yyval.ghostparameteropt_) = new acsl::NoGhostParameter(); (yyval.ghostparameteropt_)->line_number = (yyloc).first_line; (yyval.ghostparameteropt_)->char_number = (yyloc).first_column; result->ghostparameteropt_ = (yyval.ghostparameteropt_); }
#line 2320 "Parser.C"
    break;

  case 45: /* IdOrTypename: IdOrTypenameAsId  */
#line 477 "full_bnfc_parser.y"
                                { (yyval.idortypename_) = new acsl::IdTypename((yyvsp[0].idortypenameasid_)); (yyval.idortypename_)->line_number = (yyloc).first_line; (yyval.idortypename_)->char_number = (yyloc).first_column; result->idortypename_ = (yyval.idortypename_); }
#line 2326 "Parser.C"
    break;

  case 46: /* IdOrTypenameAsId: _IDENT_  */
#line 479 "full_bnfc_parser.y"
                           { (yyval.idortypenameasid_) = new acsl::IdOrTypenameAsIdIdentifier((yyvsp[0]._string)); (yyval.idortypenameasid_)->line_number = (yyloc).first_line; (yyval.idortypenameasid_)->char_number = (yyloc).first_column; result->idortypenameasid_ = (yyval.idortypenameasid_); }
#line 2332 "Parser.C"
    break;

  case 47: /* Declaration: DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 481 "full_bnfc_parser.y"
                                                         { (yyval.declaration_) = new acsl::DeclSpecInitDecl((yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 2338 "Parser.C"
    break;

  case 48: /* Declaration: DeclSpecList _SEMI  */
#line 482 "full_bnfc_parser.y"
                       { (yyval.declaration_) = new acsl::DeclSpec((yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 2344 "Parser.C"
    break;

  case 49: /* Declaration: ACSLProgram DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 483 "full_bnfc_parser.y"
                                                           { (yyval.declaration_) = new acsl::SpecDeclSpecInitDecl((yyvsp[-3].acslprogram_), (yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 2350 "Parser.C"
    break;

  case 50: /* Declaration: ACSLProgram DeclSpecList _SEMI  */
#line 484 "full_bnfc_parser.y"
                                   { (yyval.declaration_) = new acsl::SpecDeclSpec((yyvsp[-2].acslprogram_), (yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 2356 "Parser.C"
    break;

  case 51: /* DeclAndInitDeclAttrList: InitDeclarator  */
#line 486 "full_bnfc_parser.y"
                                         { (yyval.declandinitdeclattrlist_) = new acsl::InitDeclaration((yyvsp[0].initdeclarator_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 2362 "Parser.C"
    break;

  case 52: /* DeclAndInitDeclAttrList: InitDeclarator _COMMA ListInitDeclaratorAttr  */
#line 487 "full_bnfc_parser.y"
                                                 { std::reverse((yyvsp[0].listinitdeclaratorattr_)->begin(),(yyvsp[0].listinitdeclaratorattr_)->end()) ;(yyval.declandinitdeclattrlist_) = new acsl::InitDeclarationWithAttr((yyvsp[-2].initdeclarator_), (yyvsp[0].listinitdeclaratorattr_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 2368 "Parser.C"
    break;

  case 53: /* InitDeclaratorAttr: InitDeclarator  */
#line 489 "full_bnfc_parser.y"
                                    { (yyval.initdeclaratorattr_) = new acsl::InitDeclaratorAttribute((yyvsp[0].initdeclarator_)); (yyval.initdeclaratorattr_)->line_number = (yyloc).first_line; (yyval.initdeclaratorattr_)->char_number = (yyloc).first_column; result->initdeclaratorattr_ = (yyval.initdeclaratorattr_); }
#line 2374 "Parser.C"
    break;

  case 54: /* ListInitDeclaratorAttr: InitDeclaratorAttr  */
#line 491 "full_bnfc_parser.y"
                                            { (yyval.listinitdeclaratorattr_) = new acsl::ListInitDeclaratorAttr(); (yyval.listinitdeclaratorattr_)->push_back((yyvsp[0].initdeclaratorattr_)); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 2380 "Parser.C"
    break;

  case 55: /* ListInitDeclaratorAttr: InitDeclaratorAttr _COMMA ListInitDeclaratorAttr  */
#line 492 "full_bnfc_parser.y"
                                                     { (yyvsp[0].listinitdeclaratorattr_)->push_back((yyvsp[-2].initdeclaratorattr_)); (yyval.listinitdeclaratorattr_) = (yyvsp[0].listinitdeclaratorattr_); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 2386 "Parser.C"
    break;

  case 56: /* InitDeclarator: Declarator  */
#line 494 "full_bnfc_parser.y"
                            { (yyval.initdeclarator_) = new acsl::SimpleInitDeclarator((yyvsp[0].declarator_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 2392 "Parser.C"
    break;

  case 57: /* StructDeclList: %empty  */
#line 496 "full_bnfc_parser.y"
                             { (yyval.structdecllist_) = new acsl::EmptyStructDecl(); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2398 "Parser.C"
    break;

  case 58: /* StructDeclList: DeclSpecList _SEMI StructDeclList  */
#line 497 "full_bnfc_parser.y"
                                      { (yyval.structdecllist_) = new acsl::DeclSpecStructDecl((yyvsp[-2].declspeclist_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2404 "Parser.C"
    break;

  case 59: /* StructDeclList: _SEMI StructDeclList  */
#line 498 "full_bnfc_parser.y"
                         { (yyval.structdecllist_) = new acsl::SemicolonStructDecl((yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2410 "Parser.C"
    break;

  case 60: /* StructDeclList: DeclSpecList ListFieldDecl _SEMI StructDeclList  */
#line 499 "full_bnfc_parser.y"
                                                    { std::reverse((yyvsp[-2].listfielddecl_)->begin(),(yyvsp[-2].listfielddecl_)->end()) ;(yyval.structdecllist_) = new acsl::SpecFieldDeclStructDecl((yyvsp[-3].declspeclist_), (yyvsp[-2].listfielddecl_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 2416 "Parser.C"
    break;

  case 61: /* FieldDecl: Declarator  */
#line 501 "full_bnfc_parser.y"
                       { (yyval.fielddecl_) = new acsl::FieldDeclDeclarator((yyvsp[0].declarator_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 2422 "Parser.C"
    break;

  case 62: /* ListFieldDecl: FieldDecl  */
#line 503 "full_bnfc_parser.y"
                          { (yyval.listfielddecl_) = new acsl::ListFieldDecl(); (yyval.listfielddecl_)->push_back((yyvsp[0].fielddecl_)); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 2428 "Parser.C"
    break;

  case 63: /* ListFieldDecl: FieldDecl _COMMA ListFieldDecl  */
#line 504 "full_bnfc_parser.y"
                                   { (yyvsp[0].listfielddecl_)->push_back((yyvsp[-2].fielddecl_)); (yyval.listfielddecl_) = (yyvsp[0].listfielddecl_); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 2434 "Parser.C"
    break;

  case 64: /* Attribute: T_CONST  */
#line 506 "full_bnfc_parser.y"
                    { (yyval.attribute_) = new acsl::AttributeConst((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 2440 "Parser.C"
    break;

  case 65: /* ListAttribute: %empty  */
#line 508 "full_bnfc_parser.y"
                            { (yyval.listattribute_) = new acsl::ListAttribute(); result->listattribute_ = (yyval.listattribute_); }
#line 2446 "Parser.C"
    break;

  case 66: /* ListAttribute: ListAttribute Attribute  */
#line 509 "full_bnfc_parser.y"
                            { (yyvsp[-1].listattribute_)->push_back((yyvsp[0].attribute_)); (yyval.listattribute_) = (yyvsp[-1].listattribute_); result->listattribute_ = (yyval.listattribute_); }
#line 2452 "Parser.C"
    break;

  case 67: /* Block: _LBRACE BlockAttrs ListBlockElement _RBRACE  */
#line 511 "full_bnfc_parser.y"
                                                    { (yyval.block_) = new acsl::ABlock((yyvsp[-2].blockattrs_), (yyvsp[-1].listblockelement_)); (yyval.block_)->line_number = (yyloc).first_line; (yyval.block_)->char_number = (yyloc).first_column; result->block_ = (yyval.block_); }
#line 2458 "Parser.C"
    break;

  case 68: /* BlockAttrs: %empty  */
#line 513 "full_bnfc_parser.y"
                         { (yyval.blockattrs_) = new acsl::NoBlockAttrs(); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 2464 "Parser.C"
    break;

  case 69: /* BlockAttrs: T_BLOCKATTRIBUTE _LPAREN ListAttr _RPAREN  */
#line 514 "full_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.blockattrs_) = new acsl::SomeBlockAttrs((yyvsp[-3]._string), (yyvsp[-1].listattr_)); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 2470 "Parser.C"
    break;

  case 70: /* BlockElement: Declaration  */
#line 516 "full_bnfc_parser.y"
                           { (yyval.blockelement_) = new acsl::DeclarationElement((yyvsp[0].declaration_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 2476 "Parser.C"
    break;

  case 71: /* BlockElement: Statement  */
#line 517 "full_bnfc_parser.y"
              { (yyval.blockelement_) = new acsl::StatementElement((yyvsp[0].statement_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 2482 "Parser.C"
    break;

  case 72: /* ListBlockElement: %empty  */
#line 519 "full_bnfc_parser.y"
                               { (yyval.listblockelement_) = new acsl::ListBlockElement(); result->listblockelement_ = (yyval.listblockelement_); }
#line 2488 "Parser.C"
    break;

  case 73: /* ListBlockElement: ListBlockElement BlockElement  */
#line 520 "full_bnfc_parser.y"
                                  { (yyvsp[-1].listblockelement_)->push_back((yyvsp[0].blockelement_)); (yyval.listblockelement_) = (yyvsp[-1].listblockelement_); result->listblockelement_ = (yyval.listblockelement_); }
#line 2494 "Parser.C"
    break;

  case 74: /* Statement: _SEMI  */
#line 522 "full_bnfc_parser.y"
                  { (yyval.statement_) = new acsl::SemicolonStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2500 "Parser.C"
    break;

  case 75: /* Statement: ACSLProgram AnnotatedStmt  */
#line 523 "full_bnfc_parser.y"
                              { (yyval.statement_) = new acsl::SpecStatement((yyvsp[-1].acslprogram_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2506 "Parser.C"
    break;

  case 76: /* Statement: ListExpression _SEMI  */
#line 524 "full_bnfc_parser.y"
                         { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new acsl::ExprsStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2512 "Parser.C"
    break;

  case 77: /* Statement: Block  */
#line 525 "full_bnfc_parser.y"
          { (yyval.statement_) = new acsl::BlockStatement((yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2518 "Parser.C"
    break;

  case 78: /* Statement: _KW_if _LPAREN ListExpression _RPAREN AnnotatedStmt ElsePart  */
#line 526 "full_bnfc_parser.y"
                                                                 { std::reverse((yyvsp[-3].listexpression_)->begin(),(yyvsp[-3].listexpression_)->end()) ;(yyval.statement_) = new acsl::IfStatement((yyvsp[-3].listexpression_), (yyvsp[-1].annotatedstmt_), (yyvsp[0].elsepart_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2524 "Parser.C"
    break;

  case 79: /* Statement: _KW_switch _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 527 "full_bnfc_parser.y"
                                                            { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::SwitchStatement((yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2530 "Parser.C"
    break;

  case 80: /* Statement: _KW_while _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 528 "full_bnfc_parser.y"
                                                           { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::WhileStatement((yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2536 "Parser.C"
    break;

  case 81: /* Statement: _KW_for _LPAREN ForClause OptExpression _SEMI OptExpression _RPAREN AnnotatedStmt  */
#line 529 "full_bnfc_parser.y"
                                                                                      { (yyval.statement_) = new acsl::ForStatement((yyvsp[-5].forclause_), (yyvsp[-4].optexpression_), (yyvsp[-2].optexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2542 "Parser.C"
    break;

  case 82: /* Statement: _KW_case Expression _COLON AnnotatedStmt  */
#line 530 "full_bnfc_parser.y"
                                             { (yyval.statement_) = new acsl::CaseStatement((yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2548 "Parser.C"
    break;

  case 83: /* Statement: _KW_case Expression _ELLIPSIS Expression _COLON AnnotatedStmt  */
#line 531 "full_bnfc_parser.y"
                                                                  { (yyval.statement_) = new acsl::CaseSliceStatement((yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2554 "Parser.C"
    break;

  case 84: /* Statement: _KW_default _COLON AnnotatedStmt  */
#line 532 "full_bnfc_parser.y"
                                     { (yyval.statement_) = new acsl::DefaultStatement((yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2560 "Parser.C"
    break;

  case 85: /* Statement: _KW_return _SEMI  */
#line 533 "full_bnfc_parser.y"
                     { (yyval.statement_) = new acsl::EmptyReturnStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2566 "Parser.C"
    break;

  case 86: /* Statement: _KW_return ListExpression _SEMI  */
#line 534 "full_bnfc_parser.y"
                                    { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new acsl::ReturnStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2572 "Parser.C"
    break;

  case 87: /* Statement: _KW_break _SEMI  */
#line 535 "full_bnfc_parser.y"
                    { (yyval.statement_) = new acsl::BreakStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2578 "Parser.C"
    break;

  case 88: /* Statement: _KW_continue _SEMI  */
#line 536 "full_bnfc_parser.y"
                       { (yyval.statement_) = new acsl::ContinueStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 2584 "Parser.C"
    break;

  case 89: /* ForClause: OptExpression _SEMI  */
#line 538 "full_bnfc_parser.y"
                                { (yyval.forclause_) = new acsl::ForClauseExpression((yyvsp[-1].optexpression_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 2590 "Parser.C"
    break;

  case 90: /* ForClause: Declaration  */
#line 539 "full_bnfc_parser.y"
                { (yyval.forclause_) = new acsl::ForClauseDeclaration((yyvsp[0].declaration_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 2596 "Parser.C"
    break;

  case 91: /* Attr: Attr1  */
#line 541 "full_bnfc_parser.y"
             { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2602 "Parser.C"
    break;

  case 92: /* Attr: Attr1 _EQ Attr1  */
#line 542 "full_bnfc_parser.y"
                    { (yyval.attr_) = new acsl::AnAttr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2608 "Parser.C"
    break;

  case 93: /* ListAttr: Attr  */
#line 544 "full_bnfc_parser.y"
                { (yyval.listattr_) = new acsl::ListAttr(); (yyval.listattr_)->push_back((yyvsp[0].attr_)); result->listattr_ = (yyval.listattr_); }
#line 2614 "Parser.C"
    break;

  case 94: /* ListAttr: Attr _COMMA ListAttr  */
#line 545 "full_bnfc_parser.y"
                         { (yyvsp[0].listattr_)->push_back((yyvsp[-2].attr_)); (yyval.listattr_) = (yyvsp[0].listattr_); result->listattr_ = (yyval.listattr_); }
#line 2620 "Parser.C"
    break;

  case 95: /* Attr1: Attr2  */
#line 547 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2626 "Parser.C"
    break;

  case 96: /* Attr1: Attr2 _QUESTION Attr1 _COLON Attr1  */
#line 548 "full_bnfc_parser.y"
                                       { (yyval.attr_) = new acsl::TernaryCond((yyvsp[-4].attr_), (yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2632 "Parser.C"
    break;

  case 97: /* Attr2: Attr3  */
#line 550 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2638 "Parser.C"
    break;

  case 98: /* Attr2: Attr2 _DBAR Attr3  */
#line 551 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::Or((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2644 "Parser.C"
    break;

  case 99: /* Attr3: Attr4  */
#line 553 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2650 "Parser.C"
    break;

  case 100: /* Attr3: Attr3 _DAMP Attr4  */
#line 554 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::And((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2656 "Parser.C"
    break;

  case 101: /* Attr4: Attr5  */
#line 556 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2662 "Parser.C"
    break;

  case 102: /* Attr4: Attr4 _BAR Attr5  */
#line 557 "full_bnfc_parser.y"
                     { (yyval.attr_) = new acsl::BitOr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2668 "Parser.C"
    break;

  case 103: /* Attr5: Attr6  */
#line 559 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2674 "Parser.C"
    break;

  case 104: /* Attr5: Attr5 _CARET Attr6  */
#line 560 "full_bnfc_parser.y"
                       { (yyval.attr_) = new acsl::Xor((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2680 "Parser.C"
    break;

  case 105: /* Attr6: Attr7  */
#line 562 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2686 "Parser.C"
    break;

  case 106: /* Attr6: Attr6 _AMP Attr7  */
#line 563 "full_bnfc_parser.y"
                     { (yyval.attr_) = new acsl::BitAnd((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2692 "Parser.C"
    break;

  case 107: /* Attr7: Attr8  */
#line 565 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2698 "Parser.C"
    break;

  case 108: /* Attr7: Attr7 _DEQ Attr8  */
#line 566 "full_bnfc_parser.y"
                     { (yyval.attr_) = new acsl::EqualEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2704 "Parser.C"
    break;

  case 109: /* Attr7: Attr7 _BANGEQ Attr8  */
#line 567 "full_bnfc_parser.y"
                        { (yyval.attr_) = new acsl::NotEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2710 "Parser.C"
    break;

  case 110: /* Attr8: Attr9  */
#line 569 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2716 "Parser.C"
    break;

  case 111: /* Attr8: Attr8 _LT Attr9  */
#line 570 "full_bnfc_parser.y"
                    { (yyval.attr_) = new acsl::Less((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2722 "Parser.C"
    break;

  case 112: /* Attr8: Attr8 _GT Attr9  */
#line 571 "full_bnfc_parser.y"
                    { (yyval.attr_) = new acsl::Greater((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2728 "Parser.C"
    break;

  case 113: /* Attr8: Attr8 _LDARROW Attr9  */
#line 572 "full_bnfc_parser.y"
                         { (yyval.attr_) = new acsl::LessEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2734 "Parser.C"
    break;

  case 114: /* Attr8: Attr8 _GTEQ Attr9  */
#line 573 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::GreaterEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2740 "Parser.C"
    break;

  case 115: /* Attr9: Attr10  */
#line 575 "full_bnfc_parser.y"
               { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2746 "Parser.C"
    break;

  case 116: /* Attr9: Attr9 _DLT Attr10  */
#line 576 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::LeftShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2752 "Parser.C"
    break;

  case 117: /* Attr9: Attr9 _DGT Attr10  */
#line 577 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::RightShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2758 "Parser.C"
    break;

  case 118: /* Attr10: Attr11  */
#line 579 "full_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2764 "Parser.C"
    break;

  case 119: /* Attr10: Attr10 _PLUS Attr11  */
#line 580 "full_bnfc_parser.y"
                        { (yyval.attr_) = new acsl::AddOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2770 "Parser.C"
    break;

  case 120: /* Attr10: Attr10 _MINUS Attr11  */
#line 581 "full_bnfc_parser.y"
                         { (yyval.attr_) = new acsl::SubOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2776 "Parser.C"
    break;

  case 121: /* Attr11: Attr12  */
#line 583 "full_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2782 "Parser.C"
    break;

  case 122: /* Attr11: Attr11 _STAR Attr12  */
#line 584 "full_bnfc_parser.y"
                        { (yyval.attr_) = new acsl::MultOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2788 "Parser.C"
    break;

  case 123: /* Attr11: Attr11 _SLASH Attr12  */
#line 585 "full_bnfc_parser.y"
                         { (yyval.attr_) = new acsl::DivOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2794 "Parser.C"
    break;

  case 124: /* Attr11: Attr11 _PERCENT Attr12  */
#line 586 "full_bnfc_parser.y"
                           { (yyval.attr_) = new acsl::ModOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2800 "Parser.C"
    break;

  case 125: /* Attr12: Attr13  */
#line 588 "full_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2806 "Parser.C"
    break;

  case 126: /* Attr12: _PLUS Attr12  */
#line 589 "full_bnfc_parser.y"
                 { (yyval.attr_) = new acsl::PlusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2812 "Parser.C"
    break;

  case 127: /* Attr12: _MINUS Attr12  */
#line 590 "full_bnfc_parser.y"
                  { (yyval.attr_) = new acsl::MinusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2818 "Parser.C"
    break;

  case 128: /* Attr12: _STAR Attr12  */
#line 591 "full_bnfc_parser.y"
                 { (yyval.attr_) = new acsl::MultUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2824 "Parser.C"
    break;

  case 129: /* Attr12: _AMP Attr12  */
#line 592 "full_bnfc_parser.y"
                { (yyval.attr_) = new acsl::AmpUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2830 "Parser.C"
    break;

  case 130: /* Attr12: _BANG Attr12  */
#line 593 "full_bnfc_parser.y"
                 { (yyval.attr_) = new acsl::NotUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2836 "Parser.C"
    break;

  case 131: /* Attr12: _TILDE Attr12  */
#line 594 "full_bnfc_parser.y"
                  { (yyval.attr_) = new acsl::TildeUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2842 "Parser.C"
    break;

  case 132: /* Attr13: Attr14  */
#line 596 "full_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2848 "Parser.C"
    break;

  case 133: /* Attr13: IdOrTypenameAsId _LPAREN ListAttr _RPAREN  */
#line 597 "full_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.attr_) = new acsl::FuncationCall((yyvsp[-3].idortypenameasid_), (yyvsp[-1].listattr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2854 "Parser.C"
    break;

  case 134: /* Attr13: IdOrTypenameAsId _LPAREN _RPAREN  */
#line 598 "full_bnfc_parser.y"
                                     { (yyval.attr_) = new acsl::ProcedureCall((yyvsp[-2].idortypenameasid_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2860 "Parser.C"
    break;

  case 135: /* Attr13: Attr13 _RARROW IdOrTypename  */
#line 599 "full_bnfc_parser.y"
                                { (yyval.attr_) = new acsl::ArrowAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2866 "Parser.C"
    break;

  case 136: /* Attr13: Attr13 _DOT IdOrTypename  */
#line 600 "full_bnfc_parser.y"
                             { (yyval.attr_) = new acsl::DotAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2872 "Parser.C"
    break;

  case 137: /* Attr13: Attr13 _LBRACK Attr _RBRACK  */
#line 601 "full_bnfc_parser.y"
                                { (yyval.attr_) = new acsl::ArrayAttr((yyvsp[-3].attr_), (yyvsp[-1].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2878 "Parser.C"
    break;

  case 138: /* Attr14: BasicAttribute  */
#line 603 "full_bnfc_parser.y"
                        { (yyval.attr_) = new acsl::BasicAttr((yyvsp[0].basicattribute_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2884 "Parser.C"
    break;

  case 139: /* Attr14: _LPAREN Attr _RPAREN  */
#line 604 "full_bnfc_parser.y"
                         { (yyval.attr_) = (yyvsp[-1].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 2890 "Parser.C"
    break;

  case 140: /* BasicAttribute: _INTEGER_  */
#line 606 "full_bnfc_parser.y"
                           { (yyval.basicattribute_) = new acsl::BasicAttrConsInt((yyvsp[0]._int)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 2896 "Parser.C"
    break;

  case 141: /* BasicAttribute: _DOUBLE_  */
#line 607 "full_bnfc_parser.y"
             { (yyval.basicattribute_) = new acsl::BasicAttrConsFloat((yyvsp[0]._double)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 2902 "Parser.C"
    break;

  case 142: /* AnnotatedStmt: Statement  */
#line 609 "full_bnfc_parser.y"
                          { (yyval.annotatedstmt_) = new acsl::AnnotatedStatement((yyvsp[0].statement_)); (yyval.annotatedstmt_)->line_number = (yyloc).first_line; (yyval.annotatedstmt_)->char_number = (yyloc).first_column; result->annotatedstmt_ = (yyval.annotatedstmt_); }
#line 2908 "Parser.C"
    break;

  case 143: /* ElsePart: %empty  */
#line 611 "full_bnfc_parser.y"
                       { (yyval.elsepart_) = new acsl::NoElsePart(); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 2914 "Parser.C"
    break;

  case 144: /* ElsePart: _KW_else AnnotatedStmt  */
#line 612 "full_bnfc_parser.y"
                           { (yyval.elsepart_) = new acsl::SimpleElsePart((yyvsp[0].annotatedstmt_)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 2920 "Parser.C"
    break;

  case 145: /* OptExpression: %empty  */
#line 614 "full_bnfc_parser.y"
                            { (yyval.optexpression_) = new acsl::NoExpression(); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 2926 "Parser.C"
    break;

  case 146: /* OptExpression: ListExpression  */
#line 615 "full_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.optexpression_) = new acsl::SomeExpression((yyvsp[0].listexpression_)); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 2932 "Parser.C"
    break;

  case 147: /* Expression: AssignExpr  */
#line 617 "full_bnfc_parser.y"
                        { (yyval.expression_) = new acsl::AssignmentExpr((yyvsp[0].assignexpr_)); (yyval.expression_)->line_number = (yyloc).first_line; (yyval.expression_)->char_number = (yyloc).first_column; result->expression_ = (yyval.expression_); }
#line 2938 "Parser.C"
    break;

  case 148: /* ListExpression: Expression  */
#line 619 "full_bnfc_parser.y"
                            { (yyval.listexpression_) = new acsl::ListExpression(); (yyval.listexpression_)->push_back((yyvsp[0].expression_)); result->listexpression_ = (yyval.listexpression_); }
#line 2944 "Parser.C"
    break;

  case 149: /* ListExpression: Expression _COMMA ListExpression  */
#line 620 "full_bnfc_parser.y"
                                     { (yyvsp[0].listexpression_)->push_back((yyvsp[-2].expression_)); (yyval.listexpression_) = (yyvsp[0].listexpression_); result->listexpression_ = (yyval.listexpression_); }
#line 2950 "Parser.C"
    break;

  case 150: /* AssignExpr: AssignExpr1  */
#line 622 "full_bnfc_parser.y"
                         { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2956 "Parser.C"
    break;

  case 151: /* AssignExpr: AssignExpr12 _EQ AssignExpr  */
#line 623 "full_bnfc_parser.y"
                                { (yyval.assignexpr_) = new acsl::EqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2962 "Parser.C"
    break;

  case 152: /* AssignExpr: AssignExpr12 _PLUSEQ AssignExpr  */
#line 624 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::PlusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2968 "Parser.C"
    break;

  case 153: /* AssignExpr: AssignExpr12 _MINUSEQ AssignExpr  */
#line 625 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::MinusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2974 "Parser.C"
    break;

  case 154: /* AssignExpr: AssignExpr12 _STAREQ AssignExpr  */
#line 626 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::MultEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2980 "Parser.C"
    break;

  case 155: /* AssignExpr: AssignExpr12 _SLASHEQ AssignExpr  */
#line 627 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::DivEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2986 "Parser.C"
    break;

  case 156: /* AssignExpr: AssignExpr12 _PERCENTEQ AssignExpr  */
#line 628 "full_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new acsl::ModEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2992 "Parser.C"
    break;

  case 157: /* AssignExpr: AssignExpr12 _AMPEQ AssignExpr  */
#line 629 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::AndEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2998 "Parser.C"
    break;

  case 158: /* AssignExpr: AssignExpr12 _BAREQ AssignExpr  */
#line 630 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::OrEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3004 "Parser.C"
    break;

  case 159: /* AssignExpr: AssignExpr12 _CARETEQ AssignExpr  */
#line 631 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::XorEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3010 "Parser.C"
    break;

  case 160: /* AssignExpr: AssignExpr12 _DLTEQ AssignExpr  */
#line 632 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::LeftShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3016 "Parser.C"
    break;

  case 161: /* AssignExpr: AssignExpr12 _DGTEQ AssignExpr  */
#line 633 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::RightShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3022 "Parser.C"
    break;

  case 162: /* AssignExpr1: AssignExpr2  */
#line 635 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3028 "Parser.C"
    break;

  case 163: /* AssignExpr1: AssignExpr2 _QUESTION OptExpression _COLON AssignExpr1  */
#line 636 "full_bnfc_parser.y"
                                                           { (yyval.assignexpr_) = new acsl::TernaryCondExpr((yyvsp[-4].assignexpr_), (yyvsp[-2].optexpression_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3034 "Parser.C"
    break;

  case 164: /* AssignExpr2: AssignExpr3  */
#line 638 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3040 "Parser.C"
    break;

  case 165: /* AssignExpr2: AssignExpr2 _DBAR AssignExpr3  */
#line 639 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::OrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3046 "Parser.C"
    break;

  case 166: /* AssignExpr3: AssignExpr4  */
#line 641 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3052 "Parser.C"
    break;

  case 167: /* AssignExpr3: AssignExpr3 _DAMP AssignExpr4  */
#line 642 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::AndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3058 "Parser.C"
    break;

  case 168: /* AssignExpr4: AssignExpr5  */
#line 644 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3064 "Parser.C"
    break;

  case 169: /* AssignExpr4: AssignExpr4 _BAR AssignExpr5  */
#line 645 "full_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new acsl::BitOrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3070 "Parser.C"
    break;

  case 170: /* AssignExpr5: AssignExpr6  */
#line 647 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3076 "Parser.C"
    break;

  case 171: /* AssignExpr5: AssignExpr5 _CARET AssignExpr6  */
#line 648 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::BitXorExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3082 "Parser.C"
    break;

  case 172: /* AssignExpr6: AssignExpr7  */
#line 650 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3088 "Parser.C"
    break;

  case 173: /* AssignExpr6: AssignExpr6 _AMP AssignExpr7  */
#line 651 "full_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new acsl::BitAndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3094 "Parser.C"
    break;

  case 174: /* AssignExpr7: AssignExpr8  */
#line 653 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3100 "Parser.C"
    break;

  case 175: /* AssignExpr7: AssignExpr7 _DEQ AssignExpr8  */
#line 654 "full_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new acsl::EqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3106 "Parser.C"
    break;

  case 176: /* AssignExpr7: AssignExpr7 _BANGEQ AssignExpr8  */
#line 655 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::NotEqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3112 "Parser.C"
    break;

  case 177: /* AssignExpr8: AssignExpr9  */
#line 657 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3118 "Parser.C"
    break;

  case 178: /* AssignExpr8: AssignExpr8 _LT AssignExpr9  */
#line 658 "full_bnfc_parser.y"
                                { (yyval.assignexpr_) = new acsl::LessExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3124 "Parser.C"
    break;

  case 179: /* AssignExpr8: AssignExpr8 _GT AssignExpr9  */
#line 659 "full_bnfc_parser.y"
                                { (yyval.assignexpr_) = new acsl::GreaterExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3130 "Parser.C"
    break;

  case 180: /* AssignExpr8: AssignExpr8 _LDARROW AssignExpr9  */
#line 660 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::LessEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3136 "Parser.C"
    break;

  case 181: /* AssignExpr8: AssignExpr8 _GTEQ AssignExpr9  */
#line 661 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::GreaterEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3142 "Parser.C"
    break;

  case 182: /* AssignExpr9: AssignExpr10  */
#line 663 "full_bnfc_parser.y"
                           { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3148 "Parser.C"
    break;

  case 183: /* AssignExpr9: AssignExpr9 _DLT AssignExpr10  */
#line 664 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::LeftShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3154 "Parser.C"
    break;

  case 184: /* AssignExpr9: AssignExpr9 _DGT AssignExpr10  */
#line 665 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::RightShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3160 "Parser.C"
    break;

  case 185: /* AssignExpr10: AssignExpr11  */
#line 667 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3166 "Parser.C"
    break;

  case 186: /* AssignExpr10: AssignExpr10 _PLUS AssignExpr11  */
#line 668 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::PlusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3172 "Parser.C"
    break;

  case 187: /* AssignExpr10: AssignExpr10 _MINUS AssignExpr11  */
#line 669 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::MinusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3178 "Parser.C"
    break;

  case 188: /* AssignExpr11: AssignExpr12  */
#line 671 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3184 "Parser.C"
    break;

  case 189: /* AssignExpr11: AssignExpr11 _STAR AssignExpr12  */
#line 672 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::MulsExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3190 "Parser.C"
    break;

  case 190: /* AssignExpr11: AssignExpr11 _SLASH AssignExpr12  */
#line 673 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::DivExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3196 "Parser.C"
    break;

  case 191: /* AssignExpr11: AssignExpr11 _PERCENT AssignExpr12  */
#line 674 "full_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new acsl::ModExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3202 "Parser.C"
    break;

  case 192: /* AssignExpr12: AssignExpr13  */
#line 676 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3208 "Parser.C"
    break;

  case 193: /* AssignExpr12: _LPAREN TypeName _RPAREN AssignExpr12  */
#line 677 "full_bnfc_parser.y"
                                          { (yyval.assignexpr_) = new acsl::CastExpr((yyvsp[-2].typename_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3214 "Parser.C"
    break;

  case 194: /* AssignExpr13: AssignExpr14  */
#line 679 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3220 "Parser.C"
    break;

  case 195: /* AssignExpr13: _DPLUS AssignExpr13  */
#line 680 "full_bnfc_parser.y"
                        { (yyval.assignexpr_) = new acsl::UnaryExprPlusPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3226 "Parser.C"
    break;

  case 196: /* AssignExpr13: _DMINUS AssignExpr13  */
#line 681 "full_bnfc_parser.y"
                         { (yyval.assignexpr_) = new acsl::UnaryExprMinusMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3232 "Parser.C"
    break;

  case 197: /* AssignExpr13: _PLUS AssignExpr12  */
#line 682 "full_bnfc_parser.y"
                       { (yyval.assignexpr_) = new acsl::UnaryExprPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3238 "Parser.C"
    break;

  case 198: /* AssignExpr13: _MINUS AssignExpr12  */
#line 683 "full_bnfc_parser.y"
                        { (yyval.assignexpr_) = new acsl::UnaryExprMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3244 "Parser.C"
    break;

  case 199: /* AssignExpr13: _STAR AssignExpr12  */
#line 684 "full_bnfc_parser.y"
                       { (yyval.assignexpr_) = new acsl::UnaryExprMult((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3250 "Parser.C"
    break;

  case 200: /* AssignExpr13: _AMP AssignExpr12  */
#line 685 "full_bnfc_parser.y"
                      { (yyval.assignexpr_) = new acsl::UnaryExprAmp((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3256 "Parser.C"
    break;

  case 201: /* AssignExpr13: _BANG AssignExpr12  */
#line 686 "full_bnfc_parser.y"
                       { (yyval.assignexpr_) = new acsl::UnaryExprNot((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3262 "Parser.C"
    break;

  case 202: /* AssignExpr13: _TILDE AssignExpr12  */
#line 687 "full_bnfc_parser.y"
                        { (yyval.assignexpr_) = new acsl::UnaryExprTilde((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3268 "Parser.C"
    break;

  case 203: /* AssignExpr13: _DAMP IdOrTypenameAsId  */
#line 688 "full_bnfc_parser.y"
                           { (yyval.assignexpr_) = new acsl::UnaryExprAddress((yyvsp[0].idortypenameasid_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3274 "Parser.C"
    break;

  case 204: /* AssignExpr14: AssignExpr15  */
#line 690 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3280 "Parser.C"
    break;

  case 205: /* AssignExpr14: AssignExpr14 _LBRACK ListExpression _RBRACK  */
#line 691 "full_bnfc_parser.y"
                                                { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new acsl::BracketsPostfixExpression((yyvsp[-3].assignexpr_), (yyvsp[-1].listexpression_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3286 "Parser.C"
    break;

  case 206: /* AssignExpr14: AssignExpr14 _DOT IdOrTypename  */
#line 692 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::DotPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3292 "Parser.C"
    break;

  case 207: /* AssignExpr14: AssignExpr14 _RARROW IdOrTypename  */
#line 693 "full_bnfc_parser.y"
                                      { (yyval.assignexpr_) = new acsl::ArrowPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3298 "Parser.C"
    break;

  case 208: /* AssignExpr14: AssignExpr14 _DPLUS  */
#line 694 "full_bnfc_parser.y"
                        { (yyval.assignexpr_) = new acsl::PlusPlusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3304 "Parser.C"
    break;

  case 209: /* AssignExpr14: AssignExpr14 _DMINUS  */
#line 695 "full_bnfc_parser.y"
                         { (yyval.assignexpr_) = new acsl::MinusMinusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3310 "Parser.C"
    break;

  case 210: /* AssignExpr15: _IDENT_  */
#line 697 "full_bnfc_parser.y"
                       { (yyval.assignexpr_) = new acsl::IdentifierPrimaryExpression((yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3316 "Parser.C"
    break;

  case 211: /* AssignExpr15: Constant  */
#line 698 "full_bnfc_parser.y"
             { (yyval.assignexpr_) = new acsl::ConstantPrimaryExpressin((yyvsp[0].constant_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3322 "Parser.C"
    break;

  case 212: /* AssignExpr15: _LPAREN ListExpression _RPAREN  */
#line 699 "full_bnfc_parser.y"
                                   { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new acsl::CommaExpressionPrimaryExpressin((yyvsp[-1].listexpression_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3328 "Parser.C"
    break;

  case 213: /* AssignExpr15: _LPAREN Block _RPAREN  */
#line 700 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = new acsl::BlockPrimaryExpressin((yyvsp[-1].block_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3334 "Parser.C"
    break;

  case 214: /* Constant: _INTEGER_  */
#line 702 "full_bnfc_parser.y"
                     { (yyval.constant_) = new acsl::ConstantInt((yyvsp[0]._int)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3340 "Parser.C"
    break;

  case 215: /* Constant: _DOUBLE_  */
#line 703 "full_bnfc_parser.y"
             { (yyval.constant_) = new acsl::ConstantFloat((yyvsp[0]._double)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3346 "Parser.C"
    break;

  case 216: /* Constant: _CHAR_  */
#line 704 "full_bnfc_parser.y"
           { (yyval.constant_) = new acsl::ConstantChar((yyvsp[0]._char)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3352 "Parser.C"
    break;

  case 217: /* TypeName: DeclSpecList  */
#line 706 "full_bnfc_parser.y"
                        { (yyval.typename_) = new acsl::TypeNameDeclSpecList((yyvsp[0].declspeclist_)); (yyval.typename_)->line_number = (yyloc).first_line; (yyval.typename_)->char_number = (yyloc).first_column; result->typename_ = (yyval.typename_); }
#line 3358 "Parser.C"
    break;

  case 218: /* ACSLProgram: _KW_70 Annot _KW_69  */
#line 708 "full_bnfc_parser.y"
                                  { (yyval.acslprogram_) = new acsl::AnnotProgram((yyvsp[-1].annot_)); (yyval.acslprogram_)->line_number = (yyloc).first_line; (yyval.acslprogram_)->char_number = (yyloc).first_column; result->acslprogram_ = (yyval.acslprogram_); }
#line 3364 "Parser.C"
    break;

  case 219: /* ACSLProgram: _KW_70 LogicPTreeAnnot _KW_69  */
#line 709 "full_bnfc_parser.y"
                                  { (yyval.acslprogram_) = new acsl::AnnotationProgram((yyvsp[-1].logicptreeannot_)); (yyval.acslprogram_)->line_number = (yyloc).first_line; (yyval.acslprogram_)->char_number = (yyloc).first_column; result->acslprogram_ = (yyval.acslprogram_); }
#line 3370 "Parser.C"
    break;

  case 220: /* Annot: Code_Annot  */
#line 711 "full_bnfc_parser.y"
                   { (yyval.annot_) = new acsl::CodeAnnot((yyvsp[0].code_annot_)); (yyval.annot_)->line_number = (yyloc).first_line; (yyval.annot_)->char_number = (yyloc).first_column; result->annot_ = (yyval.annot_); }
#line 3376 "Parser.C"
    break;

  case 221: /* Code_Annot: Contract  */
#line 713 "full_bnfc_parser.y"
                      { (yyval.code_annot_) = new acsl::CodeAnnotContract((yyvsp[0].contract_)); (yyval.code_annot_)->line_number = (yyloc).first_line; (yyval.code_annot_)->char_number = (yyloc).first_column; result->code_annot_ = (yyval.code_annot_); }
#line 3382 "Parser.C"
    break;

  case 222: /* Contract: Requires Terminates Decreases SimpleClauses Behaviors CompleteOrDisjoint  */
#line 715 "full_bnfc_parser.y"
                                                                                    { (yyval.contract_) = new acsl::SimpleContract((yyvsp[-5].requires_), (yyvsp[-4].terminates_), (yyvsp[-3].decreases_), (yyvsp[-2].simpleclauses_), (yyvsp[-1].behaviors_), (yyvsp[0].completeordisjoint_)); (yyval.contract_)->line_number = (yyloc).first_line; (yyval.contract_)->char_number = (yyloc).first_column; result->contract_ = (yyval.contract_); }
#line 3388 "Parser.C"
    break;

  case 223: /* Requires: %empty  */
#line 717 "full_bnfc_parser.y"
                       { (yyval.requires_) = new acsl::NoRequires(); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 3394 "Parser.C"
    break;

  case 224: /* Requires: NERequires  */
#line 718 "full_bnfc_parser.y"
               { (yyval.requires_) = new acsl::SomeRequires((yyvsp[0].nerequires_)); (yyval.requires_)->line_number = (yyloc).first_line; (yyval.requires_)->char_number = (yyloc).first_column; result->requires_ = (yyval.requires_); }
#line 3400 "Parser.C"
    break;

  case 225: /* NERequires: _KW_requires Lexpr _SEMI Requires  */
#line 720 "full_bnfc_parser.y"
                                               { (yyval.nerequires_) = new acsl::SimpleRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 3406 "Parser.C"
    break;

  case 226: /* NERequires: _KW_check _KW_requires Lexpr _SEMI Requires  */
#line 721 "full_bnfc_parser.y"
                                                { (yyval.nerequires_) = new acsl::CheckRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 3412 "Parser.C"
    break;

  case 227: /* NERequires: _KW_admit _KW_requires Lexpr _SEMI Requires  */
#line 722 "full_bnfc_parser.y"
                                                { (yyval.nerequires_) = new acsl::AdimtRequires((yyvsp[-2].lexpr_), (yyvsp[0].requires_)); (yyval.nerequires_)->line_number = (yyloc).first_line; (yyval.nerequires_)->char_number = (yyloc).first_column; result->nerequires_ = (yyval.nerequires_); }
#line 3418 "Parser.C"
    break;

  case 228: /* Terminates: %empty  */
#line 724 "full_bnfc_parser.y"
                         { (yyval.terminates_) = new acsl::NoTerminate(); (yyval.terminates_)->line_number = (yyloc).first_line; (yyval.terminates_)->char_number = (yyloc).first_column; result->terminates_ = (yyval.terminates_); }
#line 3424 "Parser.C"
    break;

  case 229: /* Decreases: %empty  */
#line 726 "full_bnfc_parser.y"
                        { (yyval.decreases_) = new acsl::NoDecreases(); (yyval.decreases_)->line_number = (yyloc).first_line; (yyval.decreases_)->char_number = (yyloc).first_column; result->decreases_ = (yyval.decreases_); }
#line 3430 "Parser.C"
    break;

  case 230: /* SimpleClauses: %empty  */
#line 728 "full_bnfc_parser.y"
                            { (yyval.simpleclauses_) = new acsl::NoSimpleClauses(); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 3436 "Parser.C"
    break;

  case 231: /* SimpleClauses: NESimpleClauses  */
#line 729 "full_bnfc_parser.y"
                    { (yyval.simpleclauses_) = new acsl::SomeSimpleClauses((yyvsp[0].nesimpleclauses_)); (yyval.simpleclauses_)->line_number = (yyloc).first_line; (yyval.simpleclauses_)->char_number = (yyloc).first_column; result->simpleclauses_ = (yyval.simpleclauses_); }
#line 3442 "Parser.C"
    break;

  case 232: /* NESimpleClauses: PostCond Lexpr _SEMI SimpleClauses  */
#line 731 "full_bnfc_parser.y"
                                                     { (yyval.nesimpleclauses_) = new acsl::PostCondSimpleClauses((yyvsp[-3].postcond_), (yyvsp[-2].lexpr_), (yyvsp[0].simpleclauses_)); (yyval.nesimpleclauses_)->line_number = (yyloc).first_line; (yyval.nesimpleclauses_)->char_number = (yyloc).first_column; result->nesimpleclauses_ = (yyval.nesimpleclauses_); }
#line 3448 "Parser.C"
    break;

  case 233: /* NESimpleClauses: _KW_assigns Assigns _SEMI SimpleClauses  */
#line 732 "full_bnfc_parser.y"
                                            { (yyval.nesimpleclauses_) = new acsl::AssignsSimpleClauses((yyvsp[-2].assigns_), (yyvsp[0].simpleclauses_)); (yyval.nesimpleclauses_)->line_number = (yyloc).first_line; (yyval.nesimpleclauses_)->char_number = (yyloc).first_column; result->nesimpleclauses_ = (yyval.nesimpleclauses_); }
#line 3454 "Parser.C"
    break;

  case 234: /* Assigns: Zones  */
#line 734 "full_bnfc_parser.y"
                { (yyval.assigns_) = new acsl::AssignZone((yyvsp[0].zones_)); (yyval.assigns_)->line_number = (yyloc).first_line; (yyval.assigns_)->char_number = (yyloc).first_column; result->assigns_ = (yyval.assigns_); }
#line 3460 "Parser.C"
    break;

  case 235: /* Assigns: ListLexpr _SYMB_49 Zones  */
#line 735 "full_bnfc_parser.y"
                             { std::reverse((yyvsp[-2].listlexpr_)->begin(),(yyvsp[-2].listlexpr_)->end()) ;(yyval.assigns_) = new acsl::AssignZoneFromZone((yyvsp[-2].listlexpr_), (yyvsp[0].zones_)); (yyval.assigns_)->line_number = (yyloc).first_line; (yyval.assigns_)->char_number = (yyloc).first_column; result->assigns_ = (yyval.assigns_); }
#line 3466 "Parser.C"
    break;

  case 236: /* Zones: ListLexpr  */
#line 737 "full_bnfc_parser.y"
                  { std::reverse((yyvsp[0].listlexpr_)->begin(),(yyvsp[0].listlexpr_)->end()) ;(yyval.zones_) = new acsl::SomeZone((yyvsp[0].listlexpr_)); (yyval.zones_)->line_number = (yyloc).first_line; (yyval.zones_)->char_number = (yyloc).first_column; result->zones_ = (yyval.zones_); }
#line 3472 "Parser.C"
    break;

  case 237: /* Zones: _SYMB_50  */
#line 738 "full_bnfc_parser.y"
             { (yyval.zones_) = new acsl::NoZone(); (yyval.zones_)->line_number = (yyloc).first_line; (yyval.zones_)->char_number = (yyloc).first_column; result->zones_ = (yyval.zones_); }
#line 3478 "Parser.C"
    break;

  case 238: /* Behaviors: %empty  */
#line 740 "full_bnfc_parser.y"
                        { (yyval.behaviors_) = new acsl::NoBehaviors(); (yyval.behaviors_)->line_number = (yyloc).first_line; (yyval.behaviors_)->char_number = (yyloc).first_column; result->behaviors_ = (yyval.behaviors_); }
#line 3484 "Parser.C"
    break;

  case 239: /* CompleteOrDisjoint: %empty  */
#line 742 "full_bnfc_parser.y"
                                 { (yyval.completeordisjoint_) = new acsl::NoComplDisj(); (yyval.completeordisjoint_)->line_number = (yyloc).first_line; (yyval.completeordisjoint_)->char_number = (yyloc).first_column; result->completeordisjoint_ = (yyval.completeordisjoint_); }
#line 3490 "Parser.C"
    break;

  case 240: /* Lexpr: Lexpr _SYMB_51 Lexpr1  */
#line 744 "full_bnfc_parser.y"
                              { (yyval.lexpr_) = new acsl::ImplLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3496 "Parser.C"
    break;

  case 241: /* Lexpr: Lexpr _SYMB_52 Lexpr1  */
#line 745 "full_bnfc_parser.y"
                          { (yyval.lexpr_) = new acsl::IffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3502 "Parser.C"
    break;

  case 242: /* Lexpr: Lexpr _DBAR Lexpr1  */
#line 746 "full_bnfc_parser.y"
                       { (yyval.lexpr_) = new acsl::OrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3508 "Parser.C"
    break;

  case 243: /* Lexpr: Lexpr _DAMP Lexpr1  */
#line 747 "full_bnfc_parser.y"
                       { (yyval.lexpr_) = new acsl::AndLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3514 "Parser.C"
    break;

  case 244: /* Lexpr: Lexpr _DCARET Lexpr1  */
#line 748 "full_bnfc_parser.y"
                         { (yyval.lexpr_) = new acsl::HatHatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3520 "Parser.C"
    break;

  case 245: /* Lexpr: Lexpr1  */
#line 749 "full_bnfc_parser.y"
           { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3526 "Parser.C"
    break;

  case 246: /* ListLexpr: Lexpr  */
#line 751 "full_bnfc_parser.y"
                  { (yyval.listlexpr_) = new acsl::ListLexpr(); (yyval.listlexpr_)->push_back((yyvsp[0].lexpr_)); result->listlexpr_ = (yyval.listlexpr_); }
#line 3532 "Parser.C"
    break;

  case 247: /* ListLexpr: Lexpr _COMMA ListLexpr  */
#line 752 "full_bnfc_parser.y"
                           { (yyvsp[0].listlexpr_)->push_back((yyvsp[-2].lexpr_)); (yyval.listlexpr_) = (yyvsp[0].listlexpr_); result->listlexpr_ = (yyval.listlexpr_); }
#line 3538 "Parser.C"
    break;

  case 248: /* Lexpr1: Lexpr2  */
#line 754 "full_bnfc_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3544 "Parser.C"
    break;

  case 249: /* Lexpr1: Lexpr3 ListLexprRelInner Relation Lexpr2  */
#line 755 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::RelationLexpr((yyvsp[-3].lexpr_), (yyvsp[-2].listlexprrelinner_), (yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3550 "Parser.C"
    break;

  case 250: /* LexprRelInner: Relation Lexpr3  */
#line 757 "full_bnfc_parser.y"
                                { (yyval.lexprrelinner_) = new acsl::RelInnerLexpr((yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexprrelinner_)->line_number = (yyloc).first_line; (yyval.lexprrelinner_)->char_number = (yyloc).first_column; result->lexprrelinner_ = (yyval.lexprrelinner_); }
#line 3556 "Parser.C"
    break;

  case 251: /* ListLexprRelInner: %empty  */
#line 759 "full_bnfc_parser.y"
                                { (yyval.listlexprrelinner_) = new acsl::ListLexprRelInner(); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 3562 "Parser.C"
    break;

  case 252: /* ListLexprRelInner: ListLexprRelInner LexprRelInner  */
#line 760 "full_bnfc_parser.y"
                                    { (yyvsp[-1].listlexprrelinner_)->push_back((yyvsp[0].lexprrelinner_)); (yyval.listlexprrelinner_) = (yyvsp[-1].listlexprrelinner_); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 3568 "Parser.C"
    break;

  case 253: /* Relation: _LT  */
#line 762 "full_bnfc_parser.y"
               { (yyval.relation_) = new acsl::LessRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 3574 "Parser.C"
    break;

  case 254: /* Relation: _GT  */
#line 763 "full_bnfc_parser.y"
        { (yyval.relation_) = new acsl::GreaterRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 3580 "Parser.C"
    break;

  case 255: /* Relation: _LDARROW  */
#line 764 "full_bnfc_parser.y"
             { (yyval.relation_) = new acsl::LessEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 3586 "Parser.C"
    break;

  case 256: /* Relation: _GTEQ  */
#line 765 "full_bnfc_parser.y"
          { (yyval.relation_) = new acsl::GreaterEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 3592 "Parser.C"
    break;

  case 257: /* Relation: _DEQ  */
#line 766 "full_bnfc_parser.y"
         { (yyval.relation_) = new acsl::EqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 3598 "Parser.C"
    break;

  case 258: /* Relation: _BANGEQ  */
#line 767 "full_bnfc_parser.y"
            { (yyval.relation_) = new acsl::NotEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 3604 "Parser.C"
    break;

  case 259: /* Lexpr2: Lexpr3  */
#line 769 "full_bnfc_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3610 "Parser.C"
    break;

  case 260: /* Lexpr2: LexprBinder  */
#line 770 "full_bnfc_parser.y"
                { (yyval.lexpr_) = new acsl::BinderLexpr((yyvsp[0].lexprbinder_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3616 "Parser.C"
    break;

  case 261: /* Lexpr2: _BANG LexprBinder  */
#line 771 "full_bnfc_parser.y"
                      { (yyval.lexpr_) = new acsl::NotBinderLexpr((yyvsp[0].lexprbinder_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3622 "Parser.C"
    break;

  case 262: /* LexprBinder: _SYMB_54 Binders _SEMI Lexpr  */
#line 773 "full_bnfc_parser.y"
                                           { (yyval.lexprbinder_) = new acsl::ForallBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 3628 "Parser.C"
    break;

  case 263: /* LexprBinder: _SYMB_55 Binders _SEMI Lexpr  */
#line 774 "full_bnfc_parser.y"
                                 { (yyval.lexprbinder_) = new acsl::ExistBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 3634 "Parser.C"
    break;

  case 264: /* LexprBinder: _SYMB_56 Binders _SEMI Lexpr  */
#line 775 "full_bnfc_parser.y"
                                 { (yyval.lexprbinder_) = new acsl::LambdaBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 3640 "Parser.C"
    break;

  case 265: /* Binders: TypeSpecOFTYPENAME VarSpec ListBindersReentrance  */
#line 777 "full_bnfc_parser.y"
                                                           { (yyval.binders_) = new acsl::TheBinders((yyvsp[-2].typespecoftypename_), (yyvsp[-1].varspec_), (yyvsp[0].listbindersreentrance_)); (yyval.binders_)->line_number = (yyloc).first_line; (yyval.binders_)->char_number = (yyloc).first_column; result->binders_ = (yyval.binders_); }
#line 3646 "Parser.C"
    break;

  case 266: /* TypeSpecOFTYPENAME: _IDENT_  */
#line 779 "full_bnfc_parser.y"
                             { (yyval.typespecoftypename_) = new acsl::TypeSpecTYPENAME((yyvsp[0]._string)); (yyval.typespecoftypename_)->line_number = (yyloc).first_line; (yyval.typespecoftypename_)->char_number = (yyloc).first_column; result->typespecoftypename_ = (yyval.typespecoftypename_); }
#line 3652 "Parser.C"
    break;

  case 267: /* TypeSpecOFTYPENAME: TypeSpecSimple  */
#line 780 "full_bnfc_parser.y"
                   { (yyval.typespecoftypename_) = new acsl::TypeSpecSimpleFromTypenameTypeSpec((yyvsp[0].typespecsimple_)); (yyval.typespecoftypename_)->line_number = (yyloc).first_line; (yyval.typespecoftypename_)->char_number = (yyloc).first_column; result->typespecoftypename_ = (yyval.typespecoftypename_); }
#line 3658 "Parser.C"
    break;

  case 268: /* BindersReentrance: _COMMA TypeSpecOFTYPENAME VarSpec  */
#line 782 "full_bnfc_parser.y"
                                                      { (yyval.bindersreentrance_) = new acsl::BindersReentranceDeclSpec((yyvsp[-1].typespecoftypename_), (yyvsp[0].varspec_)); (yyval.bindersreentrance_)->line_number = (yyloc).first_line; (yyval.bindersreentrance_)->char_number = (yyloc).first_column; result->bindersreentrance_ = (yyval.bindersreentrance_); }
#line 3664 "Parser.C"
    break;

  case 269: /* BindersReentrance: _COMMA VarSpec  */
#line 783 "full_bnfc_parser.y"
                   { (yyval.bindersreentrance_) = new acsl::BindersReentranceVarSpec((yyvsp[0].varspec_)); (yyval.bindersreentrance_)->line_number = (yyloc).first_line; (yyval.bindersreentrance_)->char_number = (yyloc).first_column; result->bindersreentrance_ = (yyval.bindersreentrance_); }
#line 3670 "Parser.C"
    break;

  case 270: /* ListBindersReentrance: %empty  */
#line 785 "full_bnfc_parser.y"
                                    { (yyval.listbindersreentrance_) = new acsl::ListBindersReentrance(); result->listbindersreentrance_ = (yyval.listbindersreentrance_); }
#line 3676 "Parser.C"
    break;

  case 271: /* ListBindersReentrance: ListBindersReentrance BindersReentrance  */
#line 786 "full_bnfc_parser.y"
                                            { (yyvsp[-1].listbindersreentrance_)->push_back((yyvsp[0].bindersreentrance_)); (yyval.listbindersreentrance_) = (yyvsp[-1].listbindersreentrance_); result->listbindersreentrance_ = (yyval.listbindersreentrance_); }
#line 3682 "Parser.C"
    break;

  case 272: /* VarSpec: VarSpec1  */
#line 788 "full_bnfc_parser.y"
                   { (yyval.varspec_) = (yyvsp[0].varspec_); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 3688 "Parser.C"
    break;

  case 273: /* VarSpec: ListStars VarSpec1  */
#line 789 "full_bnfc_parser.y"
                       { std::reverse((yyvsp[-1].liststars_)->begin(),(yyvsp[-1].liststars_)->end()) ;(yyval.varspec_) = new acsl::StartVarSpec((yyvsp[-1].liststars_), (yyvsp[0].varspec_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 3694 "Parser.C"
    break;

  case 274: /* Stars: _STAR  */
#line 791 "full_bnfc_parser.y"
              { (yyval.stars_) = new acsl::Star(); (yyval.stars_)->line_number = (yyloc).first_line; (yyval.stars_)->char_number = (yyloc).first_column; result->stars_ = (yyval.stars_); }
#line 3700 "Parser.C"
    break;

  case 275: /* ListStars: Stars  */
#line 793 "full_bnfc_parser.y"
                  { (yyval.liststars_) = new acsl::ListStars(); (yyval.liststars_)->push_back((yyvsp[0].stars_)); result->liststars_ = (yyval.liststars_); }
#line 3706 "Parser.C"
    break;

  case 276: /* ListStars: Stars ListStars  */
#line 794 "full_bnfc_parser.y"
                    { (yyvsp[0].liststars_)->push_back((yyvsp[-1].stars_)); (yyval.liststars_) = (yyvsp[0].liststars_); result->liststars_ = (yyval.liststars_); }
#line 3712 "Parser.C"
    break;

  case 277: /* VarSpec1: FullIdentifier  */
#line 796 "full_bnfc_parser.y"
                          { (yyval.varspec_) = new acsl::SimpleSpec((yyvsp[0].fullidentifier_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 3718 "Parser.C"
    break;

  case 278: /* VarSpec1: VarSpec1 _LBRACK ArraySize _RBRACK  */
#line 797 "full_bnfc_parser.y"
                                       { (yyval.varspec_) = new acsl::ArraySpec((yyvsp[-3].varspec_), (yyvsp[-1].arraysize_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 3724 "Parser.C"
    break;

  case 279: /* VarSpec1: _LPAREN VarSpec _RPAREN  */
#line 798 "full_bnfc_parser.y"
                            { (yyval.varspec_) = (yyvsp[-1].varspec_); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 3730 "Parser.C"
    break;

  case 280: /* ArraySize: _INTEGER_  */
#line 800 "full_bnfc_parser.y"
                      { (yyval.arraysize_) = new acsl::IntConstArraySize((yyvsp[0]._int)); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 3736 "Parser.C"
    break;

  case 281: /* ArraySize: FullIdentifier  */
#line 801 "full_bnfc_parser.y"
                   { (yyval.arraysize_) = new acsl::SomeArraySize((yyvsp[0].fullidentifier_)); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 3742 "Parser.C"
    break;

  case 282: /* ArraySize: %empty  */
#line 802 "full_bnfc_parser.y"
                { (yyval.arraysize_) = new acsl::NoSize(); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 3748 "Parser.C"
    break;

  case 283: /* Lexpr3: _SYMB_57  */
#line 804 "full_bnfc_parser.y"
                  { (yyval.lexpr_) = new acsl::TrueLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3754 "Parser.C"
    break;

  case 284: /* Lexpr3: _SYMB_58  */
#line 805 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::FalseLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3760 "Parser.C"
    break;

  case 285: /* Lexpr3: _SYMB_59 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 806 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::ValidLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3766 "Parser.C"
    break;

  case 286: /* Lexpr3: _SYMB_60  */
#line 807 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::AutomaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3772 "Parser.C"
    break;

  case 287: /* Lexpr3: _SYMB_61  */
#line 808 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::DynamicLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3778 "Parser.C"
    break;

  case 288: /* Lexpr3: _SYMB_62  */
#line 809 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::RegisterLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3784 "Parser.C"
    break;

  case 289: /* Lexpr3: _SYMB_63  */
#line 810 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::StaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3790 "Parser.C"
    break;

  case 290: /* Lexpr3: _SYMB_64  */
#line 811 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::UnallocatedLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3796 "Parser.C"
    break;

  case 291: /* Lexpr3: _SYMB_65  */
#line 812 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::NullLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3802 "Parser.C"
    break;

  case 292: /* Lexpr3: _INTEGER_  */
#line 813 "full_bnfc_parser.y"
              { (yyval.lexpr_) = new acsl::LexprIntConst((yyvsp[0]._int)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3808 "Parser.C"
    break;

  case 293: /* Lexpr3: _DOUBLE_  */
#line 814 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::LexprFloatConst((yyvsp[0]._double)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3814 "Parser.C"
    break;

  case 294: /* Lexpr3: _STRING_  */
#line 815 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::LexprStringConst((yyvsp[0]._string)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3820 "Parser.C"
    break;

  case 295: /* Lexpr3: Lexpr3 _PLUS Lexpr3  */
#line 816 "full_bnfc_parser.y"
                        { (yyval.lexpr_) = new acsl::AddLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3826 "Parser.C"
    break;

  case 296: /* Lexpr3: Lexpr3 _MINUS Lexpr3  */
#line 817 "full_bnfc_parser.y"
                         { (yyval.lexpr_) = new acsl::SubtrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3832 "Parser.C"
    break;

  case 297: /* Lexpr3: Lexpr3 _LBRACK Range _RBRACK  */
#line 818 "full_bnfc_parser.y"
                                 { (yyval.lexpr_) = new acsl::SquaresRangeLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].range_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3838 "Parser.C"
    break;

  case 298: /* Lexpr3: Lexpr3 _LBRACK Lexpr _RBRACK  */
#line 819 "full_bnfc_parser.y"
                                 { (yyval.lexpr_) = new acsl::SquaresLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3844 "Parser.C"
    break;

  case 299: /* Lexpr3: _SYMB_66 _LPAREN ListLexpr _RPAREN  */
#line 820 "full_bnfc_parser.y"
                                       { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new acsl::SeparatedLexpr((yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3850 "Parser.C"
    break;

  case 300: /* Lexpr3: FullIdentifier _LPAREN ListLexpr _RPAREN  */
#line 821 "full_bnfc_parser.y"
                                             { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new acsl::FullIdParenLexpr((yyvsp[-3].fullidentifier_), (yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3856 "Parser.C"
    break;

  case 301: /* Lexpr3: FullIdentifier  */
#line 822 "full_bnfc_parser.y"
                   { (yyval.lexpr_) = new acsl::FullId((yyvsp[0].fullidentifier_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3862 "Parser.C"
    break;

  case 302: /* Lexpr3: _SYMB_67  */
#line 823 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::PiLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3868 "Parser.C"
    break;

  case 303: /* Lexpr3: _LPAREN Lexpr _RPAREN  */
#line 824 "full_bnfc_parser.y"
                          { (yyval.lexpr_) = (yyvsp[-1].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3874 "Parser.C"
    break;

  case 304: /* Lexpr3: _LPAREN Range _RPAREN  */
#line 825 "full_bnfc_parser.y"
                          { (yyval.lexpr_) = new acsl::ParenRangeLexpr((yyvsp[-1].range_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 3880 "Parser.C"
    break;

  case 305: /* OptLabel1: OptLabelList  */
#line 827 "full_bnfc_parser.y"
                         { (yyval.optlabel_) = new acsl::OptLabelOne((yyvsp[0].optlabellist_)); (yyval.optlabel_)->line_number = (yyloc).first_line; (yyval.optlabel_)->char_number = (yyloc).first_column; result->optlabel_ = (yyval.optlabel_); }
#line 3886 "Parser.C"
    break;

  case 306: /* OptLabelList: %empty  */
#line 831 "full_bnfc_parser.y"
                           { (yyval.optlabellist_) = new acsl::NoLableList(); (yyval.optlabellist_)->line_number = (yyloc).first_line; (yyval.optlabellist_)->char_number = (yyloc).first_column; result->optlabellist_ = (yyval.optlabellist_); }
#line 3892 "Parser.C"
    break;

  case 307: /* OptLabelList: _LBRACE ListLabelName _RBRACE  */
#line 832 "full_bnfc_parser.y"
                                  { std::reverse((yyvsp[-1].listlabelname_)->begin(),(yyvsp[-1].listlabelname_)->end()) ;(yyval.optlabellist_) = new acsl::LableList((yyvsp[-1].listlabelname_)); (yyval.optlabellist_)->line_number = (yyloc).first_line; (yyval.optlabellist_)->char_number = (yyloc).first_column; result->optlabellist_ = (yyval.optlabellist_); }
#line 3898 "Parser.C"
    break;

  case 308: /* LabelName: AnyIdentifier  */
#line 834 "full_bnfc_parser.y"
                          { (yyval.labelname_) = new acsl::LableName((yyvsp[0].anyidentifier_)); (yyval.labelname_)->line_number = (yyloc).first_line; (yyval.labelname_)->char_number = (yyloc).first_column; result->labelname_ = (yyval.labelname_); }
#line 3904 "Parser.C"
    break;

  case 309: /* ListLabelName: LabelName  */
#line 836 "full_bnfc_parser.y"
                          { (yyval.listlabelname_) = new acsl::ListLabelName(); (yyval.listlabelname_)->push_back((yyvsp[0].labelname_)); result->listlabelname_ = (yyval.listlabelname_); }
#line 3910 "Parser.C"
    break;

  case 310: /* ListLabelName: LabelName _COMMA ListLabelName  */
#line 837 "full_bnfc_parser.y"
                                   { (yyvsp[0].listlabelname_)->push_back((yyvsp[-2].labelname_)); (yyval.listlabelname_) = (yyvsp[0].listlabelname_); result->listlabelname_ = (yyval.listlabelname_); }
#line 3916 "Parser.C"
    break;

  case 311: /* Range: LexprOption _DDOT LexprOption  */
#line 839 "full_bnfc_parser.y"
                                      { (yyval.range_) = new acsl::LexprRange((yyvsp[-2].lexproption_), (yyvsp[0].lexproption_)); (yyval.range_)->line_number = (yyloc).first_line; (yyval.range_)->char_number = (yyloc).first_column; result->range_ = (yyval.range_); }
#line 3922 "Parser.C"
    break;

  case 312: /* LexprOption: %empty  */
#line 841 "full_bnfc_parser.y"
                          { (yyval.lexproption_) = new acsl::NoLexprOption(); (yyval.lexproption_)->line_number = (yyloc).first_line; (yyval.lexproption_)->char_number = (yyloc).first_column; result->lexproption_ = (yyval.lexproption_); }
#line 3928 "Parser.C"
    break;

  case 313: /* LexprOption: Lexpr  */
#line 842 "full_bnfc_parser.y"
          { (yyval.lexproption_) = new acsl::SomeLexprOption((yyvsp[0].lexpr_)); (yyval.lexproption_)->line_number = (yyloc).first_line; (yyval.lexproption_)->char_number = (yyloc).first_column; result->lexproption_ = (yyval.lexproption_); }
#line 3934 "Parser.C"
    break;

  case 314: /* AnyIdentifier: Identifier  */
#line 844 "full_bnfc_parser.y"
                           { (yyval.anyidentifier_) = new acsl::SimpleIdentifierAny((yyvsp[0].identifier_)); (yyval.anyidentifier_)->line_number = (yyloc).first_line; (yyval.anyidentifier_)->char_number = (yyloc).first_column; result->anyidentifier_ = (yyval.anyidentifier_); }
#line 3940 "Parser.C"
    break;

  case 315: /* PostCond: _KW_ensures  */
#line 846 "full_bnfc_parser.y"
                       { (yyval.postcond_) = new acsl::EnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 3946 "Parser.C"
    break;

  case 316: /* PostCond: _KW_exits  */
#line 847 "full_bnfc_parser.y"
              { (yyval.postcond_) = new acsl::ExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 3952 "Parser.C"
    break;

  case 317: /* PostCond: _KW_breaks  */
#line 848 "full_bnfc_parser.y"
               { (yyval.postcond_) = new acsl::BreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 3958 "Parser.C"
    break;

  case 318: /* PostCond: _KW_continues  */
#line 849 "full_bnfc_parser.y"
                  { (yyval.postcond_) = new acsl::ContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 3964 "Parser.C"
    break;

  case 319: /* PostCond: _KW_returns  */
#line 850 "full_bnfc_parser.y"
                { (yyval.postcond_) = new acsl::ReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 3970 "Parser.C"
    break;

  case 320: /* PostCond: _KW_check _KW_ensures  */
#line 851 "full_bnfc_parser.y"
                          { (yyval.postcond_) = new acsl::CheckEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 3976 "Parser.C"
    break;

  case 321: /* PostCond: _KW_check _KW_exits  */
#line 852 "full_bnfc_parser.y"
                        { (yyval.postcond_) = new acsl::CheckExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 3982 "Parser.C"
    break;

  case 322: /* PostCond: _KW_check _KW_breaks  */
#line 853 "full_bnfc_parser.y"
                         { (yyval.postcond_) = new acsl::CheckBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 3988 "Parser.C"
    break;

  case 323: /* PostCond: _KW_check _KW_continues  */
#line 854 "full_bnfc_parser.y"
                            { (yyval.postcond_) = new acsl::CheckContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 3994 "Parser.C"
    break;

  case 324: /* PostCond: _KW_check _KW_returns  */
#line 855 "full_bnfc_parser.y"
                          { (yyval.postcond_) = new acsl::CheckReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 4000 "Parser.C"
    break;

  case 325: /* PostCond: _KW_admit _KW_ensures  */
#line 856 "full_bnfc_parser.y"
                          { (yyval.postcond_) = new acsl::AdmitEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 4006 "Parser.C"
    break;

  case 326: /* PostCond: _KW_admit _KW_exits  */
#line 857 "full_bnfc_parser.y"
                        { (yyval.postcond_) = new acsl::AdmitExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 4012 "Parser.C"
    break;

  case 327: /* PostCond: _KW_admit _KW_breaks  */
#line 858 "full_bnfc_parser.y"
                         { (yyval.postcond_) = new acsl::AdmitBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 4018 "Parser.C"
    break;

  case 328: /* PostCond: _KW_admit _KW_continues  */
#line 859 "full_bnfc_parser.y"
                            { (yyval.postcond_) = new acsl::AdmitContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 4024 "Parser.C"
    break;

  case 329: /* PostCond: _KW_admit _KW_returns  */
#line 860 "full_bnfc_parser.y"
                          { (yyval.postcond_) = new acsl::AdmitReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 4030 "Parser.C"
    break;

  case 330: /* FullIdentifier: Identifier  */
#line 862 "full_bnfc_parser.y"
                            { (yyval.fullidentifier_) = new acsl::SimpleIdentifierFull((yyvsp[0].identifier_)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 4036 "Parser.C"
    break;

  case 331: /* Identifier: _IDENT_  */
#line 867 "full_bnfc_parser.y"
                     { (yyval.identifier_) = new acsl::IdentifierIdent((yyvsp[0]._string)); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 4042 "Parser.C"
    break;

  case 332: /* TypeSpecSimple: _KW_integer  */
#line 869 "full_bnfc_parser.y"
                             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleIntegerKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 4048 "Parser.C"
    break;

  case 333: /* TypeSpecSimple: _KW_real  */
#line 870 "full_bnfc_parser.y"
             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleRealKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 4054 "Parser.C"
    break;

  case 334: /* TypeSpecSimple: _KW_boolean  */
#line 871 "full_bnfc_parser.y"
                { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleBooleanKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 4060 "Parser.C"
    break;

  case 335: /* TypeSpecSimple: _KW_void  */
#line 872 "full_bnfc_parser.y"
             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleVoidKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 4066 "Parser.C"
    break;

  case 336: /* TypeSpecSimple: _SYMB_1  */
#line 873 "full_bnfc_parser.y"
            { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleBoolKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 4072 "Parser.C"
    break;

  case 337: /* TypeSpecSimple: _KW_char  */
#line 874 "full_bnfc_parser.y"
             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 4078 "Parser.C"
    break;

  case 338: /* TypeSpecSimple: _KW_int  */
#line 875 "full_bnfc_parser.y"
            { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 4084 "Parser.C"
    break;

  case 339: /* TypeSpecSimple: _KW_double  */
#line 876 "full_bnfc_parser.y"
               { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleDoubleKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 4090 "Parser.C"
    break;

  case 340: /* TypeSpecSimple: _KW_long _KW_double  */
#line 877 "full_bnfc_parser.y"
                        { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleLongDoubleKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 4096 "Parser.C"
    break;

  case 341: /* LogicPTreeAnnot: Annotation  */
#line 879 "full_bnfc_parser.y"
                             { (yyval.logicptreeannot_) = new acsl::AnAnnotation((yyvsp[0].annotation_)); (yyval.logicptreeannot_)->line_number = (yyloc).first_line; (yyval.logicptreeannot_)->char_number = (yyloc).first_column; result->logicptreeannot_ = (yyval.logicptreeannot_); }
#line 4102 "Parser.C"
    break;

  case 342: /* Annotation: LoopAnnotStack  */
#line 881 "full_bnfc_parser.y"
                            { (yyval.annotation_) = new acsl::LoopAnnotation((yyvsp[0].loopannotstack_)); (yyval.annotation_)->line_number = (yyloc).first_line; (yyval.annotation_)->char_number = (yyloc).first_column; result->annotation_ = (yyval.annotation_); }
#line 4108 "Parser.C"
    break;

  case 343: /* LoopAnnotStack: LoopInvariant LoopAnnotOpt  */
#line 883 "full_bnfc_parser.y"
                                            { (yyval.loopannotstack_) = new acsl::LoopAnnotStackInvariant((yyvsp[-1].loopinvariant_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 4114 "Parser.C"
    break;

  case 344: /* LoopAnnotStack: LoopEffects LoopAnnotOpt  */
#line 884 "full_bnfc_parser.y"
                             { (yyval.loopannotstack_) = new acsl::LoopAnnotStackEffects((yyvsp[-1].loopeffects_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 4120 "Parser.C"
    break;

  case 345: /* LoopAnnotStack: LoopVariant LoopAnnotOpt  */
#line 885 "full_bnfc_parser.y"
                             { (yyval.loopannotstack_) = new acsl::LoopAnnotStackVariant((yyvsp[-1].loopvariant_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 4126 "Parser.C"
    break;

  case 346: /* LoopAnnotOpt: %empty  */
#line 887 "full_bnfc_parser.y"
                           { (yyval.loopannotopt_) = new acsl::NoLoopAnnot(); (yyval.loopannotopt_)->line_number = (yyloc).first_line; (yyval.loopannotopt_)->char_number = (yyloc).first_column; result->loopannotopt_ = (yyval.loopannotopt_); }
#line 4132 "Parser.C"
    break;

  case 347: /* LoopAnnotOpt: LoopAnnotStack  */
#line 888 "full_bnfc_parser.y"
                   { (yyval.loopannotopt_) = new acsl::SomeLoopAnnot((yyvsp[0].loopannotstack_)); (yyval.loopannotopt_)->line_number = (yyloc).first_line; (yyval.loopannotopt_)->char_number = (yyloc).first_column; result->loopannotopt_ = (yyval.loopannotopt_); }
#line 4138 "Parser.C"
    break;

  case 348: /* LoopInvariant: _KW_loop _KW_invariant Lexpr _SEMI  */
#line 890 "full_bnfc_parser.y"
                                                   { (yyval.loopinvariant_) = new acsl::SimpleLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 4144 "Parser.C"
    break;

  case 349: /* LoopInvariant: _KW_check _KW_loop _KW_invariant Lexpr _SEMI  */
#line 891 "full_bnfc_parser.y"
                                                 { (yyval.loopinvariant_) = new acsl::CheckLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 4150 "Parser.C"
    break;

  case 350: /* LoopInvariant: _KW_admit _KW_loop _KW_invariant Lexpr _SEMI  */
#line 892 "full_bnfc_parser.y"
                                                 { (yyval.loopinvariant_) = new acsl::AdmitLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 4156 "Parser.C"
    break;

  case 351: /* LoopVariant: _KW_loop _KW_variant Variant _SEMI  */
#line 894 "full_bnfc_parser.y"
                                                 { (yyval.loopvariant_) = new acsl::SimpleLoopVariant((yyvsp[-1].variant_)); (yyval.loopvariant_)->line_number = (yyloc).first_line; (yyval.loopvariant_)->char_number = (yyloc).first_column; result->loopvariant_ = (yyval.loopvariant_); }
#line 4162 "Parser.C"
    break;

  case 352: /* LoopEffects: _KW_loop _KW_assigns Assigns _SEMI  */
#line 896 "full_bnfc_parser.y"
                                                 { (yyval.loopeffects_) = new acsl::LoopAssigns((yyvsp[-1].assigns_)); (yyval.loopeffects_)->line_number = (yyloc).first_line; (yyval.loopeffects_)->char_number = (yyloc).first_column; result->loopeffects_ = (yyval.loopeffects_); }
#line 4168 "Parser.C"
    break;

  case 353: /* Variant: Lexpr _KW_for AnyIdentifier  */
#line 898 "full_bnfc_parser.y"
                                      { (yyval.variant_) = new acsl::ForVariant((yyvsp[-2].lexpr_), (yyvsp[0].anyidentifier_)); (yyval.variant_)->line_number = (yyloc).first_line; (yyval.variant_)->char_number = (yyloc).first_column; result->variant_ = (yyval.variant_); }
#line 4174 "Parser.C"
    break;

  case 354: /* Variant: Lexpr  */
#line 899 "full_bnfc_parser.y"
          { (yyval.variant_) = new acsl::LexprVariant((yyvsp[0].lexpr_)); (yyval.variant_)->line_number = (yyloc).first_line; (yyval.variant_)->char_number = (yyloc).first_column; result->variant_ = (yyval.variant_); }
#line 4180 "Parser.C"
    break;


#line 4184 "Parser.C"

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

#line 902 "full_bnfc_parser.y"


namespace acsl
{
/* Entrypoint: parse Program* from file. */
Program* pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.typename_;
  }
}

/* Entrypoint: parse ACSLProgram* from file. */
ACSLProgram* pACSLProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.acslprogram_;
  }
}

/* Entrypoint: parse ACSLProgram* from string. */
ACSLProgram* psACSLProgram(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.acslprogram_;
  }
}

/* Entrypoint: parse Annot* from file. */
Annot* pAnnot(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  acsllex_destroy(scanner);
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
  yyscan_t scanner = acsl_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = acsl_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  acsl_delete_buffer(buf, scanner);
  acsllex_destroy(scanner);
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
