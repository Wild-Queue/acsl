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
  YYSYMBOL__DOLLAR = 6,                    /* _DOLLAR  */
  YYSYMBOL__PERCENT = 7,                   /* _PERCENT  */
  YYSYMBOL__PERCENTEQ = 8,                 /* _PERCENTEQ  */
  YYSYMBOL__AMP = 9,                       /* _AMP  */
  YYSYMBOL__DAMP = 10,                     /* _DAMP  */
  YYSYMBOL__AMPEQ = 11,                    /* _AMPEQ  */
  YYSYMBOL__LPAREN = 12,                   /* _LPAREN  */
  YYSYMBOL__RPAREN = 13,                   /* _RPAREN  */
  YYSYMBOL__STAR = 14,                     /* _STAR  */
  YYSYMBOL__STAREQ = 15,                   /* _STAREQ  */
  YYSYMBOL__SYMB_93 = 16,                  /* _SYMB_93  */
  YYSYMBOL__PLUS = 17,                     /* _PLUS  */
  YYSYMBOL__DPLUS = 18,                    /* _DPLUS  */
  YYSYMBOL__PLUSEQ = 19,                   /* _PLUSEQ  */
  YYSYMBOL__COMMA = 20,                    /* _COMMA  */
  YYSYMBOL__MINUS = 21,                    /* _MINUS  */
  YYSYMBOL__DMINUS = 22,                   /* _DMINUS  */
  YYSYMBOL__SYMB_63 = 23,                  /* _SYMB_63  */
  YYSYMBOL__MINUSEQ = 24,                  /* _MINUSEQ  */
  YYSYMBOL__RARROW = 25,                   /* _RARROW  */
  YYSYMBOL__DOT = 26,                      /* _DOT  */
  YYSYMBOL__DDOT = 27,                     /* _DDOT  */
  YYSYMBOL__ELLIPSIS = 28,                 /* _ELLIPSIS  */
  YYSYMBOL__SLASH = 29,                    /* _SLASH  */
  YYSYMBOL__SLASHEQ = 30,                  /* _SLASHEQ  */
  YYSYMBOL__COLON = 31,                    /* _COLON  */
  YYSYMBOL__DCOLON = 32,                   /* _DCOLON  */
  YYSYMBOL__SEMI = 33,                     /* _SEMI  */
  YYSYMBOL__LT = 34,                       /* _LT  */
  YYSYMBOL__SYMB_64 = 35,                  /* _SYMB_64  */
  YYSYMBOL__DLT = 36,                      /* _DLT  */
  YYSYMBOL__DLTEQ = 37,                    /* _DLTEQ  */
  YYSYMBOL__LDARROW = 38,                  /* _LDARROW  */
  YYSYMBOL__SYMB_61 = 39,                  /* _SYMB_61  */
  YYSYMBOL__EQ = 40,                       /* _EQ  */
  YYSYMBOL__DEQ = 41,                      /* _DEQ  */
  YYSYMBOL__SYMB_60 = 42,                  /* _SYMB_60  */
  YYSYMBOL__GT = 43,                       /* _GT  */
  YYSYMBOL__GTEQ = 44,                     /* _GTEQ  */
  YYSYMBOL__DGT = 45,                      /* _DGT  */
  YYSYMBOL__DGTEQ = 46,                    /* _DGTEQ  */
  YYSYMBOL__QUESTION = 47,                 /* _QUESTION  */
  YYSYMBOL__KW_Assigns = 48,               /* _KW_Assigns  */
  YYSYMBOL__KW_Assumes = 49,               /* _KW_Assumes  */
  YYSYMBOL__KW_Behaviors = 50,             /* _KW_Behaviors  */
  YYSYMBOL__KW_Contract = 51,              /* _KW_Contract  */
  YYSYMBOL__KW_Decreases = 52,             /* _KW_Decreases  */
  YYSYMBOL__KW_Requires = 53,              /* _KW_Requires  */
  YYSYMBOL__KW_Terminates = 54,            /* _KW_Terminates  */
  YYSYMBOL__KW_Variant = 55,               /* _KW_Variant  */
  YYSYMBOL__LBRACK = 56,                   /* _LBRACK  */
  YYSYMBOL__SYMB_96 = 57,                  /* _SYMB_96  */
  YYSYMBOL__SYMB_86 = 58,                  /* _SYMB_86  */
  YYSYMBOL__SYMB_84 = 59,                  /* _SYMB_84  */
  YYSYMBOL__SYMB_99 = 60,                  /* _SYMB_99  */
  YYSYMBOL__SYMB_87 = 61,                  /* _SYMB_87  */
  YYSYMBOL__SYMB_81 = 62,                  /* _SYMB_81  */
  YYSYMBOL__SYMB_82 = 63,                  /* _SYMB_82  */
  YYSYMBOL__SYMB_79 = 64,                  /* _SYMB_79  */
  YYSYMBOL__SYMB_88 = 65,                  /* _SYMB_88  */
  YYSYMBOL__SYMB_107 = 66,                 /* _SYMB_107  */
  YYSYMBOL__SYMB_68 = 67,                  /* _SYMB_68  */
  YYSYMBOL__SYMB_71 = 68,                  /* _SYMB_71  */
  YYSYMBOL__SYMB_67 = 69,                  /* _SYMB_67  */
  YYSYMBOL__SYMB_85 = 70,                  /* _SYMB_85  */
  YYSYMBOL__SYMB_80 = 71,                  /* _SYMB_80  */
  YYSYMBOL__SYMB_112 = 72,                 /* _SYMB_112  */
  YYSYMBOL__SYMB_56 = 73,                  /* _SYMB_56  */
  YYSYMBOL__SYMB_65 = 74,                  /* _SYMB_65  */
  YYSYMBOL__SYMB_78 = 75,                  /* _SYMB_78  */
  YYSYMBOL__SYMB_109 = 76,                 /* _SYMB_109  */
  YYSYMBOL__SYMB_69 = 77,                  /* _SYMB_69  */
  YYSYMBOL__SYMB_66 = 78,                  /* _SYMB_66  */
  YYSYMBOL__SYMB_113 = 79,                 /* _SYMB_113  */
  YYSYMBOL__SYMB_92 = 80,                  /* _SYMB_92  */
  YYSYMBOL__SYMB_72 = 81,                  /* _SYMB_72  */
  YYSYMBOL__SYMB_83 = 82,                  /* _SYMB_83  */
  YYSYMBOL__SYMB_98 = 83,                  /* _SYMB_98  */
  YYSYMBOL__SYMB_104 = 84,                 /* _SYMB_104  */
  YYSYMBOL__SYMB_89 = 85,                  /* _SYMB_89  */
  YYSYMBOL__SYMB_100 = 86,                 /* _SYMB_100  */
  YYSYMBOL__SYMB_101 = 87,                 /* _SYMB_101  */
  YYSYMBOL__SYMB_90 = 88,                  /* _SYMB_90  */
  YYSYMBOL__SYMB_70 = 89,                  /* _SYMB_70  */
  YYSYMBOL__SYMB_106 = 90,                 /* _SYMB_106  */
  YYSYMBOL__SYMB_105 = 91,                 /* _SYMB_105  */
  YYSYMBOL__SYMB_91 = 92,                  /* _SYMB_91  */
  YYSYMBOL__SYMB_108 = 93,                 /* _SYMB_108  */
  YYSYMBOL__SYMB_73 = 94,                  /* _SYMB_73  */
  YYSYMBOL__SYMB_75 = 95,                  /* _SYMB_75  */
  YYSYMBOL__SYMB_76 = 96,                  /* _SYMB_76  */
  YYSYMBOL__SYMB_77 = 97,                  /* _SYMB_77  */
  YYSYMBOL__SYMB_74 = 98,                  /* _SYMB_74  */
  YYSYMBOL__SYMB_110 = 99,                 /* _SYMB_110  */
  YYSYMBOL__RBRACK = 100,                  /* _RBRACK  */
  YYSYMBOL__CARET = 101,                   /* _CARET  */
  YYSYMBOL__CARETEQ = 102,                 /* _CARETEQ  */
  YYSYMBOL__DCARET = 103,                  /* _DCARET  */
  YYSYMBOL__SYMB_53 = 104,                 /* _SYMB_53  */
  YYSYMBOL__SYMB_4 = 105,                  /* _SYMB_4  */
  YYSYMBOL__SYMB_52 = 106,                 /* _SYMB_52  */
  YYSYMBOL__SYMB_51 = 107,                 /* _SYMB_51  */
  YYSYMBOL__SYMB_59 = 108,                 /* _SYMB_59  */
  YYSYMBOL__SYMB_45 = 109,                 /* _SYMB_45  */
  YYSYMBOL__SYMB_7 = 110,                  /* _SYMB_7  */
  YYSYMBOL__SYMB_6 = 111,                  /* _SYMB_6  */
  YYSYMBOL__SYMB_5 = 112,                  /* _SYMB_5  */
  YYSYMBOL__SYMB_57 = 113,                 /* _SYMB_57  */
  YYSYMBOL__SYMB_49 = 114,                 /* _SYMB_49  */
  YYSYMBOL__SYMB_50 = 115,                 /* _SYMB_50  */
  YYSYMBOL__SYMB_54 = 116,                 /* _SYMB_54  */
  YYSYMBOL__SYMB_55 = 117,                 /* _SYMB_55  */
  YYSYMBOL__SYMB_47 = 118,                 /* _SYMB_47  */
  YYSYMBOL__SYMB_58 = 119,                 /* _SYMB_58  */
  YYSYMBOL__SYMB_48 = 120,                 /* _SYMB_48  */
  YYSYMBOL__KW_admit = 121,                /* _KW_admit  */
  YYSYMBOL__KW_allocates = 122,            /* _KW_allocates  */
  YYSYMBOL__KW_assert = 123,               /* _KW_assert  */
  YYSYMBOL__KW_at = 124,                   /* _KW_at  */
  YYSYMBOL__KW_auto = 125,                 /* _KW_auto  */
  YYSYMBOL__KW_axiom = 126,                /* _KW_axiom  */
  YYSYMBOL__KW_axiomatic = 127,            /* _KW_axiomatic  */
  YYSYMBOL__KW_behavior = 128,             /* _KW_behavior  */
  YYSYMBOL__KW_boolean = 129,              /* _KW_boolean  */
  YYSYMBOL__KW_break = 130,                /* _KW_break  */
  YYSYMBOL__KW_breaks = 131,               /* _KW_breaks  */
  YYSYMBOL__KW_case = 132,                 /* _KW_case  */
  YYSYMBOL__KW_char = 133,                 /* _KW_char  */
  YYSYMBOL__KW_check = 134,                /* _KW_check  */
  YYSYMBOL__KW_complete = 135,             /* _KW_complete  */
  YYSYMBOL__KW_const = 136,                /* _KW_const  */
  YYSYMBOL__KW_continue = 137,             /* _KW_continue  */
  YYSYMBOL__KW_continues = 138,            /* _KW_continues  */
  YYSYMBOL__KW_default = 139,              /* _KW_default  */
  YYSYMBOL__KW_disjoint = 140,             /* _KW_disjoint  */
  YYSYMBOL__KW_do = 141,                   /* _KW_do  */
  YYSYMBOL__KW_double = 142,               /* _KW_double  */
  YYSYMBOL__KW_else = 143,                 /* _KW_else  */
  YYSYMBOL__KW_ensures = 144,              /* _KW_ensures  */
  YYSYMBOL__KW_enum = 145,                 /* _KW_enum  */
  YYSYMBOL__KW_exits = 146,                /* _KW_exits  */
  YYSYMBOL__KW_extern = 147,               /* _KW_extern  */
  YYSYMBOL__KW_float = 148,                /* _KW_float  */
  YYSYMBOL__KW_for = 149,                  /* _KW_for  */
  YYSYMBOL__KW_frees = 150,                /* _KW_frees  */
  YYSYMBOL__KW_function = 151,             /* _KW_function  */
  YYSYMBOL__KW_ghost = 152,                /* _KW_ghost  */
  YYSYMBOL__KW_global = 153,               /* _KW_global  */
  YYSYMBOL__KW_goto = 154,                 /* _KW_goto  */
  YYSYMBOL__KW_if = 155,                   /* _KW_if  */
  YYSYMBOL__KW_impact = 156,               /* _KW_impact  */
  YYSYMBOL__KW_include = 157,              /* _KW_include  */
  YYSYMBOL__KW_inductive = 158,            /* _KW_inductive  */
  YYSYMBOL__KW_int = 159,                  /* _KW_int  */
  YYSYMBOL__KW_integer = 160,              /* _KW_integer  */
  YYSYMBOL__KW_invariant = 161,            /* _KW_invariant  */
  YYSYMBOL__KW_label = 162,                /* _KW_label  */
  YYSYMBOL__KW_lemma = 163,                /* _KW_lemma  */
  YYSYMBOL__KW_let = 164,                  /* _KW_let  */
  YYSYMBOL__KW_logic = 165,                /* _KW_logic  */
  YYSYMBOL__KW_long = 166,                 /* _KW_long  */
  YYSYMBOL__KW_loop = 167,                 /* _KW_loop  */
  YYSYMBOL__KW_model = 168,                /* _KW_model  */
  YYSYMBOL__KW_module = 169,               /* _KW_module  */
  YYSYMBOL__KW_pragma = 170,               /* _KW_pragma  */
  YYSYMBOL__KW_predicate = 171,            /* _KW_predicate  */
  YYSYMBOL__KW_reads = 172,                /* _KW_reads  */
  YYSYMBOL__KW_real = 173,                 /* _KW_real  */
  YYSYMBOL__KW_register = 174,             /* _KW_register  */
  YYSYMBOL__KW_requires = 175,             /* _KW_requires  */
  YYSYMBOL__KW_return = 176,               /* _KW_return  */
  YYSYMBOL__KW_returns = 177,              /* _KW_returns  */
  YYSYMBOL__KW_short = 178,                /* _KW_short  */
  YYSYMBOL__KW_signed = 179,               /* _KW_signed  */
  YYSYMBOL__KW_sizeof = 180,               /* _KW_sizeof  */
  YYSYMBOL__KW_slice = 181,                /* _KW_slice  */
  YYSYMBOL__KW_static = 182,               /* _KW_static  */
  YYSYMBOL__KW_struct = 183,               /* _KW_struct  */
  YYSYMBOL__KW_switch = 184,               /* _KW_switch  */
  YYSYMBOL__KW_type = 185,                 /* _KW_type  */
  YYSYMBOL__KW_typedef = 186,              /* _KW_typedef  */
  YYSYMBOL__KW_union = 187,                /* _KW_union  */
  YYSYMBOL__KW_unsigned = 188,             /* _KW_unsigned  */
  YYSYMBOL__KW_void = 189,                 /* _KW_void  */
  YYSYMBOL__KW_volatile = 190,             /* _KW_volatile  */
  YYSYMBOL__KW_while = 191,                /* _KW_while  */
  YYSYMBOL__KW_writes = 192,               /* _KW_writes  */
  YYSYMBOL__LBRACE = 193,                  /* _LBRACE  */
  YYSYMBOL__BAR = 194,                     /* _BAR  */
  YYSYMBOL__BAREQ = 195,                   /* _BAREQ  */
  YYSYMBOL__SYMB_97 = 196,                 /* _SYMB_97  */
  YYSYMBOL__DBAR = 197,                    /* _DBAR  */
  YYSYMBOL__RBRACE = 198,                  /* _RBRACE  */
  YYSYMBOL__TILDE = 199,                   /* _TILDE  */
  YYSYMBOL_T_ALIGNOF = 200,                /* T_ALIGNOF  */
  YYSYMBOL_T_ASM = 201,                    /* T_ASM  */
  YYSYMBOL_T_ATTRIBUTE = 202,              /* T_ATTRIBUTE  */
  YYSYMBOL_T_BLOCKATTRIBUTE = 203,         /* T_BLOCKATTRIBUTE  */
  YYSYMBOL_T_CONST = 204,                  /* T_CONST  */
  YYSYMBOL_T_CST_WCHAR = 205,              /* T_CST_WCHAR  */
  YYSYMBOL_T_CST_WSTRING = 206,            /* T_CST_WSTRING  */
  YYSYMBOL_T_EXT_CODE_ANNOT = 207,         /* T_EXT_CODE_ANNOT  */
  YYSYMBOL_T_EXT_CONTRACT = 208,           /* T_EXT_CONTRACT  */
  YYSYMBOL_T_EXT_GLOBAL = 209,             /* T_EXT_GLOBAL  */
  YYSYMBOL_T_EXT_GLOBAL_BLOCK = 210,       /* T_EXT_GLOBAL_BLOCK  */
  YYSYMBOL_T_FUNCTION__ = 211,             /* T_FUNCTION__  */
  YYSYMBOL_T_INLINE = 212,                 /* T_INLINE  */
  YYSYMBOL_T_LBRACE = 213,                 /* T_LBRACE  */
  YYSYMBOL_T_LBRACKET = 214,               /* T_LBRACKET  */
  YYSYMBOL_T_MSATTR = 215,                 /* T_MSATTR  */
  YYSYMBOL_T_NAMEDTYPE = 216,              /* T_NAMEDTYPE  */
  YYSYMBOL_T_RBRACE = 217,                 /* T_RBRACE  */
  YYSYMBOL_T_RBRACKET = 218,               /* T_RBRACKET  */
  YYSYMBOL_T_RESTRICT = 219,               /* T_RESTRICT  */
  YYSYMBOL_T_RGHOST = 220,                 /* T_RGHOST  */
  YYSYMBOL_T_SIGNED = 221,                 /* T_SIGNED  */
  YYSYMBOL_T_STRING_LITERAL = 222,         /* T_STRING_LITERAL  */
  YYSYMBOL_T_TYPENAME = 223,               /* T_TYPENAME  */
  YYSYMBOL_T_TYPEOF = 224,                 /* T_TYPEOF  */
  YYSYMBOL_T_VOLATILE = 225,               /* T_VOLATILE  */
  YYSYMBOL_T_WSTRING_CONSTANT = 226,       /* T_WSTRING_CONSTANT  */
  YYSYMBOL__STRING_ = 227,                 /* _STRING_  */
  YYSYMBOL__CHAR_ = 228,                   /* _CHAR_  */
  YYSYMBOL__INTEGER_ = 229,                /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 230,                 /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 231,                  /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 232,                 /* $accept  */
  YYSYMBOL_Program = 233,                  /* Program  */
  YYSYMBOL_Globals = 234,                  /* Globals  */
  YYSYMBOL_Global = 235,                   /* Global  */
  YYSYMBOL_IdOrTypenameAsId = 236,         /* IdOrTypenameAsId  */
  YYSYMBOL_IdOrTypename = 237,             /* IdOrTypename  */
  YYSYMBOL_MaybeComma = 238,               /* MaybeComma  */
  YYSYMBOL_AssignExpr15 = 239,             /* AssignExpr15  */
  YYSYMBOL_AssignExpr14 = 240,             /* AssignExpr14  */
  YYSYMBOL_OffsetofMemberDesignator = 241, /* OffsetofMemberDesignator  */
  YYSYMBOL_AssignExpr13 = 242,             /* AssignExpr13  */
  YYSYMBOL_AssignExpr12 = 243,             /* AssignExpr12  */
  YYSYMBOL_AssignExpr11 = 244,             /* AssignExpr11  */
  YYSYMBOL_AssignExpr10 = 245,             /* AssignExpr10  */
  YYSYMBOL_AssignExpr9 = 246,              /* AssignExpr9  */
  YYSYMBOL_AssignExpr8 = 247,              /* AssignExpr8  */
  YYSYMBOL_AssignExpr7 = 248,              /* AssignExpr7  */
  YYSYMBOL_AssignExpr6 = 249,              /* AssignExpr6  */
  YYSYMBOL_AssignExpr5 = 250,              /* AssignExpr5  */
  YYSYMBOL_AssignExpr4 = 251,              /* AssignExpr4  */
  YYSYMBOL_AssignExpr3 = 252,              /* AssignExpr3  */
  YYSYMBOL_AssignExpr2 = 253,              /* AssignExpr2  */
  YYSYMBOL_AssignExpr1 = 254,              /* AssignExpr1  */
  YYSYMBOL_AssignExpr = 255,               /* AssignExpr  */
  YYSYMBOL_Expression = 256,               /* Expression  */
  YYSYMBOL_Constant = 257,                 /* Constant  */
  YYSYMBOL_StringConstant = 258,           /* StringConstant  */
  YYSYMBOL_WStringList = 259,              /* WStringList  */
  YYSYMBOL_OneString = 260,                /* OneString  */
  YYSYMBOL_ListOneString = 261,            /* ListOneString  */
  YYSYMBOL_InitExpression = 262,           /* InitExpression  */
  YYSYMBOL_InitializerListOpt = 263,       /* InitializerListOpt  */
  YYSYMBOL_InitializerSingle = 264,        /* InitializerSingle  */
  YYSYMBOL_ListInitializerSingle = 265,    /* ListInitializerSingle  */
  YYSYMBOL_EqOpt = 266,                    /* EqOpt  */
  YYSYMBOL_InitDesignators = 267,          /* InitDesignators  */
  YYSYMBOL_InitDesignatorsOpt = 268,       /* InitDesignatorsOpt  */
  YYSYMBOL_GhostArgumentsOpt = 269,        /* GhostArgumentsOpt  */
  YYSYMBOL_Arguments = 270,                /* Arguments  */
  YYSYMBOL_OptExpression = 271,            /* OptExpression  */
  YYSYMBOL_ListExpression = 272,           /* ListExpression  */
  YYSYMBOL_CommaExpressionOpt = 273,       /* CommaExpressionOpt  */
  YYSYMBOL_Block = 274,                    /* Block  */
  YYSYMBOL_BlockAttrs = 275,               /* BlockAttrs  */
  YYSYMBOL_BlockElement = 276,             /* BlockElement  */
  YYSYMBOL_ListBlockElement = 277,         /* ListBlockElement  */
  YYSYMBOL_Annot = 278,                    /* Annot  */
  YYSYMBOL_ListAnnot = 279,                /* ListAnnot  */
  YYSYMBOL_LocalLabel = 280,               /* LocalLabel  */
  YYSYMBOL_ListLocalLabel = 281,           /* ListLocalLabel  */
  YYSYMBOL_LocalLabelName = 282,           /* LocalLabelName  */
  YYSYMBOL_ListLocalLabelName = 283,       /* ListLocalLabelName  */
  YYSYMBOL_AnnotatedStmt = 284,            /* AnnotatedStmt  */
  YYSYMBOL_ElsePart = 285,                 /* ElsePart  */
  YYSYMBOL_Statement = 286,                /* Statement  */
  YYSYMBOL_OptLoopAnnotations = 287,       /* OptLoopAnnotations  */
  YYSYMBOL_ForClause = 288,                /* ForClause  */
  YYSYMBOL_GhostParameterOpt = 289,        /* GhostParameterOpt  */
  YYSYMBOL_Declaration = 290,              /* Declaration  */
  YYSYMBOL_GenericAssociation = 291,       /* GenericAssociation  */
  YYSYMBOL_ListGenericAssociation = 292,   /* ListGenericAssociation  */
  YYSYMBOL_DeclAndInitDeclAttrList = 293,  /* DeclAndInitDeclAttrList  */
  YYSYMBOL_InitDeclaratorAttr = 294,       /* InitDeclaratorAttr  */
  YYSYMBOL_ListInitDeclaratorAttr = 295,   /* ListInitDeclaratorAttr  */
  YYSYMBOL_InitDeclarator = 296,           /* InitDeclarator  */
  YYSYMBOL_DeclSpecWOType = 297,           /* DeclSpecWOType  */
  YYSYMBOL_DeclSpecList = 298,             /* DeclSpecList  */
  YYSYMBOL_DeclSpecListNoNamed = 299,      /* DeclSpecListNoNamed  */
  YYSYMBOL_TypeSpec = 300,                 /* TypeSpec  */
  YYSYMBOL_StructDeclList = 301,           /* StructDeclList  */
  YYSYMBOL_StaticAssertDeclaration = 302,  /* StaticAssertDeclaration  */
  YYSYMBOL_FieldDecl = 303,                /* FieldDecl  */
  YYSYMBOL_ListFieldDecl = 304,            /* ListFieldDecl  */
  YYSYMBOL_Enumerator = 305,               /* Enumerator  */
  YYSYMBOL_ListEnumerator = 306,           /* ListEnumerator  */
  YYSYMBOL_Declarator = 307,               /* Declarator  */
  YYSYMBOL_ListDeclarator = 308,           /* ListDeclarator  */
  YYSYMBOL_AttributesOrStatic = 309,       /* AttributesOrStatic  */
  YYSYMBOL_DirectDecl = 310,               /* DirectDecl  */
  YYSYMBOL_RestParList = 311,              /* RestParList  */
  YYSYMBOL_ParameterDecl = 312,            /* ParameterDecl  */
  YYSYMBOL_ListParameterDecl = 313,        /* ListParameterDecl  */
  YYSYMBOL_DirectOldProtoDecl = 314,       /* DirectOldProtoDecl  */
  YYSYMBOL_ListIdent = 315,                /* ListIdent  */
  YYSYMBOL_OldPardefList = 316,            /* OldPardefList  */
  YYSYMBOL_OldPardef = 317,                /* OldPardef  */
  YYSYMBOL_ListOldPardef = 318,            /* ListOldPardef  */
  YYSYMBOL_PointerOpt = 319,               /* PointerOpt  */
  YYSYMBOL_TypeName = 320,                 /* TypeName  */
  YYSYMBOL_AbstractDecl = 321,             /* AbstractDecl  */
  YYSYMBOL_AbsDirectDecl = 322,            /* AbsDirectDecl  */
  YYSYMBOL_AbsDirectDeclOpt = 323,         /* AbsDirectDeclOpt  */
  YYSYMBOL_FunctionDef = 324,              /* FunctionDef  */
  YYSYMBOL_FunctionDefStart = 325,         /* FunctionDefStart  */
  YYSYMBOL_CVSpec = 326,                   /* CVSpec  */
  YYSYMBOL_AttributesWithAsm = 327,        /* AttributesWithAsm  */
  YYSYMBOL_AttributeNocv = 328,            /* AttributeNocv  */
  YYSYMBOL_ListAttributeNocv = 329,        /* ListAttributeNocv  */
  YYSYMBOL_Attribute = 330,                /* Attribute  */
  YYSYMBOL_ListAttribute = 331,            /* ListAttribute  */
  YYSYMBOL_JustAttribute = 332,            /* JustAttribute  */
  YYSYMBOL_ListJustAttribute = 333,        /* ListJustAttribute  */
  YYSYMBOL_Pragma = 334,                   /* Pragma  */
  YYSYMBOL_VarAttr = 335,                  /* VarAttr  */
  YYSYMBOL_BasicAttribute = 336,           /* BasicAttribute  */
  YYSYMBOL_ListBasicAttribute = 337,       /* ListBasicAttribute  */
  YYSYMBOL_ParameterAttrListNE = 338,      /* ParameterAttrListNE  */
  YYSYMBOL_ParamAttrListNE = 339,          /* ParamAttrListNE  */
  YYSYMBOL_Attr14 = 340,                   /* Attr14  */
  YYSYMBOL_Attr13 = 341,                   /* Attr13  */
  YYSYMBOL_Attr12 = 342,                   /* Attr12  */
  YYSYMBOL_Attr11 = 343,                   /* Attr11  */
  YYSYMBOL_Attr10 = 344,                   /* Attr10  */
  YYSYMBOL_Attr9 = 345,                    /* Attr9  */
  YYSYMBOL_Attr8 = 346,                    /* Attr8  */
  YYSYMBOL_Attr7 = 347,                    /* Attr7  */
  YYSYMBOL_Attr6 = 348,                    /* Attr6  */
  YYSYMBOL_Attr5 = 349,                    /* Attr5  */
  YYSYMBOL_Attr4 = 350,                    /* Attr4  */
  YYSYMBOL_Attr3 = 351,                    /* Attr3  */
  YYSYMBOL_Attr2 = 352,                    /* Attr2  */
  YYSYMBOL_Attr1 = 353,                    /* Attr1  */
  YYSYMBOL_Attr = 354,                     /* Attr  */
  YYSYMBOL_ListAttr = 355,                 /* ListAttr  */
  YYSYMBOL_AttrTest = 356,                 /* AttrTest  */
  YYSYMBOL_AttrList = 357,                 /* AttrList  */
  YYSYMBOL_Asmattr = 358,                  /* Asmattr  */
  YYSYMBOL_ListAsmattr = 359,              /* ListAsmattr  */
  YYSYMBOL_Asmoutputs = 360,               /* Asmoutputs  */
  YYSYMBOL_Asmoperands = 361,              /* Asmoperands  */
  YYSYMBOL_Asmoperand = 362,               /* Asmoperand  */
  YYSYMBOL_ListAsmoperand = 363,           /* ListAsmoperand  */
  YYSYMBOL_Asminputs = 364,                /* Asminputs  */
  YYSYMBOL_Asmopname = 365,                /* Asmopname  */
  YYSYMBOL_Asmclobber = 366,               /* Asmclobber  */
  YYSYMBOL_ListStringConstant = 367,       /* ListStringConstant  */
  YYSYMBOL_Asmlabels = 368,                /* Asmlabels  */
  YYSYMBOL_LexprList = 369,                /* LexprList  */
  YYSYMBOL_ListLexpr = 370,                /* ListLexpr  */
  YYSYMBOL_LexprOption = 371,              /* LexprOption  */
  YYSYMBOL_Lexpr = 372,                    /* Lexpr  */
  YYSYMBOL_Lexpr1 = 373,                   /* Lexpr1  */
  YYSYMBOL_Lexpr2 = 374,                   /* Lexpr2  */
  YYSYMBOL_LexprBinder = 375,              /* LexprBinder  */
  YYSYMBOL_LexprRelInner = 376,            /* LexprRelInner  */
  YYSYMBOL_ListLexprRelInner = 377,        /* ListLexprRelInner  */
  YYSYMBOL_Relation = 378,                 /* Relation  */
  YYSYMBOL_Lexpr3 = 379,                   /* Lexpr3  */
  YYSYMBOL_ListSTRING_LITERAL = 380,       /* ListSTRING_LITERAL  */
  YYSYMBOL_Range = 381,                    /* Range  */
  YYSYMBOL_FieldInitElt = 382,             /* FieldInitElt  */
  YYSYMBOL_ListFieldInitElt = 383,         /* ListFieldInitElt  */
  YYSYMBOL_ArrayInitElt = 384,             /* ArrayInitElt  */
  YYSYMBOL_ListArrayInitElt = 385,         /* ListArrayInitElt  */
  YYSYMBOL_UpdateElt = 386,                /* UpdateElt  */
  YYSYMBOL_ListUpdateElt = 387,            /* ListUpdateElt  */
  YYSYMBOL_PathElt = 388,                  /* PathElt  */
  YYSYMBOL_ListPathElt = 389,              /* ListPathElt  */
  YYSYMBOL_Binders = 390,                  /* Binders  */
  YYSYMBOL_BindersReentrance = 391,        /* BindersReentrance  */
  YYSYMBOL_ListBindersReentrance = 392,    /* ListBindersReentrance  */
  YYSYMBOL_VarSpec = 393,                  /* VarSpec  */
  YYSYMBOL_ArraySize = 394,                /* ArraySize  */
  YYSYMBOL_VarSpec1 = 395,                 /* VarSpec1  */
  YYSYMBOL_AbsParamTypeList = 396,         /* AbsParamTypeList  */
  YYSYMBOL_AbsParam = 397,                 /* AbsParam  */
  YYSYMBOL_ListAbsParam = 398,             /* ListAbsParam  */
  YYSYMBOL_LogicTypeGenOFTYPENAME = 399,   /* LogicTypeGenOFTYPENAME  */
  YYSYMBOL_ListLogicTypeGenOFTYPENAME = 400, /* ListLogicTypeGenOFTYPENAME  */
  YYSYMBOL_CV = 401,                       /* CV  */
  YYSYMBOL_ListCV = 402,                   /* ListCV  */
  YYSYMBOL_TypeSpecCVOFTYPENAME = 403,     /* TypeSpecCVOFTYPENAME  */
  YYSYMBOL_CastLogicType = 404,            /* CastLogicType  */
  YYSYMBOL_AbsSpecOption = 405,            /* AbsSpecOption  */
  YYSYMBOL_AbsSpecCVOption = 406,          /* AbsSpecCVOption  */
  YYSYMBOL_AbsSpec = 407,                  /* AbsSpec  */
  YYSYMBOL_AbsSpecCV = 408,                /* AbsSpecCV  */
  YYSYMBOL_AbsSpec1 = 409,                 /* AbsSpec1  */
  YYSYMBOL_AbsSpecCV1 = 410,               /* AbsSpecCV1  */
  YYSYMBOL_Stars = 411,                    /* Stars  */
  YYSYMBOL_ListStars = 412,                /* ListStars  */
  YYSYMBOL_StarsCV = 413,                  /* StarsCV  */
  YYSYMBOL_ListStarsCV = 414,              /* ListStarsCV  */
  YYSYMBOL_Tabs = 415,                     /* Tabs  */
  YYSYMBOL_ListTabs = 416,                 /* ListTabs  */
  YYSYMBOL_TypeSpecSimple = 417,           /* TypeSpecSimple  */
  YYSYMBOL_TypeSpecOFTYPENAME = 418,       /* TypeSpecOFTYPENAME  */
  YYSYMBOL_FullIdentifier = 419,           /* FullIdentifier  */
  YYSYMBOL_Variant = 420,                  /* Variant  */
  YYSYMBOL_Allocation = 421,               /* Allocation  */
  YYSYMBOL_ExtensionContent = 422,         /* ExtensionContent  */
  YYSYMBOL_Assigns = 423,                  /* Assigns  */
  YYSYMBOL_Zones = 424,                    /* Zones  */
  YYSYMBOL_LoopAnnotStack = 425,           /* LoopAnnotStack  */
  YYSYMBOL_LoopAnnotOpt = 426,             /* LoopAnnotOpt  */
  YYSYMBOL_LoopEffects = 427,              /* LoopEffects  */
  YYSYMBOL_LoopAllocation = 428,           /* LoopAllocation  */
  YYSYMBOL_LoopInvariant = 429,            /* LoopInvariant  */
  YYSYMBOL_LoopVariant = 430,              /* LoopVariant  */
  YYSYMBOL_LoopGrammarExtension = 431,     /* LoopGrammarExtension  */
  YYSYMBOL_LoopPragma = 432,               /* LoopPragma  */
  YYSYMBOL_PragmaOrCodeAnnotation = 433,   /* PragmaOrCodeAnnotation  */
  YYSYMBOL_CodeAnnotation = 434,           /* CodeAnnotation  */
  YYSYMBOL_SlicePragma = 435,              /* SlicePragma  */
  YYSYMBOL_ImpactPragma = 436,             /* ImpactPragma  */
  YYSYMBOL_OptLabel1 = 437,                /* OptLabel1  */
  YYSYMBOL_OptLabel2 = 438,                /* OptLabel2  */
  YYSYMBOL_OptLabelList = 439,             /* OptLabelList  */
  YYSYMBOL_LabelName = 440,                /* LabelName  */
  YYSYMBOL_ListLabelName = 441,            /* ListLabelName  */
  YYSYMBOL_BehaviorName = 442,             /* BehaviorName  */
  YYSYMBOL_ListBehaviorName = 443,         /* ListBehaviorName  */
  YYSYMBOL_AnyIdentifier = 444,            /* AnyIdentifier  */
  YYSYMBOL_IdentifierOrTypename = 445,     /* IdentifierOrTypename  */
  YYSYMBOL_IdentifierOrTypenameFull = 446, /* IdentifierOrTypenameFull  */
  YYSYMBOL_ListIdentifierOrTypenameFull = 447, /* ListIdentifierOrTypenameFull  */
  YYSYMBOL_Identifier = 448,               /* Identifier  */
  YYSYMBOL_BoundedVar = 449,               /* BoundedVar  */
  YYSYMBOL_CKeyword = 450,                 /* CKeyword  */
  YYSYMBOL_ACSLCKeyword = 451,             /* ACSLCKeyword  */
  YYSYMBOL_PostCond = 452,                 /* PostCond  */
  YYSYMBOL_IsACSLSpec = 453,               /* IsACSLSpec  */
  YYSYMBOL_IsACSLDeclOrCodeAnnot = 454,    /* IsACSLDeclOrCodeAnnot  */
  YYSYMBOL_IsACSLTypename = 455,           /* IsACSLTypename  */
  YYSYMBOL_IsExtSpec = 456,                /* IsExtSpec  */
  YYSYMBOL_Keyword = 457,                  /* Keyword  */
  YYSYMBOL_BSKeyword = 458,                /* BSKeyword  */
  YYSYMBOL_Wildcard = 459,                 /* Wildcard  */
  YYSYMBOL_ListWildcard = 460              /* ListWildcard  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 325 "full_bnfc_parser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 611 "Parser.C"


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
#define YYFINAL  105
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  232
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  229
/* YYNRULES -- Number of rules.  */
#define YYNRULES  979
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1742

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   486


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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   874,   874,   876,   877,   878,   884,   885,   887,   888,
     890,   892,   893,   895,   896,   897,   898,   899,   900,   902,
     903,   904,   905,   906,   907,   908,   909,   910,   911,   912,
     914,   915,   916,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   928,   929,   930,   931,   933,   934,   936,
     937,   938,   939,   941,   942,   943,   945,   946,   947,   949,
     950,   951,   952,   953,   955,   956,   957,   959,   960,   962,
     963,   965,   966,   968,   969,   971,   972,   974,   975,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   990,   992,   993,   994,   995,   996,   997,   999,  1001,
    1002,  1003,  1004,  1006,  1007,  1008,  1010,  1011,  1013,  1014,
    1016,  1017,  1018,  1020,  1021,  1022,  1024,  1025,  1027,  1028,
    1030,  1031,  1032,  1034,  1035,  1037,  1038,  1040,  1041,  1043,
    1044,  1046,  1047,  1049,  1050,  1052,  1054,  1055,  1057,  1058,
    1059,  1061,  1062,  1064,  1065,  1067,  1068,  1070,  1072,  1073,
    1075,  1077,  1078,  1080,  1082,  1083,  1084,  1085,  1087,  1088,
    1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1098,
    1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,
    1109,  1110,  1112,  1113,  1115,  1116,  1118,  1119,  1121,  1122,
    1123,  1124,  1125,  1126,  1128,  1129,  1131,  1132,  1134,  1135,
    1137,  1139,  1140,  1142,  1143,  1145,  1146,  1147,  1148,  1149,
    1150,  1151,  1152,  1153,  1155,  1156,  1157,  1158,  1160,  1161,
    1162,  1163,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,
    1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,
    1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,  1191,  1192,
    1193,  1194,  1195,  1197,  1198,  1199,  1200,  1201,  1202,  1203,
    1205,  1206,  1208,  1209,  1210,  1212,  1213,  1215,  1216,  1218,
    1219,  1221,  1223,  1224,  1226,  1227,  1228,  1230,  1231,  1232,
    1233,  1234,  1236,  1237,  1239,  1240,  1241,  1242,  1244,  1245,
    1247,  1249,  1250,  1252,  1253,  1254,  1256,  1258,  1259,  1261,
    1262,  1264,  1265,  1267,  1268,  1270,  1271,  1272,  1273,  1275,
    1276,  1278,  1279,  1281,  1282,  1283,  1284,  1285,  1287,  1288,
    1289,  1290,  1291,  1293,  1294,  1295,  1296,  1298,  1299,  1300,
    1301,  1302,  1304,  1305,  1307,  1308,  1309,  1310,  1311,  1312,
    1314,  1315,  1317,  1318,  1320,  1321,  1323,  1324,  1325,  1326,
    1328,  1329,  1330,  1331,  1332,  1333,  1335,  1336,  1337,  1339,
    1340,  1342,  1343,  1344,  1346,  1347,  1349,  1350,  1351,  1353,
    1354,  1355,  1356,  1357,  1358,  1359,  1361,  1362,  1363,  1364,
    1365,  1366,  1367,  1368,  1369,  1370,  1371,  1373,  1374,  1375,
    1376,  1378,  1379,  1380,  1382,  1383,  1384,  1386,  1387,  1388,
    1389,  1390,  1392,  1393,  1394,  1396,  1397,  1399,  1400,  1402,
    1403,  1405,  1406,  1408,  1409,  1411,  1412,  1414,  1415,  1417,
    1418,  1420,  1422,  1423,  1425,  1426,  1428,  1429,  1431,  1432,
    1434,  1435,  1437,  1439,  1440,  1442,  1443,  1445,  1446,  1448,
    1449,  1450,  1452,  1453,  1455,  1456,  1460,  1461,  1463,  1464,
    1466,  1467,  1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,
    1477,  1478,  1479,  1480,  1481,  1482,  1483,  1484,  1486,  1487,
    1489,  1490,  1491,  1493,  1494,  1495,  1496,  1498,  1500,  1501,
    1503,  1504,  1505,  1506,  1507,  1508,  1509,  1511,  1512,  1513,
    1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,  1522,  1523,
    1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,  1533,
    1534,  1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,  1543,
    1544,  1545,  1546,  1547,  1548,  1549,  1550,  1551,  1552,  1553,
    1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,  1563,
    1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,  1573,
    1574,  1575,  1576,  1577,  1578,  1579,  1580,  1581,  1582,  1583,
    1585,  1586,  1588,  1590,  1592,  1593,  1595,  1596,  1598,  1599,
    1601,  1602,  1604,  1605,  1607,  1608,  1609,  1611,  1612,  1614,
    1616,  1617,  1619,  1620,  1622,  1623,  1625,  1626,  1627,  1629,
    1630,  1631,  1632,  1634,  1635,  1636,  1638,  1640,  1641,  1648,
    1650,  1651,  1658,  1659,  1660,  1662,  1663,  1665,  1667,  1671,
    1672,  1674,  1675,  1677,  1678,  1679,  1680,  1681,  1682,  1683,
    1685,  1686,  1687,  1688,  1689,  1690,  1691,  1693,  1694,  1696,
    1697,  1699,  1701,  1702,  1704,  1705,  1707,  1708,  1710,  1712,
    1713,  1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,  1723,
    1724,  1725,  1726,  1727,  1728,  1729,  1730,  1731,  1732,  1733,
    1734,  1735,  1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,
    1744,  1745,  1746,  1747,  1748,  1749,  1750,  1752,  1753,  1754,
    1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,  1769,
    1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,  1779,
    1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,  1789,
    1790,  1791,  1792,  1793,  1794,  1795,  1796,  1797,  1798,  1799,
    1800,  1801,  1802,  1803,  1934,  1935,  1940,  1941,  1952,  1953,
    1977,  1978,  1980,  1981,  1998,  1999,  2000,  2001,  2002,  2003,
    2004,  2006,  2007,  2009,  2011,  2013,  2014,  2015,  2017,  2019,
    2021,  2036,  2037,  2038,  2040,  2041,  2042,  2043,  2044,  2045,
    2046,  2048,  2049,  2051,  2052,  2139,  2141,  2143,  2144,  2146,
    2148,  2149,  2154,  2156,  2157,  2159,  2160,  2161,  2162,  2164,
    2165,  2167,  2168,  2170,  2171,  2173,  2174,  2175,  2176,  2177,
    2179,  2180,  2181,  2183,  2184,  2185,  2186,  2187,  2188,  2189,
    2190,  2191,  2192,  2193,  2194,  2195,  2196,  2197,  2198,  2199,
    2200,  2201,  2203,  2204,  2205,  2207,  2208,  2209,  2210,  2211,
    2212,  2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,
    2223,  2224,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,  2237,  2238,  2239,  2240,  2241,  2242,  2243,
    2244,  2245,  2246,  2247,  2248,  2249,  2250,  2251,  2252,  2253,
    2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2262,  2263,
    2265,  2266,  2268,  2269,  2270,  2271,  2272,  2273,  2275,  2276,
    2277,  2278,  2279,  2280,  2282,  2283,  2284,  2285,  2286,  2287,
    2288,  2289,  2290,  2291,  2292,  2293,  2294,  2295,  2296,  2297,
    2298,  2299,  2300,  2301,  2302,  2303,  2304,  2305,  2306,  2307,
    2308,  2309,  2310,  2311,  2312,  2313,  2314,  2315,  2316,  2317,
    2318,  2319,  2321,  2322,  2323,  2324,  2325,  2326,  2327,  2328,
    2329,  2330,  2331,  2332,  2333,  2334,  2335,  2336,  2337,  2338,
    2339,  2340,  2341,  2342,  2343,  2344,  2345,  2346,  2347,  2348,
    2349,  2350,  2351,  2352,  2353,  2354,  2355,  2356,  2357,  2358,
    2359,  2360,  2361,  2362,  2363,  2364,  2365,  2366,  2367,  2368,
    2369,  2370,  2371,  2372,  2373,  2374,  2375,  2376,  2378,  2379
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
  "_BANGEQ", "_DOLLAR", "_PERCENT", "_PERCENTEQ", "_AMP", "_DAMP",
  "_AMPEQ", "_LPAREN", "_RPAREN", "_STAR", "_STAREQ", "_SYMB_93", "_PLUS",
  "_DPLUS", "_PLUSEQ", "_COMMA", "_MINUS", "_DMINUS", "_SYMB_63",
  "_MINUSEQ", "_RARROW", "_DOT", "_DDOT", "_ELLIPSIS", "_SLASH",
  "_SLASHEQ", "_COLON", "_DCOLON", "_SEMI", "_LT", "_SYMB_64", "_DLT",
  "_DLTEQ", "_LDARROW", "_SYMB_61", "_EQ", "_DEQ", "_SYMB_60", "_GT",
  "_GTEQ", "_DGT", "_DGTEQ", "_QUESTION", "_KW_Assigns", "_KW_Assumes",
  "_KW_Behaviors", "_KW_Contract", "_KW_Decreases", "_KW_Requires",
  "_KW_Terminates", "_KW_Variant", "_LBRACK", "_SYMB_96", "_SYMB_86",
  "_SYMB_84", "_SYMB_99", "_SYMB_87", "_SYMB_81", "_SYMB_82", "_SYMB_79",
  "_SYMB_88", "_SYMB_107", "_SYMB_68", "_SYMB_71", "_SYMB_67", "_SYMB_85",
  "_SYMB_80", "_SYMB_112", "_SYMB_56", "_SYMB_65", "_SYMB_78", "_SYMB_109",
  "_SYMB_69", "_SYMB_66", "_SYMB_113", "_SYMB_92", "_SYMB_72", "_SYMB_83",
  "_SYMB_98", "_SYMB_104", "_SYMB_89", "_SYMB_100", "_SYMB_101",
  "_SYMB_90", "_SYMB_70", "_SYMB_106", "_SYMB_105", "_SYMB_91",
  "_SYMB_108", "_SYMB_73", "_SYMB_75", "_SYMB_76", "_SYMB_77", "_SYMB_74",
  "_SYMB_110", "_RBRACK", "_CARET", "_CARETEQ", "_DCARET", "_SYMB_53",
  "_SYMB_4", "_SYMB_52", "_SYMB_51", "_SYMB_59", "_SYMB_45", "_SYMB_7",
  "_SYMB_6", "_SYMB_5", "_SYMB_57", "_SYMB_49", "_SYMB_50", "_SYMB_54",
  "_SYMB_55", "_SYMB_47", "_SYMB_58", "_SYMB_48", "_KW_admit",
  "_KW_allocates", "_KW_assert", "_KW_at", "_KW_auto", "_KW_axiom",
  "_KW_axiomatic", "_KW_behavior", "_KW_boolean", "_KW_break",
  "_KW_breaks", "_KW_case", "_KW_char", "_KW_check", "_KW_complete",
  "_KW_const", "_KW_continue", "_KW_continues", "_KW_default",
  "_KW_disjoint", "_KW_do", "_KW_double", "_KW_else", "_KW_ensures",
  "_KW_enum", "_KW_exits", "_KW_extern", "_KW_float", "_KW_for",
  "_KW_frees", "_KW_function", "_KW_ghost", "_KW_global", "_KW_goto",
  "_KW_if", "_KW_impact", "_KW_include", "_KW_inductive", "_KW_int",
  "_KW_integer", "_KW_invariant", "_KW_label", "_KW_lemma", "_KW_let",
  "_KW_logic", "_KW_long", "_KW_loop", "_KW_model", "_KW_module",
  "_KW_pragma", "_KW_predicate", "_KW_reads", "_KW_real", "_KW_register",
  "_KW_requires", "_KW_return", "_KW_returns", "_KW_short", "_KW_signed",
  "_KW_sizeof", "_KW_slice", "_KW_static", "_KW_struct", "_KW_switch",
  "_KW_type", "_KW_typedef", "_KW_union", "_KW_unsigned", "_KW_void",
  "_KW_volatile", "_KW_while", "_KW_writes", "_LBRACE", "_BAR", "_BAREQ",
  "_SYMB_97", "_DBAR", "_RBRACE", "_TILDE", "T_ALIGNOF", "T_ASM",
  "T_ATTRIBUTE", "T_BLOCKATTRIBUTE", "T_CONST", "T_CST_WCHAR",
  "T_CST_WSTRING", "T_EXT_CODE_ANNOT", "T_EXT_CONTRACT", "T_EXT_GLOBAL",
  "T_EXT_GLOBAL_BLOCK", "T_FUNCTION__", "T_INLINE", "T_LBRACE",
  "T_LBRACKET", "T_MSATTR", "T_NAMEDTYPE", "T_RBRACE", "T_RBRACKET",
  "T_RESTRICT", "T_RGHOST", "T_SIGNED", "T_STRING_LITERAL", "T_TYPENAME",
  "T_TYPEOF", "T_VOLATILE", "T_WSTRING_CONSTANT", "_STRING_", "_CHAR_",
  "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept", "Program", "Globals",
  "Global", "IdOrTypenameAsId", "IdOrTypename", "MaybeComma",
  "AssignExpr15", "AssignExpr14", "OffsetofMemberDesignator",
  "AssignExpr13", "AssignExpr12", "AssignExpr11", "AssignExpr10",
  "AssignExpr9", "AssignExpr8", "AssignExpr7", "AssignExpr6",
  "AssignExpr5", "AssignExpr4", "AssignExpr3", "AssignExpr2",
  "AssignExpr1", "AssignExpr", "Expression", "Constant", "StringConstant",
  "WStringList", "OneString", "ListOneString", "InitExpression",
  "InitializerListOpt", "InitializerSingle", "ListInitializerSingle",
  "EqOpt", "InitDesignators", "InitDesignatorsOpt", "GhostArgumentsOpt",
  "Arguments", "OptExpression", "ListExpression", "CommaExpressionOpt",
  "Block", "BlockAttrs", "BlockElement", "ListBlockElement", "Annot",
  "ListAnnot", "LocalLabel", "ListLocalLabel", "LocalLabelName",
  "ListLocalLabelName", "AnnotatedStmt", "ElsePart", "Statement",
  "OptLoopAnnotations", "ForClause", "GhostParameterOpt", "Declaration",
  "GenericAssociation", "ListGenericAssociation",
  "DeclAndInitDeclAttrList", "InitDeclaratorAttr",
  "ListInitDeclaratorAttr", "InitDeclarator", "DeclSpecWOType",
  "DeclSpecList", "DeclSpecListNoNamed", "TypeSpec", "StructDeclList",
  "StaticAssertDeclaration", "FieldDecl", "ListFieldDecl", "Enumerator",
  "ListEnumerator", "Declarator", "ListDeclarator", "AttributesOrStatic",
  "DirectDecl", "RestParList", "ParameterDecl", "ListParameterDecl",
  "DirectOldProtoDecl", "ListIdent", "OldPardefList", "OldPardef",
  "ListOldPardef", "PointerOpt", "TypeName", "AbstractDecl",
  "AbsDirectDecl", "AbsDirectDeclOpt", "FunctionDef", "FunctionDefStart",
  "CVSpec", "AttributesWithAsm", "AttributeNocv", "ListAttributeNocv",
  "Attribute", "ListAttribute", "JustAttribute", "ListJustAttribute",
  "Pragma", "VarAttr", "BasicAttribute", "ListBasicAttribute",
  "ParameterAttrListNE", "ParamAttrListNE", "Attr14", "Attr13", "Attr12",
  "Attr11", "Attr10", "Attr9", "Attr8", "Attr7", "Attr6", "Attr5", "Attr4",
  "Attr3", "Attr2", "Attr1", "Attr", "ListAttr", "AttrTest", "AttrList",
  "Asmattr", "ListAsmattr", "Asmoutputs", "Asmoperands", "Asmoperand",
  "ListAsmoperand", "Asminputs", "Asmopname", "Asmclobber",
  "ListStringConstant", "Asmlabels", "LexprList", "ListLexpr",
  "LexprOption", "Lexpr", "Lexpr1", "Lexpr2", "LexprBinder",
  "LexprRelInner", "ListLexprRelInner", "Relation", "Lexpr3",
  "ListSTRING_LITERAL", "Range", "FieldInitElt", "ListFieldInitElt",
  "ArrayInitElt", "ListArrayInitElt", "UpdateElt", "ListUpdateElt",
  "PathElt", "ListPathElt", "Binders", "BindersReentrance",
  "ListBindersReentrance", "VarSpec", "ArraySize", "VarSpec1",
  "AbsParamTypeList", "AbsParam", "ListAbsParam", "LogicTypeGenOFTYPENAME",
  "ListLogicTypeGenOFTYPENAME", "CV", "ListCV", "TypeSpecCVOFTYPENAME",
  "CastLogicType", "AbsSpecOption", "AbsSpecCVOption", "AbsSpec",
  "AbsSpecCV", "AbsSpec1", "AbsSpecCV1", "Stars", "ListStars", "StarsCV",
  "ListStarsCV", "Tabs", "ListTabs", "TypeSpecSimple",
  "TypeSpecOFTYPENAME", "FullIdentifier", "Variant", "Allocation",
  "ExtensionContent", "Assigns", "Zones", "LoopAnnotStack", "LoopAnnotOpt",
  "LoopEffects", "LoopAllocation", "LoopInvariant", "LoopVariant",
  "LoopGrammarExtension", "LoopPragma", "PragmaOrCodeAnnotation",
  "CodeAnnotation", "SlicePragma", "ImpactPragma", "OptLabel1",
  "OptLabel2", "OptLabelList", "LabelName", "ListLabelName",
  "BehaviorName", "ListBehaviorName", "AnyIdentifier",
  "IdentifierOrTypename", "IdentifierOrTypenameFull",
  "ListIdentifierOrTypenameFull", "Identifier", "BoundedVar", "CKeyword",
  "ACSLCKeyword", "PostCond", "IsACSLSpec", "IsACSLDeclOrCodeAnnot",
  "IsACSLTypename", "IsExtSpec", "Keyword", "BSKeyword", "Wildcard",
  "ListWildcard", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1545)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-872)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    9614,  9614, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
     109, -1545,   133, -1545, -1545, -1545,   615, -1545, -1545, -1545,
   -1545, -1545,   655, -1545, -1545, -1545, -1545, -1545,   334, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545,   377, -1545,   431, -1545, -1545, -1545,   141, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545,   151, -1545,   194,   240, -1545,
    9614, -1545, 11678,   127, 11678, -1545,     1, -1545, -1545, -1545,
   -1545,  2141, -1545,  7847,  1416, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545,   341,   343,    46,
   -1545, -1545, -1545,   174,    -3,   321,  9744,   177,   344,  9744,
     212,   356,   355,  7391,  8723, -1545, -1545, -1545, -1545, -1545,
   -1545,   403,   420,    35,    25, 11678, -1545, 11678, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545,  1018, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545,  1181, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545,  2141, 11804,  7847,  7847,   -57,  1798,
    7847,  7847,  7910,  7847,  7910,   436, -1545,   450,   467,   512,
    7925,  7847,  7983, -1545,    83, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545,   100, -1545,   844,   359,   152,   257,   575,   139,
     441,   440,   338,   541,    32, -1545, -1545,   393, -1545, -1545,
   -1545,    83, -1545,  1416,  1416,  1416,  1416,  1416,  1416,   532,
    8155,  1416,  8211, -1545,   566, -1545,   535, -1545,   568,   574,
   -1545,    20, -1545,  1526, -1545,    40, -1545,   425,   365,   407,
     593,   146,   586,   498,   417,   597,    42,   580,   603,   616,
    1416,   623,   598,   621,   641,    46, -1545,    46,   430,  9744,
     654,  1416,   437,   459,   645,  9744,  9744,  9744,   476,   477,
    9744,  9744,   483,  1416,  9466,   685,    48,   690,  9241,   552,
     443,   557,   717,   713,   716,   725,   923, -1545, -1545,  7537,
   -1545, -1545,  1843, -1545, -1545, -1545,   -31, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545,   188,     1, -1545, -1545, -1545,   723,
     731,   732,   738, -1545, -1545,  1798, -1545, -1545, -1545,  7847,
   11678, 11678,  7847,  1798, -1545, -1545,  1798, -1545, -1545, -1545,
    7847, -1545, -1545,   -57,   -57,  7847,  7847,  7847,  7847,  7847,
    7847,  7847,  7847,  7847,  7847,  7847,  7847,  7847,  7847,  7847,
    7847,  7847,  7847,  7847,  7847,  7847,  7847,  7847,  7847,  7847,
    7847,  7847,  7847,  7847,  7847,  7847, -1545,    20, -1545, -1545,
   -1545, -1545,   739, -1545, -1545, -1545,   525,  1798, -1545, -1545,
    1798, -1545,   533,  1353, -1545, -1545, -1545,   -20,    20, -1545,
   -1545,   -57,   -57,  1416,  1416,  1416,  1416,  1416,  1416,  1416,
    1416,  1416,  1416,  1416,  1416,  1416,  1416,  1416,  1416,  1416,
    1416, -1545,  1416,  1416,  1416, -1545,   751,  1416,  7847,    46,
   -1545,   548,   641,   641,    46, -1545,  7847,   734,  7847,  9744,
     748,   740,   750,    25, -1545,  9744, -1545,   567,   571,  9744,
   -1545,   572,   577,  9744, -1545,   758, -1545, -1545,   788, -1545,
   -1545,   792,   800, -1545,   573, -1545,    43, -1545,   552,  9241,
     786, 11678, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
     797, -1545,    58,  7244, -1545, -1545,   923,  8863,   806,  1639,
   -1545, -1545,   -57,   807, -1545, -1545, -1545,   787, -1545,  7847,
   -1545, -1545,  7673,   808,   522,   802,   803,   804,   812,   814,
     816, -1545, -1545, -1545,   617, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
     359,   359,   152,   152,   257,   257,   257,   257,   575,   575,
     139,   441,   440,   338,   805, -1545,   541,   821, -1545, -1545,
     828,   834, -1545, -1545,   835, -1545,   -20, -1545, -1545,   639,
   -1545, -1545, -1545,   425,   425,   365,   365,   407,   407,   407,
     407,   593,   593,   146,   586,   498,   417,  1416,   597, -1545,
   -1545, -1545,   843, -1545, -1545, -1545,   644,   648,   641,   554,
   -1545, -1545, -1545,   413,  9744,  7847,  1869, -1545, -1545, -1545,
     650, -1545, -1545,   652,   845,   923, -1545,    29,   656, -1545,
    9241,   851, -1545, -1545, -1545, -1545, -1545,   862, -1545,   847,
     849, -1545, -1545,   846, -1545,   -57,  7847,   852,   856, -1545,
     671,   878,   883,   866,   894,   552,   896,   897,    20, -1545,
     693, -1545,  7619,  1429, -1545,   892,   881,  1416, -1545, -1545,
   -1545,  7244, -1545,   704, -1545, 11552,   -57, 11678, 11678,   704,
     704,   766, -1545,  7847, -1545,   704,   704, -1545, -1545, -1545,
     888,   909, -1545, -1545,   706, -1545,    20, -1545, -1545, -1545,
    8989, -1545, -1545, -1545,   583,  1319,  9115, 10822,  7847,   912,
    1319,   906, -1545, 11678, -1545, -1545,    50,    24,  7537, -1545,
    7244, -1545, -1545,  7537, -1545, -1545,   552, 11678,   914,  7619,
   -1545, 10797, -1545, -1545,   916,   -57, -1545,   917, -1545,  5901,
     712,   900,   913,   919,   903, -1545,    51,   922,   925,   924,
   -1545, -1545,  1416, -1545, -1545,   926, 10822,   928, -1545,   929,
     726,   727,   862, -1545, -1545, -1545,  7847,    50, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545,  7847,    20, -1545, -1545, -1545,
       1,  3400,  5263,   910,  7847,  3607,   915,   920, 11008, -1545,
      37,   938,   782,  5263,   398,  7783,   783,   946,   809,  3814,
     930, -1545,  9467,   931,   927, -1545, -1545, -1545,     6, -1545,
     127, -1545, -1545,    12,    12,    12,    12,    12,    12, -1545,
   -1545, -1545, -1545,  2141, -1545,  7847, 11552, -1545,  7847, -1545,
     735,  7847, -1545, -1545,  7847, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545,   752, -1545, 10822, -1545,   958,   511,  6357,  6761,
    2986,  6761,  6761,  6761, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545,  4021,   779,   779,   962, -1545,   779,   779,   779, -1545,
   -1545, 11936, -1545, 11936,   779,   779,   779,   963, 11936, 11153,
   -1545,   779,   779,   964, -1545, -1545, -1545,   967, -1545, -1545,
     968,   971, -1545,   975,   779,   977,   779,   779,   779,  1018,
   -1545, -1545, -1545, -1545, -1545, -1545,  8557,  1181, -1545,  9516,
   -1545,  9967, 10017, -1545, -1545, -1545, -1545, -1545, -1545,  2365,
   -1545, -1545, -1545,    62, -1545, -1545, -1545, -1545, 10067,   978,
   -1545, -1545,  2779,  6761, -1545, -1545, -1545, -1545,   770, -1545,
   -1545, -1545, -1545,  1071, -1545, -1545, -1545,  2088,   966,    44,
     972, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,  1465,
   -1545,   518,  8557,  9516,  9967, 10017,  2365,    63, 10067,  1693,
   -1545, -1545,   974,   973, -1545, -1545,  7847,   965,  7847, 11008,
    6986,  3814,  5263,  3814,  3814,  5263, 11008,  3814,   976, -1545,
     980, 11008,  7847, -1545,    45, -1545, -1545,  7176,   981, -1545,
   -1545, -1545, -1545,   983,   994,   840,   848, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, 11678, -1545, -1545, -1545, -1545,   798,
     997, -1545, -1545,  1005,     1,  6761, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545,   978, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545,  1583, -1545, -1545,  1583,   992,  7285,  1007, 11885,
     102,  1008,  1583,  1583,  1583,   826, -1545, 11008,  1011, -1545,
    1013,  5263,  1016,  1017,  1020, -1545, -1545, -1545, -1545, 11298,
   -1545, -1545, -1545,   265, -1545,   876,   242, 11298, 11298,   243,
   -1545,  1004,  1010, -1545,  8506,  1012,  1028,  1032, -1545,  1034,
    4228,  1015, -1545, -1545,  1019, -1545,  1040,  1041,  5263,  5263,
   11936,  5263,  4228,  1044,  5263,  1045,  1050,  1052,  7712,  5263,
    4435, 11298,  4642,   872,  6125,  1053,   877,  1056,   879,  1583,
   -1545,  5263,  5263,  5263, -1545,  5263,  5263,  5263,  5263,  5263,
    5263,  5263,  5263,  5263,  6761,  6761,  6761,  6761,  6761, 11298,
   11298,  6761,  6761,  6761,  4642,   861,  5263,  5263, 11298,  5263,
   -1545,  7847, -1545,  8207,  5263, -1545,  7191, -1545, 11008,    12,
    6129,  1046, -1545,  1065,  4849, -1545,  1014,  1051, -1545,  8196,
    1054, -1545, -1545,  8238,  5263,  1057, -1545, -1545,  5056,  1070,
      47,    20, -1545, -1545, -1545,  5263, -1545,   270,   901,  6963,
    7847,   932,   935, -1545,   188, -1545,   871, 10822,  7847, -1545,
    3193, -1545, -1545, -1545, -1545, -1545, -1545, -1545,   102,   154,
   11443, -1545, -1545,   108,  1084,   163,  1043, -1545,  6761, -1545,
    1080,   904, -1545,  5263,  5263,  7615,  5263,  5263,  5263, -1545,
   -1545, -1545, -1545, -1545, -1545, -1545,   944, -1545, -1545, -1545,
     438,   948, -1545, -1545, -1545, -1545,   462,   949, 11936,  5263,
    8506, -1545,  1085,   259,  1095,  8653, -1545,  5263,  5263,  5263,
    5263,  1098,  5263,  5263,  5263,  5263, 10112,  1101,   638, 10127,
    1103,  5263, 10170,  5263,  5263,  5263, -1545,  8923, 10185,  1104,
    1081,  9601,  1022, -1545,   122,  5470,  1094, -1545,  1067, -1545,
   10929, 10929, 10929, 10929, 10929, 10929, 10216, 10929, 10929, 10929,
   10929, 10929,  1583,  1583,  1583,  1583,  1583, -1545, -1545,  1583,
    1583,  1583, 10227,  1026, -1545, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545,  6559, 10929,  1115,  1109,   933, 10929,  1099, -1545,
   -1545, 10258, -1545,  2141, -1545, -1545, -1545, -1545, -1545, -1545,
   10269,  3814, -1545, 11008, -1545, -1545,  1100, -1545, -1545, 10303,
   -1545,    20,  1105, -1545, -1545,  1120,  1102,  7847, -1545,  2141,
    1124, -1545,  1126, -1545, 10929,   154,  1127, -1545, -1545,  1055,
   -1545, 11936, -1545, -1545,   108, -1545, -1545,  1583, 11008, -1545,
   10345, 10376, 11008, 10418, 10449, 10460, -1545, -1545,   984, -1545,
   -1545,   987, -1545,  1131,  1114,   224, 10929,  1147,  8322, 11936,
   11443, -1545,   259, 10929, 10501, 10518, 10546, -1545, 10929, 10590,
   10632, 10643, -1545, -1545, -1545,  1148, -1545, -1545, 10674, -1545,
   10714, 10732, 10750, -1545, -1545, -1545,  5263,  1123,  1125, 11298,
    4642,  1149,   969,   122,  1128,  1140,  1142,  1144,  1145, 11298,
    1146,  1151,  1152,   150,  1153,    59,   242, 11298, 11298,   191,
    1155,   404,    28, -1545, -1545,  5263, -1545, -1545, -1545,  5943,
   -1545, 11298,  1168, -1545, -1545, -1545,   339, -1545, -1545, -1545,
   -1545, -1545, -1545,  1105,    61,  1174,  7847, -1545,  1156, 11678,
   -1545,     1, -1545, -1545,  1175,  1170,  1171, -1545, -1545, -1545,
   -1545, -1545,  1184, -1545, -1545, -1545, -1545, -1545, 11936, -1545,
     224, -1545, -1545,   284,   289, -1545, -1545,  1178, -1545, -1545,
    8506,  1188,  1106, -1545,  5263, -1545,  5263, -1545, -1545, -1545,
   -1545,  5263,  5263, -1545, 10929,  5263,  5263, -1545, 10760,  1111,
     122, -1545, -1545,  5677,  5263, -1545, 10929, -1545,  5263, -1545,
   -1545, -1545, -1545,  1192,   982,  1183,  1189, -1545,    20,  1179,
    1202,  7847, -1545, -1545, -1545, 11936,  1190, -1545, -1545,  1203,
   11936, -1545,   284, -1545,  8322, -1545, -1545, -1545, 10781, 10929,
   10839, 10857, 10929, 10929, -1545, -1545, -1545,  2572, 10929,    88,
    1204, -1545,   999,  1191,  1003,    61, -1545,  1009,  1210, -1545,
    1193,  1212, -1545, -1545, -1545,  1214, -1545, -1545, -1545, -1545,
    5263,   122, -1545, -1545,  1086, -1545, -1545,  1197, -1545,  7847,
   -1545, -1545, -1545, 10914,  1033, -1545,    19, -1545,  1217, -1545,
   -1545, -1545, -1545,   -57,  1213,  1205, -1545, -1545, -1545,    20,
   -1545, -1545
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     3,   832,   786,   841,   836,   839,   321,   224,   211,
       0,   331,     0,   226,   229,   330,     0,   833,   208,   835,
     817,   223,     0,   840,   818,   842,   231,   815,     0,   816,
     206,   230,   834,   227,   787,   228,   788,   209,   819,   225,
     207,     0,   205,     0,   233,   222,   789,     0,   318,   831,
     210,   329,   250,   320,   232,     0,   319,   785,     0,     2,
       3,     6,   214,   299,   216,     7,     0,   212,   213,   322,
     830,     0,     5,     0,     0,   827,   828,   825,   826,   838,
     829,   822,   823,   820,   821,   837,   824,     0,     0,     0,
       9,     8,    10,   245,   344,     0,   253,   234,     0,   253,
     240,     0,     0,     0,     0,     1,     4,   785,   215,   340,
     189,     0,   198,   203,     0,   218,   217,   220,   148,   312,
     960,   959,   936,   962,   924,   925,   953,   968,   973,   974,
     965,   931,   958,   928,   926,   937,   938,   939,   972,   929,
     930,   971,   956,   927,   957,   952,   949,   941,   940,   950,
     945,   943,   946,   966,   846,   872,   868,   954,   955,   885,
     884,   887,   886,   888,   889,   920,   891,   892,   942,   893,
     894,   895,   896,   897,   890,   977,   919,   898,   899,   900,
     901,   902,   913,   904,   903,   963,   905,   906,   907,   807,
     908,   909,   910,   912,   911,   914,   918,   915,   916,   917,
     921,   969,   947,   948,   795,   849,   847,   876,   867,   869,
     794,   812,   793,   848,   796,   797,   799,   798,   800,   813,
     873,   850,   801,   851,   875,   852,   802,   870,   853,   856,
     877,   878,   803,   859,   866,   874,   862,   863,   871,   804,
     805,   806,   864,   808,   865,   809,   810,   811,   814,   951,
     964,   970,   961,   967,   976,   843,   844,   845,   975,   777,
     935,   934,   932,   933,   922,   775,   879,   880,   882,   883,
     776,   881,   778,   923,   978,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,     0,     0,     0,
       0,     0,     0,    95,    99,   104,   103,    94,    92,    93,
      13,    19,    33,    47,    49,    53,    56,    59,    64,    67,
      69,    71,    73,    75,    77,    79,    91,     0,    14,    96,
      97,   106,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   353,   351,   354,   356,   357,   350,     0,
     368,   106,   358,   366,   369,   376,   387,   391,   394,   397,
     402,   405,   407,   409,   411,   413,   415,   417,   419,     0,
       0,     0,   267,   269,    11,     0,   345,     0,     0,   253,
       0,   346,   299,     0,   258,   253,   253,   253,   235,     0,
     253,   253,     0,   422,   785,     0,   302,     0,     0,   186,
     785,   299,     0,   288,   282,     0,   299,   188,   332,     0,
     340,   277,   323,   314,   219,   221,   136,   854,   857,   860,
     855,   858,   861,   979,   299,     0,    44,    43,    46,   131,
       0,     0,     0,    42,    40,     0,    34,    41,    35,     0,
       0,     0,     0,     0,    36,    45,     0,    38,   101,   102,
     127,    27,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,     0,   192,     0,   100,   107,
     385,   384,     0,   383,   381,   382,     0,     0,   377,   386,
       0,   379,     0,     0,   351,   350,   365,   359,   361,   364,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   421,     0,     0,     0,   328,     0,   422,     0,     0,
      12,     0,    11,    11,     0,   255,     0,   347,     0,   253,
     265,     0,   262,     0,   237,   253,   257,     0,     0,   253,
     242,     0,     0,   253,   423,     0,   251,   340,   310,   301,
     252,     0,     0,   317,     0,   284,   310,   285,   186,     0,
       0,   293,   338,   335,   336,   337,   300,   334,   341,   339,
     201,   199,   299,   110,   108,   204,   299,     0,     0,   340,
     271,   340,     0,     0,   141,   149,   191,     0,   311,     0,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,    26,    25,     0,    85,    86,    83,    81,    82,
      84,    89,    80,    90,    88,    87,    52,    50,    51,    49,
      54,    55,    57,    58,    60,    62,    61,    63,    66,    65,
      68,    70,    72,    74,     0,   130,    76,     0,   367,   352,
       0,     0,   355,   371,     0,   360,   362,   373,   374,     0,
     390,   388,   389,   392,   393,   395,   396,   398,   400,   399,
     401,   404,   403,   406,   408,   410,   412,     0,   414,   418,
     420,   343,     0,   268,   270,   247,     0,     0,    11,     0,
     348,   264,   254,   299,   253,     0,   323,   259,   236,   239,
       0,   241,   244,     0,     0,   299,   340,   340,     0,   287,
       0,   291,   292,   340,   315,   289,   283,   299,   316,   297,
     295,   332,   200,   203,   333,     0,     0,    13,     0,   115,
       0,   116,   111,   119,     0,   186,     0,     0,     0,   340,
       0,   340,   133,   324,   150,   151,     0,     0,   145,   190,
     132,   110,    48,     0,    18,     0,     0,     0,     0,    37,
      39,   125,    20,     0,   193,   378,   380,   370,   363,   375,
       0,     0,   246,   249,     0,   260,     0,   266,   256,   340,
       0,   238,   243,   327,   300,   299,     0,   303,   133,     0,
     299,   272,   296,     0,   294,   202,   123,     0,     0,   109,
       0,   112,   118,     0,   278,   280,   186,   293,     0,     0,
     279,     0,   134,   274,     0,     0,   147,     0,   142,   182,
       0,     0,   196,     0,     0,    30,     0,     0,     0,     0,
      21,    78,     0,   342,   248,     0,   263,     0,   308,     0,
       0,     0,   299,   298,   124,   120,     0,   123,   114,   117,
     113,   281,   290,   340,   276,     0,     0,   152,   137,   158,
       0,   452,   452,     0,     0,   452,     0,     0,     0,   141,
       0,     0,     0,   452,     0,     0,     0,     0,   179,   452,
     250,   135,    13,     0,     0,   161,   146,   139,     0,   138,
     299,   140,   183,   741,   741,   741,   741,   741,   741,   143,
     753,   751,   752,     0,    29,     0,     0,    17,     0,    24,
       0,     0,    23,    22,   127,   416,   261,   305,   307,   306,
     187,   273,     0,   121,   326,   275,     0,     0,     0,     0,
     452,     0,     0,     0,   684,   685,   694,   695,   714,   717,
     719,   452,   767,   767,     0,   506,   767,   767,   767,   507,
     551,     0,   490,     0,   767,   767,   767,     0,     0,     0,
     511,   767,   767,     0,   542,   508,   536,     0,   509,   489,
       0,     0,   510,     0,   767,     0,   767,   767,   767,   681,
     682,   683,   686,   687,   688,   689,   827,   691,   692,   828,
     696,   825,   826,   699,   700,   701,   702,   704,   703,   705,
     706,   707,   708,   709,   710,   711,   712,   713,   829,   806,
     716,   718,   452,     0,   720,   721,   722,   723,   560,   515,
     514,   512,   513,     0,   467,   468,   471,   470,   487,   541,
       0,   680,   690,   693,   697,   698,   705,   709,   715,     0,
     173,     0,   822,   823,   820,   821,   705,   709,   824,     0,
     174,   145,   773,     0,   772,   145,     0,     0,     0,     0,
       0,   452,   452,   452,   452,   452,     0,   452,     0,   171,
       0,     0,     0,   426,     0,   733,   732,   448,     0,   729,
     332,   160,   145,     0,     0,     0,     0,   742,   735,   736,
     734,   738,   740,   739,   145,   195,   197,   194,    31,     0,
       0,   122,   340,     0,     0,     0,   684,   685,   694,   695,
     714,   717,   719,   509,   681,   682,   683,   686,   687,   688,
     689,   690,   691,   692,   693,   696,   697,   698,   699,   700,
     701,   702,   704,   703,   705,   706,   707,   708,   709,   710,
     711,   712,   713,   715,     0,   716,   718,   720,   721,   722,
     723,   472,   488,   487,   680,   531,     0,   451,     0,     0,
     611,     0,   530,   528,   527,     0,   447,     0,     0,   765,
       0,   452,     0,     0,     0,   645,   643,   646,   672,     0,
     671,   649,   641,   659,   642,   653,     0,     0,     0,   652,
     644,   677,     0,   679,     0,     0,     0,     0,   766,     0,
     452,     0,   792,   790,     0,   791,     0,     0,   452,   452,
       0,   452,   452,     0,   452,     0,     0,     0,     0,   452,
     452,     0,   452,     0,   448,   564,     0,   568,     0,   529,
     561,   452,   452,   452,   756,   452,   452,   452,   452,   452,
     452,   452,   452,   452,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   452,     0,   452,   452,     0,   452,
     754,     0,   145,     0,   452,   755,   182,   170,     0,     0,
     182,     0,   175,     0,   452,   757,   732,     0,   730,   725,
       0,   726,   727,     0,   452,     0,   744,   172,   452,     0,
       0,     0,   425,   424,   427,   452,   760,   145,     0,   129,
       0,     0,     0,   159,   299,    32,     0,   325,     0,   181,
     452,   545,   546,   604,   602,   603,   606,   605,     0,   634,
     588,   608,   612,   626,   636,   621,   639,   620,     0,   526,
     770,     0,   769,   452,   452,     0,   452,   452,   452,   779,
     780,   782,   675,   781,   673,   663,   665,   656,   647,   650,
     660,   654,   674,   676,   648,   651,   661,   655,     0,   452,
       0,   631,     0,   584,   632,     0,   589,   452,   452,   452,
     452,     0,   452,   452,   452,   452,     0,     0,     0,     0,
       0,   452,     0,   452,   452,   452,   759,     0,     0,     0,
       0,   451,     0,   554,     0,   452,     0,   557,     0,   558,
     458,   456,   461,   462,   454,   453,     0,   463,   460,   457,
     459,   455,   520,   518,   521,   516,   517,   522,   523,   519,
     544,   543,   451,     0,   485,   480,   482,   486,   484,   481,
     483,   479,     0,   466,     0,   783,     0,   465,     0,   168,
     758,     0,   153,     0,   774,   737,   144,   176,   145,   764,
       0,   452,   743,     0,   748,   745,     0,   749,   762,     0,
     145,     0,   428,   449,   167,     0,     0,   129,   185,     0,
       0,   126,     0,   562,   451,   607,     0,   635,   586,     0,
     587,   593,   625,   637,   623,   622,   640,   547,     0,   768,
       0,     0,     0,     0,     0,     0,   668,   662,   666,   657,
     664,   667,   658,   600,     0,   609,   475,     0,     0,   593,
     588,   633,   585,   474,     0,     0,     0,   553,   476,     0,
       0,     0,   534,   537,   549,     0,   548,   552,     0,   494,
       0,     0,     0,   747,   532,   533,   452,     0,     0,     0,
     452,   572,     0,   577,     0,   645,   643,   646,   672,   798,
     671,   649,   641,   659,   642,   653,   805,   808,   809,   652,
     644,   677,     0,   565,   569,   452,   525,   524,   469,   470,
     538,     0,   540,   145,   746,   145,   154,   763,   731,   724,
     750,   761,   163,   428,   437,     0,     0,   184,     0,     0,
     145,     0,   629,   638,     0,   597,   594,   596,   624,   771,
     505,   503,     0,   500,   501,   498,   669,   670,     0,   678,
       0,   599,   610,   619,   614,   613,   591,   582,   579,   581,
       0,     0,     0,   504,   452,   497,   452,   491,   502,   550,
     492,   452,   452,   493,   563,   452,   452,   574,   451,     0,
       0,   559,   578,   452,   452,   555,   464,   784,   452,   169,
     145,   145,   162,     0,     0,   435,   433,   431,     0,     0,
       0,   129,   164,   180,   630,     0,     0,   535,   601,     0,
     593,   618,   616,   615,     0,   580,   592,   590,     0,   473,
       0,     0,   566,   567,   575,   576,   573,   452,   570,     0,
       0,   155,     0,     0,     0,   437,   429,   437,     0,   178,
       0,     0,   598,   595,   627,     0,   617,   583,   499,   495,
     452,     0,   556,   539,   156,   177,   438,   439,   434,     0,
     165,   145,   628,     0,     0,   145,   444,   436,     0,   166,
     496,   571,   157,     0,   442,   444,   440,   432,   445,     0,
     441,   443
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1545, -1545,    94, -1545,   -28,   157,  -401, -1545, -1545, -1545,
      80,   791,   203,   210,   190,   214,   764,   768,   763,   771,
     762, -1545,   480,  -347,   -61, -1545,   202,     5,    -6,  -283,
    -380,   494, -1545,   446, -1545,  -653,   422, -1545,   353, -1281,
     136,   482,   -63, -1545, -1545,   402, -1545,  -726, -1545, -1545,
   -1545,  -813, -1034, -1545,     7, -1545, -1545,  -528,  -811, -1545,
     366,  -410, -1545,   555,   695,    78,   244,   196,    86,   516,
   -1545, -1545,   585, -1545,  -229,   -33,   444, -1545,  1176,   -98,
     905,   722, -1545,  -241,   485, -1545,   501,   -35,   158,   -83,
   -1545, -1545, -1545,  1021, -1545, -1545,    64,   215,  -355,  -322,
   -1545,    96,  -812, -1545,  -314,   810,   653, -1545, -1545, -1545,
    -111,   178,   183,   -18,   186,   793,   795,   796,   794,   813,
   -1545,  -489,  -237,   -48, -1545,   799, -1545,   245,  -261,  -371,
   -1545,  -368, -1545, -1545, -1545,  -409,  -404,  -905,  -921,    22,
     455, -1545,   -96,   406, -1545, -1545, -1545,  -848,    36, -1191,
   -1545,   -59, -1545,   -58, -1545, -1544, -1545,  -204,  -914, -1545,
    -333, -1178,  -167,   -19, -1438, -1545,  -320, -1325,  -258,    34,
      38, -1545,   131, -1545, -1545,  -256,    41,  -251,    54, -1545,
   -1329, -1545,    52, -1545, -1280, -1545,  -926,  -161, -1545, -1545,
     301, -1545, -1040,  -805,  -119, -1545, -1545, -1545, -1545, -1545,
   -1545, -1545, -1545, -1545, -1545,  5242, -1545,   427,  -120,  -113,
   -1545,   112,   -66, -1545,  -890,  -188,    53, -1545, -1545, -1545,
   -1545,     9, -1545,  -405, -1545, -1545, -1545, -1545,  -273
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    58,    59,    60,   339,   401,   531,   301,   302,   826,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   419,   318,   319,   320,   321,   322,
     729,   730,   731,   732,   803,   733,   845,   830,   610,   644,
     420,   813,   421,   594,   818,   748,   886,  1266,   595,   406,
     745,   746,  1303,  1652,   887,   888,  1467,   563,    61,   822,
     823,   111,   580,   581,   112,    62,   372,   116,    64,   373,
     374,   540,   541,   363,   364,   723,   792,   740,   696,   736,
     393,   394,   403,   395,   718,   719,   720,   543,   824,   837,
     707,   708,    65,    66,    67,   590,    68,   582,   578,   396,
      94,    95,   375,   342,   343,   498,   499,   500,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   554,   677,   555,  1294,  1074,  1585,  1655,
    1656,  1657,  1696,  1658,  1727,  1735,  1736,  1223,  1076,  1156,
    1077,  1024,  1025,  1026,  1431,  1255,  1432,  1027,  1028,  1158,
    1225,  1226,  1227,  1228,  1541,  1542,  1543,  1544,  1192,  1617,
    1618,  1619,  1479,  1363,  1594,  1595,  1596,  1597,  1504,  1316,
    1159,  1160,  1161,  1611,  1321,  1612,  1322,  1613,  1323,  1364,
    1365,  1324,  1325,  1326,  1327,  1193,  1505,  1029,  1280,  1068,
    1078,  1277,  1079,  1087,  1088,   893,   894,   895,   896,   897,
     898,   899,   900,   901,   902,  1168,  1197,  1169,  1330,  1331,
    1052,  1053,  1030,  1341,  1342,  1436,  1031,  1204,   266,   267,
      70,   268,   269,   270,   271,   272,   273,   274,   275
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,   413,   857,   119,   597,   264,   392,   891,   889,    71,
      71,   439,   317,    92,   892,    92,  1362,  1267,  1466,   585,
    1166,  1278,   819,  1281,  1282,  1194,   359,  1194,   114,   497,
     113,  1392,  1194,  1503,   679,  1511,  1165,   400,   479,  1195,
     714,   786,   385,  1482,  1201,  1485,  1486,   591,  1298,  1525,
    1733,  1056,   846,    69,    69,   713,  1257,  1291,   479,  1461,
    -299,  1644,   557,  1423,   909,   501,   502,    92,   341,    71,
      92,  1621,   109,    92,  -430,   399,   725,   910,   586,   474,
    1152,  1155,   604,  1162,  1163,  1164,    92,   592,   482,   521,
    -804,  1166,  -430,  -859,  -859,    72,  1686,  1231,  1232,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
      87,  1233,   440,    69,  1318,    69,  1319,    69,   441,   329,
    1481,    73,   442,  1235,   265,   443,   444,  1236,   286,   286,
    1237,   686,   687,  1085,   537,  1238,   532,    98,   533,   101,
    1276,   109,   115,   844,   468,    74,  1086,  1082,  1539,    69,
     117,   515,    69,   102,   106,  1083,    69,    69,  1320,    90,
     110,   868,  1239,   103,  1320,  1229,    11,  1724,    69,   460,
      69,    12,   593,   461,    91,  1318,  1614,    15,  1540,   874,
     469,  -803,  1507,   497,   333,    93,  1588,   516,   770,  1240,
     366,  1241,   286,   115,   844,   115,   494,  1084,    97,    88,
     100,   117,   109,   117,  1598,   335,   104,   805,   264,   336,
     337,   495,   480,   481,   118,   483,   484,   485,  1347,  1320,
     489,   596,  -810,  1219,  1264,  1615,  1645,  1313,  1439,   475,
     295,   295,  1705,  1317,   741,   705,  1610,  1258,  1361,   522,
     105,    90,   847,  -309,    63,    63,   296,   296,  -313,  1292,
     418,  1292,   368,    90,   503,   378,    91,  1152,   382,    90,
      47,   387,  -299,  1464,   726,   911,   659,   742,    91,   743,
    1293,  1509,  1293,    51,    91,  1654,   340,   362,   851,  1166,
    1320,  1614,  1242,  1503,  1378,  1243,  1712,   774,  1377,   294,
    1314,  1166,  1344,   462,   295,  1371,  1670,  1352,  1353,   438,
     684,  1610,   463,   559,    63,   688,   108,  1380,   567,  1345,
     296,   404,   526,   405,   445,  1510,  1346,   341,   341,   341,
     341,   341,   341,   712,  1354,   341,   478,   265,    69,  1270,
    1615,  1390,    69,  1671,  1673,   341,  1434,   341,   584,   542,
    1320,   591,   497,   915,  1315,  1320,   737,   386,   391,  1639,
    1355,   558,   598,   360,   341,   361,   566,  1356,   565,  1417,
    1418,   576,   426,  1456,   428,   341,   457,   383,  1435,  1357,
     434,   607,   437,   458,  1463,  1348,  1354,   341,    11,   114,
    1701,   113,   507,    12,   785,   787,   508,   365,   459,    15,
     376,   790,  1706,   660,   661,   662,  1412,  1413,  1414,  1415,
    1416,  1349,  1355,  1419,  1420,  1421,   476,  1344,  1350,  1356,
     488,  1578,   491,   477,  1576,    92,    92,   809,   848,   811,
    1351,  1357,    69,   850,  1345,   380,  1582,   109,    69,    69,
      69,  1346,   504,    69,    69,  -777,   397,   422,  1358,   505,
     398,    69,  1675,   509,   538,   654,  1061,    87,   429,   579,
     470,   109,   510,  1062,   506,   579,  -291,   836,   891,   889,
     577,   892,   430,   564,  1445,   892,   577,   683,   538,  1194,
     539,   341,    47,    92,    92,   689,   680,   691,    69,   431,
    1487,  1562,  1650,    69,    69,    51,    69,   341,  1468,    69,
      87,  1651,   341,   667,   668,   669,   670,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,    92,   341,   341,   341,   414,
    1063,   341,   584,   386,   432,   340,   340,   340,   340,   340,
     340,   924,   472,   340,   367,   754,    88,    90,    92,  1649,
      69,   471,   755,    69,    87,   496,  1261,    89,  1064,  1262,
      90,   473,    91,   734,  1205,    92,  1662,   377,  1095,  1065,
      90,  1097,   340,   486,   744,    91,   492,   775,  1066,   381,
    -286,   557,    90,   340,   776,    91,   611,  -286,    -9,    88,
      -8,   614,  1620,   603,  1569,   340,   493,    91,   605,   606,
      96,   608,    69,    90,   609,   517,  -304,  1497,    69,   518,
     612,   613,    69,  -304,  1498,  1067,    69,   520,    91,   464,
     645,   519,   789,   465,  -304,   379,  1691,  1692,   466,   467,
     523,  1500,    69,   524,    69,  1103,  1104,   511,  1501,   525,
    1094,   512,   391,    88,   779,   527,   513,   514,   528,   579,
      69,   529,   579,   534,    99,   650,   724,    90,   651,  1637,
     577,  1524,  1361,   577,   634,   635,   636,   637,   657,   658,
     542,   530,    91,   630,   631,   797,   536,  1352,  1353,   386,
     784,   341,   632,   633,   386,   386,   544,   386,   545,   647,
     386,  1435,   638,   639,   791,   663,   664,  1729,   839,   549,
     584,  1732,   665,   666,   550,   340,   553,    92,   556,   817,
     656,   671,   672,   560,   562,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,    92,   340,   340,   340,  1690,    92,   340,
     568,   386,   341,   569,   386,   750,   570,   584,   571,   584,
     728,   341,   584,   599,   600,   601,    75,    69,  1620,   579,
     558,   602,   648,    76,   649,   566,   885,   734,   579,    77,
     577,    78,   652,    69,   681,   685,  1166,   690,   693,   577,
     341,   704,    92,   694,  1343,  1089,  1090,  1091,  1092,  1093,
    1307,   695,  1343,  1343,   698,   922,    81,   744,   699,   701,
      79,   883,    80,    82,   702,   579,   579,   927,  1203,    83,
     706,    84,  1054,  1041,   711,   709,   577,   577,    69,   791,
      69,    69,   710,   391,   716,   717,  1343,   721,   738,   747,
     749,   753,   756,   757,   758,   759,   341,   760,   903,   761,
      85,   391,    86,    69,   764,   762,   763,   264,   579,    69,
     579,   765,  1057,   579,  1343,  1343,    69,   766,   767,   577,
     341,   577,   446,  1343,   577,   447,   771,   769,   783,   448,
      69,   772,   579,   449,   579,   773,  1424,   781,   450,   782,
     788,   564,    69,   577,   451,   577,   109,   794,   812,   340,
     793,   452,   796,    -8,   453,   535,   399,   798,   799,   579,
     454,   546,   547,   548,   597,  1425,   551,   552,   800,  1426,
     577,  1427,  1428,   801,  1429,  1430,   802,   804,   728,   806,
     807,   810,   815,   825,   816,   827,   828,   751,   829,   832,
    1738,   265,   833,   834,   812,   841,   842,   853,   856,   904,
     858,   905,   907,   906,   908,   912,   914,   109,   913,   916,
     808,   917,   918,  1040,   919,   854,   455,   920,  1050,   340,
    1058,  1051,  1059,  1071,   391,   884,   265,   728,  1072,    69,
    1081,    -9,  1080,  1073,  1153,  1153,  1098,  1153,  1153,  1153,
    1101,  1102,  1167,     3,  1171,  1200,  1208,   579,   835,  1209,
    1210,  1154,  1154,  1211,  1154,  1154,  1154,  1212,   577,  1214,
    1220,   925,  1018,  1274,  1268,  1299,   572,  1256,  1272,   386,
    1284,   386,   386,  1259,  1269,  1288,  1300,  1301,  1462,  1286,
    1306,  1070,  1154,  1287,  1296,  1302,  1305,  1308,  1340,  1310,
    1312,  1328,  1329,  1333,   391,  1334,  1340,  1340,  1336,  1337,
     391,    11,  1338,  1366,   340,  1347,    12,   717,  1358,   456,
    1368,  1309,    15,  1359,  1369,  1367,  1370,  1099,  1372,  1153,
     611,   717,  1374,  1375,  1230,   692,  1381,  1383,   926,  1373,
    1340,   697,  1384,   890,  1385,   700,  1154,   416,   417,   703,
    1393,   423,   424,  1396,   427,  1397,  1398,  1399,  1448,  1447,
    1231,  1232,   435,  1460,  1452,    34,  1451,  1454,  1340,  1340,
    1457,  1471,  1465,  1219,  1233,    36,  1264,  1340,  1319,  1320,
    1488,  1332,  1489,  1496,  1234,  1508,  1235,  1499,  1502,  1361,
    1236,  1517,   265,  1237,  1523,    46,  1527,  1535,  1238,   265,
    1221,  1536,  1538,  1222,   265,    47,  1567,   573,  1570,  1571,
    1573,  1572,  1586,  1580,  1343,  1587,  1584,  1590,    51,  1591,
    1592,  1153,   574,  1606,  1343,  1239,  1607,    69,   575,    75,
     386,  1608,  1343,  1343,   107,  1593,    76,  1609,  1154,  1480,
    1616,  1629,    77,  1635,    78,  1636,  1343,  1641,  1643,  1640,
    1575,  -795,  1240,  -794,  1241,  -793,  -797,  -800,  1583,   407,
    1648,   408,  -802,  -870,  -871,   409,  -811,  1659,  1664,  1661,
    1665,  1666,  1271,    79,  1273,    80,  1589,  1667,  1674,  1366,
    1438,  1676,  1054,   885,  1366,  1693,  1677,   885,  1289,  1697,
     778,  1685,  1699,  1694,  1695,  1700,  1704,  1713,  1703,  1714,
     265,  1716,  1719,  1654,  1715,  1721,  1720,  1722,  1726,  1725,
    1737,  1731,  1154,  1739,   640,   642,  1733,   646,   883,   641,
    1154,  1154,   883,   831,   643,   820,   849,  1154,   626,   627,
     628,   629,   629,   629,   629,   629,   629,   629,   629,   629,
     629,   629,   629,   629,   629,  1242,   629,  1100,  1243,   923,
     840,  1055,  1096,  1442,  1154,  1443,   795,   722,   777,   903,
    1153,  1153,  1153,  1153,  1153,   341,   921,  1153,  1153,  1153,
     402,   715,   852,   561,   843,  1297,   415,  1154,  1154,  1154,
    1154,  1154,  1154,  1154,  1154,  1154,  1154,   655,  1469,   768,
     673,  1154,    81,   674,   676,   675,  1023,  1039,  1290,    82,
    1049,   265,  1653,    69,  1717,    83,   682,    84,  1060,  1718,
    1741,  1740,  1473,   557,  1151,   678,  1568,  1563,  1304,  1642,
    1564,  1707,   410,  1622,   411,  1702,  1512,  1366,   412,  1480,
    1668,  1389,    69,  1477,  1669,  1475,    85,   323,    86,  1476,
     579,   724,   324,  1672,  1153,   325,   653,   326,  1285,     3,
     327,   577,  1602,  1154,   328,  1599,  1483,   264,  1340,  1484,
    1444,  1154,  1198,  1647,     0,  1157,     0,  1579,  1340,     0,
       0,     0,   572,   752,     0,     0,  1340,  1340,     0,     0,
       0,     0,   884,   264,     0,     0,   884,     0,     0,     0,
    1340,     0,     0,  1154,     0,     0,     0,     0,  1154,     0,
     323,     0,  1332,     0,     0,   324,  1332,    11,   325,     0,
     326,     0,    12,   327,     0,   645,  1470,   328,    15,     0,
       0,     0,     0,     0,  1472,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1218,   341,     0,     0,     0,  1366,
       0,     0,   286,     0,     0,     0,     0,  1224,  1153,     0,
       0,     0,     0,     0,  1231,  1232,     0,     0,     0,     3,
       0,    34,     0,     0,     0,  1154,     0,     0,  1233,     0,
       0,    36,   329,     0,     0,     0,   265,     0,  1260,     0,
    1235,  1263,   572,     0,  1236,     0,   265,  1237,     0,     0,
       0,    46,  1238,  1366,   890,     0,     0,  1279,     0,     0,
    1283,    47,   265,   573,     0,   286,     0,     0,  1663,     0,
       0,     0,     0,   330,    51,     0,     0,    11,   574,  1239,
       0,   265,    12,   890,   575,   265,     0,     0,    15,     0,
     107,     0,   331,   332,   629,   329,     0,   333,     0,     0,
       0,  1154,     0,  1154,   295,     0,  1240,     0,  1241,   334,
       0,     0,     0,     0,     0,     0,     0,     0,   335,     0,
     296,     0,   336,   337,   338,     0,     0,     0,     0,     0,
    1244,    34,  1154,     0,     0,     0,   330,  1245,     0,  1246,
    1247,    36,  1154,   645,  1248,     0,     0,     0,  1249,  1250,
    1154,  1154,  1251,     0,     0,   331,   332,     0,     0,  1252,
     333,    46,     0,     0,  1154,     0,  1335,   295,  1253,     0,
     814,    47,   334,   573,     0,   286,     0,     0,     0,  1254,
       0,   335,    69,   296,    51,   336,   337,   338,   574,     0,
       0,     0,   341,     0,   575,     0,     0,     0,  1728,  1242,
     107,     0,  1243,  1376,     0,   329,  1379,     0,     0,  1382,
       0,     0,     0,  1154,  1387,  1388,     0,  1391,     0,     0,
       0,     0,     0,     0,     0,     0,  1400,  1401,  1402,     3,
    1403,  1404,  1405,  1406,  1407,  1408,  1409,  1410,  1411,     0,
       0,     0,  1231,  1232,     0,   744,     0,     0,     0,  1422,
       0,  1433,   572,     0,  1437,     0,  1233,     0,     0,  1441,
     341,     0,  1660,     0,     0,     0,  1265,  1154,  1235,  1450,
     333,     0,  1236,   341,     0,  1237,     0,   295,     0,     0,
    1238,     0,   494,  1459,     0,     0,     0,    11,     0,     0,
       0,   335,    12,   296,     0,   336,   337,   495,    15,     0,
       0,     0,     0,     0,     0,  1474,     0,  1239,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1490,  1491,
       0,  1493,  1494,  1495,  1240,     0,  1241,   645,     0,     0,
       0,    34,   276,     0,     0,     0,     0,   277,   278,     0,
     279,    36,   280,     0,  1506,   281,   282,     0,     0,   283,
     284,   739,  1513,  1514,  1515,  1516,     0,  1518,  1519,  1520,
    1521,    46,     0,  1304,     0,     0,  1528,     0,  1530,  1531,
    1532,    47,     0,   573,     0,     0,     0,     0,     3,     0,
    1410,     0,     0,     0,    51,   587,     0,     0,   574,     0,
    1698,     0,     0,     0,   575,     0,     0,     0,     0,     0,
     107,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   780,     0,     0,     0,     0,     0,  1242,     0,     0,
    1243,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     8,   285,     9,     0,    11,   286,   287,   288,
     289,    12,     0,     0,    13,    14,   572,    15,     0,     3,
       0,     0,     0,    18,     0,     0,     0,     0,  1734,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      26,  1734,   572,    28,     0,    30,    31,     0,     0,     0,
       0,    11,     0,     0,     0,     0,    12,    33,     0,     0,
      34,     0,    15,     0,    35,     0,     0,     0,     0,     0,
      36,     0,    37,     0,     0,     0,    39,    11,   290,     0,
      40,    41,    12,     0,    42,    43,    44,    45,    15,     0,
      46,  1634,     0,     0,     0,  1638,     0,   291,   292,     0,
      47,     0,    48,   293,   294,    34,     0,     0,     0,   295,
      50,   118,     0,    51,    52,    36,     0,    53,     0,    54,
    1646,     0,    55,    56,     0,   296,   297,   298,   299,   384,
       0,    34,     0,     0,     0,    46,     0,     0,     0,     0,
       0,    36,     0,     0,   588,    47,     0,   573,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   589,    51,     0,
       0,    46,   574,     0,     0,     0,     0,     0,   575,     0,
     588,    47,     0,   573,   107,     0,     0,     0,     0,  1678,
       0,  1679,     0,   589,    51,     0,  1680,  1681,   574,     0,
    1682,  1683,     0,  -478,   575,  1244,     0,     0,  1688,  1689,
     107,     0,  1245,     0,  1246,  1247,     0,     0,     0,  1248,
       0,     0,     0,  1249,  1250,     0,     0,  1251,     0,     0,
       0,     0,  -478,     0,  1252,     0,  -478,     0,  -478,  -478,
       0,  -478,  -478,  1253,     0,     0,     0,     0,     0,     0,
       0,     0,  1224,     0,  1254,   120,   121,   122,   123,     0,
     124,   125,     0,   126,   127,   128,     0,   129,   130,     0,
       0,   131,   132,     0,   133,  1723,   134,   135,   136,   137,
     138,     0,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,   148,   149,   150,   151,   152,     0,   153,     2,
     154,     3,   155,     4,     5,     6,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,     0,   203,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,    17,   206,   207,     0,   208,   209,    19,
     210,     0,    20,   211,   212,   213,    23,   214,     0,    24,
       0,    25,     0,   215,   216,    27,   217,    29,     0,   218,
     219,    32,   220,     0,   221,     0,   222,   223,   224,   225,
     226,   227,   228,    34,   229,   230,   231,   232,   233,   234,
     235,   236,   237,    36,   238,     0,     0,     0,    38,   239,
     240,   241,   242,     0,   243,     0,   244,     0,   245,   246,
     247,   248,     0,    46,   249,   250,     0,   251,   252,   253,
     254,     0,     0,     0,     0,     0,     0,     0,   255,    49,
     256,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,   259,     0,     0,   260,   261,   928,
     262,   263,   107,     0,   929,  -452,     0,   930,     0,   931,
       0,     0,   932,     0,     0,     0,   933,     0,  -452,     0,
       0,     0,     0,     0,     0,     0,  -853,     0,  -452,     0,
    -452,     0,     0,     0,  -452,     0,     0,  -452,     0,     0,
       0,     0,  -452,   934,   935,     3,   936,   937,   938,   939,
     940,     0,   941,   942,   943,   944,   945,   946,   947,   948,
     949,   950,   951,   952,   953,   954,   955,     0,     0,  -452,
     956,   957,   958,   959,     0,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,     0,     0,  -452,     0,  -452,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,   980,   981,   982,
       0,   983,   984,   985,   210,     0,  1032,   211,   212,   987,
     988,   214,     0,  1033,     0,   990,     0,   215,   216,  1034,
     217,  1035,     0,   218,   219,   993,   994,     0,   995,     0,
     222,   996,   997,   998,   226,   227,  1036,    34,  1000,  1001,
    1002,   232,  1037,  1004,  1005,  1006,  1007,    36,   238,     0,
       0,     0,  1038,   239,   240,  1009,  1010,     0,   243,     0,
    1011,     0,   245,   246,   247,   248,     0,    46,  1012,  -452,
       0,     0,  -452,     0,  1013,     0,     0,     0,     0,     0,
       0,     0,  1014,  1015,  1016,  1017,   928,     0,     0,     0,
       0,   929,     0,     0,   930,     0,   931,  1018,   259,   932,
       0,  1019,  1020,   933,  1021,  1022,   107,     0,  1221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     934,   935,     3,   936,   937,   938,   939,   940,  1222,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   954,   955,     0,     0,     0,   956,   957,   958,
     959,     0,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,  1711,     0,     0,     0,     0,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   979,   980,   981,   982,     0,   983,   984,
     985,   210,     0,  1032,   211,   212,   987,   988,   214,     0,
    1033,     0,   990,     0,   215,   216,  1034,   217,  1035,     0,
     218,   219,   993,   994,     0,   995,     0,   222,   996,   997,
     998,   226,   227,  1036,    34,  1000,  1001,  1002,   232,  1037,
    1004,  1005,  1006,  1007,    36,   238,     0,     0,     0,  1038,
     239,   240,  1009,  1010,     0,   243,     0,  1011,     0,   245,
     246,   247,   248,     0,    46,  1012,     0,     0,     0,     0,
    -446,  1013,     0,     0,     0,     0,     0,     0,     0,  1014,
    1015,  1016,  1017,   928,     0,     0,     0,     0,   929,     0,
       0,   930,     0,   931,  1018,   259,   932,     0,  1019,  1020,
     933,  1021,  1022,   107,     0,  1221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   934,   935,     3,
     936,   937,   938,   939,   940,  1222,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,     0,     0,     0,   956,   957,   958,   959,     0,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,     0,     0,
       0,     0,     0,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,   980,   981,   982,     0,   983,   984,   985,   210,     0,
    1032,   211,   212,   987,   988,   214,     0,  1033,     0,   990,
       0,   215,   216,  1034,   217,  1035,     0,   218,   219,   993,
     994,     0,   995,     0,   222,   996,   997,   998,   226,   227,
    1036,    34,  1000,  1001,  1002,   232,  1037,  1004,  1005,  1006,
    1007,    36,   238,     0,     0,     0,  1038,   239,   240,  1009,
    1010,     0,   243,     0,  1011,     0,   245,   246,   247,   248,
       0,    46,  1012,     0,     0,     0,     0,  -446,  1013,     0,
       0,     0,     0,     0,     0,     0,  1014,  1015,  1016,  1017,
     928,     0,     0,     0,     0,   929,     0,     0,   930,     0,
     931,  1018,   259,   932,     0,  1019,  1020,   933,  1021,  1022,
     107,     0,     0,  -450,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   934,   935,     3,   936,   937,   938,
     939,   940,     0,   941,   942,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,   954,   955,     0,  -605,
       0,   956,   957,   958,   959,     0,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,     0,     0,     0,     0,     0,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   979,   980,   981,
     982,     0,   983,   984,   985,   210,     0,  1032,   211,   212,
     987,   988,   214,     0,  1033,     0,   990,     0,   215,   216,
    1034,   217,  1035,     0,   218,   219,   993,   994,     0,   995,
       0,   222,   996,   997,   998,   226,   227,  1036,    34,  1000,
    1001,  1002,   232,  1037,  1004,  1005,  1006,  1007,    36,   238,
       0,     0,     0,  1038,   239,   240,  1009,  1010,     0,   243,
       0,  1011,     0,   245,   246,   247,   248,     0,    46,  1012,
       0,     0,     0,     0,     0,  1013,     0,     0,     0,     0,
       0,     0,     0,  1014,  1015,  1016,  1017,   928,     0,     0,
       0,     0,   929,     0,     0,   930,  -450,   931,  1018,   259,
     932,     0,  1019,  1020,   933,  1021,  1022,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   934,   935,     3,   936,   937,   938,   939,   940,     0,
     941,   942,   943,   944,   945,   946,   947,   948,   949,   950,
     951,   952,   953,   954,   955,     0,     0,     0,   956,   957,
     958,   959,     0,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,     0,  -450,     0,     0,     0,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,   980,   981,   982,     0,   983,
     984,   985,   210,     0,  1032,   211,   212,   987,   988,   214,
       0,  1033,     0,   990,     0,   215,   216,  1034,   217,  1035,
       0,   218,   219,   993,   994,     0,   995,     0,   222,   996,
     997,   998,   226,   227,  1036,    34,  1000,  1001,  1002,   232,
    1037,  1004,  1005,  1006,  1007,    36,   238,     0,     0,     0,
    1038,   239,   240,  1009,  1010,     0,   243,     0,  1011,     0,
     245,   246,   247,   248,     0,    46,  1012,     0,     0,     0,
       0,     0,  1013,     0,     0,     0,     0,     0,     0,     0,
    1014,  1015,  1016,  1017,   928,     0,     0,     0,     0,   929,
       0,     0,   930,     0,   931,  1018,   259,   932,     0,  1019,
    1020,   933,  1021,  1022,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   934,   935,
       3,   936,   937,   938,   939,   940,     0,   941,   942,   943,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,     0,     0,     0,   956,   957,   958,   959,     0,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,     0,
       0,     0,     0,     0,   204,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   979,   980,   981,   982,     0,   983,   984,   985,   210,
       0,   986,   211,   212,   987,   988,   214,     0,   989,     0,
     990,     0,   215,   216,   991,   217,   992,     0,   218,   219,
     993,   994,     0,   995,     0,   222,   996,   997,   998,   226,
     227,   999,    34,  1000,  1001,  1002,   232,  1003,  1004,  1005,
    1006,  1007,    36,   238,     0,    79,     0,  1008,   239,   240,
    1009,  1010,     0,   243,     0,  1011,     0,   245,   246,   247,
     248,     0,    46,  1012,     0,     0,     0,     0,     0,  1013,
       0,     0,     0,     0,     0,     0,     0,  1014,  1015,  1016,
    1017,   928,     0,     0,     0,     0,   929,     0,     0,   930,
       0,   931,  1018,   259,   932,     0,  1019,  1020,   933,  1021,
    1022,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   934,   935,     3,   936,   937,
     938,   939,   940,     0,   941,   942,   943,   944,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,   955,     0,
       0,     0,   956,   957,   958,   959,     0,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,     0,     0,     0,     0,
       0,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,   980,
     981,   982,     0,   983,   984,   985,   210,     0,  1042,   211,
     212,   987,   988,   214,     0,  1043,     0,   990,     0,   215,
     216,  1044,   217,  1045,     0,   218,   219,   993,   994,     0,
     995,     0,   222,   996,   997,   998,   226,   227,  1046,    34,
    1000,  1001,  1002,   232,  1047,  1004,  1005,  1006,  1007,    36,
     238,     0,    85,     0,  1048,   239,   240,  1009,  1010,     0,
     243,     0,  1011,     0,   245,   246,   247,   248,     0,    46,
    1012,     0,     0,     0,     0,     0,  1013,     0,     0,     0,
       0,     0,     0,     0,  1014,  1015,  1016,  1017,   928,     0,
       0,     0,     0,   929,     0,     0,   930,     0,   931,  1018,
     259,   932,     0,  1019,  1020,   933,  1021,  1022,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   934,   935,     3,   936,   937,   938,   939,   940,
       0,   941,   942,   943,   944,   945,   946,   947,   948,   949,
     950,   951,   952,   953,   954,   955,     0,     0,     0,   956,
     957,   958,   959,  1075,   960,   961,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,     0,     0,     0,     0,     0,   204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   979,   980,   981,   982,     0,
     983,   984,   985,   210,     0,  1032,   211,   212,   987,   988,
     214,     0,  1033,     0,   990,     0,   215,   216,  1034,   217,
    1035,     0,   218,   219,   993,   994,     0,   995,     0,   222,
     996,   997,   998,   226,   227,  1036,    34,  1000,  1001,  1002,
     232,  1037,  1004,  1005,  1006,  1007,    36,   238,     0,     0,
       0,  1038,   239,   240,  1009,  1010,     0,   243,     0,  1011,
       0,   245,   246,   247,   248,     0,    46,  1012,     0,     0,
       0,     0,     0,  1013,     0,     0,     0,     0,     0,     0,
       0,  1014,  1015,  1016,  1017,   928,     0,     0,     0,     0,
     929,     0,     0,   930,     0,   931,  1018,   259,   932,     0,
    1019,  1020,   933,  1021,  1022,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   934,
     935,     3,   936,   937,   938,   939,   940,     0,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   952,
     953,   954,   955,     0,     0,     0,   956,   957,   958,   959,
       0,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   979,   980,   981,   982,     0,   983,   984,   985,
     210,     0,  1032,   211,   212,   987,   988,   214,     0,  1033,
       0,   990,     0,   215,   216,  1034,   217,  1035,     0,   218,
     219,   993,   994,     0,   995,     0,   222,   996,   997,   998,
     226,   227,  1036,    34,  1000,  1001,  1002,   232,  1037,  1004,
    1005,  1006,  1007,    36,   238,     0,     0,     0,  1038,   239,
     240,  1009,  1010,     0,   243,     0,  1011,     0,   245,   246,
     247,   248,     0,    46,  1012,     0,     0,  -446,     0,     0,
    1013,     0,     0,     0,     0,     0,     0,     0,  1014,  1015,
    1016,  1017,   928,     0,     0,     0,     0,   929,     0,     0,
     930,  -446,   931,  1018,   259,   932,     0,  1019,  1020,   933,
    1021,  1022,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   934,   935,     3,   936,
     937,   938,   939,   940,     0,   941,   942,   943,   944,   945,
     946,   947,   948,   949,   950,   951,   952,   953,   954,   955,
       0,     0,     0,   956,   957,   958,   959,     0,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   977,   978,     0,     0,     0,
       0,     0,   204,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   979,
     980,   981,   982,     0,   983,   984,   985,   210,     0,  1032,
     211,   212,   987,   988,   214,     0,  1033,     0,   990,     0,
     215,   216,  1034,   217,  1035,     0,   218,   219,   993,   994,
       0,   995,     0,   222,   996,   997,   998,   226,   227,  1036,
      34,  1000,  1001,  1002,   232,  1037,  1004,  1005,  1006,  1007,
      36,   238,     0,     0,     0,  1038,   239,   240,  1009,  1010,
       0,   243,     0,  1011,     0,   245,   246,   247,   248,     0,
      46,  1012,     0,     0,     0,     0,     0,  1013,     0,     0,
       0,     0,     0,     0,     0,  1014,  1015,  1016,  1017,   928,
       0,     0,     0,     0,   929,     0,     0,   930,     0,   931,
    1018,   259,   932,     0,  1019,  1020,   933,  1021,  1022,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   934,   935,     3,   936,   937,   938,   939,
     940,     0,   941,   942,   943,   944,   945,   946,   947,   948,
     949,   950,   951,   952,   953,   954,   955,     0,  -605,     0,
     956,   957,   958,   959,     0,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,     0,     0,     0,     0,     0,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,   980,   981,   982,
       0,   983,   984,   985,   210,     0,  1032,   211,   212,   987,
     988,   214,     0,  1033,     0,   990,     0,   215,   216,  1034,
     217,  1035,     0,   218,   219,   993,   994,     0,   995,     0,
     222,   996,   997,   998,   226,   227,  1036,    34,  1000,  1001,
    1002,   232,  1037,  1004,  1005,  1006,  1007,    36,   238,     0,
       0,     0,  1038,   239,   240,  1009,  1010,     0,   243,     0,
    1011,     0,   245,   246,   247,   248,     0,    46,  1012,     0,
       0,     0,     0,     0,  1013,     0,     0,     0,     0,     0,
       0,     0,  1014,  1015,  1016,  1017,   928,     0,     0,     0,
       0,   929,     0,     0,   930,     0,   931,  1018,   259,   932,
       0,  1019,  1020,   933,  1021,  1022,   107,     0,     0,  -450,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     934,   935,     3,   936,   937,   938,   939,   940,     0,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   954,   955,     0,     0,     0,   956,   957,   958,
     959,     0,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,     0,     0,     0,     0,     0,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   979,   980,   981,   982,     0,   983,   984,
     985,   210,     0,  1032,   211,   212,   987,   988,   214,     0,
    1033,     0,   990,     0,   215,   216,  1034,   217,  1035,     0,
     218,   219,   993,   994,     0,   995,     0,   222,   996,   997,
     998,   226,   227,  1036,    34,  1000,  1001,  1002,   232,  1037,
    1004,  1005,  1006,  1007,    36,   238,     0,     0,     0,  1038,
     239,   240,  1009,  1010,     0,   243,     0,  1011,     0,   245,
     246,   247,   248,     0,    46,  1012,     0,     0,     0,     0,
       0,  1013,     0,     0,     0,     0,     0,     0,     0,  1014,
    1015,  1016,  1017,   928,     0,     0,     0,     0,   929,     0,
       0,   930,     0,   931,  1018,   259,   932,     0,  1019,  1020,
     933,  1021,  1022,   107,     0,     0,     0,     0,     0,     0,
       0,     0,  1449,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   934,   935,     3,
     936,   937,   938,   939,   940,     0,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,     0,     0,     0,   956,   957,   958,   959,     0,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,     0,     0,
       0,     0,     0,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,   980,   981,   982,     0,   983,   984,   985,   210,     0,
    1032,   211,   212,   987,   988,   214,     0,  1033,     0,   990,
       0,   215,   216,  1034,   217,  1035,     0,   218,   219,   993,
     994,     0,   995,     0,   222,   996,   997,   998,   226,   227,
    1036,    34,  1000,  1001,  1002,   232,  1037,  1004,  1005,  1006,
    1007,    36,   238,     0,     0,     0,  1038,   239,   240,  1009,
    1010,     0,   243,     0,  1011,     0,   245,   246,   247,   248,
       0,    46,  1012,     0,     0,     0,     0,     0,  1013,     0,
       0,     0,     0,     0,     0,     0,  1014,  1015,  1016,  1017,
     928,     0,     0,     0,     0,   929,     0,     0,   930,     0,
     931,  1018,   259,   932,     0,  1019,  1020,   933,  1021,  1022,
     107,     0,     0,     0,     0,     0,     0,     0,     0,  1458,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   934,   935,     3,   936,   937,   938,
     939,   940,     0,   941,   942,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,   954,   955,     0,     0,
       0,   956,   957,   958,   959,     0,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,     0,     0,     0,     0,     0,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   979,   980,   981,
     982,     0,   983,   984,   985,   210,     0,  1032,   211,   212,
     987,   988,   214,     0,  1033,     0,   990,     0,   215,   216,
    1034,   217,  1035,     0,   218,   219,   993,   994,     0,   995,
       0,   222,   996,   997,   998,   226,   227,  1036,    34,  1000,
    1001,  1002,   232,  1037,  1004,  1005,  1006,  1007,    36,   238,
       0,     0,     0,  1038,   239,   240,  1009,  1010,     0,   243,
       0,  1011,     0,   245,   246,   247,   248,     0,    46,  1012,
       0,     0,     0,     0,     0,  1013,     0,     0,     0,     0,
       0,     0,     0,  1014,  1015,  1016,  1017,   928,     0,     0,
       0,     0,   929,     0,     0,   930,     0,   931,  1018,   259,
     932,     0,  1019,  1020,   933,  1021,  1022,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   934,   935,     3,   936,   937,   938,   939,   940,     0,
     941,   942,   943,   944,   945,   946,   947,   948,   949,   950,
     951,   952,   953,   954,   955,     0,     0,     0,   956,   957,
     958,   959,     0,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,     0,     0,     0,     0,     0,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,   980,   981,   982,     0,   983,
     984,   985,   210,     0,  1032,   211,   212,   987,   988,   214,
       0,  1033,     0,   990,     0,   215,   216,  1034,   217,  1035,
       0,   218,   219,   993,   994,     0,   995,     0,   222,   996,
     997,   998,   226,   227,  1036,    34,  1000,  1001,  1002,   232,
    1037,  1004,  1005,  1006,  1007,    36,   238,     0,     0,     0,
    1038,   239,   240,  1009,  1010,     0,   243,     0,  1011,     0,
     245,   246,   247,   248,     0,    46,  1012,     0,     0,     0,
       0,     0,  1013,     0,     0,     0,     0,     0,     0,     0,
    1014,  1015,  1016,  1017,   928,     0,     0,     0,     0,   929,
       0,     0,   930,     0,   931,  1018,   259,   932,     0,  1019,
    1020,   933,  1021,  1022,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   934,   935,
       3,   936,   937,   938,   939,   940,     0,   941,   942,   943,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,     0,     0,     0,   956,   957,   958,   959,     0,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,     0,
       0,     0,     0,     0,  1545,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   979,   980,   981,   982,     0,   983,   984,   985,  1546,
       0,  1032,   211,  1547,   987,   988,   214,     0,  1033,     0,
     990,     0,  1548,   216,  1034,  1549,  1035,     0,  1550,   219,
     993,   994,     0,   995,     0,   222,   996,   997,   998,  1551,
    1552,  1036,    34,  1000,  1001,  1002,  1553,  1037,  1004,  1005,
    1006,  1007,    36,  1554,     0,     0,     0,  1038,  1555,  1556,
    1009,  1010,     0,  1557,     0,  1011,     0,  1558,  1559,  1560,
     248,     0,    46,  1012,     0,     0,     0,     0,     0,  1013,
       0,     0,     0,     0,     0,     0,     0,  1014,  1015,  1016,
    1017,   928,     0,     0,     0,     0,   929,     0,     0,   930,
       0,   931,  1018,  1561,   932,     0,  1019,  1020,   933,  1021,
    1022,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   934,   935,     3,   936,   937,
     938,   939,   940,     0,   941,   942,   943,   944,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,   955,     0,
       0,     0,   956,   957,   958,   959,     0,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,     0,     0,     0,     0,
       0,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,   980,
     981,   982,     0,   983,   984,   985,   210,     0,  1032,   211,
     212,   987,   988,   214,     0,  1033,     0,   990,     0,   215,
     216,  1034,   217,  1035,     0,   218,   219,   993,   994,     0,
     995,     0,   222,   996,   997,   998,   226,   227,  1036,    34,
    1000,  1001,  1002,   232,  1037,  1004,  1005,  1006,  1007,    36,
     238,     0,     0,     0,  1038,   239,   240,  1009,  1010,     0,
     243,     0,  1011,     0,   245,   246,   247,   248,     0,    46,
    1687,     0,     0,     0,     0,     0,  1013,     0,     0,     0,
       0,     0,     0,     0,  1014,  1015,  1016,  1017,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1018,
     259,     0,     0,  1019,  1020,   276,  1021,  1022,   107,     0,
     277,   278,     0,   279,     0,   280,     0,     0,   281,   282,
       0,     0,   283,   284,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   859,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -477,     2,
    1244,     3,     0,     4,     5,     6,     0,  1245,     0,  1246,
    1247,     0,     0,     0,  1248,     0,     0,     0,  1249,  1250,
       0,     0,  1251,     0,     7,     0,     0,  -477,     0,  1252,
       0,  -477,     0,  -477,  -477,     0,  -477,  -477,  1253,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1254,
       0,     0,     0,     0,     0,     8,   285,     9,    10,    11,
     286,   287,   288,   289,    12,     0,     0,    13,    14,     0,
      15,   860,   861,    17,   862,     0,    18,     0,     0,    19,
       0,   863,    20,   864,    21,   865,    23,     0,   866,    24,
     867,    25,     0,    26,     0,    27,    28,    29,    30,    31,
     868,    32,     0,   869,     0,   870,   871,   872,     0,     0,
      33,     0,   873,    34,     0,     0,     0,    35,   874,     0,
       0,   371,     0,    36,     0,    37,     0,   875,    38,    39,
       0,   290,   876,    40,    41,   877,     0,    42,    43,    44,
      45,     0,     0,    46,     0,     0,     0,     0,     0,     0,
     291,   292,   878,    47,     0,    48,   293,   294,   879,    49,
       0,     0,   295,    50,   118,     0,    51,   880,   881,     0,
      53,     0,    54,     0,     0,    55,    56,     0,   296,   297,
     298,   299,   882,   276,  1231,  1232,     0,     0,   277,   278,
       0,   279,     0,   280,     0,  1295,   281,   282,  1233,     0,
     283,   284,     0,     0,     0,     0,     0,     0,     0,     0,
    1235,     0,   859,     0,  1236,     0,     0,  1237,     0,     0,
       0,     0,  1238,     0,     0,     0,     0,     2,     0,     3,
       0,     4,     5,     6,     0,  1170,     0,     0,  1172,  1173,
    1174,     0,     0,     0,     0,     0,  1196,     0,  1199,  1239,
       0,     0,     7,  1206,  1207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1213,     0,  1215,  1216,
    1217,     0,     0,     0,  1394,     0,  1240,     0,  1241,     0,
       0,     0,     0,     8,   285,     9,    10,    11,   286,   287,
     288,   289,    12,     0,     0,    13,    14,     0,    15,   860,
     861,    17,   862,     0,    18,     0,     0,    19,     0,   863,
      20,   864,    21,   865,    23,     0,   866,    24,   867,    25,
       0,    26,     0,    27,    28,    29,    30,    31,   868,    32,
       0,   869,     0,   870,   871,   872,     0,     0,    33,     0,
     873,    34,     0,     0,     0,    35,   874,     0,     0,   371,
       0,    36,     0,    37,     0,   875,    38,    39,     0,   290,
     876,    40,    41,   877,     0,    42,    43,    44,    45,  1395,
       0,    46,  1243,     0,     0,     0,     0,     0,   291,   292,
     878,    47,     0,    48,   293,   294,   879,    49,     0,     0,
     295,    50,   118,     0,    51,   880,     0,     0,    53,  1446,
      54,     0,     0,    55,    56,     0,   296,   297,   298,   299,
     882,  1105,     0,     0,     0,     0,   929,     0,     0,   930,
       0,   931,     0,     0,   932,     0,     0,     0,   933,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1106,  1107,     3,  1108,  1109,
    1110,  1111,  1112,     0,   941,   942,   943,   944,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,   955,     0,
       0,     0,   956,   957,   958,   959,     0,   960,   961,   962,
     963,   964,   965,   966,   967,  1113,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1114,  1115,
    1116,  1117,     0,  1118,  1119,  1120,     0,     0,  1121,     0,
       0,  1122,  1123,     0,     0,  1124,     0,  1125,     0,     0,
       0,  1126,     0,  1127,     0,     0,     0,  1128,  1129,     0,
    1130,     0,     0,  1131,  1132,  1133,     0,     0,  1134,    34,
    1135,  1136,  1137,     0,  1138,  1139,  1140,  1141,  1142,    36,
       0,     0,     0,     0,  1143,     0,     0,  1144,  1145,     0,
       0,     0,  1146,     0,     0,     0,     0,     0,     0,    46,
    1012,     0,     0,     0,     0,     0,  1013,     0,     0,     0,
       0,     0,     0,   928,  1147,  1148,  1149,  1150,   929,     0,
       0,   930,     0,   931,     0,     0,   932,     0,     0,  1018,
     933,     0,     0,  1019,  1020,     0,  1021,  1022,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1106,  1107,     3,
    1108,  1109,  1110,  1111,  1112,     0,   941,   942,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,     0,     0,     0,   956,   957,   958,   959,     0,   960,
     961,   962,   963,   964,   965,   966,   967,  1113,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1114,  1115,  1116,  1117,     0,  1118,  1119,  1120,     0,     0,
    1121,     0,     0,  1122,  1123,     0,     0,  1124,     0,  1125,
       0,     0,     0,  1126,     0,  1127,     0,     0,     0,  1128,
    1129,     0,  1130,     0,     0,  1131,  1132,  1133,     0,     0,
    1134,    34,  1135,  1136,  1137,     0,  1138,  1139,  1140,  1141,
    1142,    36,     0,     0,     0,     0,  1143,     0,     0,  1144,
    1145,     0,     0,     0,  1146,     0,     0,     0,     0,     0,
       0,    46,  1012,     0,     0,     0,     0,     0,  1013,     0,
       0,     0,     0,     0,     0,  1105,  1147,  1148,  1149,  1150,
     929,     0,     0,   930,     0,   931,     0,     0,   932,     0,
       0,  1018,   933,     0,     0,  1019,  1020,     0,  1021,  1022,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1106,
    1107,     3,  1108,  1109,  1110,  1111,  1112,     0,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,     0,   952,
       0,   954,   955,     0,     0,     0,   956,   957,     0,     0,
       0,   960,   961,   962,   963,   964,   965,   966,   967,  1113,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1114,  1115,  1116,  1117,     0,  1118,  1119,  1120,
       0,     0,  1121,     0,     0,  1122,  1123,     0,     0,  1124,
       0,  1125,     0,     0,     0,  1126,     0,  1127,     0,     0,
       0,  1128,  1129,     0,  1130,     0,     0,  1131,  1132,  1133,
       0,     0,  1134,    34,  1135,  1136,  1137,     0,  1138,  1139,
    1140,  1141,  1142,    36,     0,     0,     0,     0,  1143,     0,
       0,  1144,  1145,     0,     0,     0,  1146,     0,     0,     0,
       0,     0,     0,    46,  1012,     0,     0,     0,     0,     0,
    1013,     0,     0,     0,     0,     0,     0,   276,  1147,  1148,
    1149,  1150,   277,   278,     0,   279,     0,   280,     0,     0,
     281,   282,     0,  1018,   283,   284,     0,  1019,  1020,     0,
    1021,  1022,   107,     0,     0,  1231,  1232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1233,
       0,     2,     0,     3,     0,     4,     5,     6,     0,  1275,
       0,  1235,     0,     0,     0,  1236,     0,     0,  1237,     0,
       0,     0,     0,  1238,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1239,     0,     0,     0,     0,     0,     0,     8,   285,     9,
      10,    11,   286,   287,   288,   289,    12,     0,     0,    13,
      14,     0,    15,     0,    16,    17,     0,  1240,    18,  1241,
       0,    19,     0,     0,    20,     0,    21,    22,    23,     0,
       0,    24,     0,    25,     0,    26,     0,    27,    28,    29,
      30,    31,     0,    32,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,    34,     0,     0,     0,    35,
       0,     0,     0,     0,     0,    36,     0,    37,     0,     0,
      38,    39,     0,   290,     0,    40,    41,     0,     0,    42,
      43,    44,    45,     0,     0,    46,     0,     0,     0,     0,
       0,     0,   291,   292,     0,    47,     0,    48,   293,   294,
       0,    49,     0,     0,   295,    50,     0,     0,    51,    52,
    1242,     0,    53,  1243,    54,  1231,  1232,    55,    56,     0,
     296,   297,   298,   299,   384,   276,  1295,     0,     0,  1233,
     277,   278,     0,   279,     0,   280,     0,     0,   281,   282,
       0,  1235,   283,   284,     0,  1236,     0,     0,  1237,     0,
       0,     0,     0,  1238,   859,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     0,     4,     5,     6,     0,     0,   276,     0,
    1239,     0,     0,   277,   278,     0,   279,     0,   280,     0,
       0,   281,   282,     0,     0,   283,   284,     0,     0,     0,
     725,     0,     0,     0,     0,     0,     0,  1240,     0,  1241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1231,  1232,   285,     0,  1311,     0,
     286,   287,   288,   289,     0,     0,     0,     0,  1233,     0,
       0,   860,   861,    17,   862,     0,     0,     0,     0,    19,
    1235,   863,    20,   864,  1236,   865,    23,  1237,   866,    24,
     867,    25,  1238,     0,     0,    27,     0,    29,     0,     0,
     868,    32,     0,   869,     0,   870,   871,   872,     0,   285,
       0,     0,   873,   286,   287,   288,   289,     0,   874,  1239,
       0,     0,     0,     0,     0,     0,     0,   875,    38,     0,
    1242,   290,   876,  1243,     0,   877,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1240,     0,  1241,     0,
     291,   292,   878,     0,     0,   276,   293,   294,   879,    49,
     277,   278,   295,   279,   118,   280,     0,    90,   281,   282,
       0,     0,   283,   284,     0,     0,     0,     0,   296,   297,
     298,   299,   727,     0,   290,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,   291,   292,     0,     0,     0,     0,   293,
     294,     0,     0,     0,     0,   295,     0,   583,   726,     0,
      90,     0,     0,     0,     7,     0,     0,     0,     0,     0,
       0,   296,   297,   298,   299,   727,     0,     0,     0,  1242,
       0,     0,  1243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,   285,     9,     0,    11,
     286,   287,   288,   289,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,     0,    30,    31,
       0,   276,     0,     0,     0,     0,   277,   278,     0,   279,
      33,   280,     0,    34,   281,   282,     0,    35,   283,   284,
       0,     0,     0,    36,     0,    37,     0,     0,     0,    39,
       0,   290,     0,    40,    41,     0,     0,    42,    43,    44,
      45,     0,     0,    46,     0,     0,     0,     0,     0,     0,
     291,   292,     0,    47,     0,    48,   293,   294,     0,     0,
       0,     0,   295,    50,     0,     0,    51,    52,     0,     0,
      53,     0,    54,     0,     0,    55,    56,     0,   296,   297,
     298,   299,   384,   276,  1231,  1232,     0,     0,   277,   278,
       0,   279,     0,   280,     0,  1492,   281,   282,  1233,     0,
     283,   284,   285,     0,     0,     0,   286,   287,   288,   289,
    1235,     0,     0,     0,  1236,     0,     0,  1237,     0,     0,
       0,     0,  1238,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,   276,     0,     0,
       0,     0,   277,   278,     0,   279,     0,   280,     0,  1239,
     281,   282,   572,     0,   283,   284,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1240,   290,  1241,     0,
       0,  1231,  1232,     0,   285,     0,     0,    11,   286,   287,
     288,   289,    12,     0,     0,  1233,   291,   292,    15,     0,
       0,     0,   293,   294,     0,  1386,     0,  1235,   295,     0,
     583,  1236,     0,     0,  1237,     0,     0,     0,     0,  1238,
       0,     0,     0,     0,   296,   297,   298,   299,   300,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   285,     0,
       0,    34,   286,   287,   288,   289,  1239,   276,     0,     0,
       0,    36,   277,   278,     0,   279,     0,   280,     0,   290,
     281,   282,     0,     0,   283,   284,     0,     0,     0,  1242,
       0,    46,  1243,  1240,     0,  1241,  1069,     0,   291,   292,
       0,    47,     0,   573,   293,   294,     0,     0,     0,     0,
     295,     0,     0,     0,    51,     0,     0,     0,   574,     0,
       0,     0,     0,     0,   575,     0,   296,   297,   298,   299,
     384,   276,     0,   290,     0,     0,   277,   278,     0,   279,
       0,   280,     0,     0,   281,   282,     0,     0,   283,   284,
       0,     0,   291,   292,     0,     0,     0,     0,   293,   294,
       0,     0,     0,     0,   295,     0,   751,     0,   285,     0,
       0,     0,   286,   287,   288,   289,     0,     0,     0,     0,
     296,   297,   298,   299,   300,     0,  1242,     0,     0,  1243,
       0,     0,     0,     0,   276,     0,     0,     0,     0,   277,
     278,     0,   425,     0,   280,     0,     0,   281,   282,   276,
       0,   283,   284,     0,   277,   278,     0,   433,     0,   280,
       0,     0,   281,   282,     0,     0,   283,   284,     0,     0,
       0,     0,   285,     0,     0,     0,   286,   287,   288,   289,
       0,     0,     0,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   291,   292,     0,     0,     0,   276,   293,   294,
       0,     0,   277,   278,   295,   436,     0,   280,     0,     0,
     281,   282,     0,     0,   283,   284,     0,     0,     0,     0,
     296,   297,   298,   299,   300,   285,     0,     0,     0,   286,
     287,   288,   289,     0,     0,     0,     0,   290,     0,     0,
     285,     0,     0,     0,   286,   287,   288,   289,     0,     0,
       0,     0,     0,     0,     0,     0,   291,   292,     0,     0,
       0,     0,   293,   294,     0,     0,     0,     0,   295,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   296,   297,   298,   299,   300,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   285,     0,
     290,     0,   286,   287,   288,   289,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   290,     0,     0,     0,   291,
     292,     0,     0,     0,     0,   293,   294,     0,     0,     0,
       0,   295,     0,     0,   291,   292,     0,     0,     0,     0,
     293,   294,     0,     0,     0,     0,   295,   296,   297,   298,
     299,   300,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   296,   297,   298,   299,   300,     0,     0,   276,
       0,     0,     0,   290,   277,   278,     0,   487,     0,   280,
       0,     0,   281,   282,     0,     0,   283,   284,     0,     0,
       0,     0,   291,   292,     0,     0,     0,     0,   293,   294,
       0,     0,     0,     0,   295,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1231,  1232,     0,     0,     0,
     296,   297,   298,   299,   300,   276,  1231,  1232,     0,  1233,
     277,   278,     0,   490,     0,   280,     0,     0,   281,   282,
    1233,  1235,   283,   284,     0,  1236,     0,     0,  1237,     0,
    1440,     0,  1235,  1238,     0,     0,  1236,  1231,  1232,  1237,
       0,     0,     0,     0,  1238,     0,     0,     0,     0,     0,
     285,  1233,     0,     0,   286,   287,   288,   289,     0,     0,
    1239,  1455,     0,  1235,     0,     0,     0,  1236,     0,     0,
    1237,  1239,     0,     0,     0,  1238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1240,     0,  1241,
       0,     0,     0,     0,     0,     0,     0,     0,  1240,     0,
    1241,     0,  1239,     0,     0,     0,   285,     0,     0,     0,
     286,   287,   288,   289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1360,   290,  1361,     0,     0,  1240,
       0,  1241,     0,     0,     0,  1453,     0,     0,     0,     0,
       0,     0,     0,     0,   291,   292,     0,     0,     0,     0,
     293,   294,     0,     0,     0,     0,   295,     0,     0,     0,
    1106,  1107,     3,  1108,  1109,  1110,  1111,  1112,     0,     0,
       0,     0,   296,   297,   298,   299,   300,     0,     0,     0,
    1242,   290,     0,  1243,     0,     0,     0,     0,     0,     0,
       0,  1242,     0,     0,  1243,     0,     0,     0,     0,     0,
     291,   292,     0,     0,     0,     0,   293,   294,     0,     0,
       0,     0,   295,     0,     0,     0,  1175,     0,     0,     0,
       0,     0,  1242,     0,     0,  1243,     0,     0,   296,   297,
     298,   299,   300,  1114,  1115,  1116,  1117,     0,  1118,  1119,
    1120,  1176,     0,  1121,     0,  1177,  1122,  1123,     0,     0,
    1124,     0,  1125,     0,  1178,     0,  1126,  1179,  1127,     0,
    1180,     0,  1128,  1129,     0,  1130,     0,     0,  1131,  1132,
    1133,  1181,  1182,  1134,    34,  1135,  1136,  1137,  1183,  1138,
    1139,  1140,  1141,  1142,    36,  1184,     0,     0,     0,  1143,
    1185,  1186,     0,  1145,     0,  1187,     0,  1146,     0,  1188,
    1189,  1190,     0,     0,    46,     0,     0,     0,  1360,     0,
    1361,     0,     0,     0,     0,     0,     0,     0,     0,  1147,
    1148,  1149,  1150,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1191,     0,     0,     0,     0,
       0,     0,     0,   107,  1106,  1107,     3,  1108,  1109,  1110,
    1111,  1112,  -690,     0,  -690,     0,  -690,  -690,     0,  -690,
       0,  -690,     0,  -690,  -690,     0,     0,     0,  -690,     0,
    -690,     0,  -690,  -690,     0,     0,  -690,     0,  -817,     0,
    -690,  -690,  -690,  -690,     0,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,     0,  -690,     0,     0,     0,     0,     0,
       0,     0,     0,  -690,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1114,  1115,  1116,
    1117,  -690,  1118,  1119,  1120,     0,     0,  1121,     0,     0,
    1122,  1123,     0,     0,  1124,     0,  1125,     0,     0,     0,
    1126,     0,  1127,     0,     0,     0,  1128,  1129,  -690,  1130,
    -690,     0,  1131,  1132,  1133,  1360,     0,  1134,    34,  1135,
    1136,  1137,     0,  1138,  1139,  1140,  1141,  1142,    36,     0,
       0,     0,     0,  1143,     0,     0,     0,  1145,     0,     0,
       0,  1146,     0,     0,     0,     0,     0,     0,    46,     0,
       0,  1106,  1107,     3,  1108,  1109,  1110,  1111,  1112,     0,
       0,     0,     0,  1147,  1148,  1149,  1150,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   388,   389,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -690,  -690,     0,     0,  -690,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,  1114,  1115,  1116,  1117,     0,  1118,
    1119,  1120,     0,     0,  1121,     0,     0,  1122,  1123,     0,
       0,  1124,     0,  1125,     0,     0,     7,  1126,     0,  1127,
       0,     0,     0,  1128,  1129,     0,  1130,     0,     0,  1131,
    1132,  1133,     0,     0,  1134,    34,  1135,  1136,  1137,     0,
    1138,  1139,  1140,  1141,  1142,    36,     0,     8,     0,     9,
    1143,    11,     0,     0,  1145,     0,    12,     0,  1146,    13,
      14,     0,    15,     0,     0,    46,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
    1147,  1148,  1149,  1150,     0,    26,     0,     0,    28,     0,
      30,    31,     0,     0,     0,   388,   735,     0,     0,     0,
       0,     0,    33,     0,   107,    34,     0,     0,     0,    35,
       0,     0,     0,     0,     0,    36,     0,    37,     0,     0,
       0,    39,     0,     0,     0,    40,    41,     0,     0,    42,
      43,    44,    45,     3,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    48,     0,     0,
       0,     0,  1231,  1232,     0,    50,     7,     0,    51,    52,
       0,     0,    53,     0,    54,     0,  1233,    55,    56,     0,
       0,     0,     0,     0,   390,     0,  1533,     0,  1235,     0,
       0,     0,  1236,     0,     0,  1237,     0,     8,     0,     9,
    1238,    11,     0,     0,     0,     0,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,    21,  1239,     0,     0,
       0,   388,   735,     0,     0,    26,     0,     0,    28,     0,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,  1240,    34,  1241,     0,     0,    35,
       0,     0,     0,     0,     0,    36,     0,    37,     0,     3,
       0,    39,     0,     0,     0,    40,    41,     0,     0,    42,
      43,    44,    45,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     7,     0,     0,    47,     0,    48,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,    51,    52,
       0,     0,    53,     0,    54,     0,     0,    55,    56,     0,
       0,     0,     0,     8,   390,     9,     0,    11,     0,     0,
       0,     0,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     0,     0,    18,     0,     0,  1242,     0,     0,
    1243,     0,    21,     0,     0,     0,     0,   388,   838,     0,
       0,    26,     0,     0,    28,     0,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,    34,     0,     0,     0,    35,     0,     0,     0,     0,
       0,    36,     0,    37,     0,     3,     0,    39,     0,     0,
       0,    40,    41,     0,     0,    42,    43,    44,    45,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     7,     0,
       0,    47,     0,    48,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,     0,    53,     0,
      54,     0,     0,    55,    56,     0,     0,     0,     0,     8,
     107,     9,     0,    11,     0,     0,     0,     0,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,   388,     0,     0,     0,    26,     0,     0,
      28,     0,    30,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,    34,     0,     0,
       0,    35,     0,     0,     0,     0,     0,    36,     0,    37,
       0,     3,     0,    39,     0,     0,     0,    40,    41,     0,
       0,    42,    43,    44,    45,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     7,     0,     0,    47,     0,    48,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
      51,    52,     0,     0,    53,     0,    54,     0,     0,    55,
      56,     0,     0,     0,     0,     8,   107,     9,     0,    11,
       0,     0,     0,     0,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,    28,     0,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,    34,     0,     0,     0,    35,     0,     0,
       0,     0,     0,    36,     0,    37,     0,     0,     0,    39,
       0,     0,     0,    40,    41,     0,     0,    42,    43,    44,
      45,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,    48,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,    51,    52,     0,     0,
      53,     0,    54,     0,     0,    55,    56,     0,     0,     0,
       0,   -13,   107,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,     0,   -13,   -13,   -13,   -13,   -13,   -13,     0,
     -13,   -13,   -13,     0,     0,   -13,   -13,     0,    -8,   -13,
     -13,     0,   -13,   -13,   -13,     0,   -13,   -13,     0,   -13,
     -13,   -13,   -13,   -13,     0,     0,     0,  -785,     0,     0,
       0,  -693,     0,  -693,     0,  -693,  -693,     0,  -693,     0,
    -693,     0,  -693,  -693,     0,     0,     0,  -693,     0,  -693,
    -785,  -693,  -693,     0,     0,  -693,     0,  -818,     0,  -693,
    -693,  -693,  -693,     0,  -693,  -693,  -693,  -693,  -693,  -693,
    -693,  -693,     0,  -693,     0,     0,     0,   -13,   -13,     0,
       0,  -785,  -693,  -785,     0,  -785,     0,     0,     0,     0,
    -785,     0,     0,  -785,  -785,     0,  -785,     0,     0,     0,
    -693,     0,  -785,     0,     0,     0,     0,     0,     0,     0,
    -785,     0,     0,     0,     0,     0,     0,     0,     0,  -785,
    1231,  1232,  -785,     0,  -785,  -785,     0,  -693,     0,  -693,
       0,     0,     0,     0,  1233,     0,  -785,     0,     0,  -785,
       0,     0,     0,  -785,     0,     0,  1235,     0,     0,  -785,
    1236,  -785,     0,  1237,     0,  -785,     0,     1,  1238,  -785,
    -785,     0,     0,  -785,  -785,  -785,  -785,     0,     0,  -785,
     -13,   -13,     2,   -13,     3,     0,     4,     5,     6,  -785,
       0,  -785,     0,     0,     0,  1239,     0,     0,     0,  -785,
     -13,     0,  -785,  -785,   -13,     0,  -785,     7,  -785,     0,
       0,  -785,  -785,     0,     0,     0,     0,     0,  -785,     0,
       0,  1537,  1240,     0,  1241,     0,     0,     0,     0,  -693,
    -693,     0,     0,  -693,     0,     0,     0,     0,     8,     0,
       9,    10,    11,     0,     0,     0,     0,    12,     0,     0,
      13,    14,     0,    15,     0,    16,    17,     0,     0,    18,
       0,     0,    19,     0,     0,    20,     0,    21,    22,    23,
       0,     0,    24,     0,    25,     0,    26,     0,    27,    28,
      29,    30,    31,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,    34,   369,     0,     0,
      35,     0,     0,     0,     0,     0,    36,     0,    37,     0,
       0,    38,    39,     0,     3,  1242,    40,    41,  1243,     0,
      42,    43,    44,    45,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     7,    48,     0,
       0,     0,    49,     0,     0,     0,    50,     0,     0,    51,
      52,     0,     0,    53,     0,    54,     0,     0,    55,    56,
       0,     0,     0,     0,     0,    57,     0,     0,     8,     0,
       9,   370,    11,     0,     0,     0,     0,    12,     0,     0,
      13,    14,     0,    15,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    28,
       0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,    34,     0,     0,     0,
      35,     0,     0,     0,   371,     0,    36,     0,    37,     0,
       0,     0,    39,     0,     0,     0,    40,    41,     0,     0,
      42,    43,    44,    45,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,    48,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,    51,
      52,     0,     0,    53,     0,    54,     0,     0,    55,    56,
       0,     0,  -697,     0,  -697,   107,  -697,  -697,     0,  -697,
       0,  -697,     0,  -697,  -697,     0,     0,     0,  -697,     0,
    -697,     0,  -697,  -697,     0,     0,  -697,     0,  -815,     0,
    -697,  -697,  -697,  -697,     0,  -697,  -697,  -697,  -697,  -697,
    -697,  -697,  -697,     0,  -697,     0,     0,     0,     0,     0,
       0,     0,  -698,  -697,  -698,     0,  -698,  -698,     0,  -698,
       0,  -698,     0,  -698,  -698,     0,     0,     0,  -698,     0,
    -698,  -697,  -698,  -698,     0,     0,  -698,     0,  -816,     0,
    -698,  -698,  -698,  -698,     0,  -698,  -698,  -698,  -698,  -698,
    -698,  -698,  -698,     0,  -698,     0,     0,     0,  -697,     0,
    -697,     0,  -715,  -698,  -715,     0,  -715,  -715,     0,  -715,
       0,  -715,     0,  -715,  -715,     0,     0,     0,  -715,     0,
    -715,  -698,  -715,  -715,     0,     0,  -715,     0,  -819,     0,
    -715,  -715,  -715,  -715,     0,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,     0,  -715,     0,     0,     0,  -698,     0,
    -698,  1231,  1232,  -715,     0,  1522,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1233,  1231,  1232,     0,     0,
    1526,  -715,     0,     0,     0,     0,     0,  1235,     0,     0,
    1233,  1236,     0,     0,  1237,     0,     0,     0,     0,  1238,
    -697,  -697,  1235,     0,  -697,     0,  1236,     0,  -715,  1237,
    -715,     0,     0,     0,  1238,     0,     0,     0,     0,  1231,
    1232,     0,     0,  1529,     0,     0,  1239,     0,     0,     0,
       0,     0,     0,  1233,  1231,  1232,     0,     0,  1534,     0,
       0,  1239,     0,     0,     0,  1235,     0,     0,  1233,  1236,
    -698,  -698,  1237,  1240,  -698,  1241,     0,  1238,     0,     0,
    1235,     0,     0,     0,  1236,  1231,  1232,  1237,  1240,     0,
    1241,     0,  1238,     0,     0,     0,  1231,  1232,     0,  1233,
       0,     0,     0,     0,  1239,     0,     0,  1565,     0,     0,
    1233,  1235,     0,     0,     0,  1236,     0,     0,  1237,  1239,
    -715,  -715,  1235,  1238,  -715,     0,  1236,  1231,  1232,  1237,
       0,  1240,     0,  1241,  1238,     0,     0,     0,  1231,  1232,
       0,  1233,     0,     0,     0,     0,  1240,     0,  1241,     0,
    1239,  1574,  1233,  1235,     0,     0,     0,  1236,     0,     0,
    1237,  1239,  1577,     0,  1235,  1238,  1242,     0,  1236,  1243,
       0,  1237,  1231,  1232,     0,     0,  1238,  1240,     0,  1241,
       0,  1242,     0,     0,  1243,     0,  1233,  1566,  1240,     0,
    1241,     0,  1239,     0,     0,     0,  1581,     0,  1235,     0,
       0,     0,  1236,  1239,     0,  1237,     0,     0,     0,     0,
    1238,     0,     0,     0,  1231,  1232,     0,     0,  1600,  1240,
       0,  1241,     0,     0,  1242,     0,     0,  1243,  1233,     0,
    1240,     0,  1241,     0,     0,     0,     0,  1239,     0,  1242,
    1235,     0,  1243,     0,  1236,  1231,  1232,  1237,     0,  1601,
       0,     0,  1238,     0,     0,     0,     0,     0,     0,  1233,
       0,     0,     0,     0,  1240,     0,  1241,     0,     0,     0,
    1242,  1235,     0,  1243,     0,  1236,     0,     0,  1237,  1239,
       0,  1242,     0,  1238,  1243,     0,     0,  1231,  1232,     0,
       0,  1603,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1233,     0,     0,     0,     0,  1240,     0,  1241,     0,
    1239,     0,  1242,  1235,     0,  1243,     0,  1236,  1231,  1232,
    1237,     0,  1604,  1242,     0,  1238,  1243,     0,     0,  1231,
    1232,     0,  1233,  1605,     0,     0,     0,  1240,     0,  1241,
       0,     0,     0,  1233,  1235,     0,     0,     0,  1236,     0,
       0,  1237,  1239,     0,     0,  1235,  1238,  1242,     0,  1236,
    1243,     0,  1237,     0,     0,     0,     0,  1238,     0,     0,
    1231,  1232,     0,     0,  1623,     0,     0,     0,     0,  1240,
       0,  1241,     0,  1239,  1233,     0,     0,  1231,  1232,     0,
       0,     0,     0,     0,  1239,     0,  1235,     0,  1624,  1242,
    1236,  1233,  1243,  1237,     0,     0,     0,     0,  1238,     0,
    1240,     0,  1241,  1235,     0,  1231,  1232,  1236,     0,  1625,
    1237,  1240,     0,  1241,     0,  1238,     0,     0,     0,  1233,
    1242,     0,     0,  1243,     0,  1239,     0,     0,     0,     0,
       0,  1235,     0,     0,     0,  1236,     0,     0,  1237,     0,
       0,     0,  1239,  1238,     0,     0,     0,     0,     0,  1231,
    1232,     0,  1240,     0,  1241,     0,     0,     0,     0,     0,
       0,     0,  1242,  1233,     0,  1243,     0,     0,     0,  1240,
    1239,  1241,     0,  1626,     0,  1235,     0,     0,     0,  1236,
       0,     0,  1237,     0,     0,     0,     0,  1238,     0,     0,
       0,  1231,  1232,  1242,     0,  1627,  1243,  1240,     0,  1241,
       0,     0,  1231,  1232,  1242,  1233,  1628,  1243,     0,     0,
       0,     0,     0,     0,  1239,     0,  1233,  1235,     0,     0,
       0,  1236,     0,     0,  1237,     0,     0,     0,  1235,  1238,
       0,     0,  1236,  1231,  1232,  1237,     0,  1630,     0,     0,
    1238,  1240,     0,  1241,     0,  1242,     0,  1233,  1243,     0,
       0,     0,     0,     0,     0,     0,  1239,     0,     0,  1235,
       0,     0,  1242,  1236,     0,  1243,  1237,  1239,     0,     0,
       0,  1238,     0,  1231,  1232,     0,     0,     0,     0,     0,
       0,     0,     0,  1240,  1631,  1241,     0,  1233,     0,     0,
    1242,  1231,  1232,  1243,  1240,     0,  1241,     0,  1239,  1235,
       0,     0,  1632,  1236,     0,  1233,  1237,     0,     0,  1231,
    1232,  1238,     0,  1633,     0,     0,     0,  1235,     0,  1231,
    1232,  1236,     0,  1233,  1237,  1240,     0,  1241,     0,  1238,
       0,     0,     0,  1233,  1242,  1235,     0,  1243,  1239,  1236,
    1231,  1232,  1237,     0,  1708,  1235,     0,  1238,     0,  1236,
       0,     0,  1237,     0,  1233,     0,  1239,  1238,     0,     0,
       0,     0,     0,     0,     0,  1240,  1235,  1241,     0,     0,
    1236,     0,     0,  1237,  1239,     0,  1242,     0,  1238,  1243,
       0,     0,     0,  1240,  1239,  1241,     0,  1242,     0,     0,
    1243,     0,     0,     0,     0,     0,     0,     3,  1231,  1232,
       0,  1240,  1709,  1241,     0,  1239,     0,     0,     0,     0,
    1684,  1240,  1233,  1241,     0,     0,  1231,  1232,  1242,     0,
     572,  1243,     3,     0,  1235,     0,     0,  1710,  1236,     0,
    1233,  1237,  1240,     0,  1241,     0,  1238,     0,     0,     0,
       0,     0,  1235,     0,     0,   572,  1236,     0,     0,  1237,
       0,     0,     0,     0,  1238,    11,     0,     0,  1242,     0,
      12,  1243,     0,  1239,     0,     0,    15,     0,     0,     0,
       0,     0,     0,  1231,  1232,     0,  1242,  1730,     0,  1243,
      11,  1239,     0,     0,     0,    12,     0,  1233,  1231,  1232,
    1240,    15,  1241,     0,  1242,     0,     0,  1243,     0,  1235,
       0,     0,  1233,  1236,  1242,     0,  1237,  1243,  1240,    34,
    1241,  1238,     0,     0,  1235,     0,     0,     0,  1236,    36,
       0,  1237,     0,     0,     0,  1242,  1238,     0,  1243,   855,
       0,     0,     0,     0,    34,     0,     0,     0,  1239,    46,
       0,     0,     0,     0,    36,     0,     0,     0,     0,    47,
       0,   573,     0,  1239,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,    46,  1240,   574,  1241,     0,     0,
       0,     0,   575,     0,    47,     0,   573,     0,   107,     0,
    1240,     0,  1241,  1242,     0,     0,  1243,    51,     0,     0,
       0,   574,     0,     0,     0,     0,     0,   575,     0,     0,
       0,  1242,     0,   107,  1243,     0,     2,   154,     3,   155,
       4,     5,     6,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1242,     0,
       0,  1243,   204,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1242,     0,     0,  1243,     0,     0,   205,
      17,   206,   207,     0,   208,   209,    19,   210,     0,    20,
     211,   212,   213,    23,   214,     0,    24,     0,    25,     0,
     215,   216,    27,   217,    29,     0,   218,   219,    32,   220,
       0,   221,     0,   222,   223,   224,   225,   226,   227,   228,
      34,   229,   230,   231,   232,   233,   234,   235,   236,   237,
      36,   238,     0,     0,     0,    38,   239,   240,   241,   242,
       0,   243,     0,   244,     0,   245,   246,   247,   248,     0,
      46,  1106,  1107,     3,  1108,  1109,  1110,  1111,  1112,     0,
       0,     0,     0,     0,     0,   255,    49,   256,   257,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1114,  1115,  1116,  1117,     0,  1118,
    1119,  1120,     0,     0,  1121,     0,     0,  1122,  1123,     0,
       0,  1124,     0,  1125,     0,     0,     0,  1126,     0,  1127,
       0,     0,     0,  1128,  1129,     0,  1130,     0,     0,  1131,
    1132,  1133,     0,   227,  1134,    34,  1135,  1136,  1137,     0,
    1138,  1139,  1140,  1141,  1142,    36,   238,     0,     0,     0,
    1143,     0,     0,     0,  1145,     0,     0,     0,  1146,     0,
       0,     0,     0,     0,     0,    46,  1106,  1107,     3,  1108,
    1109,  1110,  1111,  1112,     0,     0,     0,     0,     0,     0,
    1147,  1148,  1149,  1150,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1202,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1114,
    1115,  1116,  1117,     0,  1118,  1119,  1120,     0,     0,  1121,
       0,     0,  1122,  1123,     0,     0,  1124,     0,  1125,     0,
       0,     0,  1126,     0,  1127,     0,     0,     0,  1128,  1129,
       0,  1130,     0,     0,  1131,  1132,  1133,     0,   227,  1134,
      34,  1135,  1136,  1137,     0,  1138,  1139,  1140,  1141,  1142,
      36,   238,     0,     0,     0,  1143,     0,     0,     0,  1145,
       0,     0,     0,  1146,     0,     0,     0,     0,     0,     0,
      46,  1106,  1107,     3,  1108,  1109,  1110,  1111,  1112,     0,
       0,     0,     0,     0,     0,  1147,  1148,  1149,  1150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1339,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1114,  1115,  1116,  1117,     0,  1118,
    1119,  1120,     0,     0,  1121,     0,     0,  1122,  1123,     0,
       0,  1124,     0,  1125,     0,     0,     0,  1126,     0,  1127,
       0,     0,     0,  1128,  1129,     0,  1130,     0,     0,  1131,
    1132,  1133,     3,     0,  1134,    34,  1135,  1136,  1137,     0,
    1138,  1139,  1140,  1141,  1142,    36,     0,     0,     0,     0,
    1143,     0,     0,     0,  1145,     7,     0,     0,  1146,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1147,  1148,  1149,  1150,     0,     0,     8,     0,     9,     0,
      11,     0,     0,     0,     0,    12,     0,     0,    13,    14,
       0,    15,  1478,     0,   107,     0,     0,    18,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,   821,     0,     0,    26,     0,     0,    28,     0,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,    34,     0,     0,     0,    35,     0,
       0,     0,     0,     0,    36,     0,    37,     0,     3,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,    43,
      44,    45,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     7,     0,     0,    47,     0,    48,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
       0,    53,     0,    54,     0,     0,    55,    56,     0,     0,
       0,     0,     8,   107,     9,     0,    11,     0,     0,     0,
       0,    12,     0,     0,    13,    14,     0,    15,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    28,     0,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
      34,     0,     0,     0,    35,     0,     0,     0,     0,     0,
      36,     0,    37,     0,     3,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,    43,    44,    45,     0,     0,
      46,     0,     0,     0,     0,     0,     0,     7,     0,     0,
      47,     0,    48,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,    51,    52,     0,     0,    53,     0,    54,
       0,     0,    55,    56,     0,     0,     0,     0,     8,   107,
       9,     0,    11,     0,     0,     0,     0,    12,     0,     0,
      13,    14,     0,    15,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    28,
       0,    30,    31,     0,     0,     0,     0,     0,  1313,     0,
       0,     0,     0,    33,     0,     0,    34,     0,     0,     0,
      35,     0,     0,     0,     0,     0,    36,     0,    37,     0,
       0,     0,    39,     0,     0,     0,    40,    41,     0,  1175,
      42,    43,    44,    45,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,    48,     0,
       0,     0,     0,     0,  1176,     0,    50,     0,  1177,    51,
      52,  1314,     0,    53,     0,    54,     0,  1178,    55,    56,
    1179,     0,     0,  1180,     0,    57,     0,     0,     0,     0,
    1175,     0,     0,     0,  1181,  1182,     0,     0,     0,     0,
       0,  1183,     0,     0,     0,     0,     0,     0,  1184,     0,
       0,     0,     0,  1185,  1186,  1176,     0,     0,  1187,  1177,
       0,     0,  1188,  1189,  1190,  1315,     0,     0,  1178,     0,
       0,  1179,     0,     0,  1180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1181,  1182,     0,     0,     0,
       0,     0,  1183,     0,     0,     0,     0,     0,  1191,  1184,
       0,     0,     0,     0,  1185,  1186,     0,     0,     0,  1187,
       0,     0,     0,  1188,  1189,  1190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1191
};

static const yytype_int16 yycheck[] =
{
      28,   274,   815,    66,   414,    71,   104,   819,   819,     0,
       1,   294,    73,    41,   819,    43,  1194,  1051,  1299,   399,
     941,  1061,   748,  1063,  1064,   951,    74,   953,    63,   343,
      63,  1222,   958,  1358,   523,  1364,   941,    12,   321,   953,
     568,    12,   103,  1323,   958,  1325,  1326,   402,  1082,  1378,
      31,    14,    28,     0,     1,    12,    12,    12,   341,    12,
      12,    33,    14,  1254,    13,    25,    26,    95,    74,    60,
      98,  1509,    14,   101,    13,    40,    26,    26,   400,    47,
     928,   929,   429,   931,   932,   933,   114,   118,   325,    47,
      31,  1012,    31,    31,    31,     1,  1640,     9,    10,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     113,    23,    12,    60,    12,    62,    14,    64,    18,   139,
      12,    12,    22,    35,    71,    25,    26,    39,   109,   109,
      42,   532,   533,   121,   371,    47,   365,    41,   367,    43,
    1061,    14,    64,   796,     5,    12,   134,   141,    26,    96,
      64,     5,    99,    12,    60,   149,   103,   104,    56,   216,
      33,   149,    74,    12,    56,  1013,   108,  1711,   115,    17,
     117,   113,   203,    21,   231,    12,  1505,   119,    56,   167,
      41,    31,  1360,   497,   204,    28,  1467,    41,   677,   101,
      94,   103,   109,   115,   847,   117,   216,   191,    41,   202,
      43,   115,    14,   117,  1484,   225,    12,   735,   274,   229,
     230,   231,   323,   324,   213,   326,   327,   328,   159,    56,
     331,    33,    31,   161,   161,  1505,   198,    73,  1262,   197,
     211,   211,  1670,  1159,   589,   557,    12,   193,    14,   197,
       0,   216,   218,   214,     0,     1,   227,   227,   213,   204,
     278,   204,    95,   216,   214,    98,   231,  1105,   101,   216,
     202,   103,   214,  1297,   214,   214,   503,   589,   231,   591,
     225,    12,   225,   215,   231,   214,    74,   231,   806,  1200,
      56,  1610,   194,  1608,  1210,   197,   198,   688,  1209,   206,
     136,  1212,   142,    36,   211,  1200,    12,  1187,  1188,   294,
     529,    12,    45,   386,    60,   534,    62,  1212,   391,   159,
     227,   115,   360,   117,   214,    56,   166,   323,   324,   325,
     326,   327,   328,   564,   133,   331,   321,   274,   275,  1055,
    1610,  1221,   279,  1613,  1614,   341,  1257,   343,   399,   372,
      56,   696,   656,   832,   190,    56,   587,   103,   104,  1540,
     159,   386,   415,    12,   360,    12,   391,   166,   391,  1249,
    1250,   396,   282,  1284,   284,   371,     7,    12,  1258,   178,
     290,   432,   292,    14,  1295,   133,   133,   383,   108,   414,
    1661,   414,    17,   113,   706,   707,    21,   213,    29,   119,
     213,   713,  1672,   504,   505,   506,  1244,  1245,  1246,  1247,
    1248,   159,   159,  1251,  1252,  1253,    13,   142,   166,   166,
     330,  1451,   332,    20,  1448,   443,   444,   739,   798,   741,
     178,   178,   369,   803,   159,   213,  1460,    14,   375,   376,
     377,   166,     7,   380,   381,    31,    33,   279,    34,    14,
      20,   388,  1620,    36,    31,   493,    48,   113,    12,   396,
       9,    14,    45,    55,    29,   402,    13,   779,  1270,  1270,
     396,  1266,    12,    20,  1269,  1270,   402,   528,    31,  1395,
      33,   477,   202,   501,   502,   536,   524,   538,   425,    12,
    1328,  1395,   143,   430,   431,   215,   433,   493,  1299,   436,
     113,   152,   498,   511,   512,   513,   514,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   543,   522,   523,   524,   275,
     122,   527,   583,   279,    12,   323,   324,   325,   326,   327,
     328,   853,   194,   331,   213,    13,   202,   216,   566,  1573,
     487,   101,    20,   490,   113,   343,    28,   213,   150,    31,
     216,    10,   231,   586,   959,   583,  1590,   213,   905,   161,
     216,   908,   360,    31,   592,   231,    31,    13,   170,   213,
      13,    14,   216,   371,    20,   231,   440,    20,    12,   202,
      12,   445,  1508,   425,  1432,   383,    12,   231,   430,   431,
     213,   433,   539,   216,   436,     9,    13,   159,   545,   101,
     443,   444,   549,    20,   166,   207,   553,    10,   231,    34,
     474,   194,   710,    38,    31,    99,  1650,  1651,    43,    44,
      40,   159,   569,    20,   571,   114,   115,    34,   166,    13,
     903,    38,   388,   202,   695,    12,    43,    44,    40,   586,
     587,    20,   589,   213,   213,   487,   582,   216,   490,  1539,
     586,    13,    14,   589,   464,   465,   466,   467,   501,   502,
     693,    20,   231,   460,   461,   726,    12,  1557,  1558,   425,
     705,   677,   462,   463,   430,   431,   217,   433,    33,   477,
     436,  1571,   468,   469,   717,   507,   508,  1721,   786,   213,
     751,  1725,   509,   510,   217,   493,   213,   725,    13,   747,
     498,   515,   516,    13,   152,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   751,   522,   523,   524,  1648,   756,   527,
      13,   487,   738,    20,   490,   599,    20,   798,    13,   800,
     583,   747,   803,    20,    13,    13,   131,   694,  1674,   696,
     785,    13,    13,   138,   229,   790,   819,   790,   705,   144,
     696,   146,   229,   710,    13,   217,  1687,    33,    20,   705,
     776,    13,   800,    33,  1179,   894,   895,   896,   897,   898,
    1102,    31,  1187,  1188,   217,   846,   131,   815,   217,   217,
     175,   819,   177,   138,   217,   742,   743,   860,   959,   144,
      12,   146,   868,   864,   231,    13,   742,   743,   755,   842,
     757,   758,    12,   569,    28,   571,  1221,    20,    12,    12,
      33,    13,    20,    20,    20,    13,   832,    13,   819,    13,
     175,   587,   177,   780,    13,   218,    31,   903,   785,   786,
     787,    13,   870,   790,  1249,  1250,   793,    13,    13,   785,
     856,   787,     8,  1258,   790,    11,    13,   218,    13,    15,
     807,   217,   809,    19,   811,   217,     5,   217,    24,   217,
     214,    20,   819,   809,    30,   811,    14,    28,   742,   677,
      33,    37,   725,    31,    40,   369,    40,    31,   217,   836,
      46,   375,   376,   377,  1304,    34,   380,   381,    20,    38,
     836,    40,    41,    20,    43,    44,    40,    13,   751,    13,
      13,   218,    20,   756,    33,   757,   758,   213,   152,    31,
    1733,   868,    13,   217,   788,    13,    20,    13,    12,   217,
      13,    31,    13,    20,    31,    13,    12,    14,    13,    13,
     738,    13,    13,    33,   218,   809,   102,   220,    33,   747,
      12,    31,   170,   170,   710,   819,   903,   800,    12,   906,
      33,    31,    31,   154,   928,   929,   231,   931,   932,   933,
     218,    13,   193,    50,    12,    12,    12,   924,   776,    12,
      12,   928,   929,    12,   931,   932,   933,    12,   924,    12,
      12,   855,   222,  1059,    20,    12,    73,    31,    33,   755,
    1066,   757,   758,    31,    31,  1071,    12,   167,  1291,    33,
      13,   875,   959,    33,    33,   167,   218,    12,  1179,    27,
      13,    13,   196,    12,   780,    12,  1187,  1188,    12,    12,
     786,   108,    12,  1194,   832,   159,   113,   793,    34,   195,
      12,  1104,   119,    33,    12,    33,    12,   911,    33,  1013,
     914,   807,    12,    12,  1018,   539,    12,    12,   856,    40,
    1221,   545,    12,   819,    12,   549,  1013,   276,   277,   553,
     198,   280,   281,    20,   283,   198,    20,   198,    13,    33,
       9,    10,   291,    13,    33,   162,    72,    33,  1249,  1250,
      33,   220,   191,   161,    23,   172,   161,  1258,    14,    56,
      20,  1167,   198,   159,    33,    20,    35,   159,   159,    14,
      39,    13,  1059,    42,    13,   192,    13,    13,    47,  1066,
      26,    40,   100,    56,  1071,   202,   100,   204,    13,    20,
      31,   198,    12,    33,  1539,    33,    31,    13,   215,    13,
      13,  1105,   219,   159,  1549,    74,   159,  1094,   225,   131,
     906,    20,  1557,  1558,   231,   100,   138,    43,  1105,  1320,
      13,    13,   144,    40,   146,    40,  1571,   198,    40,    20,
    1443,    31,   101,    31,   103,    31,    31,    31,  1461,   161,
      12,   163,    31,    31,    31,   167,    31,    13,    13,    33,
      20,    20,  1056,   175,  1058,   177,  1469,    13,    20,  1360,
    1261,    13,  1268,  1266,  1365,    13,   100,  1270,  1072,    20,
     694,   100,    33,   231,    31,    13,    13,    13,    28,   220,
    1167,   218,    12,   214,    33,    13,    33,    13,    31,   143,
      13,   198,  1179,    20,   470,   472,    31,   475,  1266,   471,
    1187,  1188,  1270,   763,   473,   751,   800,  1194,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   194,   475,   914,   197,   847,
     788,   869,   906,  1266,  1221,  1266,   721,   582,   693,  1270,
    1244,  1245,  1246,  1247,  1248,  1291,   842,  1251,  1252,  1253,
     114,   569,   807,   388,   793,  1080,   275,  1244,  1245,  1246,
    1247,  1248,  1249,  1250,  1251,  1252,  1253,   497,  1299,   656,
     517,  1258,   131,   518,   520,   519,   861,   862,  1073,   138,
     865,  1268,  1583,  1270,  1695,   144,   527,   146,   873,  1697,
    1739,  1735,  1310,    14,   928,   522,  1432,  1396,  1094,  1543,
    1398,  1674,   161,  1510,   163,  1665,  1365,  1508,   167,  1510,
    1608,  1220,  1299,  1319,  1610,  1317,   175,     4,   177,  1318,
    1307,  1297,     9,  1614,  1328,    12,    13,    14,  1067,    50,
      17,  1307,  1492,  1320,    21,  1488,  1324,  1443,  1539,  1325,
    1268,  1328,   955,  1571,    -1,   930,    -1,  1453,  1549,    -1,
      -1,    -1,    73,   602,    -1,    -1,  1557,  1558,    -1,    -1,
      -1,    -1,  1266,  1469,    -1,    -1,  1270,    -1,    -1,    -1,
    1571,    -1,    -1,  1360,    -1,    -1,    -1,    -1,  1365,    -1,
       4,    -1,  1488,    -1,    -1,     9,  1492,   108,    12,    -1,
      14,    -1,   113,    17,    -1,  1299,  1300,    21,   119,    -1,
      -1,    -1,    -1,    -1,  1308,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   999,  1461,    -1,    -1,    -1,  1620,
      -1,    -1,   109,    -1,    -1,    -1,    -1,  1012,  1432,    -1,
      -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    50,
      -1,   162,    -1,    -1,    -1,  1432,    -1,    -1,    23,    -1,
      -1,   172,   139,    -1,    -1,    -1,  1443,    -1,    33,    -1,
      35,  1046,    73,    -1,    39,    -1,  1453,    42,    -1,    -1,
      -1,   192,    47,  1674,  1270,    -1,    -1,  1062,    -1,    -1,
    1065,   202,  1469,   204,    -1,   109,    -1,    -1,  1591,    -1,
      -1,    -1,    -1,   180,   215,    -1,    -1,   108,   219,    74,
      -1,  1488,   113,  1299,   225,  1492,    -1,    -1,   119,    -1,
     231,    -1,   199,   200,   763,   139,    -1,   204,    -1,    -1,
      -1,  1508,    -1,  1510,   211,    -1,   101,    -1,   103,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
     227,    -1,   229,   230,   231,    -1,    -1,    -1,    -1,    -1,
       7,   162,  1539,    -1,    -1,    -1,   180,    14,    -1,    16,
      17,   172,  1549,  1467,    21,    -1,    -1,    -1,    25,    26,
    1557,  1558,    29,    -1,    -1,   199,   200,    -1,    -1,    36,
     204,   192,    -1,    -1,  1571,    -1,  1171,   211,    45,    -1,
     201,   202,   216,   204,    -1,   109,    -1,    -1,    -1,    56,
      -1,   225,  1589,   227,   215,   229,   230,   231,   219,    -1,
      -1,    -1,  1658,    -1,   225,    -1,    -1,    -1,  1719,   194,
     231,    -1,   197,  1208,    -1,   139,  1211,    -1,    -1,  1214,
      -1,    -1,    -1,  1620,  1219,  1220,    -1,  1222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1231,  1232,  1233,    50,
    1235,  1236,  1237,  1238,  1239,  1240,  1241,  1242,  1243,    -1,
      -1,    -1,     9,    10,    -1,  1733,    -1,    -1,    -1,  1254,
      -1,  1256,    73,    -1,  1259,    -1,    23,    -1,    -1,  1264,
    1726,    -1,  1586,    -1,    -1,    -1,    33,  1674,    35,  1274,
     204,    -1,    39,  1739,    -1,    42,    -1,   211,    -1,    -1,
      47,    -1,   216,  1288,    -1,    -1,    -1,   108,    -1,    -1,
      -1,   225,   113,   227,    -1,   229,   230,   231,   119,    -1,
      -1,    -1,    -1,    -1,    -1,  1310,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1333,  1334,
      -1,  1336,  1337,  1338,   101,    -1,   103,  1661,    -1,    -1,
      -1,   162,     4,    -1,    -1,    -1,    -1,     9,    10,    -1,
      12,   172,    14,    -1,  1359,    17,    18,    -1,    -1,    21,
      22,   182,  1367,  1368,  1369,  1370,    -1,  1372,  1373,  1374,
    1375,   192,    -1,  1589,    -1,    -1,  1381,    -1,  1383,  1384,
    1385,   202,    -1,   204,    -1,    -1,    -1,    -1,    50,    -1,
    1395,    -1,    -1,    -1,   215,    12,    -1,    -1,   219,    -1,
    1658,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
     231,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,
     197,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,    -1,   108,   109,   110,   111,
     112,   113,    -1,    -1,   116,   117,    73,   119,    -1,    50,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,  1726,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,  1739,    73,   145,    -1,   147,   148,    -1,    -1,    -1,
      -1,   108,    -1,    -1,    -1,    -1,   113,   159,    -1,    -1,
     162,    -1,   119,    -1,   166,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,    -1,    -1,    -1,   178,   108,   180,    -1,
     182,   183,   113,    -1,   186,   187,   188,   189,   119,    -1,
     192,  1536,    -1,    -1,    -1,  1540,    -1,   199,   200,    -1,
     202,    -1,   204,   205,   206,   162,    -1,    -1,    -1,   211,
     212,   213,    -1,   215,   216,   172,    -1,   219,    -1,   221,
    1565,    -1,   224,   225,    -1,   227,   228,   229,   230,   231,
      -1,   162,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,   201,   202,    -1,   204,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,   215,    -1,
      -1,   192,   219,    -1,    -1,    -1,    -1,    -1,   225,    -1,
     201,   202,    -1,   204,   231,    -1,    -1,    -1,    -1,  1624,
      -1,  1626,    -1,   214,   215,    -1,  1631,  1632,   219,    -1,
    1635,  1636,    -1,     5,   225,     7,    -1,    -1,  1643,  1644,
     231,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    25,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,    38,    -1,    40,    41,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1687,    -1,    56,     4,     5,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    -1,    23,  1710,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,    -1,   131,   132,   133,   134,   135,   136,    -1,   138,
      -1,   140,    -1,   142,   143,   144,   145,   146,    -1,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,    -1,    -1,    -1,   177,   178,
     179,   180,   181,    -1,   183,    -1,   185,    -1,   187,   188,
     189,   190,    -1,   192,   193,   194,    -1,   196,   197,   198,
     199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,   208,
     209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,   223,    -1,    -1,   226,   227,     4,
     229,   230,   231,    -1,     9,    10,    -1,    12,    -1,    14,
      -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    74,
      75,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,   101,    -1,   103,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,    -1,   138,    -1,   140,    -1,   142,   143,   144,
     145,   146,    -1,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,    -1,
      -1,    -1,   177,   178,   179,   180,   181,    -1,   183,    -1,
     185,    -1,   187,   188,   189,   190,    -1,   192,   193,   194,
      -1,    -1,   197,    -1,   199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,   208,   209,   210,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    12,    -1,    14,   222,   223,    17,
      -1,   226,   227,    21,   229,   230,   231,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    75,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,    -1,   126,   127,
     128,   129,    -1,   131,   132,   133,   134,   135,   136,    -1,
     138,    -1,   140,    -1,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,    -1,    -1,    -1,   177,
     178,   179,   180,   181,    -1,   183,    -1,   185,    -1,   187,
     188,   189,   190,    -1,   192,   193,    -1,    -1,    -1,    -1,
     198,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
     208,   209,   210,     4,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    12,    -1,    14,   222,   223,    17,    -1,   226,   227,
      21,   229,   230,   231,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,    -1,   126,   127,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,    -1,   138,    -1,   140,
      -1,   142,   143,   144,   145,   146,    -1,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,    -1,    -1,    -1,   177,   178,   179,   180,
     181,    -1,   183,    -1,   185,    -1,   187,   188,   189,   190,
      -1,   192,   193,    -1,    -1,    -1,    -1,   198,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,   208,   209,   210,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,
      14,   222,   223,    17,    -1,   226,   227,    21,   229,   230,
     231,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,    -1,   126,   127,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,    -1,   138,    -1,   140,    -1,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
      -1,    -1,    -1,   177,   178,   179,   180,   181,    -1,   183,
      -1,   185,    -1,   187,   188,   189,   190,    -1,   192,   193,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   207,   208,   209,   210,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    12,    13,    14,   222,   223,
      17,    -1,   226,   227,    21,   229,   230,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,    -1,   131,   132,   133,   134,   135,   136,
      -1,   138,    -1,   140,    -1,   142,   143,   144,   145,   146,
      -1,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,    -1,    -1,    -1,
     177,   178,   179,   180,   181,    -1,   183,    -1,   185,    -1,
     187,   188,   189,   190,    -1,   192,   193,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     207,   208,   209,   210,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    12,    -1,    14,   222,   223,    17,    -1,   226,
     227,    21,   229,   230,   231,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,    -1,   126,   127,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,    -1,   138,    -1,
     140,    -1,   142,   143,   144,   145,   146,    -1,   148,   149,
     150,   151,    -1,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,    -1,   175,    -1,   177,   178,   179,
     180,   181,    -1,   183,    -1,   185,    -1,   187,   188,   189,
     190,    -1,   192,   193,    -1,    -1,    -1,    -1,    -1,   199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,   208,   209,
     210,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    14,   222,   223,    17,    -1,   226,   227,    21,   229,
     230,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,    -1,   131,   132,
     133,   134,   135,   136,    -1,   138,    -1,   140,    -1,   142,
     143,   144,   145,   146,    -1,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,    -1,   175,    -1,   177,   178,   179,   180,   181,    -1,
     183,    -1,   185,    -1,   187,   188,   189,   190,    -1,   192,
     193,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   207,   208,   209,   210,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    14,   222,
     223,    17,    -1,   226,   227,    21,   229,   230,   231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,    -1,
     126,   127,   128,   129,    -1,   131,   132,   133,   134,   135,
     136,    -1,   138,    -1,   140,    -1,   142,   143,   144,   145,
     146,    -1,   148,   149,   150,   151,    -1,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,    -1,    -1,
      -1,   177,   178,   179,   180,   181,    -1,   183,    -1,   185,
      -1,   187,   188,   189,   190,    -1,   192,   193,    -1,    -1,
      -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   207,   208,   209,   210,     4,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    12,    -1,    14,   222,   223,    17,    -1,
     226,   227,    21,   229,   230,   231,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    75,    76,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,    -1,   131,   132,   133,   134,   135,   136,    -1,   138,
      -1,   140,    -1,   142,   143,   144,   145,   146,    -1,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,    -1,    -1,    -1,   177,   178,
     179,   180,   181,    -1,   183,    -1,   185,    -1,   187,   188,
     189,   190,    -1,   192,   193,    -1,    -1,   196,    -1,    -1,
     199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,   208,
     209,   210,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,   222,   223,    17,    -1,   226,   227,    21,
     229,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    75,    76,    77,    78,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,    -1,   131,
     132,   133,   134,   135,   136,    -1,   138,    -1,   140,    -1,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    -1,    -1,    -1,   177,   178,   179,   180,   181,
      -1,   183,    -1,   185,    -1,   187,   188,   189,   190,    -1,
     192,   193,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   207,   208,   209,   210,     4,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    14,
     222,   223,    17,    -1,   226,   227,    21,   229,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,    -1,   131,   132,   133,   134,
     135,   136,    -1,   138,    -1,   140,    -1,   142,   143,   144,
     145,   146,    -1,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,    -1,
      -1,    -1,   177,   178,   179,   180,   181,    -1,   183,    -1,
     185,    -1,   187,   188,   189,   190,    -1,   192,   193,    -1,
      -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,   208,   209,   210,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    12,    -1,    14,   222,   223,    17,
      -1,   226,   227,    21,   229,   230,   231,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    75,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,    -1,   126,   127,
     128,   129,    -1,   131,   132,   133,   134,   135,   136,    -1,
     138,    -1,   140,    -1,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,    -1,    -1,    -1,   177,
     178,   179,   180,   181,    -1,   183,    -1,   185,    -1,   187,
     188,   189,   190,    -1,   192,   193,    -1,    -1,    -1,    -1,
      -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
     208,   209,   210,     4,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    12,    -1,    14,   222,   223,    17,    -1,   226,   227,
      21,   229,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,    -1,   126,   127,   128,   129,    -1,
     131,   132,   133,   134,   135,   136,    -1,   138,    -1,   140,
      -1,   142,   143,   144,   145,   146,    -1,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,    -1,    -1,    -1,   177,   178,   179,   180,
     181,    -1,   183,    -1,   185,    -1,   187,   188,   189,   190,
      -1,   192,   193,    -1,    -1,    -1,    -1,    -1,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,   208,   209,   210,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,
      14,   222,   223,    17,    -1,   226,   227,    21,   229,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,    -1,   126,   127,   128,   129,    -1,   131,   132,   133,
     134,   135,   136,    -1,   138,    -1,   140,    -1,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
      -1,    -1,    -1,   177,   178,   179,   180,   181,    -1,   183,
      -1,   185,    -1,   187,   188,   189,   190,    -1,   192,   193,
      -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   207,   208,   209,   210,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    12,    -1,    14,   222,   223,
      17,    -1,   226,   227,    21,   229,   230,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,    -1,   131,   132,   133,   134,   135,   136,
      -1,   138,    -1,   140,    -1,   142,   143,   144,   145,   146,
      -1,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,    -1,    -1,    -1,
     177,   178,   179,   180,   181,    -1,   183,    -1,   185,    -1,
     187,   188,   189,   190,    -1,   192,   193,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     207,   208,   209,   210,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    12,    -1,    14,   222,   223,    17,    -1,   226,
     227,    21,   229,   230,   231,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    75,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,    -1,   126,   127,   128,   129,
      -1,   131,   132,   133,   134,   135,   136,    -1,   138,    -1,
     140,    -1,   142,   143,   144,   145,   146,    -1,   148,   149,
     150,   151,    -1,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,    -1,    -1,    -1,   177,   178,   179,
     180,   181,    -1,   183,    -1,   185,    -1,   187,   188,   189,
     190,    -1,   192,   193,    -1,    -1,    -1,    -1,    -1,   199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,   208,   209,
     210,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    14,   222,   223,    17,    -1,   226,   227,    21,   229,
     230,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,    -1,   131,   132,
     133,   134,   135,   136,    -1,   138,    -1,   140,    -1,   142,
     143,   144,   145,   146,    -1,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,    -1,    -1,    -1,   177,   178,   179,   180,   181,    -1,
     183,    -1,   185,    -1,   187,   188,   189,   190,    -1,   192,
     193,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   207,   208,   209,   210,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
     223,    -1,    -1,   226,   227,     4,   229,   230,   231,    -1,
       9,    10,    -1,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    48,
       7,    50,    -1,    52,    53,    54,    -1,    14,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    25,    26,
      -1,    -1,    29,    -1,    73,    -1,    -1,    34,    -1,    36,
      -1,    38,    -1,    40,    41,    -1,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,   116,   117,    -1,
     119,   120,   121,   122,   123,    -1,   125,    -1,    -1,   128,
      -1,   130,   131,   132,   133,   134,   135,    -1,   137,   138,
     139,   140,    -1,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,    -1,   154,   155,   156,    -1,    -1,
     159,    -1,   161,   162,    -1,    -1,    -1,   166,   167,    -1,
      -1,   170,    -1,   172,    -1,   174,    -1,   176,   177,   178,
      -1,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
     189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,
     199,   200,   201,   202,    -1,   204,   205,   206,   207,   208,
      -1,    -1,   211,   212,   213,    -1,   215,   216,   217,    -1,
     219,    -1,   221,    -1,    -1,   224,   225,    -1,   227,   228,
     229,   230,   231,     4,     9,    10,    -1,    -1,     9,    10,
      -1,    12,    -1,    14,    -1,    20,    17,    18,    23,    -1,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    33,    -1,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    48,    -1,    50,
      -1,    52,    53,    54,    -1,   943,    -1,    -1,   946,   947,
     948,    -1,    -1,    -1,    -1,    -1,   954,    -1,   956,    74,
      -1,    -1,    73,   961,   962,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   974,    -1,   976,   977,
     978,    -1,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,   116,   117,    -1,   119,   120,
     121,   122,   123,    -1,   125,    -1,    -1,   128,    -1,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,   139,   140,
      -1,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,    -1,   154,   155,   156,    -1,    -1,   159,    -1,
     161,   162,    -1,    -1,    -1,   166,   167,    -1,    -1,   170,
      -1,   172,    -1,   174,    -1,   176,   177,   178,    -1,   180,
     181,   182,   183,   184,    -1,   186,   187,   188,   189,   194,
      -1,   192,   197,    -1,    -1,    -1,    -1,    -1,   199,   200,
     201,   202,    -1,   204,   205,   206,   207,   208,    -1,    -1,
     211,   212,   213,    -1,   215,   216,    -1,    -1,   219,   220,
     221,    -1,    -1,   224,   225,    -1,   227,   228,   229,   230,
     231,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    75,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,    -1,   126,   127,   128,    -1,    -1,   131,    -1,
      -1,   134,   135,    -1,    -1,   138,    -1,   140,    -1,    -1,
      -1,   144,    -1,   146,    -1,    -1,    -1,   150,   151,    -1,
     153,    -1,    -1,   156,   157,   158,    -1,    -1,   161,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
      -1,    -1,    -1,    -1,   177,    -1,    -1,   180,   181,    -1,
      -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,    -1,
      -1,    -1,    -1,     4,   207,   208,   209,   210,     9,    -1,
      -1,    12,    -1,    14,    -1,    -1,    17,    -1,    -1,   222,
      21,    -1,    -1,   226,   227,    -1,   229,   230,   231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    75,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,    -1,   126,   127,   128,    -1,    -1,
     131,    -1,    -1,   134,   135,    -1,    -1,   138,    -1,   140,
      -1,    -1,    -1,   144,    -1,   146,    -1,    -1,    -1,   150,
     151,    -1,   153,    -1,    -1,   156,   157,   158,    -1,    -1,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,    -1,    -1,    -1,    -1,   177,    -1,    -1,   180,
     181,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,    -1,    -1,    -1,    -1,    -1,   199,    -1,
      -1,    -1,    -1,    -1,    -1,     4,   207,   208,   209,   210,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    -1,
      -1,   222,    21,    -1,    -1,   226,   227,    -1,   229,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    70,    71,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,    -1,   126,   127,   128,
      -1,    -1,   131,    -1,    -1,   134,   135,    -1,    -1,   138,
      -1,   140,    -1,    -1,    -1,   144,    -1,   146,    -1,    -1,
      -1,   150,   151,    -1,   153,    -1,    -1,   156,   157,   158,
      -1,    -1,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,    -1,    -1,    -1,    -1,   177,    -1,
      -1,   180,   181,    -1,    -1,    -1,   185,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,    -1,    -1,    -1,     4,   207,   208,
     209,   210,     9,    10,    -1,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,   222,    21,    22,    -1,   226,   227,    -1,
     229,   230,   231,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    48,    -1,    50,    -1,    52,    53,    54,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,   116,
     117,    -1,   119,    -1,   121,   122,    -1,   101,   125,   103,
      -1,   128,    -1,    -1,   131,    -1,   133,   134,   135,    -1,
      -1,   138,    -1,   140,    -1,   142,    -1,   144,   145,   146,
     147,   148,    -1,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,   162,    -1,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,    -1,
     177,   178,    -1,   180,    -1,   182,   183,    -1,    -1,   186,
     187,   188,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,    -1,   199,   200,    -1,   202,    -1,   204,   205,   206,
      -1,   208,    -1,    -1,   211,   212,    -1,    -1,   215,   216,
     194,    -1,   219,   197,   221,     9,    10,   224,   225,    -1,
     227,   228,   229,   230,   231,     4,    20,    -1,    -1,    23,
       9,    10,    -1,    12,    -1,    14,    -1,    -1,    17,    18,
      -1,    35,    21,    22,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    52,    53,    54,    -1,    -1,     4,    -1,
      74,    -1,    -1,     9,    10,    -1,    12,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    21,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,   105,    -1,    13,    -1,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    23,    -1,
      -1,   120,   121,   122,   123,    -1,    -1,    -1,    -1,   128,
      35,   130,   131,   132,    39,   134,   135,    42,   137,   138,
     139,   140,    47,    -1,    -1,   144,    -1,   146,    -1,    -1,
     149,   150,    -1,   152,    -1,   154,   155,   156,    -1,   105,
      -1,    -1,   161,   109,   110,   111,   112,    -1,   167,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,    -1,
     194,   180,   181,   197,    -1,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,
     199,   200,   201,    -1,    -1,     4,   205,   206,   207,   208,
       9,    10,   211,    12,   213,    14,    -1,   216,    17,    18,
      -1,    -1,    21,    22,    -1,    -1,    -1,    -1,   227,   228,
     229,   230,   231,    -1,   180,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,
     206,    -1,    -1,    -1,    -1,   211,    -1,   213,   214,    -1,
     216,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,   227,   228,   229,   230,   231,    -1,    -1,    -1,   194,
      -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,   108,
     109,   110,   111,   112,   113,    -1,    -1,   116,   117,    -1,
     119,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,   145,    -1,   147,   148,
      -1,     4,    -1,    -1,    -1,    -1,     9,    10,    -1,    12,
     159,    14,    -1,   162,    17,    18,    -1,   166,    21,    22,
      -1,    -1,    -1,   172,    -1,   174,    -1,    -1,    -1,   178,
      -1,   180,    -1,   182,   183,    -1,    -1,   186,   187,   188,
     189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,
     199,   200,    -1,   202,    -1,   204,   205,   206,    -1,    -1,
      -1,    -1,   211,   212,    -1,    -1,   215,   216,    -1,    -1,
     219,    -1,   221,    -1,    -1,   224,   225,    -1,   227,   228,
     229,   230,   231,     4,     9,    10,    -1,    -1,     9,    10,
      -1,    12,    -1,    14,    -1,    20,    17,    18,    23,    -1,
      21,    22,   105,    -1,    -1,    -1,   109,   110,   111,   112,
      35,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,     9,    10,    -1,    12,    -1,    14,    -1,    74,
      17,    18,    73,    -1,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   180,   103,    -1,
      -1,     9,    10,    -1,   105,    -1,    -1,   108,   109,   110,
     111,   112,   113,    -1,    -1,    23,   199,   200,   119,    -1,
      -1,    -1,   205,   206,    -1,    33,    -1,    35,   211,    -1,
     213,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,   227,   228,   229,   230,   231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,   162,   109,   110,   111,   112,    74,     4,    -1,    -1,
      -1,   172,     9,    10,    -1,    12,    -1,    14,    -1,   180,
      17,    18,    -1,    -1,    21,    22,    -1,    -1,    -1,   194,
      -1,   192,   197,   101,    -1,   103,    33,    -1,   199,   200,
      -1,   202,    -1,   204,   205,   206,    -1,    -1,    -1,    -1,
     211,    -1,    -1,    -1,   215,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,   225,    -1,   227,   228,   229,   230,
     231,     4,    -1,   180,    -1,    -1,     9,    10,    -1,    12,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    21,    22,
      -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,   206,
      -1,    -1,    -1,    -1,   211,    -1,   213,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,   112,    -1,    -1,    -1,    -1,
     227,   228,   229,   230,   231,    -1,   194,    -1,    -1,   197,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,     9,
      10,    -1,    12,    -1,    14,    -1,    -1,    17,    18,     4,
      -1,    21,    22,    -1,     9,    10,    -1,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    21,    22,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,   109,   110,   111,   112,
      -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,   200,    -1,    -1,    -1,     4,   205,   206,
      -1,    -1,     9,    10,   211,    12,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,
     227,   228,   229,   230,   231,   105,    -1,    -1,    -1,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,   180,    -1,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   199,   200,    -1,    -1,
      -1,    -1,   205,   206,    -1,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,   229,   230,   231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     180,    -1,   109,   110,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,   199,
     200,    -1,    -1,    -1,    -1,   205,   206,    -1,    -1,    -1,
      -1,   211,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,
     205,   206,    -1,    -1,    -1,    -1,   211,   227,   228,   229,
     230,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,   228,   229,   230,   231,    -1,    -1,     4,
      -1,    -1,    -1,   180,     9,    10,    -1,    12,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    21,    22,    -1,    -1,
      -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,   206,
      -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
     227,   228,   229,   230,   231,     4,     9,    10,    -1,    23,
       9,    10,    -1,    12,    -1,    14,    -1,    -1,    17,    18,
      23,    35,    21,    22,    -1,    39,    -1,    -1,    42,    -1,
      33,    -1,    35,    47,    -1,    -1,    39,     9,    10,    42,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
     105,    23,    -1,    -1,   109,   110,   111,   112,    -1,    -1,
      74,    33,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      42,    74,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
     103,    -1,    74,    -1,    -1,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,   180,    14,    -1,    -1,   101,
      -1,   103,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,
     205,   206,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,   227,   228,   229,   230,   231,    -1,    -1,    -1,
     194,   180,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   194,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
     199,   200,    -1,    -1,    -1,    -1,   205,   206,    -1,    -1,
      -1,    -1,   211,    -1,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,   194,    -1,    -1,   197,    -1,    -1,   227,   228,
     229,   230,   231,   121,   122,   123,   124,    -1,   126,   127,
     128,   129,    -1,   131,    -1,   133,   134,   135,    -1,    -1,
     138,    -1,   140,    -1,   142,    -1,   144,   145,   146,    -1,
     148,    -1,   150,   151,    -1,   153,    -1,    -1,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,    -1,    -1,    -1,   177,
     178,   179,    -1,   181,    -1,   183,    -1,   185,    -1,   187,
     188,   189,    -1,    -1,   192,    -1,    -1,    -1,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
     208,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   231,    48,    49,    50,    51,    52,    53,
      54,    55,     5,    -1,     7,    -1,     9,    10,    -1,    12,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,    74,   126,   127,   128,    -1,    -1,   131,    -1,    -1,
     134,   135,    -1,    -1,   138,    -1,   140,    -1,    -1,    -1,
     144,    -1,   146,    -1,    -1,    -1,   150,   151,   101,   153,
     103,    -1,   156,   157,   158,    12,    -1,   161,   162,   163,
     164,   165,    -1,   167,   168,   169,   170,   171,   172,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,   181,    -1,    -1,
      -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,   207,   208,   209,   210,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    13,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,   194,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,   121,   122,   123,   124,    -1,   126,
     127,   128,    -1,    -1,   131,    -1,    -1,   134,   135,    -1,
      -1,   138,    -1,   140,    -1,    -1,    73,   144,    -1,   146,
      -1,    -1,    -1,   150,   151,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,    -1,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,    -1,   104,    -1,   106,
     177,   108,    -1,    -1,   181,    -1,   113,    -1,   185,   116,
     117,    -1,   119,    -1,    -1,   192,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,
     207,   208,   209,   210,    -1,   142,    -1,    -1,   145,    -1,
     147,   148,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   231,   162,    -1,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,    -1,
      -1,   178,    -1,    -1,    -1,   182,   183,    -1,    -1,   186,
     187,   188,   189,    50,    -1,   192,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   202,    -1,   204,    -1,    -1,
      -1,    -1,     9,    10,    -1,   212,    73,    -1,   215,   216,
      -1,    -1,   219,    -1,   221,    -1,    23,   224,   225,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    42,    -1,   104,    -1,   106,
      47,   108,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,
     117,    -1,   119,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,    74,    -1,    -1,
      -1,    12,    13,    -1,    -1,   142,    -1,    -1,   145,    -1,
     147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   101,   162,   103,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,    50,
      -1,   178,    -1,    -1,    -1,   182,   183,    -1,    -1,   186,
     187,   188,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,   202,    -1,   204,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,   215,   216,
      -1,    -1,   219,    -1,   221,    -1,    -1,   224,   225,    -1,
      -1,    -1,    -1,   104,   231,   106,    -1,   108,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,   117,    -1,   119,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,   194,    -1,    -1,
     197,    -1,   133,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,   142,    -1,    -1,   145,    -1,   147,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,   162,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,
      -1,   172,    -1,   174,    -1,    50,    -1,   178,    -1,    -1,
      -1,   182,   183,    -1,    -1,   186,   187,   188,   189,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,   202,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,    -1,   215,   216,    -1,    -1,   219,    -1,
     221,    -1,    -1,   224,   225,    -1,    -1,    -1,    -1,   104,
     231,   106,    -1,   108,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,   117,    -1,   119,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,   142,    -1,    -1,
     145,    -1,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,   172,    -1,   174,
      -1,    50,    -1,   178,    -1,    -1,    -1,   182,   183,    -1,
      -1,   186,   187,   188,   189,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,   202,    -1,   204,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,
     215,   216,    -1,    -1,   219,    -1,   221,    -1,    -1,   224,
     225,    -1,    -1,    -1,    -1,   104,   231,   106,    -1,   108,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,   117,    -1,
     119,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,   145,    -1,   147,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,    -1,   172,    -1,   174,    -1,    -1,    -1,   178,
      -1,    -1,    -1,   182,   183,    -1,    -1,   186,   187,   188,
     189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   202,    -1,   204,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,   215,   216,    -1,    -1,
     219,    -1,   221,    -1,    -1,   224,   225,    -1,    -1,    -1,
      -1,     5,   231,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,    -1,    -1,    29,    30,    -1,    31,    33,
      34,    -1,    36,    37,    38,    -1,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    50,    -1,    -1,
      -1,     5,    -1,     7,    -1,     9,    10,    -1,    12,    -1,
      14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    23,
      73,    25,    26,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    -1,    -1,   101,   102,    -1,
      -1,   104,    56,   106,    -1,   108,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,   117,    -1,   119,    -1,    -1,    -1,
      74,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
       9,    10,   145,    -1,   147,   148,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    23,    -1,   159,    -1,    -1,   162,
      -1,    -1,    -1,   166,    -1,    -1,    35,    -1,    -1,   172,
      39,   174,    -1,    42,    -1,   178,    -1,    33,    47,   182,
     183,    -1,    -1,   186,   187,   188,   189,    -1,    -1,   192,
     194,   195,    48,   197,    50,    -1,    52,    53,    54,   202,
      -1,   204,    -1,    -1,    -1,    74,    -1,    -1,    -1,   212,
     214,    -1,   215,   216,   218,    -1,   219,    73,   221,    -1,
      -1,   224,   225,    -1,    -1,    -1,    -1,    -1,   231,    -1,
      -1,   100,   101,    -1,   103,    -1,    -1,    -1,    -1,   193,
     194,    -1,    -1,   197,    -1,    -1,    -1,    -1,   104,    -1,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,   117,    -1,   119,    -1,   121,   122,    -1,    -1,   125,
      -1,    -1,   128,    -1,    -1,   131,    -1,   133,   134,   135,
      -1,    -1,   138,    -1,   140,    -1,   142,    -1,   144,   145,
     146,   147,   148,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,    33,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,
      -1,   177,   178,    -1,    50,   194,   182,   183,   197,    -1,
     186,   187,   188,   189,    -1,    -1,   192,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,    73,   204,    -1,
      -1,    -1,   208,    -1,    -1,    -1,   212,    -1,    -1,   215,
     216,    -1,    -1,   219,    -1,   221,    -1,    -1,   224,   225,
      -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,   104,    -1,
     106,   107,   108,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,   117,    -1,   119,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
      -1,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,    -1,
     166,    -1,    -1,    -1,   170,    -1,   172,    -1,   174,    -1,
      -1,    -1,   178,    -1,    -1,    -1,   182,   183,    -1,    -1,
     186,   187,   188,   189,    -1,    -1,   192,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,   204,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,   215,
     216,    -1,    -1,   219,    -1,   221,    -1,    -1,   224,   225,
      -1,    -1,     5,    -1,     7,   231,     9,    10,    -1,    12,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    56,     7,    -1,     9,    10,    -1,    12,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      23,    74,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,   101,    -1,
     103,    -1,     5,    56,     7,    -1,     9,    10,    -1,    12,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      23,    74,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,   101,    -1,
     103,     9,    10,    56,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,     9,    10,    -1,    -1,
      13,    74,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      23,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
     193,   194,    35,    -1,   197,    -1,    39,    -1,   101,    42,
     103,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,     9,
      10,    -1,    -1,    13,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    23,     9,    10,    -1,    -1,    13,    -1,
      -1,    74,    -1,    -1,    -1,    35,    -1,    -1,    23,    39,
     193,   194,    42,   101,   197,   103,    -1,    47,    -1,    -1,
      35,    -1,    -1,    -1,    39,     9,    10,    42,   101,    -1,
     103,    -1,    47,    -1,    -1,    -1,     9,    10,    -1,    23,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    31,    -1,    -1,
      23,    35,    -1,    -1,    -1,    39,    -1,    -1,    42,    74,
     193,   194,    35,    47,   197,    -1,    39,     9,    10,    42,
      -1,   101,    -1,   103,    47,    -1,    -1,    -1,     9,    10,
      -1,    23,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,
      74,    33,    23,    35,    -1,    -1,    -1,    39,    -1,    -1,
      42,    74,    33,    -1,    35,    47,   194,    -1,    39,   197,
      -1,    42,     9,    10,    -1,    -1,    47,   101,    -1,   103,
      -1,   194,    -1,    -1,   197,    -1,    23,   100,   101,    -1,
     103,    -1,    74,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    74,    -1,    42,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,     9,    10,    -1,    -1,    13,   101,
      -1,   103,    -1,    -1,   194,    -1,    -1,   197,    23,    -1,
     101,    -1,   103,    -1,    -1,    -1,    -1,    74,    -1,   194,
      35,    -1,   197,    -1,    39,     9,    10,    42,    -1,    13,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,   101,    -1,   103,    -1,    -1,    -1,
     194,    35,    -1,   197,    -1,    39,    -1,    -1,    42,    74,
      -1,   194,    -1,    47,   197,    -1,    -1,     9,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,
      74,    -1,   194,    35,    -1,   197,    -1,    39,     9,    10,
      42,    -1,    13,   194,    -1,    47,   197,    -1,    -1,     9,
      10,    -1,    23,    13,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,    23,    35,    -1,    -1,    -1,    39,    -1,
      -1,    42,    74,    -1,    -1,    35,    47,   194,    -1,    39,
     197,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,
       9,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,   101,
      -1,   103,    -1,    74,    23,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    35,    -1,    20,   194,
      39,    23,   197,    42,    -1,    -1,    -1,    -1,    47,    -1,
     101,    -1,   103,    35,    -1,     9,    10,    39,    -1,    13,
      42,   101,    -1,   103,    -1,    47,    -1,    -1,    -1,    23,
     194,    -1,    -1,   197,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    74,    47,    -1,    -1,    -1,    -1,    -1,     9,
      10,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,    23,    -1,   197,    -1,    -1,    -1,   101,
      74,   103,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,     9,    10,   194,    -1,    13,   197,   101,    -1,   103,
      -1,    -1,     9,    10,   194,    23,    13,   197,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    23,    35,    -1,    -1,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    35,    47,
      -1,    -1,    39,     9,    10,    42,    -1,    13,    -1,    -1,
      47,   101,    -1,   103,    -1,   194,    -1,    23,   197,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    35,
      -1,    -1,   194,    39,    -1,   197,    42,    74,    -1,    -1,
      -1,    47,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    20,   103,    -1,    23,    -1,    -1,
     194,     9,    10,   197,   101,    -1,   103,    -1,    74,    35,
      -1,    -1,    20,    39,    -1,    23,    42,    -1,    -1,     9,
      10,    47,    -1,    13,    -1,    -1,    -1,    35,    -1,     9,
      10,    39,    -1,    23,    42,   101,    -1,   103,    -1,    47,
      -1,    -1,    -1,    23,   194,    35,    -1,   197,    74,    39,
       9,    10,    42,    -1,    13,    35,    -1,    47,    -1,    39,
      -1,    -1,    42,    -1,    23,    -1,    74,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    35,   103,    -1,    -1,
      39,    -1,    -1,    42,    74,    -1,   194,    -1,    47,   197,
      -1,    -1,    -1,   101,    74,   103,    -1,   194,    -1,    -1,
     197,    -1,    -1,    -1,    -1,    -1,    -1,    50,     9,    10,
      -1,   101,    13,   103,    -1,    74,    -1,    -1,    -1,    -1,
     100,   101,    23,   103,    -1,    -1,     9,    10,   194,    -1,
      73,   197,    50,    -1,    35,    -1,    -1,    20,    39,    -1,
      23,    42,   101,    -1,   103,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    73,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    47,   108,    -1,    -1,   194,    -1,
     113,   197,    -1,    74,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    -1,   194,    13,    -1,   197,
     108,    74,    -1,    -1,    -1,   113,    -1,    23,     9,    10,
     101,   119,   103,    -1,   194,    -1,    -1,   197,    -1,    35,
      -1,    -1,    23,    39,   194,    -1,    42,   197,   101,   162,
     103,    47,    -1,    -1,    35,    -1,    -1,    -1,    39,   172,
      -1,    42,    -1,    -1,    -1,   194,    47,    -1,   197,   182,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    74,   192,
      -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,   202,
      -1,   204,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   215,    -1,   192,   101,   219,   103,    -1,    -1,
      -1,    -1,   225,    -1,   202,    -1,   204,    -1,   231,    -1,
     101,    -1,   103,   194,    -1,    -1,   197,   215,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   194,    -1,   231,   197,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,
      -1,   197,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,    -1,    -1,   197,    -1,    -1,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,    -1,   131,
     132,   133,   134,   135,   136,    -1,   138,    -1,   140,    -1,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    -1,    -1,    -1,   177,   178,   179,   180,   181,
      -1,   183,    -1,   185,    -1,   187,   188,   189,   190,    -1,
     192,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,   207,   208,   209,   210,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,    -1,   126,
     127,   128,    -1,    -1,   131,    -1,    -1,   134,   135,    -1,
      -1,   138,    -1,   140,    -1,    -1,    -1,   144,    -1,   146,
      -1,    -1,    -1,   150,   151,    -1,   153,    -1,    -1,   156,
     157,   158,    -1,   160,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,    -1,    -1,    -1,
     177,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,    -1,
      -1,    -1,    -1,    -1,    -1,   192,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
     207,   208,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,    -1,   126,   127,   128,    -1,    -1,   131,
      -1,    -1,   134,   135,    -1,    -1,   138,    -1,   140,    -1,
      -1,    -1,   144,    -1,   146,    -1,    -1,    -1,   150,   151,
      -1,   153,    -1,    -1,   156,   157,   158,    -1,   160,   161,
     162,   163,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,    -1,    -1,    -1,   177,    -1,    -1,    -1,   181,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,
     192,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,   207,   208,   209,   210,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,    -1,   126,
     127,   128,    -1,    -1,   131,    -1,    -1,   134,   135,    -1,
      -1,   138,    -1,   140,    -1,    -1,    -1,   144,    -1,   146,
      -1,    -1,    -1,   150,   151,    -1,   153,    -1,    -1,   156,
     157,   158,    50,    -1,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,   181,    73,    -1,    -1,   185,    -1,
      -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     207,   208,   209,   210,    -1,    -1,   104,    -1,   106,    -1,
     108,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,   117,
      -1,   119,   229,    -1,   231,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,   142,    -1,    -1,   145,    -1,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,   162,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,    -1,   172,    -1,   174,    -1,    50,    -1,
     178,    -1,    -1,    -1,   182,   183,    -1,    -1,   186,   187,
     188,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,   202,    -1,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    -1,   215,   216,    -1,
      -1,   219,    -1,   221,    -1,    -1,   224,   225,    -1,    -1,
      -1,    -1,   104,   231,   106,    -1,   108,    -1,    -1,    -1,
      -1,   113,    -1,    -1,   116,   117,    -1,   119,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   145,    -1,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,
     172,    -1,   174,    -1,    50,    -1,   178,    -1,    -1,    -1,
     182,   183,    -1,    -1,   186,   187,   188,   189,    -1,    -1,
     192,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
     202,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,    -1,   215,   216,    -1,    -1,   219,    -1,   221,
      -1,    -1,   224,   225,    -1,    -1,    -1,    -1,   104,   231,
     106,    -1,   108,    -1,    -1,    -1,    -1,   113,    -1,    -1,
     116,   117,    -1,   119,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,   145,
      -1,   147,   148,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,   172,    -1,   174,    -1,
      -1,    -1,   178,    -1,    -1,    -1,   182,   183,    -1,   104,
     186,   187,   188,   189,    -1,    -1,   192,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,   204,    -1,
      -1,    -1,    -1,    -1,   129,    -1,   212,    -1,   133,   215,
     216,   136,    -1,   219,    -1,   221,    -1,   142,   224,   225,
     145,    -1,    -1,   148,    -1,   231,    -1,    -1,    -1,    -1,
     104,    -1,    -1,    -1,   159,   160,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,    -1,   178,   179,   129,    -1,    -1,   183,   133,
      -1,    -1,   187,   188,   189,   190,    -1,    -1,   142,    -1,
      -1,   145,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,   160,    -1,    -1,    -1,
      -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,   223,   173,
      -1,    -1,    -1,    -1,   178,   179,    -1,    -1,    -1,   183,
      -1,    -1,    -1,   187,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    33,    48,    50,    52,    53,    54,    73,   104,   106,
     107,   108,   113,   116,   117,   119,   121,   122,   125,   128,
     131,   133,   134,   135,   138,   140,   142,   144,   145,   146,
     147,   148,   150,   159,   162,   166,   172,   174,   177,   178,
     182,   183,   186,   187,   188,   189,   192,   202,   204,   208,
     212,   215,   216,   219,   221,   224,   225,   231,   233,   234,
     235,   290,   297,   298,   300,   324,   325,   326,   328,   448,
     452,   453,   234,    12,    12,   131,   138,   144,   146,   175,
     177,   131,   138,   144,   146,   175,   177,   113,   202,   213,
     216,   231,   236,   237,   332,   333,   213,   237,   333,   213,
     237,   333,    12,    12,    12,     0,   234,   231,   298,    14,
      33,   293,   296,   307,   319,   297,   299,   300,   213,   274,
       4,     5,     6,     7,     9,    10,    12,    13,    14,    16,
      17,    20,    21,    23,    25,    26,    27,    28,    29,    31,
      32,    33,    34,    35,    36,    38,    39,    40,    41,    42,
      43,    44,    45,    47,    49,    51,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   103,   104,   121,   123,   124,   126,   127,
     129,   132,   133,   134,   136,   142,   143,   145,   148,   149,
     151,   153,   155,   156,   157,   158,   159,   160,   161,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   173,   178,
     179,   180,   181,   183,   185,   187,   188,   189,   190,   193,
     194,   196,   197,   198,   199,   207,   209,   210,   222,   223,
     226,   227,   229,   230,   444,   448,   450,   451,   453,   454,
     455,   456,   457,   458,   459,   460,     4,     9,    10,    12,
      14,    17,    18,    21,    22,   105,   109,   110,   111,   112,
     180,   199,   200,   205,   206,   211,   227,   228,   229,   230,
     231,   239,   240,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,     4,     9,    12,    14,    17,    21,   139,
     180,   199,   200,   204,   216,   225,   229,   230,   231,   236,
     258,   260,   335,   336,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
      12,    12,   231,   305,   306,   213,   333,   213,   237,    33,
     107,   170,   298,   301,   302,   334,   213,   213,   237,   301,
     213,   213,   237,    12,   231,   256,   298,   320,    12,    13,
     231,   298,   311,   312,   313,   315,   331,    33,    20,    40,
      12,   237,   310,   314,   299,   299,   281,   161,   163,   167,
     161,   163,   167,   460,   298,   325,   243,   243,   236,   256,
     272,   274,   320,   243,   243,    12,   242,   243,   242,    12,
      12,    12,    12,    12,   242,   243,    12,   242,   259,   261,
      12,    18,    22,    25,    26,   214,     8,    11,    15,    19,
      24,    30,    37,    40,    46,   102,   195,     7,    14,    29,
      17,    21,    36,    45,    34,    38,    43,    44,     5,    41,
       9,   101,   194,    10,    47,   197,    13,    20,   259,   261,
     342,   342,   354,   342,   342,   342,    31,    12,   242,   342,
      12,   242,    31,    12,   216,   231,   258,   336,   337,   338,
     339,    25,    26,   214,     7,    14,    29,    17,    21,    36,
      45,    34,    38,    43,    44,     5,    41,     9,   101,   194,
      10,    47,   197,    40,    20,    13,   355,    12,    40,    20,
      20,   238,   306,   306,   213,   301,    12,   354,    31,    33,
     303,   304,   307,   319,   217,    33,   301,   301,   301,   213,
     217,   301,   301,   213,   355,   357,    13,    14,   319,   321,
      13,   312,   152,   289,    20,   307,   319,   321,    13,    20,
      20,    13,    73,   204,   219,   225,   319,   328,   330,   448,
     294,   295,   329,   213,   256,   262,   331,    12,   201,   214,
     327,   330,   118,   203,   275,   280,    33,   293,   274,    20,
      13,    13,    13,   320,   255,   320,   320,   256,   320,   320,
     270,   272,   237,   237,   272,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   243,   243,   243,   243,
     244,   244,   245,   245,   246,   246,   246,   246,   247,   247,
     248,   249,   250,   251,   271,   272,   252,   258,    13,   229,
     320,   320,   229,    13,   355,   337,   258,   237,   237,   354,
     342,   342,   342,   343,   343,   344,   344,   345,   345,   345,
     345,   346,   346,   347,   348,   349,   350,   356,   351,   353,
     355,    13,   357,   256,   306,   217,   238,   238,   306,   256,
      33,   256,   301,    20,    33,    31,   310,   301,   217,   217,
     301,   217,   217,   301,    13,   331,    12,   322,   323,    13,
      12,   231,   315,    12,   289,   313,    28,   298,   316,   317,
     318,    20,   296,   307,   328,    26,   214,   231,   237,   262,
     263,   264,   265,   267,   307,    13,   311,   315,    12,   182,
     309,   330,   331,   331,   236,   282,   283,    12,   277,    33,
     272,   213,   243,    13,    13,    20,    20,    20,    20,    13,
      13,    13,   218,    31,    13,    13,    13,    13,   338,   218,
     353,    13,   217,   217,   238,    13,    20,   304,   301,   256,
      12,   217,   217,    13,   319,   331,    12,   331,   214,   311,
     331,   307,   308,    33,    28,   295,   237,   256,    31,   217,
      20,    20,    40,   266,    13,   289,    13,    13,   258,   331,
     218,   331,   272,   273,   201,    20,    33,   355,   276,   279,
     263,   139,   291,   292,   320,   237,   241,   320,   320,   152,
     269,   254,    31,    13,   217,   258,   331,   321,    13,   311,
     273,    13,    20,   318,   267,   268,    28,   218,   262,   265,
     262,   289,   316,    13,   272,   182,    12,   283,    13,    33,
     120,   121,   123,   130,   132,   134,   137,   139,   149,   152,
     154,   155,   156,   161,   167,   176,   181,   184,   201,   207,
     216,   217,   231,   236,   272,   274,   278,   286,   287,   290,
     298,   334,   425,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   453,   217,    31,    20,    13,    31,    13,
      26,   214,    13,    13,    12,   353,    13,    13,    13,   218,
     220,   308,   256,   268,   331,   272,   258,   274,     4,     9,
      12,    14,    17,    21,    48,    49,    51,    52,    53,    54,
      55,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    75,    76,    77,    78,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   121,
     122,   123,   124,   126,   127,   128,   131,   134,   135,   138,
     140,   144,   146,   150,   151,   153,   156,   157,   158,   161,
     163,   164,   165,   167,   168,   169,   170,   171,   177,   180,
     181,   185,   193,   199,   207,   208,   209,   210,   222,   226,
     227,   229,   230,   372,   373,   374,   375,   379,   380,   419,
     444,   448,   131,   138,   144,   146,   161,   167,   177,   372,
      33,   256,   131,   138,   144,   146,   161,   167,   177,   372,
      33,    31,   442,   443,   444,   277,    14,   236,    12,   170,
     372,    48,    55,   122,   150,   161,   170,   207,   421,    33,
     272,   170,    12,   154,   359,    79,   370,   372,   422,   424,
      31,    33,   141,   149,   191,   121,   134,   425,   426,   426,
     426,   426,   426,   426,   460,   255,   292,   255,   231,   272,
     270,   218,    13,   114,   115,     4,    48,    49,    51,    52,
      53,    54,    55,    88,   121,   122,   123,   124,   126,   127,
     128,   131,   134,   135,   138,   140,   144,   146,   150,   151,
     153,   156,   157,   158,   161,   163,   164,   165,   167,   168,
     169,   170,   171,   177,   180,   181,   185,   207,   208,   209,
     210,   375,   379,   380,   448,   379,   371,   372,   381,   402,
     403,   404,   379,   379,   379,   369,   370,   193,   437,   439,
     437,    12,   437,   437,   437,   104,   129,   133,   142,   145,
     148,   159,   160,   166,   173,   178,   179,   183,   187,   188,
     189,   223,   390,   417,   418,   390,   437,   438,   439,   437,
      12,   390,   223,   419,   449,   455,   437,   437,    12,    12,
      12,    12,    12,   437,    12,   437,   437,   437,   372,   161,
      12,    26,    56,   369,   372,   382,   383,   384,   385,   379,
     380,     9,    10,    23,    33,    35,    39,    42,    47,    74,
     101,   103,   194,   197,     7,    14,    16,    17,    21,    25,
      26,    29,    36,    45,    56,   377,    31,    12,   193,    31,
      33,    28,    31,   372,   161,    33,   279,   284,    20,    31,
     279,   272,    33,   272,   444,    33,   370,   423,   424,   372,
     420,   424,   424,   372,   444,   422,    33,    33,   444,   272,
     359,    12,   204,   225,   358,    20,    33,   329,   284,    12,
      12,   167,   167,   284,   298,   218,    13,   331,    12,   274,
      27,    13,    13,    73,   136,   190,   401,   418,    12,    14,
      56,   406,   408,   410,   413,   414,   415,   416,    13,   196,
     440,   441,   444,    12,    12,   372,    12,    12,    12,   223,
     419,   445,   446,   455,   142,   159,   166,   159,   133,   159,
     166,   178,   446,   446,   133,   159,   166,   178,    34,    33,
      12,    14,   393,   395,   411,   412,   419,    33,    12,    12,
      12,   369,    33,    40,    12,    12,   372,   370,   418,   372,
     369,    12,   372,    12,    12,    12,    33,   372,   372,   404,
     446,   372,   381,   198,    99,   194,    20,   198,    20,   198,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   379,   379,   379,   379,   379,   446,   446,   379,
     379,   379,   372,   381,     5,    34,    38,    40,    41,    43,
      44,   376,   378,   372,   370,   446,   447,   372,   256,   284,
      33,   372,   286,   453,   443,   425,   220,    33,    13,    33,
     372,    72,    33,   149,    33,    33,   370,    33,    33,   372,
      13,    12,   261,   370,   284,   191,   271,   288,   290,   453,
     272,   220,   272,   371,   372,   402,   408,   401,   229,   394,
     419,    12,   416,   414,   410,   416,   416,   379,    20,   198,
     372,   372,    20,   372,   372,   372,   159,   159,   166,   159,
     159,   166,   159,   399,   400,   418,   372,   393,    20,    12,
      56,   412,   395,   372,   372,   372,   372,    13,   372,   372,
     372,   372,    13,    13,    13,   412,    13,    13,   372,    13,
     372,   372,   372,    33,    13,    13,    40,   100,   100,    26,
      56,   386,   387,   388,   389,   104,   129,   133,   142,   145,
     148,   159,   160,   166,   173,   178,   179,   183,   187,   188,
     189,   223,   390,   383,   385,    31,   100,   100,   374,   379,
      13,    20,   198,    31,    33,   460,   284,    33,   424,   444,
      33,    33,   284,   261,    31,   360,    12,    33,   271,   460,
      13,    13,    13,   100,   396,   397,   398,   399,   416,   441,
      13,    13,   440,    13,    13,    13,   159,   159,    20,    43,
      12,   405,   407,   409,   412,   416,    13,   391,   392,   393,
     418,   396,   394,    13,    20,    13,    33,    13,    13,    13,
      13,    20,    20,    13,   372,    40,    40,   446,   372,   381,
      20,   198,   389,    40,    33,   198,   372,   447,    12,   284,
     143,   152,   285,   360,   214,   361,   362,   363,   365,    13,
     272,    33,   284,   274,    13,    20,    20,    13,   400,   407,
      12,   416,   409,   416,    20,   393,    13,   100,   372,   372,
     372,   372,   372,   372,   100,   100,   387,   193,   372,   372,
     370,   284,   284,    13,   231,    31,   364,    20,   258,    33,
      13,   271,   398,    28,    13,   396,   416,   392,    13,    13,
      20,    99,   198,    13,   220,    33,   218,   361,   363,    12,
      33,    13,    13,   372,   387,   143,    31,   366,   256,   284,
      13,   198,   284,    31,   258,   367,   368,    13,   283,    20,
     368,   367
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   232,   233,   234,   234,   234,   235,   235,   236,   236,
     237,   238,   238,   239,   239,   239,   239,   239,   239,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     241,   241,   241,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   243,   243,   244,
     244,   244,   244,   245,   245,   245,   246,   246,   246,   247,
     247,   247,   247,   247,   248,   248,   248,   249,   249,   250,
     250,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   256,   257,   257,   257,   257,   257,   257,   258,   259,
     259,   259,   259,   260,   260,   260,   261,   261,   262,   262,
     263,   263,   263,   264,   264,   264,   265,   265,   266,   266,
     267,   267,   267,   268,   268,   269,   269,   270,   270,   271,
     271,   272,   272,   273,   273,   274,   275,   275,   276,   276,
     276,   277,   277,   278,   278,   279,   279,   280,   281,   281,
     282,   283,   283,   284,   285,   285,   285,   285,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     290,   290,   290,   290,   291,   291,   292,   292,   293,   293,
     294,   295,   295,   296,   296,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   298,   298,   298,   298,   299,   299,
     299,   299,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   301,   301,   301,   301,   301,   301,   301,
     302,   302,   303,   303,   303,   304,   304,   305,   305,   306,
     306,   307,   308,   308,   309,   309,   309,   310,   310,   310,
     310,   310,   311,   311,   312,   312,   312,   312,   313,   313,
     314,   315,   315,   316,   316,   316,   317,   318,   318,   319,
     319,   320,   320,   321,   321,   322,   322,   322,   322,   323,
     323,   324,   324,   325,   325,   325,   325,   325,   326,   326,
     326,   326,   326,   327,   327,   327,   327,   328,   328,   328,
     328,   328,   329,   329,   330,   330,   330,   330,   330,   330,
     331,   331,   332,   332,   333,   333,   334,   334,   334,   334,
     335,   335,   335,   335,   335,   335,   336,   336,   336,   337,
     337,   338,   338,   338,   339,   339,   340,   340,   340,   341,
     341,   341,   341,   341,   341,   341,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   343,   343,   343,
     343,   344,   344,   344,   345,   345,   345,   346,   346,   346,
     346,   346,   347,   347,   347,   348,   348,   349,   349,   350,
     350,   351,   351,   352,   352,   353,   353,   354,   354,   355,
     355,   356,   357,   357,   358,   358,   359,   359,   360,   360,
     361,   361,   362,   363,   363,   364,   364,   365,   365,   366,
     366,   366,   367,   367,   368,   368,   369,   369,   370,   370,
     371,   371,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   373,   373,
     374,   374,   374,   375,   375,   375,   375,   376,   377,   377,
     378,   378,   378,   378,   378,   378,   378,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     380,   380,   381,   382,   383,   383,   384,   384,   385,   385,
     386,   386,   387,   387,   388,   388,   388,   389,   389,   390,
     391,   391,   392,   392,   393,   393,   394,   394,   394,   395,
     395,   395,   395,   396,   396,   396,   397,   398,   398,   399,
     400,   400,   401,   401,   401,   402,   402,   403,   404,   405,
     405,   406,   406,   407,   407,   407,   407,   407,   407,   407,
     408,   408,   408,   408,   408,   408,   408,   409,   409,   410,
     410,   411,   412,   412,   413,   413,   414,   414,   415,   416,
     416,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   418,   418,   418,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   420,   420,   421,   421,   422,   422,
     423,   423,   424,   424,   425,   425,   425,   425,   425,   425,
     425,   426,   426,   427,   428,   429,   429,   429,   430,   431,
     432,   433,   433,   433,   434,   434,   434,   434,   434,   434,
     434,   435,   435,   436,   436,   437,   438,   439,   439,   440,
     441,   441,   442,   443,   443,   444,   444,   444,   444,   445,
     445,   446,   446,   447,   447,   448,   448,   448,   448,   448,
     449,   449,   449,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   451,   451,   451,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     455,   455,   456,   456,   456,   456,   456,   456,   457,   457,
     457,   457,   457,   457,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   460,   460
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     3,     3,     6,     4,     1,
       4,     5,     6,     6,     6,     3,     3,     2,     2,     6,
       1,     3,     4,     1,     2,     2,     2,     4,     2,     4,
       2,     2,     2,     2,     2,     2,     2,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     3,
       0,     1,     2,     3,     3,     1,     1,     3,     1,     0,
       3,     4,     5,     0,     1,     0,     5,     0,     1,     0,
       1,     1,     3,     0,     1,     6,     0,     4,     2,     2,
       2,     0,     2,     1,     4,     0,     2,     3,     0,     2,
       1,     1,     3,     2,     0,     2,     3,     5,     1,     3,
       2,     1,     6,     5,     6,     8,     9,     4,     4,     6,
       3,     2,     3,     2,     2,     3,     4,     8,     7,     1,
       7,     4,     0,     1,     2,     1,     0,     5,     3,     2,
       5,     4,     4,     6,     3,     3,     1,     3,     1,     3,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     5,     4,     6,     5,
       2,     5,     4,     6,     5,     2,     6,     5,     7,     6,
       1,     4,     4,     0,     3,     2,     4,     2,     1,     3,
       4,     6,     1,     4,     2,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     2,     4,     3,     1,     4,     4,
       4,     5,     1,     3,     2,     2,     1,     3,     1,     3,
       5,     1,     3,     0,     2,     1,     2,     1,     3,     0,
       3,     2,     1,     3,     3,     4,     4,     4,     3,     1,
       0,     4,     2,     2,     3,     5,     5,     4,     1,     1,
       1,     1,     1,     0,     2,     7,     5,     6,     4,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     2,     6,     4,     1,     2,     1,     2,     3,     1,
       1,     1,     3,     1,     1,     3,     1,     1,     1,     1,
       2,     1,     2,     3,     1,     1,     1,     3,     1,     1,
       4,     3,     2,     3,     3,     4,     1,     2,     4,     2,
       4,     2,     2,     2,     2,     2,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     6,     1,     3,     1,
       3,     0,     0,     1,     1,     1,     0,     2,     0,     3,
       0,     1,     5,     1,     3,     0,     3,     0,     3,     0,
       2,     3,     1,     3,     0,     2,     0,     1,     1,     3,
       0,     1,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     3,     3,     1,     1,     4,
       1,     1,     2,     6,     4,     4,     4,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     5,     5,     5,     4,     7,     9,     5,     5,     7,
       5,     5,     5,     5,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     3,     2,     2,     2,
       2,     2,     4,     4,     4,     6,     1,     4,     4,     7,
       4,     1,     1,     3,     3,     3,     3,     4,     4,     4,
       5,     1,     4,     4,     3,     5,     7,     3,     3,     5,
       1,     2,     3,     4,     1,     3,     5,     5,     1,     3,
       3,     6,     1,     3,     2,     3,     3,     1,     2,     4,
       2,     1,     1,     3,     1,     2,     1,     1,     0,     1,
       4,     3,     4,     0,     1,     3,     1,     1,     3,     2,
       1,     3,     1,     1,     1,     0,     2,     3,     2,     0,
       1,     0,     1,     1,     1,     2,     2,     3,     2,     1,
       1,     1,     2,     2,     3,     2,     1,     3,     4,     3,
       4,     1,     1,     2,     1,     2,     1,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       2,     2,     1,     1,     2,     2,     2,     3,     3,     1,
       2,     2,     3,     2,     3,     2,     3,     3,     3,     4,
       4,     1,     1,     2,     2,     2,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     2,     0,     1,
       1,     3,     1,     1,     2,     2,     2,     4,     2,     2,
       2,     0,     1,     4,     3,     4,     5,     5,     4,     4,
       5,     1,     1,     1,     3,     3,     3,     3,     4,     4,
       3,     5,     4,     5,     4,     1,     1,     0,     3,     1,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2
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
#line 874 "full_bnfc_parser.y"
                  { (yyval.program_) = new acsl::AProgram((yyvsp[0].globals_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 5088 "Parser.C"
    break;

  case 3: /* Globals: %empty  */
#line 876 "full_bnfc_parser.y"
                      { (yyval.globals_) = new acsl::NoGlobals(); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 5094 "Parser.C"
    break;

  case 4: /* Globals: Global Globals  */
#line 877 "full_bnfc_parser.y"
                   { (yyval.globals_) = new acsl::SimpleGlobals((yyvsp[-1].global_), (yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 5100 "Parser.C"
    break;

  case 5: /* Globals: _SEMI Globals  */
#line 878 "full_bnfc_parser.y"
                  { (yyval.globals_) = new acsl::SemiColonGlobals((yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 5106 "Parser.C"
    break;

  case 6: /* Global: Declaration  */
#line 884 "full_bnfc_parser.y"
                     { (yyval.global_) = new acsl::GlobalsDeclataion((yyvsp[0].declaration_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 5112 "Parser.C"
    break;

  case 7: /* Global: FunctionDef  */
#line 885 "full_bnfc_parser.y"
                { (yyval.global_) = new acsl::GlobalsFunctionDef((yyvsp[0].functiondef_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 5118 "Parser.C"
    break;

  case 8: /* IdOrTypenameAsId: _IDENT_  */
#line 887 "full_bnfc_parser.y"
                           { (yyval.idortypenameasid_) = new acsl::IdOrTypenameAsIdIdentifier((yyvsp[0]._string)); (yyval.idortypenameasid_)->line_number = (yyloc).first_line; (yyval.idortypenameasid_)->char_number = (yyloc).first_column; result->idortypenameasid_ = (yyval.idortypenameasid_); }
#line 5124 "Parser.C"
    break;

  case 9: /* IdOrTypenameAsId: T_NAMEDTYPE  */
#line 888 "full_bnfc_parser.y"
                { (yyval.idortypenameasid_) = new acsl::IdOrTypenameAsIdNamedType((yyvsp[0]._string)); (yyval.idortypenameasid_)->line_number = (yyloc).first_line; (yyval.idortypenameasid_)->char_number = (yyloc).first_column; result->idortypenameasid_ = (yyval.idortypenameasid_); }
#line 5130 "Parser.C"
    break;

  case 10: /* IdOrTypename: IdOrTypenameAsId  */
#line 890 "full_bnfc_parser.y"
                                { (yyval.idortypename_) = new acsl::IdTypename((yyvsp[0].idortypenameasid_)); (yyval.idortypename_)->line_number = (yyloc).first_line; (yyval.idortypename_)->char_number = (yyloc).first_column; result->idortypename_ = (yyval.idortypename_); }
#line 5136 "Parser.C"
    break;

  case 11: /* MaybeComma: %empty  */
#line 892 "full_bnfc_parser.y"
                         { (yyval.maybecomma_) = new acsl::NoComa(); (yyval.maybecomma_)->line_number = (yyloc).first_line; (yyval.maybecomma_)->char_number = (yyloc).first_column; result->maybecomma_ = (yyval.maybecomma_); }
#line 5142 "Parser.C"
    break;

  case 12: /* MaybeComma: _COMMA  */
#line 893 "full_bnfc_parser.y"
           { (yyval.maybecomma_) = new acsl::Coma(); (yyval.maybecomma_)->line_number = (yyloc).first_line; (yyval.maybecomma_)->char_number = (yyloc).first_column; result->maybecomma_ = (yyval.maybecomma_); }
#line 5148 "Parser.C"
    break;

  case 13: /* AssignExpr15: _IDENT_  */
#line 895 "full_bnfc_parser.y"
                       { (yyval.assignexpr_) = new acsl::IdentifierPrimaryExpression((yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5154 "Parser.C"
    break;

  case 14: /* AssignExpr15: Constant  */
#line 896 "full_bnfc_parser.y"
             { (yyval.assignexpr_) = new acsl::ConstantPrimaryExpressin((yyvsp[0].constant_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5160 "Parser.C"
    break;

  case 15: /* AssignExpr15: _LPAREN ListExpression _RPAREN  */
#line 897 "full_bnfc_parser.y"
                                   { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new acsl::CommaExpressionPrimaryExpressin((yyvsp[-1].listexpression_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5166 "Parser.C"
    break;

  case 16: /* AssignExpr15: _LPAREN Block _RPAREN  */
#line 898 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = new acsl::BlockPrimaryExpressin((yyvsp[-1].block_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5172 "Parser.C"
    break;

  case 17: /* AssignExpr15: _SYMB_4 _LPAREN AssignExpr _COMMA ListGenericAssociation _RPAREN  */
#line 899 "full_bnfc_parser.y"
                                                                     { std::reverse((yyvsp[-1].listgenericassociation_)->begin(),(yyvsp[-1].listgenericassociation_)->end()) ;(yyval.assignexpr_) = new acsl::GenericAssociationPrimaryExpressin((yyvsp[-3].assignexpr_), (yyvsp[-1].listgenericassociation_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5178 "Parser.C"
    break;

  case 18: /* AssignExpr15: _SYMB_4 _LPAREN AssignExpr _RPAREN  */
#line 900 "full_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new acsl::GenericPrimaryExpressin((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5184 "Parser.C"
    break;

  case 19: /* AssignExpr14: AssignExpr15  */
#line 902 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5190 "Parser.C"
    break;

  case 20: /* AssignExpr14: AssignExpr14 T_LBRACKET ListExpression T_RBRACKET  */
#line 903 "full_bnfc_parser.y"
                                                      { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new acsl::BracketsPostfixExpression((yyvsp[-3].assignexpr_), (yyvsp[-2]._string), (yyvsp[-1].listexpression_), (yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5196 "Parser.C"
    break;

  case 21: /* AssignExpr14: AssignExpr14 _LPAREN Arguments _RPAREN GhostArgumentsOpt  */
#line 904 "full_bnfc_parser.y"
                                                             { (yyval.assignexpr_) = new acsl::ArgumentsPostfixExpression((yyvsp[-4].assignexpr_), (yyvsp[-2].arguments_), (yyvsp[0].ghostargumentsopt_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5202 "Parser.C"
    break;

  case 22: /* AssignExpr14: _SYMB_5 _LPAREN Expression _COMMA TypeName _RPAREN  */
#line 905 "full_bnfc_parser.y"
                                                       { (yyval.assignexpr_) = new acsl::BuiltinVaArgPostfixExpression((yyvsp[-3].expression_), (yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5208 "Parser.C"
    break;

  case 23: /* AssignExpr14: _SYMB_6 _LPAREN TypeName _COMMA TypeName _RPAREN  */
#line 906 "full_bnfc_parser.y"
                                                     { (yyval.assignexpr_) = new acsl::BuiltinTypesCompatPostfixExpression((yyvsp[-3].typename_), (yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5214 "Parser.C"
    break;

  case 24: /* AssignExpr14: _SYMB_7 _LPAREN TypeName _COMMA OffsetofMemberDesignator _RPAREN  */
#line 907 "full_bnfc_parser.y"
                                                                     { (yyval.assignexpr_) = new acsl::BuiltinOffsetOfPostfixExpression((yyvsp[-3].typename_), (yyvsp[-1].offsetofmemberdesignator_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5220 "Parser.C"
    break;

  case 25: /* AssignExpr14: AssignExpr14 _DOT IdOrTypename  */
#line 908 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::DotPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5226 "Parser.C"
    break;

  case 26: /* AssignExpr14: AssignExpr14 _RARROW IdOrTypename  */
#line 909 "full_bnfc_parser.y"
                                      { (yyval.assignexpr_) = new acsl::ArrowPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5232 "Parser.C"
    break;

  case 27: /* AssignExpr14: AssignExpr14 _DPLUS  */
#line 910 "full_bnfc_parser.y"
                        { (yyval.assignexpr_) = new acsl::PlusPlusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5238 "Parser.C"
    break;

  case 28: /* AssignExpr14: AssignExpr14 _DMINUS  */
#line 911 "full_bnfc_parser.y"
                         { (yyval.assignexpr_) = new acsl::MinusMinusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5244 "Parser.C"
    break;

  case 29: /* AssignExpr14: _LPAREN TypeName _RPAREN T_LBRACE InitializerListOpt T_RBRACE  */
#line 912 "full_bnfc_parser.y"
                                                                  { (yyval.assignexpr_) = new acsl::ConstructorPostfixExpression((yyvsp[-4].typename_), (yyvsp[-2]._string), (yyvsp[-1].initializerlistopt_), (yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5250 "Parser.C"
    break;

  case 30: /* OffsetofMemberDesignator: IdOrTypename  */
#line 914 "full_bnfc_parser.y"
                                        { (yyval.offsetofmemberdesignator_) = new acsl::IdTypenameOffsetMembetDesignator((yyvsp[0].idortypename_)); (yyval.offsetofmemberdesignator_)->line_number = (yyloc).first_line; (yyval.offsetofmemberdesignator_)->char_number = (yyloc).first_column; result->offsetofmemberdesignator_ = (yyval.offsetofmemberdesignator_); }
#line 5256 "Parser.C"
    break;

  case 31: /* OffsetofMemberDesignator: OffsetofMemberDesignator _DOT _IDENT_  */
#line 915 "full_bnfc_parser.y"
                                          { (yyval.offsetofmemberdesignator_) = new acsl::DotOffsetMembetDesignator((yyvsp[-2].offsetofmemberdesignator_), (yyvsp[0]._string)); (yyval.offsetofmemberdesignator_)->line_number = (yyloc).first_line; (yyval.offsetofmemberdesignator_)->char_number = (yyloc).first_column; result->offsetofmemberdesignator_ = (yyval.offsetofmemberdesignator_); }
#line 5262 "Parser.C"
    break;

  case 32: /* OffsetofMemberDesignator: OffsetofMemberDesignator T_LBRACKET ListExpression T_RBRACKET  */
#line 916 "full_bnfc_parser.y"
                                                                  { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.offsetofmemberdesignator_) = new acsl::BracketsOffsetMembetDesignator((yyvsp[-3].offsetofmemberdesignator_), (yyvsp[-2]._string), (yyvsp[-1].listexpression_), (yyvsp[0]._string)); (yyval.offsetofmemberdesignator_)->line_number = (yyloc).first_line; (yyval.offsetofmemberdesignator_)->char_number = (yyloc).first_column; result->offsetofmemberdesignator_ = (yyval.offsetofmemberdesignator_); }
#line 5268 "Parser.C"
    break;

  case 33: /* AssignExpr13: AssignExpr14  */
#line 918 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5274 "Parser.C"
    break;

  case 34: /* AssignExpr13: _DPLUS AssignExpr13  */
#line 919 "full_bnfc_parser.y"
                        { (yyval.assignexpr_) = new acsl::UnaryExprPlusPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5280 "Parser.C"
    break;

  case 35: /* AssignExpr13: _DMINUS AssignExpr13  */
#line 920 "full_bnfc_parser.y"
                         { (yyval.assignexpr_) = new acsl::UnaryExprMinusMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5286 "Parser.C"
    break;

  case 36: /* AssignExpr13: _KW_sizeof AssignExpr13  */
#line 921 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = new acsl::UnaryExprSizeOf((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5292 "Parser.C"
    break;

  case 37: /* AssignExpr13: _KW_sizeof _LPAREN TypeName _RPAREN  */
#line 922 "full_bnfc_parser.y"
                                        { (yyval.assignexpr_) = new acsl::UnaryExprSizeOfTypeName((yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5298 "Parser.C"
    break;

  case 38: /* AssignExpr13: T_ALIGNOF AssignExpr13  */
#line 923 "full_bnfc_parser.y"
                           { (yyval.assignexpr_) = new acsl::UnaryExprAlignOfUnaryExpr((yyvsp[-1]._string), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5304 "Parser.C"
    break;

  case 39: /* AssignExpr13: T_ALIGNOF _LPAREN TypeName _RPAREN  */
#line 924 "full_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new acsl::UnaryExprAlignOfTypeName((yyvsp[-3]._string), (yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5310 "Parser.C"
    break;

  case 40: /* AssignExpr13: _PLUS AssignExpr12  */
#line 925 "full_bnfc_parser.y"
                       { (yyval.assignexpr_) = new acsl::UnaryExprPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5316 "Parser.C"
    break;

  case 41: /* AssignExpr13: _MINUS AssignExpr12  */
#line 926 "full_bnfc_parser.y"
                        { (yyval.assignexpr_) = new acsl::UnaryExprMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5322 "Parser.C"
    break;

  case 42: /* AssignExpr13: _STAR AssignExpr12  */
#line 927 "full_bnfc_parser.y"
                       { (yyval.assignexpr_) = new acsl::UnaryExprMult((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5328 "Parser.C"
    break;

  case 43: /* AssignExpr13: _AMP AssignExpr12  */
#line 928 "full_bnfc_parser.y"
                      { (yyval.assignexpr_) = new acsl::UnaryExprAmp((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5334 "Parser.C"
    break;

  case 44: /* AssignExpr13: _BANG AssignExpr12  */
#line 929 "full_bnfc_parser.y"
                       { (yyval.assignexpr_) = new acsl::UnaryExprNot((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5340 "Parser.C"
    break;

  case 45: /* AssignExpr13: _TILDE AssignExpr12  */
#line 930 "full_bnfc_parser.y"
                        { (yyval.assignexpr_) = new acsl::UnaryExprTilde((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5346 "Parser.C"
    break;

  case 46: /* AssignExpr13: _DAMP IdOrTypenameAsId  */
#line 931 "full_bnfc_parser.y"
                           { (yyval.assignexpr_) = new acsl::UnaryExprAddress((yyvsp[0].idortypenameasid_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5352 "Parser.C"
    break;

  case 47: /* AssignExpr12: AssignExpr13  */
#line 933 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5358 "Parser.C"
    break;

  case 48: /* AssignExpr12: _LPAREN TypeName _RPAREN AssignExpr12  */
#line 934 "full_bnfc_parser.y"
                                          { (yyval.assignexpr_) = new acsl::CastExpr((yyvsp[-2].typename_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5364 "Parser.C"
    break;

  case 49: /* AssignExpr11: AssignExpr12  */
#line 936 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5370 "Parser.C"
    break;

  case 50: /* AssignExpr11: AssignExpr11 _STAR AssignExpr12  */
#line 937 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::MulsExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5376 "Parser.C"
    break;

  case 51: /* AssignExpr11: AssignExpr11 _SLASH AssignExpr12  */
#line 938 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::DivExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5382 "Parser.C"
    break;

  case 52: /* AssignExpr11: AssignExpr11 _PERCENT AssignExpr12  */
#line 939 "full_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new acsl::ModExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5388 "Parser.C"
    break;

  case 53: /* AssignExpr10: AssignExpr11  */
#line 941 "full_bnfc_parser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5394 "Parser.C"
    break;

  case 54: /* AssignExpr10: AssignExpr10 _PLUS AssignExpr11  */
#line 942 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::PlusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5400 "Parser.C"
    break;

  case 55: /* AssignExpr10: AssignExpr10 _MINUS AssignExpr11  */
#line 943 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::MinusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5406 "Parser.C"
    break;

  case 56: /* AssignExpr9: AssignExpr10  */
#line 945 "full_bnfc_parser.y"
                           { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5412 "Parser.C"
    break;

  case 57: /* AssignExpr9: AssignExpr9 _DLT AssignExpr10  */
#line 946 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::LeftShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5418 "Parser.C"
    break;

  case 58: /* AssignExpr9: AssignExpr9 _DGT AssignExpr10  */
#line 947 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::RightShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5424 "Parser.C"
    break;

  case 59: /* AssignExpr8: AssignExpr9  */
#line 949 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5430 "Parser.C"
    break;

  case 60: /* AssignExpr8: AssignExpr8 _LT AssignExpr9  */
#line 950 "full_bnfc_parser.y"
                                { (yyval.assignexpr_) = new acsl::LessExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5436 "Parser.C"
    break;

  case 61: /* AssignExpr8: AssignExpr8 _GT AssignExpr9  */
#line 951 "full_bnfc_parser.y"
                                { (yyval.assignexpr_) = new acsl::GreaterExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5442 "Parser.C"
    break;

  case 62: /* AssignExpr8: AssignExpr8 _LDARROW AssignExpr9  */
#line 952 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::LessEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5448 "Parser.C"
    break;

  case 63: /* AssignExpr8: AssignExpr8 _GTEQ AssignExpr9  */
#line 953 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::GreaterEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5454 "Parser.C"
    break;

  case 64: /* AssignExpr7: AssignExpr8  */
#line 955 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5460 "Parser.C"
    break;

  case 65: /* AssignExpr7: AssignExpr7 _DEQ AssignExpr8  */
#line 956 "full_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new acsl::EqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5466 "Parser.C"
    break;

  case 66: /* AssignExpr7: AssignExpr7 _BANGEQ AssignExpr8  */
#line 957 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::NotEqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5472 "Parser.C"
    break;

  case 67: /* AssignExpr6: AssignExpr7  */
#line 959 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5478 "Parser.C"
    break;

  case 68: /* AssignExpr6: AssignExpr6 _AMP AssignExpr7  */
#line 960 "full_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new acsl::BitAndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5484 "Parser.C"
    break;

  case 69: /* AssignExpr5: AssignExpr6  */
#line 962 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5490 "Parser.C"
    break;

  case 70: /* AssignExpr5: AssignExpr5 _CARET AssignExpr6  */
#line 963 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::BitXorExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5496 "Parser.C"
    break;

  case 71: /* AssignExpr4: AssignExpr5  */
#line 965 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5502 "Parser.C"
    break;

  case 72: /* AssignExpr4: AssignExpr4 _BAR AssignExpr5  */
#line 966 "full_bnfc_parser.y"
                                 { (yyval.assignexpr_) = new acsl::BitOrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5508 "Parser.C"
    break;

  case 73: /* AssignExpr3: AssignExpr4  */
#line 968 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5514 "Parser.C"
    break;

  case 74: /* AssignExpr3: AssignExpr3 _DAMP AssignExpr4  */
#line 969 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::AndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5520 "Parser.C"
    break;

  case 75: /* AssignExpr2: AssignExpr3  */
#line 971 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5526 "Parser.C"
    break;

  case 76: /* AssignExpr2: AssignExpr2 _DBAR AssignExpr3  */
#line 972 "full_bnfc_parser.y"
                                  { (yyval.assignexpr_) = new acsl::OrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5532 "Parser.C"
    break;

  case 77: /* AssignExpr1: AssignExpr2  */
#line 974 "full_bnfc_parser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5538 "Parser.C"
    break;

  case 78: /* AssignExpr1: AssignExpr2 _QUESTION OptExpression _COLON AssignExpr1  */
#line 975 "full_bnfc_parser.y"
                                                           { (yyval.assignexpr_) = new acsl::TernaryCondExpr((yyvsp[-4].assignexpr_), (yyvsp[-2].optexpression_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5544 "Parser.C"
    break;

  case 79: /* AssignExpr: AssignExpr1  */
#line 977 "full_bnfc_parser.y"
                         { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5550 "Parser.C"
    break;

  case 80: /* AssignExpr: AssignExpr12 _EQ AssignExpr  */
#line 978 "full_bnfc_parser.y"
                                { (yyval.assignexpr_) = new acsl::EqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5556 "Parser.C"
    break;

  case 81: /* AssignExpr: AssignExpr12 _PLUSEQ AssignExpr  */
#line 979 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::PlusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5562 "Parser.C"
    break;

  case 82: /* AssignExpr: AssignExpr12 _MINUSEQ AssignExpr  */
#line 980 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::MinusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5568 "Parser.C"
    break;

  case 83: /* AssignExpr: AssignExpr12 _STAREQ AssignExpr  */
#line 981 "full_bnfc_parser.y"
                                    { (yyval.assignexpr_) = new acsl::MultEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5574 "Parser.C"
    break;

  case 84: /* AssignExpr: AssignExpr12 _SLASHEQ AssignExpr  */
#line 982 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::DivEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5580 "Parser.C"
    break;

  case 85: /* AssignExpr: AssignExpr12 _PERCENTEQ AssignExpr  */
#line 983 "full_bnfc_parser.y"
                                       { (yyval.assignexpr_) = new acsl::ModEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5586 "Parser.C"
    break;

  case 86: /* AssignExpr: AssignExpr12 _AMPEQ AssignExpr  */
#line 984 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::AndEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5592 "Parser.C"
    break;

  case 87: /* AssignExpr: AssignExpr12 _BAREQ AssignExpr  */
#line 985 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::OrEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5598 "Parser.C"
    break;

  case 88: /* AssignExpr: AssignExpr12 _CARETEQ AssignExpr  */
#line 986 "full_bnfc_parser.y"
                                     { (yyval.assignexpr_) = new acsl::XorEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5604 "Parser.C"
    break;

  case 89: /* AssignExpr: AssignExpr12 _DLTEQ AssignExpr  */
#line 987 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::LeftShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5610 "Parser.C"
    break;

  case 90: /* AssignExpr: AssignExpr12 _DGTEQ AssignExpr  */
#line 988 "full_bnfc_parser.y"
                                   { (yyval.assignexpr_) = new acsl::RightShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 5616 "Parser.C"
    break;

  case 91: /* Expression: AssignExpr  */
#line 990 "full_bnfc_parser.y"
                        { (yyval.expression_) = new acsl::AssignmentExpr((yyvsp[0].assignexpr_)); (yyval.expression_)->line_number = (yyloc).first_line; (yyval.expression_)->char_number = (yyloc).first_column; result->expression_ = (yyval.expression_); }
#line 5622 "Parser.C"
    break;

  case 92: /* Constant: _INTEGER_  */
#line 992 "full_bnfc_parser.y"
                     { (yyval.constant_) = new acsl::ConstantInt((yyvsp[0]._int)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 5628 "Parser.C"
    break;

  case 93: /* Constant: _DOUBLE_  */
#line 993 "full_bnfc_parser.y"
             { (yyval.constant_) = new acsl::ConstantFloat((yyvsp[0]._double)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 5634 "Parser.C"
    break;

  case 94: /* Constant: _CHAR_  */
#line 994 "full_bnfc_parser.y"
           { (yyval.constant_) = new acsl::ConstantChar((yyvsp[0]._char)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 5640 "Parser.C"
    break;

  case 95: /* Constant: T_CST_WCHAR  */
#line 995 "full_bnfc_parser.y"
                { (yyval.constant_) = new acsl::ConstantWChar((yyvsp[0]._string)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 5646 "Parser.C"
    break;

  case 96: /* Constant: StringConstant  */
#line 996 "full_bnfc_parser.y"
                   { (yyval.constant_) = new acsl::ConstantString((yyvsp[0].stringconstant_)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 5652 "Parser.C"
    break;

  case 97: /* Constant: WStringList  */
#line 997 "full_bnfc_parser.y"
                { (yyval.constant_) = new acsl::ConstantWString((yyvsp[0].wstringlist_)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 5658 "Parser.C"
    break;

  case 98: /* StringConstant: ListOneString  */
#line 999 "full_bnfc_parser.y"
                               { std::reverse((yyvsp[0].listonestring_)->begin(),(yyvsp[0].listonestring_)->end()) ;(yyval.stringconstant_) = new acsl::StringConst((yyvsp[0].listonestring_)); (yyval.stringconstant_)->line_number = (yyloc).first_line; (yyval.stringconstant_)->char_number = (yyloc).first_column; result->stringconstant_ = (yyval.stringconstant_); }
#line 5664 "Parser.C"
    break;

  case 99: /* WStringList: T_CST_WSTRING  */
#line 1001 "full_bnfc_parser.y"
                            { (yyval.wstringlist_) = new acsl::LastConstantWString((yyvsp[0]._string)); (yyval.wstringlist_)->line_number = (yyloc).first_line; (yyval.wstringlist_)->char_number = (yyloc).first_column; result->wstringlist_ = (yyval.wstringlist_); }
#line 5670 "Parser.C"
    break;

  case 100: /* WStringList: OneString WStringList  */
#line 1002 "full_bnfc_parser.y"
                          { (yyval.wstringlist_) = new acsl::OneStringWithList((yyvsp[-1].onestring_), (yyvsp[0].wstringlist_)); (yyval.wstringlist_)->line_number = (yyloc).first_line; (yyval.wstringlist_)->char_number = (yyloc).first_column; result->wstringlist_ = (yyval.wstringlist_); }
#line 5676 "Parser.C"
    break;

  case 101: /* WStringList: T_CST_WSTRING WStringList  */
#line 1003 "full_bnfc_parser.y"
                              { (yyval.wstringlist_) = new acsl::WStringWithList((yyvsp[-1]._string), (yyvsp[0].wstringlist_)); (yyval.wstringlist_)->line_number = (yyloc).first_line; (yyval.wstringlist_)->char_number = (yyloc).first_column; result->wstringlist_ = (yyval.wstringlist_); }
#line 5682 "Parser.C"
    break;

  case 102: /* WStringList: T_CST_WSTRING ListOneString  */
#line 1004 "full_bnfc_parser.y"
                                { std::reverse((yyvsp[0].listonestring_)->begin(),(yyvsp[0].listonestring_)->end()) ;(yyval.wstringlist_) = new acsl::LatersConstantWString((yyvsp[-1]._string), (yyvsp[0].listonestring_)); (yyval.wstringlist_)->line_number = (yyloc).first_line; (yyval.wstringlist_)->char_number = (yyloc).first_column; result->wstringlist_ = (yyval.wstringlist_); }
#line 5688 "Parser.C"
    break;

  case 103: /* OneString: _STRING_  */
#line 1006 "full_bnfc_parser.y"
                     { (yyval.onestring_) = new acsl::SimpleConstantString((yyvsp[0]._string)); (yyval.onestring_)->line_number = (yyloc).first_line; (yyval.onestring_)->char_number = (yyloc).first_column; result->onestring_ = (yyval.onestring_); }
#line 5694 "Parser.C"
    break;

  case 104: /* OneString: T_FUNCTION__  */
#line 1007 "full_bnfc_parser.y"
                 { (yyval.onestring_) = new acsl::FunctionConstantString((yyvsp[0]._string)); (yyval.onestring_)->line_number = (yyloc).first_line; (yyval.onestring_)->char_number = (yyloc).first_column; result->onestring_ = (yyval.onestring_); }
#line 5700 "Parser.C"
    break;

  case 105: /* OneString: _SYMB_45  */
#line 1008 "full_bnfc_parser.y"
             { (yyval.onestring_) = new acsl::PrettyFunctionConstantString(); (yyval.onestring_)->line_number = (yyloc).first_line; (yyval.onestring_)->char_number = (yyloc).first_column; result->onestring_ = (yyval.onestring_); }
#line 5706 "Parser.C"
    break;

  case 106: /* ListOneString: OneString  */
#line 1010 "full_bnfc_parser.y"
                          { (yyval.listonestring_) = new acsl::ListOneString(); (yyval.listonestring_)->push_back((yyvsp[0].onestring_)); result->listonestring_ = (yyval.listonestring_); }
#line 5712 "Parser.C"
    break;

  case 107: /* ListOneString: OneString ListOneString  */
#line 1011 "full_bnfc_parser.y"
                            { (yyvsp[0].listonestring_)->push_back((yyvsp[-1].onestring_)); (yyval.listonestring_) = (yyvsp[0].listonestring_); result->listonestring_ = (yyval.listonestring_); }
#line 5718 "Parser.C"
    break;

  case 108: /* InitExpression: Expression  */
#line 1013 "full_bnfc_parser.y"
                            { (yyval.initexpression_) = new acsl::SimpleExpression((yyvsp[0].expression_)); (yyval.initexpression_)->line_number = (yyloc).first_line; (yyval.initexpression_)->char_number = (yyloc).first_column; result->initexpression_ = (yyval.initexpression_); }
#line 5724 "Parser.C"
    break;

  case 109: /* InitExpression: T_LBRACE InitializerListOpt T_RBRACE  */
#line 1014 "full_bnfc_parser.y"
                                         { (yyval.initexpression_) = new acsl::BracesExpression((yyvsp[-2]._string), (yyvsp[-1].initializerlistopt_), (yyvsp[0]._string)); (yyval.initexpression_)->line_number = (yyloc).first_line; (yyval.initexpression_)->char_number = (yyloc).first_column; result->initexpression_ = (yyval.initexpression_); }
#line 5730 "Parser.C"
    break;

  case 110: /* InitializerListOpt: %empty  */
#line 1016 "full_bnfc_parser.y"
                                 { (yyval.initializerlistopt_) = new acsl::EmptyInitializerList(); (yyval.initializerlistopt_)->line_number = (yyloc).first_line; (yyval.initializerlistopt_)->char_number = (yyloc).first_column; result->initializerlistopt_ = (yyval.initializerlistopt_); }
#line 5736 "Parser.C"
    break;

  case 111: /* InitializerListOpt: ListInitializerSingle  */
#line 1017 "full_bnfc_parser.y"
                          { std::reverse((yyvsp[0].listinitializersingle_)->begin(),(yyvsp[0].listinitializersingle_)->end()) ;(yyval.initializerlistopt_) = new acsl::InitializerList((yyvsp[0].listinitializersingle_)); (yyval.initializerlistopt_)->line_number = (yyloc).first_line; (yyval.initializerlistopt_)->char_number = (yyloc).first_column; result->initializerlistopt_ = (yyval.initializerlistopt_); }
#line 5742 "Parser.C"
    break;

  case 112: /* InitializerListOpt: ListInitializerSingle _COMMA  */
#line 1018 "full_bnfc_parser.y"
                                 { std::reverse((yyvsp[-1].listinitializersingle_)->begin(),(yyvsp[-1].listinitializersingle_)->end()) ;(yyval.initializerlistopt_) = new acsl::InitializerListComma((yyvsp[-1].listinitializersingle_)); (yyval.initializerlistopt_)->line_number = (yyloc).first_line; (yyval.initializerlistopt_)->char_number = (yyloc).first_column; result->initializerlistopt_ = (yyval.initializerlistopt_); }
#line 5748 "Parser.C"
    break;

  case 113: /* InitializerSingle: InitDesignators EqOpt InitExpression  */
#line 1020 "full_bnfc_parser.y"
                                                         { (yyval.initializersingle_) = new acsl::InitializerDesignator((yyvsp[-2].initdesignators_), (yyvsp[-1].eqopt_), (yyvsp[0].initexpression_)); (yyval.initializersingle_)->line_number = (yyloc).first_line; (yyval.initializersingle_)->char_number = (yyloc).first_column; result->initializersingle_ = (yyval.initializersingle_); }
#line 5754 "Parser.C"
    break;

  case 114: /* InitializerSingle: IdOrTypename _COLON InitExpression  */
#line 1021 "full_bnfc_parser.y"
                                       { (yyval.initializersingle_) = new acsl::InitializerGCCDesignator((yyvsp[-2].idortypename_), (yyvsp[0].initexpression_)); (yyval.initializersingle_)->line_number = (yyloc).first_line; (yyval.initializersingle_)->char_number = (yyloc).first_column; result->initializersingle_ = (yyval.initializersingle_); }
#line 5760 "Parser.C"
    break;

  case 115: /* InitializerSingle: InitExpression  */
#line 1022 "full_bnfc_parser.y"
                   { (yyval.initializersingle_) = new acsl::EmptyInitializer((yyvsp[0].initexpression_)); (yyval.initializersingle_)->line_number = (yyloc).first_line; (yyval.initializersingle_)->char_number = (yyloc).first_column; result->initializersingle_ = (yyval.initializersingle_); }
#line 5766 "Parser.C"
    break;

  case 116: /* ListInitializerSingle: InitializerSingle  */
#line 1024 "full_bnfc_parser.y"
                                          { (yyval.listinitializersingle_) = new acsl::ListInitializerSingle(); (yyval.listinitializersingle_)->push_back((yyvsp[0].initializersingle_)); result->listinitializersingle_ = (yyval.listinitializersingle_); }
#line 5772 "Parser.C"
    break;

  case 117: /* ListInitializerSingle: InitializerSingle _COMMA ListInitializerSingle  */
#line 1025 "full_bnfc_parser.y"
                                                   { (yyvsp[0].listinitializersingle_)->push_back((yyvsp[-2].initializersingle_)); (yyval.listinitializersingle_) = (yyvsp[0].listinitializersingle_); result->listinitializersingle_ = (yyval.listinitializersingle_); }
#line 5778 "Parser.C"
    break;

  case 118: /* EqOpt: _EQ  */
#line 1027 "full_bnfc_parser.y"
            { (yyval.eqopt_) = new acsl::EquationSign(); (yyval.eqopt_)->line_number = (yyloc).first_line; (yyval.eqopt_)->char_number = (yyloc).first_column; result->eqopt_ = (yyval.eqopt_); }
#line 5784 "Parser.C"
    break;

  case 119: /* EqOpt: %empty  */
#line 1028 "full_bnfc_parser.y"
                { (yyval.eqopt_) = new acsl::NoEquationSign(); (yyval.eqopt_)->line_number = (yyloc).first_line; (yyval.eqopt_)->char_number = (yyloc).first_column; result->eqopt_ = (yyval.eqopt_); }
#line 5790 "Parser.C"
    break;

  case 120: /* InitDesignators: _DOT IdOrTypename InitDesignatorsOpt  */
#line 1030 "full_bnfc_parser.y"
                                                       { (yyval.initdesignators_) = new acsl::DotInitDesignator((yyvsp[-1].idortypename_), (yyvsp[0].initdesignatorsopt_)); (yyval.initdesignators_)->line_number = (yyloc).first_line; (yyval.initdesignators_)->char_number = (yyloc).first_column; result->initdesignators_ = (yyval.initdesignators_); }
#line 5796 "Parser.C"
    break;

  case 121: /* InitDesignators: T_LBRACKET Expression T_RBRACKET InitDesignatorsOpt  */
#line 1031 "full_bnfc_parser.y"
                                                        { (yyval.initdesignators_) = new acsl::BracketsInitDesignator((yyvsp[-3]._string), (yyvsp[-2].expression_), (yyvsp[-1]._string), (yyvsp[0].initdesignatorsopt_)); (yyval.initdesignators_)->line_number = (yyloc).first_line; (yyval.initdesignators_)->char_number = (yyloc).first_column; result->initdesignators_ = (yyval.initdesignators_); }
#line 5802 "Parser.C"
    break;

  case 122: /* InitDesignators: T_LBRACKET Expression _ELLIPSIS Expression T_RBRACKET  */
#line 1032 "full_bnfc_parser.y"
                                                          { (yyval.initdesignators_) = new acsl::BracketsSliceInitDesignator((yyvsp[-4]._string), (yyvsp[-3].expression_), (yyvsp[-1].expression_), (yyvsp[0]._string)); (yyval.initdesignators_)->line_number = (yyloc).first_line; (yyval.initdesignators_)->char_number = (yyloc).first_column; result->initdesignators_ = (yyval.initdesignators_); }
#line 5808 "Parser.C"
    break;

  case 123: /* InitDesignatorsOpt: %empty  */
#line 1034 "full_bnfc_parser.y"
                                 { (yyval.initdesignatorsopt_) = new acsl::NoInitDesignator(); (yyval.initdesignatorsopt_)->line_number = (yyloc).first_line; (yyval.initdesignatorsopt_)->char_number = (yyloc).first_column; result->initdesignatorsopt_ = (yyval.initdesignatorsopt_); }
#line 5814 "Parser.C"
    break;

  case 124: /* InitDesignatorsOpt: InitDesignators  */
#line 1035 "full_bnfc_parser.y"
                    { (yyval.initdesignatorsopt_) = new acsl::SomeInitDesignator((yyvsp[0].initdesignators_)); (yyval.initdesignatorsopt_)->line_number = (yyloc).first_line; (yyval.initdesignatorsopt_)->char_number = (yyloc).first_column; result->initdesignatorsopt_ = (yyval.initdesignatorsopt_); }
#line 5820 "Parser.C"
    break;

  case 125: /* GhostArgumentsOpt: %empty  */
#line 1037 "full_bnfc_parser.y"
                                { (yyval.ghostargumentsopt_) = new acsl::NoGhostArguments(); (yyval.ghostargumentsopt_)->line_number = (yyloc).first_line; (yyval.ghostargumentsopt_)->char_number = (yyloc).first_column; result->ghostargumentsopt_ = (yyval.ghostargumentsopt_); }
#line 5826 "Parser.C"
    break;

  case 126: /* GhostArgumentsOpt: _KW_ghost _LPAREN Arguments _RPAREN T_RGHOST  */
#line 1038 "full_bnfc_parser.y"
                                                 { (yyval.ghostargumentsopt_) = new acsl::SomeGhostArguments((yyvsp[-2].arguments_), (yyvsp[0]._string)); (yyval.ghostargumentsopt_)->line_number = (yyloc).first_line; (yyval.ghostargumentsopt_)->char_number = (yyloc).first_column; result->ghostargumentsopt_ = (yyval.ghostargumentsopt_); }
#line 5832 "Parser.C"
    break;

  case 127: /* Arguments: %empty  */
#line 1040 "full_bnfc_parser.y"
                        { (yyval.arguments_) = new acsl::NoArguments(); (yyval.arguments_)->line_number = (yyloc).first_line; (yyval.arguments_)->char_number = (yyloc).first_column; result->arguments_ = (yyval.arguments_); }
#line 5838 "Parser.C"
    break;

  case 128: /* Arguments: ListExpression  */
#line 1041 "full_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.arguments_) = new acsl::SomeArguments((yyvsp[0].listexpression_)); (yyval.arguments_)->line_number = (yyloc).first_line; (yyval.arguments_)->char_number = (yyloc).first_column; result->arguments_ = (yyval.arguments_); }
#line 5844 "Parser.C"
    break;

  case 129: /* OptExpression: %empty  */
#line 1043 "full_bnfc_parser.y"
                            { (yyval.optexpression_) = new acsl::NoExpression(); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 5850 "Parser.C"
    break;

  case 130: /* OptExpression: ListExpression  */
#line 1044 "full_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.optexpression_) = new acsl::SomeExpression((yyvsp[0].listexpression_)); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 5856 "Parser.C"
    break;

  case 131: /* ListExpression: Expression  */
#line 1046 "full_bnfc_parser.y"
                            { (yyval.listexpression_) = new acsl::ListExpression(); (yyval.listexpression_)->push_back((yyvsp[0].expression_)); result->listexpression_ = (yyval.listexpression_); }
#line 5862 "Parser.C"
    break;

  case 132: /* ListExpression: Expression _COMMA ListExpression  */
#line 1047 "full_bnfc_parser.y"
                                     { (yyvsp[0].listexpression_)->push_back((yyvsp[-2].expression_)); (yyval.listexpression_) = (yyvsp[0].listexpression_); result->listexpression_ = (yyval.listexpression_); }
#line 5868 "Parser.C"
    break;

  case 133: /* CommaExpressionOpt: %empty  */
#line 1049 "full_bnfc_parser.y"
                                 { (yyval.commaexpressionopt_) = new acsl::NoCommaExpression(); (yyval.commaexpressionopt_)->line_number = (yyloc).first_line; (yyval.commaexpressionopt_)->char_number = (yyloc).first_column; result->commaexpressionopt_ = (yyval.commaexpressionopt_); }
#line 5874 "Parser.C"
    break;

  case 134: /* CommaExpressionOpt: ListExpression  */
#line 1050 "full_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.commaexpressionopt_) = new acsl::SomeCommaExpression((yyvsp[0].listexpression_)); (yyval.commaexpressionopt_)->line_number = (yyloc).first_line; (yyval.commaexpressionopt_)->char_number = (yyloc).first_column; result->commaexpressionopt_ = (yyval.commaexpressionopt_); }
#line 5880 "Parser.C"
    break;

  case 135: /* Block: T_LBRACE ListLocalLabel BlockAttrs ListBlockElement ListAnnot T_RBRACE  */
#line 1052 "full_bnfc_parser.y"
                                                                               { (yyval.block_) = new acsl::ABlock((yyvsp[-5]._string), (yyvsp[-4].listlocallabel_), (yyvsp[-3].blockattrs_), (yyvsp[-2].listblockelement_), (yyvsp[-1].listannot_), (yyvsp[0]._string)); (yyval.block_)->line_number = (yyloc).first_line; (yyval.block_)->char_number = (yyloc).first_column; result->block_ = (yyval.block_); }
#line 5886 "Parser.C"
    break;

  case 136: /* BlockAttrs: %empty  */
#line 1054 "full_bnfc_parser.y"
                         { (yyval.blockattrs_) = new acsl::NoBlockAttrs(); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 5892 "Parser.C"
    break;

  case 137: /* BlockAttrs: T_BLOCKATTRIBUTE _LPAREN ListAttr _RPAREN  */
#line 1055 "full_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.blockattrs_) = new acsl::SomeBlockAttrs((yyvsp[-3]._string), (yyvsp[-1].listattr_)); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 5898 "Parser.C"
    break;

  case 138: /* BlockElement: ListAnnot Declaration  */
#line 1057 "full_bnfc_parser.y"
                                     { (yyval.blockelement_) = new acsl::DeclarationElement((yyvsp[-1].listannot_), (yyvsp[0].declaration_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 5904 "Parser.C"
    break;

  case 139: /* BlockElement: ListAnnot Statement  */
#line 1058 "full_bnfc_parser.y"
                        { (yyval.blockelement_) = new acsl::StatementElement((yyvsp[-1].listannot_), (yyvsp[0].statement_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 5910 "Parser.C"
    break;

  case 140: /* BlockElement: ListAnnot Pragma  */
#line 1059 "full_bnfc_parser.y"
                     { (yyval.blockelement_) = new acsl::PragmaElement((yyvsp[-1].listannot_), (yyvsp[0].pragma_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 5916 "Parser.C"
    break;

  case 141: /* ListBlockElement: %empty  */
#line 1061 "full_bnfc_parser.y"
                               { (yyval.listblockelement_) = new acsl::ListBlockElement(); result->listblockelement_ = (yyval.listblockelement_); }
#line 5922 "Parser.C"
    break;

  case 142: /* ListBlockElement: ListBlockElement BlockElement  */
#line 1062 "full_bnfc_parser.y"
                                  { (yyvsp[-1].listblockelement_)->push_back((yyvsp[0].blockelement_)); (yyval.listblockelement_) = (yyvsp[-1].listblockelement_); result->listblockelement_ = (yyval.listblockelement_); }
#line 5928 "Parser.C"
    break;

  case 143: /* Annot: PragmaOrCodeAnnotation  */
#line 1064 "full_bnfc_parser.y"
                               { (yyval.annot_) = new acsl::CodeAnnot((yyvsp[0].pragmaorcodeannotation_)); (yyval.annot_)->line_number = (yyloc).first_line; (yyval.annot_)->char_number = (yyloc).first_column; result->annot_ = (yyval.annot_); }
#line 5934 "Parser.C"
    break;

  case 144: /* Annot: _KW_ghost ListBlockElement ListAnnot T_RGHOST  */
#line 1065 "full_bnfc_parser.y"
                                                  { (yyval.annot_) = new acsl::GhostAnnot((yyvsp[-2].listblockelement_), (yyvsp[-1].listannot_), (yyvsp[0]._string)); (yyval.annot_)->line_number = (yyloc).first_line; (yyval.annot_)->char_number = (yyloc).first_column; result->annot_ = (yyval.annot_); }
#line 5940 "Parser.C"
    break;

  case 145: /* ListAnnot: %empty  */
#line 1067 "full_bnfc_parser.y"
                        { (yyval.listannot_) = new acsl::ListAnnot(); result->listannot_ = (yyval.listannot_); }
#line 5946 "Parser.C"
    break;

  case 146: /* ListAnnot: ListAnnot Annot  */
#line 1068 "full_bnfc_parser.y"
                    { (yyvsp[-1].listannot_)->push_back((yyvsp[0].annot_)); (yyval.listannot_) = (yyvsp[-1].listannot_); result->listannot_ = (yyval.listannot_); }
#line 5952 "Parser.C"
    break;

  case 147: /* LocalLabel: _SYMB_47 ListLocalLabelName _SEMI  */
#line 1070 "full_bnfc_parser.y"
                                               { std::reverse((yyvsp[-1].listlocallabelname_)->begin(),(yyvsp[-1].listlocallabelname_)->end()) ;(yyval.locallabel_) = new acsl::LocalLable((yyvsp[-1].listlocallabelname_)); (yyval.locallabel_)->line_number = (yyloc).first_line; (yyval.locallabel_)->char_number = (yyloc).first_column; result->locallabel_ = (yyval.locallabel_); }
#line 5958 "Parser.C"
    break;

  case 148: /* ListLocalLabel: %empty  */
#line 1072 "full_bnfc_parser.y"
                             { (yyval.listlocallabel_) = new acsl::ListLocalLabel(); result->listlocallabel_ = (yyval.listlocallabel_); }
#line 5964 "Parser.C"
    break;

  case 149: /* ListLocalLabel: ListLocalLabel LocalLabel  */
#line 1073 "full_bnfc_parser.y"
                              { (yyvsp[-1].listlocallabel_)->push_back((yyvsp[0].locallabel_)); (yyval.listlocallabel_) = (yyvsp[-1].listlocallabel_); result->listlocallabel_ = (yyval.listlocallabel_); }
#line 5970 "Parser.C"
    break;

  case 150: /* LocalLabelName: IdOrTypenameAsId  */
#line 1075 "full_bnfc_parser.y"
                                  { (yyval.locallabelname_) = new acsl::ALocalLabelName((yyvsp[0].idortypenameasid_)); (yyval.locallabelname_)->line_number = (yyloc).first_line; (yyval.locallabelname_)->char_number = (yyloc).first_column; result->locallabelname_ = (yyval.locallabelname_); }
#line 5976 "Parser.C"
    break;

  case 151: /* ListLocalLabelName: LocalLabelName  */
#line 1077 "full_bnfc_parser.y"
                                    { (yyval.listlocallabelname_) = new acsl::ListLocalLabelName(); (yyval.listlocallabelname_)->push_back((yyvsp[0].locallabelname_)); result->listlocallabelname_ = (yyval.listlocallabelname_); }
#line 5982 "Parser.C"
    break;

  case 152: /* ListLocalLabelName: LocalLabelName _COMMA ListLocalLabelName  */
#line 1078 "full_bnfc_parser.y"
                                             { (yyvsp[0].listlocallabelname_)->push_back((yyvsp[-2].locallabelname_)); (yyval.listlocallabelname_) = (yyvsp[0].listlocallabelname_); result->listlocallabelname_ = (yyval.listlocallabelname_); }
#line 5988 "Parser.C"
    break;

  case 153: /* AnnotatedStmt: ListAnnot Statement  */
#line 1080 "full_bnfc_parser.y"
                                    { (yyval.annotatedstmt_) = new acsl::AnnotatedStatement((yyvsp[-1].listannot_), (yyvsp[0].statement_)); (yyval.annotatedstmt_)->line_number = (yyloc).first_line; (yyval.annotatedstmt_)->char_number = (yyloc).first_column; result->annotatedstmt_ = (yyval.annotatedstmt_); }
#line 5994 "Parser.C"
    break;

  case 154: /* ElsePart: %empty  */
#line 1082 "full_bnfc_parser.y"
                       { (yyval.elsepart_) = new acsl::NoElsePart(); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 6000 "Parser.C"
    break;

  case 155: /* ElsePart: _KW_else AnnotatedStmt  */
#line 1083 "full_bnfc_parser.y"
                           { (yyval.elsepart_) = new acsl::SimpleElsePart((yyvsp[0].annotatedstmt_)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 6006 "Parser.C"
    break;

  case 156: /* ElsePart: _KW_ghost AnnotatedStmt T_RGHOST  */
#line 1084 "full_bnfc_parser.y"
                                     { (yyval.elsepart_) = new acsl::SimpleGhostElsePart((yyvsp[-1].annotatedstmt_), (yyvsp[0]._string)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 6012 "Parser.C"
    break;

  case 157: /* ElsePart: _KW_ghost AnnotatedStmt T_RGHOST _KW_else AnnotatedStmt  */
#line 1085 "full_bnfc_parser.y"
                                                            { (yyval.elsepart_) = new acsl::GhostElsePart((yyvsp[-3].annotatedstmt_), (yyvsp[-2]._string), (yyvsp[0].annotatedstmt_)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 6018 "Parser.C"
    break;

  case 158: /* Statement: _SEMI  */
#line 1087 "full_bnfc_parser.y"
                  { (yyval.statement_) = new acsl::SemicolonStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6024 "Parser.C"
    break;

  case 159: /* Statement: IsACSLSpec ListWildcard AnnotatedStmt  */
#line 1088 "full_bnfc_parser.y"
                                          { std::reverse((yyvsp[-1].listwildcard_)->begin(),(yyvsp[-1].listwildcard_)->end()) ;(yyval.statement_) = new acsl::SpecStatement((yyvsp[-2].isacslspec_), (yyvsp[-1].listwildcard_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6030 "Parser.C"
    break;

  case 160: /* Statement: ListExpression _SEMI  */
#line 1089 "full_bnfc_parser.y"
                         { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new acsl::ExprsStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6036 "Parser.C"
    break;

  case 161: /* Statement: Block  */
#line 1090 "full_bnfc_parser.y"
          { (yyval.statement_) = new acsl::BlockStatement((yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6042 "Parser.C"
    break;

  case 162: /* Statement: _KW_if _LPAREN ListExpression _RPAREN AnnotatedStmt ElsePart  */
#line 1091 "full_bnfc_parser.y"
                                                                 { std::reverse((yyvsp[-3].listexpression_)->begin(),(yyvsp[-3].listexpression_)->end()) ;(yyval.statement_) = new acsl::IfStatement((yyvsp[-3].listexpression_), (yyvsp[-1].annotatedstmt_), (yyvsp[0].elsepart_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6048 "Parser.C"
    break;

  case 163: /* Statement: _KW_switch _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 1092 "full_bnfc_parser.y"
                                                            { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::SwitchStatement((yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6054 "Parser.C"
    break;

  case 164: /* Statement: OptLoopAnnotations _KW_while _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 1093 "full_bnfc_parser.y"
                                                                              { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::WhileStatement((yyvsp[-5].optloopannotations_), (yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6060 "Parser.C"
    break;

  case 165: /* Statement: OptLoopAnnotations _KW_do AnnotatedStmt _KW_while _LPAREN ListExpression _RPAREN _SEMI  */
#line 1094 "full_bnfc_parser.y"
                                                                                           { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::DoWhileStatement((yyvsp[-7].optloopannotations_), (yyvsp[-5].annotatedstmt_), (yyvsp[-2].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6066 "Parser.C"
    break;

  case 166: /* Statement: OptLoopAnnotations _KW_for _LPAREN ForClause OptExpression _SEMI OptExpression _RPAREN AnnotatedStmt  */
#line 1095 "full_bnfc_parser.y"
                                                                                                         { (yyval.statement_) = new acsl::ForStatement((yyvsp[-8].optloopannotations_), (yyvsp[-5].forclause_), (yyvsp[-4].optexpression_), (yyvsp[-2].optexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6072 "Parser.C"
    break;

  case 167: /* Statement: IdOrTypenameAsId _COLON ListAttributeNocv AnnotatedStmt  */
#line 1096 "full_bnfc_parser.y"
                                                            { (yyval.statement_) = new acsl::ColonStatement((yyvsp[-3].idortypenameasid_), (yyvsp[-1].listattributenocv_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6078 "Parser.C"
    break;

  case 168: /* Statement: _KW_case Expression _COLON AnnotatedStmt  */
#line 1097 "full_bnfc_parser.y"
                                             { (yyval.statement_) = new acsl::CaseStatement((yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6084 "Parser.C"
    break;

  case 169: /* Statement: _KW_case Expression _ELLIPSIS Expression _COLON AnnotatedStmt  */
#line 1098 "full_bnfc_parser.y"
                                                                  { (yyval.statement_) = new acsl::CaseSliceStatement((yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6090 "Parser.C"
    break;

  case 170: /* Statement: _KW_default _COLON AnnotatedStmt  */
#line 1099 "full_bnfc_parser.y"
                                     { (yyval.statement_) = new acsl::DefaultStatement((yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6096 "Parser.C"
    break;

  case 171: /* Statement: _KW_return _SEMI  */
#line 1100 "full_bnfc_parser.y"
                     { (yyval.statement_) = new acsl::EmptyReturnStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6102 "Parser.C"
    break;

  case 172: /* Statement: _KW_return ListExpression _SEMI  */
#line 1101 "full_bnfc_parser.y"
                                    { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new acsl::ReturnStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6108 "Parser.C"
    break;

  case 173: /* Statement: _KW_break _SEMI  */
#line 1102 "full_bnfc_parser.y"
                    { (yyval.statement_) = new acsl::BreakStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6114 "Parser.C"
    break;

  case 174: /* Statement: _KW_continue _SEMI  */
#line 1103 "full_bnfc_parser.y"
                       { (yyval.statement_) = new acsl::ContinueStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6120 "Parser.C"
    break;

  case 175: /* Statement: _KW_goto IdOrTypenameAsId _SEMI  */
#line 1104 "full_bnfc_parser.y"
                                    { (yyval.statement_) = new acsl::GotoStatement((yyvsp[-1].idortypenameasid_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6126 "Parser.C"
    break;

  case 176: /* Statement: _KW_goto _STAR ListExpression _SEMI  */
#line 1105 "full_bnfc_parser.y"
                                        { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new acsl::StarGotoStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6132 "Parser.C"
    break;

  case 177: /* Statement: T_ASM _KW_goto ListAsmattr _LPAREN ListOneString Asmoutputs _RPAREN _SEMI  */
#line 1106 "full_bnfc_parser.y"
                                                                              { std::reverse((yyvsp[-3].listonestring_)->begin(),(yyvsp[-3].listonestring_)->end()) ;(yyval.statement_) = new acsl::AsmGotoAsmattrStatement((yyvsp[-7]._string), (yyvsp[-5].listasmattr_), (yyvsp[-3].listonestring_), (yyvsp[-2].asmoutputs_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6138 "Parser.C"
    break;

  case 178: /* Statement: T_ASM ListAsmattr _LPAREN ListOneString Asmoutputs _RPAREN _SEMI  */
#line 1107 "full_bnfc_parser.y"
                                                                     { std::reverse((yyvsp[-3].listonestring_)->begin(),(yyvsp[-3].listonestring_)->end()) ;(yyval.statement_) = new acsl::AsmAsmattrStatement((yyvsp[-6]._string), (yyvsp[-5].listasmattr_), (yyvsp[-3].listonestring_), (yyvsp[-2].asmoutputs_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6144 "Parser.C"
    break;

  case 179: /* Statement: T_ASM  */
#line 1108 "full_bnfc_parser.y"
          { (yyval.statement_) = new acsl::AsmStatement((yyvsp[0]._string)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6150 "Parser.C"
    break;

  case 180: /* Statement: _SYMB_48 Block _SYMB_49 _LPAREN ListExpression _RPAREN Block  */
#line 1109 "full_bnfc_parser.y"
                                                                 { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::TryExceptStatement((yyvsp[-5].block_), (yyvsp[-2].listexpression_), (yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6156 "Parser.C"
    break;

  case 181: /* Statement: _SYMB_48 Block _SYMB_50 Block  */
#line 1110 "full_bnfc_parser.y"
                                  { (yyval.statement_) = new acsl::TryFinallyStatement((yyvsp[-2].block_), (yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 6162 "Parser.C"
    break;

  case 182: /* OptLoopAnnotations: %empty  */
#line 1112 "full_bnfc_parser.y"
                                 { (yyval.optloopannotations_) = new acsl::NoLoopAnnotations(); (yyval.optloopannotations_)->line_number = (yyloc).first_line; (yyval.optloopannotations_)->char_number = (yyloc).first_column; result->optloopannotations_ = (yyval.optloopannotations_); }
#line 6168 "Parser.C"
    break;

  case 183: /* OptLoopAnnotations: LoopAnnotStack  */
#line 1113 "full_bnfc_parser.y"
                   { (yyval.optloopannotations_) = new acsl::SomeLoopAnnotations((yyvsp[0].loopannotstack_)); (yyval.optloopannotations_)->line_number = (yyloc).first_line; (yyval.optloopannotations_)->char_number = (yyloc).first_column; result->optloopannotations_ = (yyval.optloopannotations_); }
#line 6174 "Parser.C"
    break;

  case 184: /* ForClause: OptExpression _SEMI  */
#line 1115 "full_bnfc_parser.y"
                                { (yyval.forclause_) = new acsl::ForClauseExpression((yyvsp[-1].optexpression_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 6180 "Parser.C"
    break;

  case 185: /* ForClause: Declaration  */
#line 1116 "full_bnfc_parser.y"
                { (yyval.forclause_) = new acsl::ForClauseDeclaration((yyvsp[0].declaration_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 6186 "Parser.C"
    break;

  case 186: /* GhostParameterOpt: %empty  */
#line 1118 "full_bnfc_parser.y"
                                { (yyval.ghostparameteropt_) = new acsl::NoGhostParameter(); (yyval.ghostparameteropt_)->line_number = (yyloc).first_line; (yyval.ghostparameteropt_)->char_number = (yyloc).first_column; result->ghostparameteropt_ = (yyval.ghostparameteropt_); }
#line 6192 "Parser.C"
    break;

  case 187: /* GhostParameterOpt: _KW_ghost _LPAREN RestParList _RPAREN T_RGHOST  */
#line 1119 "full_bnfc_parser.y"
                                                   { (yyval.ghostparameteropt_) = new acsl::SomeGhostParameter((yyvsp[-2].restparlist_), (yyvsp[0]._string)); (yyval.ghostparameteropt_)->line_number = (yyloc).first_line; (yyval.ghostparameteropt_)->char_number = (yyloc).first_column; result->ghostparameteropt_ = (yyval.ghostparameteropt_); }
#line 6198 "Parser.C"
    break;

  case 188: /* Declaration: DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 1121 "full_bnfc_parser.y"
                                                         { (yyval.declaration_) = new acsl::DeclSpecInitDecl((yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 6204 "Parser.C"
    break;

  case 189: /* Declaration: DeclSpecList _SEMI  */
#line 1122 "full_bnfc_parser.y"
                       { (yyval.declaration_) = new acsl::DeclSpec((yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 6210 "Parser.C"
    break;

  case 190: /* Declaration: IsACSLSpec ListWildcard DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 1123 "full_bnfc_parser.y"
                                                                       { std::reverse((yyvsp[-3].listwildcard_)->begin(),(yyvsp[-3].listwildcard_)->end()) ;(yyval.declaration_) = new acsl::SpecDeclSpecInitDecl((yyvsp[-4].isacslspec_), (yyvsp[-3].listwildcard_), (yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 6216 "Parser.C"
    break;

  case 191: /* Declaration: IsACSLSpec ListWildcard DeclSpecList _SEMI  */
#line 1124 "full_bnfc_parser.y"
                                               { std::reverse((yyvsp[-2].listwildcard_)->begin(),(yyvsp[-2].listwildcard_)->end()) ;(yyval.declaration_) = new acsl::SpecDeclSpec((yyvsp[-3].isacslspec_), (yyvsp[-2].listwildcard_), (yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 6222 "Parser.C"
    break;

  case 192: /* Declaration: _SYMB_51 _LPAREN Expression _RPAREN  */
#line 1125 "full_bnfc_parser.y"
                                        { (yyval.declaration_) = new acsl::StaticAssertDecl((yyvsp[-1].expression_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 6228 "Parser.C"
    break;

  case 193: /* Declaration: _SYMB_51 _LPAREN Expression _COMMA StringConstant _RPAREN  */
#line 1126 "full_bnfc_parser.y"
                                                              { (yyval.declaration_) = new acsl::StaticAssertDeclStringConst((yyvsp[-3].expression_), (yyvsp[-1].stringconstant_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 6234 "Parser.C"
    break;

  case 194: /* GenericAssociation: TypeName _COLON AssignExpr  */
#line 1128 "full_bnfc_parser.y"
                                                { (yyval.genericassociation_) = new acsl::ColonGenericAssociation((yyvsp[-2].typename_), (yyvsp[0].assignexpr_)); (yyval.genericassociation_)->line_number = (yyloc).first_line; (yyval.genericassociation_)->char_number = (yyloc).first_column; result->genericassociation_ = (yyval.genericassociation_); }
#line 6240 "Parser.C"
    break;

  case 195: /* GenericAssociation: _KW_default _COLON AssignExpr  */
#line 1129 "full_bnfc_parser.y"
                                  { (yyval.genericassociation_) = new acsl::DefaultGenericAssociation((yyvsp[0].assignexpr_)); (yyval.genericassociation_)->line_number = (yyloc).first_line; (yyval.genericassociation_)->char_number = (yyloc).first_column; result->genericassociation_ = (yyval.genericassociation_); }
#line 6246 "Parser.C"
    break;

  case 196: /* ListGenericAssociation: GenericAssociation  */
#line 1131 "full_bnfc_parser.y"
                                            { (yyval.listgenericassociation_) = new acsl::ListGenericAssociation(); (yyval.listgenericassociation_)->push_back((yyvsp[0].genericassociation_)); result->listgenericassociation_ = (yyval.listgenericassociation_); }
#line 6252 "Parser.C"
    break;

  case 197: /* ListGenericAssociation: GenericAssociation _COMMA ListGenericAssociation  */
#line 1132 "full_bnfc_parser.y"
                                                     { (yyvsp[0].listgenericassociation_)->push_back((yyvsp[-2].genericassociation_)); (yyval.listgenericassociation_) = (yyvsp[0].listgenericassociation_); result->listgenericassociation_ = (yyval.listgenericassociation_); }
#line 6258 "Parser.C"
    break;

  case 198: /* DeclAndInitDeclAttrList: InitDeclarator  */
#line 1134 "full_bnfc_parser.y"
                                         { (yyval.declandinitdeclattrlist_) = new acsl::InitDeclaration((yyvsp[0].initdeclarator_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 6264 "Parser.C"
    break;

  case 199: /* DeclAndInitDeclAttrList: InitDeclarator _COMMA ListInitDeclaratorAttr  */
#line 1135 "full_bnfc_parser.y"
                                                 { std::reverse((yyvsp[0].listinitdeclaratorattr_)->begin(),(yyvsp[0].listinitdeclaratorattr_)->end()) ;(yyval.declandinitdeclattrlist_) = new acsl::InitDeclarationWithAttr((yyvsp[-2].initdeclarator_), (yyvsp[0].listinitdeclaratorattr_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 6270 "Parser.C"
    break;

  case 200: /* InitDeclaratorAttr: ListAttributeNocv InitDeclarator  */
#line 1137 "full_bnfc_parser.y"
                                                      { (yyval.initdeclaratorattr_) = new acsl::InitDeclaratorAttribute((yyvsp[-1].listattributenocv_), (yyvsp[0].initdeclarator_)); (yyval.initdeclaratorattr_)->line_number = (yyloc).first_line; (yyval.initdeclaratorattr_)->char_number = (yyloc).first_column; result->initdeclaratorattr_ = (yyval.initdeclaratorattr_); }
#line 6276 "Parser.C"
    break;

  case 201: /* ListInitDeclaratorAttr: InitDeclaratorAttr  */
#line 1139 "full_bnfc_parser.y"
                                            { (yyval.listinitdeclaratorattr_) = new acsl::ListInitDeclaratorAttr(); (yyval.listinitdeclaratorattr_)->push_back((yyvsp[0].initdeclaratorattr_)); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 6282 "Parser.C"
    break;

  case 202: /* ListInitDeclaratorAttr: InitDeclaratorAttr _COMMA ListInitDeclaratorAttr  */
#line 1140 "full_bnfc_parser.y"
                                                     { (yyvsp[0].listinitdeclaratorattr_)->push_back((yyvsp[-2].initdeclaratorattr_)); (yyval.listinitdeclaratorattr_) = (yyvsp[0].listinitdeclaratorattr_); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 6288 "Parser.C"
    break;

  case 203: /* InitDeclarator: Declarator  */
#line 1142 "full_bnfc_parser.y"
                            { (yyval.initdeclarator_) = new acsl::SimpleInitDeclarator((yyvsp[0].declarator_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 6294 "Parser.C"
    break;

  case 204: /* InitDeclarator: Declarator _EQ InitExpression  */
#line 1143 "full_bnfc_parser.y"
                                  { (yyval.initdeclarator_) = new acsl::InitDeclaratorExpression((yyvsp[-2].declarator_), (yyvsp[0].initexpression_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 6300 "Parser.C"
    break;

  case 205: /* DeclSpecWOType: _KW_typedef  */
#line 1145 "full_bnfc_parser.y"
                             { (yyval.declspecwotype_) = new acsl::DeclSpecWOTypeTypedefKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 6306 "Parser.C"
    break;

  case 206: /* DeclSpecWOType: _KW_extern  */
#line 1146 "full_bnfc_parser.y"
               { (yyval.declspecwotype_) = new acsl::DeclSpecWOTypeExternKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 6312 "Parser.C"
    break;

  case 207: /* DeclSpecWOType: _KW_static  */
#line 1147 "full_bnfc_parser.y"
               { (yyval.declspecwotype_) = new acsl::DeclSpecWOTypeStaticKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 6318 "Parser.C"
    break;

  case 208: /* DeclSpecWOType: _KW_auto  */
#line 1148 "full_bnfc_parser.y"
             { (yyval.declspecwotype_) = new acsl::DeclSpecWOTypeAutoKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 6324 "Parser.C"
    break;

  case 209: /* DeclSpecWOType: _KW_register  */
#line 1149 "full_bnfc_parser.y"
                 { (yyval.declspecwotype_) = new acsl::DeclSpecWOTypeRegisterKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 6330 "Parser.C"
    break;

  case 210: /* DeclSpecWOType: T_INLINE  */
#line 1150 "full_bnfc_parser.y"
             { (yyval.declspecwotype_) = new acsl::DeclSpecWOTypeInlineKeyWord((yyvsp[0]._string)); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 6336 "Parser.C"
    break;

  case 211: /* DeclSpecWOType: _SYMB_52  */
#line 1151 "full_bnfc_parser.y"
             { (yyval.declspecwotype_) = new acsl::DeclSpecWOTypeNoReturnKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 6342 "Parser.C"
    break;

  case 212: /* DeclSpecWOType: CVSpec  */
#line 1152 "full_bnfc_parser.y"
           { (yyval.declspecwotype_) = new acsl::DeclSpecWOTypeDeclSpecCVSpec((yyvsp[0].cvspec_)); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 6348 "Parser.C"
    break;

  case 213: /* DeclSpecWOType: AttributeNocv  */
#line 1153 "full_bnfc_parser.y"
                  { (yyval.declspecwotype_) = new acsl::DeclSpecWOTypeDeclSpecAtribNOCV((yyvsp[0].attributenocv_)); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 6354 "Parser.C"
    break;

  case 214: /* DeclSpecList: DeclSpecWOType  */
#line 1155 "full_bnfc_parser.y"
                              { (yyval.declspeclist_) = new acsl::DeclSpecWoType((yyvsp[0].declspecwotype_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 6360 "Parser.C"
    break;

  case 215: /* DeclSpecList: DeclSpecWOType DeclSpecList  */
#line 1156 "full_bnfc_parser.y"
                                { (yyval.declspeclist_) = new acsl::DeclSpecWoTypeNext((yyvsp[-1].declspecwotype_), (yyvsp[0].declspeclist_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 6366 "Parser.C"
    break;

  case 216: /* DeclSpecList: TypeSpec  */
#line 1157 "full_bnfc_parser.y"
             { (yyval.declspeclist_) = new acsl::DeclSpecTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 6372 "Parser.C"
    break;

  case 217: /* DeclSpecList: TypeSpec DeclSpecListNoNamed  */
#line 1158 "full_bnfc_parser.y"
                                 { (yyval.declspeclist_) = new acsl::DeclSpecTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 6378 "Parser.C"
    break;

  case 218: /* DeclSpecListNoNamed: DeclSpecWOType  */
#line 1160 "full_bnfc_parser.y"
                                     { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedWOType((yyvsp[0].declspecwotype_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 6384 "Parser.C"
    break;

  case 219: /* DeclSpecListNoNamed: DeclSpecWOType DeclSpecListNoNamed  */
#line 1161 "full_bnfc_parser.y"
                                       { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedWOTypeNext((yyvsp[-1].declspecwotype_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 6390 "Parser.C"
    break;

  case 220: /* DeclSpecListNoNamed: TypeSpec  */
#line 1162 "full_bnfc_parser.y"
             { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 6396 "Parser.C"
    break;

  case 221: /* DeclSpecListNoNamed: TypeSpec DeclSpecListNoNamed  */
#line 1163 "full_bnfc_parser.y"
                                 { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 6402 "Parser.C"
    break;

  case 222: /* TypeSpec: _KW_void  */
#line 1165 "full_bnfc_parser.y"
                    { (yyval.typespec_) = new acsl::TypeSpecVoidKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6408 "Parser.C"
    break;

  case 223: /* TypeSpec: _KW_char  */
#line 1166 "full_bnfc_parser.y"
             { (yyval.typespec_) = new acsl::TypeSpecCharKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6414 "Parser.C"
    break;

  case 224: /* TypeSpec: _SYMB_53  */
#line 1167 "full_bnfc_parser.y"
             { (yyval.typespec_) = new acsl::TypeSpecBoolKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6420 "Parser.C"
    break;

  case 225: /* TypeSpec: _KW_short  */
#line 1168 "full_bnfc_parser.y"
              { (yyval.typespec_) = new acsl::TypeSpecShortKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6426 "Parser.C"
    break;

  case 226: /* TypeSpec: _SYMB_54  */
#line 1169 "full_bnfc_parser.y"
             { (yyval.typespec_) = new acsl::TypeSpecInt32KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6432 "Parser.C"
    break;

  case 227: /* TypeSpec: _KW_int  */
#line 1170 "full_bnfc_parser.y"
            { (yyval.typespec_) = new acsl::TypeSpecIntKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6438 "Parser.C"
    break;

  case 228: /* TypeSpec: _KW_long  */
#line 1171 "full_bnfc_parser.y"
             { (yyval.typespec_) = new acsl::TypeSpecLongKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6444 "Parser.C"
    break;

  case 229: /* TypeSpec: _SYMB_55  */
#line 1172 "full_bnfc_parser.y"
             { (yyval.typespec_) = new acsl::TypeSpecInt64KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6450 "Parser.C"
    break;

  case 230: /* TypeSpec: _KW_float  */
#line 1173 "full_bnfc_parser.y"
              { (yyval.typespec_) = new acsl::TypeSpecFloatKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6456 "Parser.C"
    break;

  case 231: /* TypeSpec: _KW_double  */
#line 1174 "full_bnfc_parser.y"
               { (yyval.typespec_) = new acsl::TypeSpecDoubleKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6462 "Parser.C"
    break;

  case 232: /* TypeSpec: T_SIGNED  */
#line 1175 "full_bnfc_parser.y"
             { (yyval.typespec_) = new acsl::TypeSpecSignedKeyWord((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6468 "Parser.C"
    break;

  case 233: /* TypeSpec: _KW_unsigned  */
#line 1176 "full_bnfc_parser.y"
                 { (yyval.typespec_) = new acsl::TypeSpecUnsignedKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6474 "Parser.C"
    break;

  case 234: /* TypeSpec: _KW_struct IdOrTypename  */
#line 1177 "full_bnfc_parser.y"
                            { (yyval.typespec_) = new acsl::StructId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6480 "Parser.C"
    break;

  case 235: /* TypeSpec: _KW_struct ListJustAttribute IdOrTypename  */
#line 1178 "full_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listjustattribute_)->begin(),(yyvsp[-1].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::StructJustAttr((yyvsp[-1].listjustattribute_), (yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6486 "Parser.C"
    break;

  case 236: /* TypeSpec: _KW_struct IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 1179 "full_bnfc_parser.y"
                                                             { (yyval.typespec_) = new acsl::StructIdBraces((yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6492 "Parser.C"
    break;

  case 237: /* TypeSpec: _KW_struct T_LBRACE StructDeclList T_RBRACE  */
#line 1180 "full_bnfc_parser.y"
                                                { (yyval.typespec_) = new acsl::StructBraces((yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6498 "Parser.C"
    break;

  case 238: /* TypeSpec: _KW_struct ListJustAttribute IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 1181 "full_bnfc_parser.y"
                                                                               { std::reverse((yyvsp[-4].listjustattribute_)->begin(),(yyvsp[-4].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::StructJustAttrIdBraces((yyvsp[-4].listjustattribute_), (yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6504 "Parser.C"
    break;

  case 239: /* TypeSpec: _KW_struct ListJustAttribute T_LBRACE StructDeclList T_RBRACE  */
#line 1182 "full_bnfc_parser.y"
                                                                  { std::reverse((yyvsp[-3].listjustattribute_)->begin(),(yyvsp[-3].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::StructJustAttrBraces((yyvsp[-3].listjustattribute_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6510 "Parser.C"
    break;

  case 240: /* TypeSpec: _KW_union IdOrTypename  */
#line 1183 "full_bnfc_parser.y"
                           { (yyval.typespec_) = new acsl::UnionId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6516 "Parser.C"
    break;

  case 241: /* TypeSpec: _KW_union IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 1184 "full_bnfc_parser.y"
                                                            { (yyval.typespec_) = new acsl::UnionIdBraces((yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6522 "Parser.C"
    break;

  case 242: /* TypeSpec: _KW_union T_LBRACE StructDeclList T_RBRACE  */
#line 1185 "full_bnfc_parser.y"
                                               { (yyval.typespec_) = new acsl::UnionBraces((yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6528 "Parser.C"
    break;

  case 243: /* TypeSpec: _KW_union ListJustAttribute IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 1186 "full_bnfc_parser.y"
                                                                              { std::reverse((yyvsp[-4].listjustattribute_)->begin(),(yyvsp[-4].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::UnionJustAttrIdBraces((yyvsp[-4].listjustattribute_), (yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6534 "Parser.C"
    break;

  case 244: /* TypeSpec: _KW_union ListJustAttribute T_LBRACE StructDeclList T_RBRACE  */
#line 1187 "full_bnfc_parser.y"
                                                                 { std::reverse((yyvsp[-3].listjustattribute_)->begin(),(yyvsp[-3].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::UnionJustAttrBraces((yyvsp[-3].listjustattribute_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6540 "Parser.C"
    break;

  case 245: /* TypeSpec: _KW_enum IdOrTypename  */
#line 1188 "full_bnfc_parser.y"
                          { (yyval.typespec_) = new acsl::EnumId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6546 "Parser.C"
    break;

  case 246: /* TypeSpec: _KW_enum IdOrTypename T_LBRACE ListEnumerator MaybeComma T_RBRACE  */
#line 1189 "full_bnfc_parser.y"
                                                                      { std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new acsl::EnumIdBraces((yyvsp[-4].idortypename_), (yyvsp[-3]._string), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6552 "Parser.C"
    break;

  case 247: /* TypeSpec: _KW_enum T_LBRACE ListEnumerator MaybeComma T_RBRACE  */
#line 1190 "full_bnfc_parser.y"
                                                         { std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new acsl::EnumBraces((yyvsp[-3]._string), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6558 "Parser.C"
    break;

  case 248: /* TypeSpec: _KW_enum ListJustAttribute IdOrTypename T_LBRACE ListEnumerator MaybeComma T_RBRACE  */
#line 1191 "full_bnfc_parser.y"
                                                                                        { std::reverse((yyvsp[-5].listjustattribute_)->begin(),(yyvsp[-5].listjustattribute_)->end()) ; std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new acsl::EnumJustAttrIdBraces((yyvsp[-5].listjustattribute_), (yyvsp[-4].idortypename_), (yyvsp[-3]._string), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6564 "Parser.C"
    break;

  case 249: /* TypeSpec: _KW_enum ListJustAttribute T_LBRACE ListEnumerator MaybeComma T_RBRACE  */
#line 1192 "full_bnfc_parser.y"
                                                                           { std::reverse((yyvsp[-4].listjustattribute_)->begin(),(yyvsp[-4].listjustattribute_)->end()) ; std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new acsl::EnumJustAttrBraces((yyvsp[-4].listjustattribute_), (yyvsp[-3]._string), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6570 "Parser.C"
    break;

  case 250: /* TypeSpec: T_NAMEDTYPE  */
#line 1193 "full_bnfc_parser.y"
                { (yyval.typespec_) = new acsl::NamedTypeTypeSpec((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6576 "Parser.C"
    break;

  case 251: /* TypeSpec: T_TYPEOF _LPAREN Expression _RPAREN  */
#line 1194 "full_bnfc_parser.y"
                                        { (yyval.typespec_) = new acsl::TypeOfExpression((yyvsp[-3]._string), (yyvsp[-1].expression_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6582 "Parser.C"
    break;

  case 252: /* TypeSpec: T_TYPEOF _LPAREN TypeName _RPAREN  */
#line 1195 "full_bnfc_parser.y"
                                      { (yyval.typespec_) = new acsl::TypeOfTypeName((yyvsp[-3]._string), (yyvsp[-1].typename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 6588 "Parser.C"
    break;

  case 253: /* StructDeclList: %empty  */
#line 1197 "full_bnfc_parser.y"
                             { (yyval.structdecllist_) = new acsl::EmptyStructDecl(); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 6594 "Parser.C"
    break;

  case 254: /* StructDeclList: DeclSpecList _SEMI StructDeclList  */
#line 1198 "full_bnfc_parser.y"
                                      { (yyval.structdecllist_) = new acsl::DeclSpecStructDecl((yyvsp[-2].declspeclist_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 6600 "Parser.C"
    break;

  case 255: /* StructDeclList: _SEMI StructDeclList  */
#line 1199 "full_bnfc_parser.y"
                         { (yyval.structdecllist_) = new acsl::SemicolonStructDecl((yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 6606 "Parser.C"
    break;

  case 256: /* StructDeclList: DeclSpecList ListFieldDecl _SEMI StructDeclList  */
#line 1200 "full_bnfc_parser.y"
                                                    { std::reverse((yyvsp[-2].listfielddecl_)->begin(),(yyvsp[-2].listfielddecl_)->end()) ;(yyval.structdecllist_) = new acsl::SpecFieldDeclStructDecl((yyvsp[-3].declspeclist_), (yyvsp[-2].listfielddecl_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 6612 "Parser.C"
    break;

  case 257: /* StructDeclList: Pragma StructDeclList  */
#line 1201 "full_bnfc_parser.y"
                          { (yyval.structdecllist_) = new acsl::PragmaStructDecl((yyvsp[-1].pragma_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 6618 "Parser.C"
    break;

  case 258: /* StructDeclList: StaticAssertDeclaration  */
#line 1202 "full_bnfc_parser.y"
                            { (yyval.structdecllist_) = new acsl::StaticAssertStructDecl((yyvsp[0].staticassertdeclaration_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 6624 "Parser.C"
    break;

  case 259: /* StructDeclList: StaticAssertDeclaration _SEMI StructDeclList  */
#line 1203 "full_bnfc_parser.y"
                                                 { (yyval.structdecllist_) = new acsl::StaticAssertStructDeclNext((yyvsp[-2].staticassertdeclaration_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 6630 "Parser.C"
    break;

  case 260: /* StaticAssertDeclaration: _SYMB_51 _LPAREN Expression _RPAREN  */
#line 1205 "full_bnfc_parser.y"
                                                              { (yyval.staticassertdeclaration_) = new acsl::StaticAssert((yyvsp[-1].expression_)); (yyval.staticassertdeclaration_)->line_number = (yyloc).first_line; (yyval.staticassertdeclaration_)->char_number = (yyloc).first_column; result->staticassertdeclaration_ = (yyval.staticassertdeclaration_); }
#line 6636 "Parser.C"
    break;

  case 261: /* StaticAssertDeclaration: _SYMB_51 _LPAREN Expression _COMMA StringConstant _RPAREN  */
#line 1206 "full_bnfc_parser.y"
                                                              { (yyval.staticassertdeclaration_) = new acsl::StaticAssertStringConst((yyvsp[-3].expression_), (yyvsp[-1].stringconstant_)); (yyval.staticassertdeclaration_)->line_number = (yyloc).first_line; (yyval.staticassertdeclaration_)->char_number = (yyloc).first_column; result->staticassertdeclaration_ = (yyval.staticassertdeclaration_); }
#line 6642 "Parser.C"
    break;

  case 262: /* FieldDecl: Declarator  */
#line 1208 "full_bnfc_parser.y"
                       { (yyval.fielddecl_) = new acsl::FieldDeclDeclarator((yyvsp[0].declarator_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 6648 "Parser.C"
    break;

  case 263: /* FieldDecl: Declarator _COLON Expression ListAttribute  */
#line 1209 "full_bnfc_parser.y"
                                               { (yyval.fielddecl_) = new acsl::FieldDeclDeclaratorColon((yyvsp[-3].declarator_), (yyvsp[-1].expression_), (yyvsp[0].listattribute_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 6654 "Parser.C"
    break;

  case 264: /* FieldDecl: _COLON Expression  */
#line 1210 "full_bnfc_parser.y"
                      { (yyval.fielddecl_) = new acsl::FieldDeclColonExpression((yyvsp[0].expression_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 6660 "Parser.C"
    break;

  case 265: /* ListFieldDecl: FieldDecl  */
#line 1212 "full_bnfc_parser.y"
                          { (yyval.listfielddecl_) = new acsl::ListFieldDecl(); (yyval.listfielddecl_)->push_back((yyvsp[0].fielddecl_)); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 6666 "Parser.C"
    break;

  case 266: /* ListFieldDecl: FieldDecl _COMMA ListFieldDecl  */
#line 1213 "full_bnfc_parser.y"
                                   { (yyvsp[0].listfielddecl_)->push_back((yyvsp[-2].fielddecl_)); (yyval.listfielddecl_) = (yyvsp[0].listfielddecl_); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 6672 "Parser.C"
    break;

  case 267: /* Enumerator: _IDENT_  */
#line 1215 "full_bnfc_parser.y"
                     { (yyval.enumerator_) = new acsl::IdentEnumerator((yyvsp[0]._string)); (yyval.enumerator_)->line_number = (yyloc).first_line; (yyval.enumerator_)->char_number = (yyloc).first_column; result->enumerator_ = (yyval.enumerator_); }
#line 6678 "Parser.C"
    break;

  case 268: /* Enumerator: _IDENT_ _EQ Expression  */
#line 1216 "full_bnfc_parser.y"
                           { (yyval.enumerator_) = new acsl::IdentAssignExpr((yyvsp[-2]._string), (yyvsp[0].expression_)); (yyval.enumerator_)->line_number = (yyloc).first_line; (yyval.enumerator_)->char_number = (yyloc).first_column; result->enumerator_ = (yyval.enumerator_); }
#line 6684 "Parser.C"
    break;

  case 269: /* ListEnumerator: Enumerator  */
#line 1218 "full_bnfc_parser.y"
                            { (yyval.listenumerator_) = new acsl::ListEnumerator(); (yyval.listenumerator_)->push_back((yyvsp[0].enumerator_)); result->listenumerator_ = (yyval.listenumerator_); }
#line 6690 "Parser.C"
    break;

  case 270: /* ListEnumerator: Enumerator _COMMA ListEnumerator  */
#line 1219 "full_bnfc_parser.y"
                                     { (yyvsp[0].listenumerator_)->push_back((yyvsp[-2].enumerator_)); (yyval.listenumerator_) = (yyvsp[0].listenumerator_); result->listenumerator_ = (yyval.listenumerator_); }
#line 6696 "Parser.C"
    break;

  case 271: /* Declarator: PointerOpt DirectDecl AttributesWithAsm  */
#line 1221 "full_bnfc_parser.y"
                                                     { (yyval.declarator_) = new acsl::ADeclarator((yyvsp[-2].pointeropt_), (yyvsp[-1].directdecl_), (yyvsp[0].attributeswithasm_)); (yyval.declarator_)->line_number = (yyloc).first_line; (yyval.declarator_)->char_number = (yyloc).first_column; result->declarator_ = (yyval.declarator_); }
#line 6702 "Parser.C"
    break;

  case 272: /* ListDeclarator: Declarator  */
#line 1223 "full_bnfc_parser.y"
                            { (yyval.listdeclarator_) = new acsl::ListDeclarator(); (yyval.listdeclarator_)->push_back((yyvsp[0].declarator_)); result->listdeclarator_ = (yyval.listdeclarator_); }
#line 6708 "Parser.C"
    break;

  case 273: /* ListDeclarator: Declarator _COMMA ListDeclarator  */
#line 1224 "full_bnfc_parser.y"
                                     { (yyvsp[0].listdeclarator_)->push_back((yyvsp[-2].declarator_)); (yyval.listdeclarator_) = (yyvsp[0].listdeclarator_); result->listdeclarator_ = (yyval.listdeclarator_); }
#line 6714 "Parser.C"
    break;

  case 274: /* AttributesOrStatic: ListAttribute CommaExpressionOpt  */
#line 1226 "full_bnfc_parser.y"
                                                      { (yyval.attributesorstatic_) = new acsl::AttributesCommaExpression((yyvsp[-1].listattribute_), (yyvsp[0].commaexpressionopt_)); (yyval.attributesorstatic_)->line_number = (yyloc).first_line; (yyval.attributesorstatic_)->char_number = (yyloc).first_column; result->attributesorstatic_ = (yyval.attributesorstatic_); }
#line 6720 "Parser.C"
    break;

  case 275: /* AttributesOrStatic: Attribute ListAttribute _KW_static ListExpression  */
#line 1227 "full_bnfc_parser.y"
                                                      { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.attributesorstatic_) = new acsl::AttributesStaticExpression((yyvsp[-3].attribute_), (yyvsp[-2].listattribute_), (yyvsp[0].listexpression_)); (yyval.attributesorstatic_)->line_number = (yyloc).first_line; (yyval.attributesorstatic_)->char_number = (yyloc).first_column; result->attributesorstatic_ = (yyval.attributesorstatic_); }
#line 6726 "Parser.C"
    break;

  case 276: /* AttributesOrStatic: _KW_static ListAttribute ListExpression  */
#line 1228 "full_bnfc_parser.y"
                                            { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.attributesorstatic_) = new acsl::StaticAttributesExpression((yyvsp[-1].listattribute_), (yyvsp[0].listexpression_)); (yyval.attributesorstatic_)->line_number = (yyloc).first_line; (yyval.attributesorstatic_)->char_number = (yyloc).first_column; result->attributesorstatic_ = (yyval.attributesorstatic_); }
#line 6732 "Parser.C"
    break;

  case 277: /* DirectDecl: IdOrTypename  */
#line 1230 "full_bnfc_parser.y"
                          { (yyval.directdecl_) = new acsl::DirectDeclIdTypename((yyvsp[0].idortypename_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 6738 "Parser.C"
    break;

  case 278: /* DirectDecl: _LPAREN ListAttribute Declarator _RPAREN  */
#line 1231 "full_bnfc_parser.y"
                                             { (yyval.directdecl_) = new acsl::DirectDeclAttrDecl((yyvsp[-2].listattribute_), (yyvsp[-1].declarator_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 6744 "Parser.C"
    break;

  case 279: /* DirectDecl: DirectDecl T_LBRACKET AttributesOrStatic T_RBRACKET  */
#line 1232 "full_bnfc_parser.y"
                                                        { (yyval.directdecl_) = new acsl::DirectDeclAttrStatic((yyvsp[-3].directdecl_), (yyvsp[-2]._string), (yyvsp[-1].attributesorstatic_), (yyvsp[0]._string)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 6750 "Parser.C"
    break;

  case 280: /* DirectDecl: DirectDecl _LPAREN _RPAREN GhostParameterOpt  */
#line 1233 "full_bnfc_parser.y"
                                                 { (yyval.directdecl_) = new acsl::DirectDeclGhostParam((yyvsp[-3].directdecl_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 6756 "Parser.C"
    break;

  case 281: /* DirectDecl: DirectDecl _LPAREN RestParList _RPAREN GhostParameterOpt  */
#line 1234 "full_bnfc_parser.y"
                                                             { (yyval.directdecl_) = new acsl::DirectDeclGhostRestParParam((yyvsp[-4].directdecl_), (yyvsp[-2].restparlist_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 6762 "Parser.C"
    break;

  case 282: /* RestParList: ListParameterDecl  */
#line 1236 "full_bnfc_parser.y"
                                { std::reverse((yyvsp[0].listparameterdecl_)->begin(),(yyvsp[0].listparameterdecl_)->end()) ;(yyval.restparlist_) = new acsl::SimpleParameterDecl((yyvsp[0].listparameterdecl_)); (yyval.restparlist_)->line_number = (yyloc).first_line; (yyval.restparlist_)->char_number = (yyloc).first_column; result->restparlist_ = (yyval.restparlist_); }
#line 6768 "Parser.C"
    break;

  case 283: /* RestParList: ListParameterDecl _COMMA _ELLIPSIS  */
#line 1237 "full_bnfc_parser.y"
                                       { std::reverse((yyvsp[-2].listparameterdecl_)->begin(),(yyvsp[-2].listparameterdecl_)->end()) ;(yyval.restparlist_) = new acsl::DotDotDotParameterDecl((yyvsp[-2].listparameterdecl_)); (yyval.restparlist_)->line_number = (yyloc).first_line; (yyval.restparlist_)->char_number = (yyloc).first_column; result->restparlist_ = (yyval.restparlist_); }
#line 6774 "Parser.C"
    break;

  case 284: /* ParameterDecl: DeclSpecList Declarator  */
#line 1239 "full_bnfc_parser.y"
                                        { (yyval.parameterdecl_) = new acsl::ParameterDeclSpecDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 6780 "Parser.C"
    break;

  case 285: /* ParameterDecl: DeclSpecList AbstractDecl  */
#line 1240 "full_bnfc_parser.y"
                              { (yyval.parameterdecl_) = new acsl::ParameterDeclSpecAbstract((yyvsp[-1].declspeclist_), (yyvsp[0].abstractdecl_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 6786 "Parser.C"
    break;

  case 286: /* ParameterDecl: DeclSpecList  */
#line 1241 "full_bnfc_parser.y"
                 { (yyval.parameterdecl_) = new acsl::ParameterDeclSpec((yyvsp[0].declspeclist_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 6792 "Parser.C"
    break;

  case 287: /* ParameterDecl: _LPAREN ParameterDecl _RPAREN  */
#line 1242 "full_bnfc_parser.y"
                                  { (yyval.parameterdecl_) = new acsl::ParameterDeclPar((yyvsp[-1].parameterdecl_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 6798 "Parser.C"
    break;

  case 288: /* ListParameterDecl: ParameterDecl  */
#line 1244 "full_bnfc_parser.y"
                                  { (yyval.listparameterdecl_) = new acsl::ListParameterDecl(); (yyval.listparameterdecl_)->push_back((yyvsp[0].parameterdecl_)); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 6804 "Parser.C"
    break;

  case 289: /* ListParameterDecl: ParameterDecl _COMMA ListParameterDecl  */
#line 1245 "full_bnfc_parser.y"
                                           { (yyvsp[0].listparameterdecl_)->push_back((yyvsp[-2].parameterdecl_)); (yyval.listparameterdecl_) = (yyvsp[0].listparameterdecl_); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 6810 "Parser.C"
    break;

  case 290: /* DirectOldProtoDecl: DirectDecl _LPAREN ListIdent _RPAREN OldPardefList  */
#line 1247 "full_bnfc_parser.y"
                                                                        { std::reverse((yyvsp[-2].listident_)->begin(),(yyvsp[-2].listident_)->end()) ;(yyval.directoldprotodecl_) = new acsl::OldDirectProtoDecl((yyvsp[-4].directdecl_), (yyvsp[-2].listident_), (yyvsp[0].oldpardeflist_)); (yyval.directoldprotodecl_)->line_number = (yyloc).first_line; (yyval.directoldprotodecl_)->char_number = (yyloc).first_column; result->directoldprotodecl_ = (yyval.directoldprotodecl_); }
#line 6816 "Parser.C"
    break;

  case 291: /* ListIdent: _IDENT_  */
#line 1249 "full_bnfc_parser.y"
                    { (yyval.listident_) = new acsl::ListIdent(); (yyval.listident_)->push_back((yyvsp[0]._string)); result->listident_ = (yyval.listident_); }
#line 6822 "Parser.C"
    break;

  case 292: /* ListIdent: _IDENT_ _COMMA ListIdent  */
#line 1250 "full_bnfc_parser.y"
                             { (yyvsp[0].listident_)->push_back((yyvsp[-2]._string)); (yyval.listident_) = (yyvsp[0].listident_); result->listident_ = (yyval.listident_); }
#line 6828 "Parser.C"
    break;

  case 293: /* OldPardefList: %empty  */
#line 1252 "full_bnfc_parser.y"
                            { (yyval.oldpardeflist_) = new acsl::EmptyOldPardefList(); (yyval.oldpardeflist_)->line_number = (yyloc).first_line; (yyval.oldpardeflist_)->char_number = (yyloc).first_column; result->oldpardeflist_ = (yyval.oldpardeflist_); }
#line 6834 "Parser.C"
    break;

  case 294: /* OldPardefList: ListOldPardef _ELLIPSIS  */
#line 1253 "full_bnfc_parser.y"
                            { std::reverse((yyvsp[-1].listoldpardef_)->begin(),(yyvsp[-1].listoldpardef_)->end()) ;(yyval.oldpardeflist_) = new acsl::DotDotDotOldPardefList((yyvsp[-1].listoldpardef_)); (yyval.oldpardeflist_)->line_number = (yyloc).first_line; (yyval.oldpardeflist_)->char_number = (yyloc).first_column; result->oldpardeflist_ = (yyval.oldpardeflist_); }
#line 6840 "Parser.C"
    break;

  case 295: /* OldPardefList: ListOldPardef  */
#line 1254 "full_bnfc_parser.y"
                  { std::reverse((yyvsp[0].listoldpardef_)->begin(),(yyvsp[0].listoldpardef_)->end()) ;(yyval.oldpardeflist_) = new acsl::SimpleOldPardefList((yyvsp[0].listoldpardef_)); (yyval.oldpardeflist_)->line_number = (yyloc).first_line; (yyval.oldpardeflist_)->char_number = (yyloc).first_column; result->oldpardeflist_ = (yyval.oldpardeflist_); }
#line 6846 "Parser.C"
    break;

  case 296: /* OldPardef: DeclSpecList ListDeclarator  */
#line 1256 "full_bnfc_parser.y"
                                        { std::reverse((yyvsp[0].listdeclarator_)->begin(),(yyvsp[0].listdeclarator_)->end()) ;(yyval.oldpardef_) = new acsl::OldParDef((yyvsp[-1].declspeclist_), (yyvsp[0].listdeclarator_)); (yyval.oldpardef_)->line_number = (yyloc).first_line; (yyval.oldpardef_)->char_number = (yyloc).first_column; result->oldpardef_ = (yyval.oldpardef_); }
#line 6852 "Parser.C"
    break;

  case 297: /* ListOldPardef: OldPardef  */
#line 1258 "full_bnfc_parser.y"
                          { (yyval.listoldpardef_) = new acsl::ListOldPardef(); (yyval.listoldpardef_)->push_back((yyvsp[0].oldpardef_)); result->listoldpardef_ = (yyval.listoldpardef_); }
#line 6858 "Parser.C"
    break;

  case 298: /* ListOldPardef: OldPardef _SEMI ListOldPardef  */
#line 1259 "full_bnfc_parser.y"
                                  { (yyvsp[0].listoldpardef_)->push_back((yyvsp[-2].oldpardef_)); (yyval.listoldpardef_) = (yyvsp[0].listoldpardef_); result->listoldpardef_ = (yyval.listoldpardef_); }
#line 6864 "Parser.C"
    break;

  case 299: /* PointerOpt: %empty  */
#line 1261 "full_bnfc_parser.y"
                         { (yyval.pointeropt_) = new acsl::NoPointer(); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 6870 "Parser.C"
    break;

  case 300: /* PointerOpt: _STAR ListAttribute PointerOpt  */
#line 1262 "full_bnfc_parser.y"
                                   { (yyval.pointeropt_) = new acsl::SomePointer((yyvsp[-1].listattribute_), (yyvsp[0].pointeropt_)); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 6876 "Parser.C"
    break;

  case 301: /* TypeName: DeclSpecList AbstractDecl  */
#line 1264 "full_bnfc_parser.y"
                                     { (yyval.typename_) = new acsl::TypeNameAbstractDecl((yyvsp[-1].declspeclist_), (yyvsp[0].abstractdecl_)); (yyval.typename_)->line_number = (yyloc).first_line; (yyval.typename_)->char_number = (yyloc).first_column; result->typename_ = (yyval.typename_); }
#line 6882 "Parser.C"
    break;

  case 302: /* TypeName: DeclSpecList  */
#line 1265 "full_bnfc_parser.y"
                 { (yyval.typename_) = new acsl::TypeNameDeclSpecList((yyvsp[0].declspeclist_)); (yyval.typename_)->line_number = (yyloc).first_line; (yyval.typename_)->char_number = (yyloc).first_column; result->typename_ = (yyval.typename_); }
#line 6888 "Parser.C"
    break;

  case 303: /* AbstractDecl: PointerOpt AbsDirectDecl ListAttribute  */
#line 1267 "full_bnfc_parser.y"
                                                      { (yyval.abstractdecl_) = new acsl::AbstractDeclAttr((yyvsp[-2].pointeropt_), (yyvsp[-1].absdirectdecl_), (yyvsp[0].listattribute_)); (yyval.abstractdecl_)->line_number = (yyloc).first_line; (yyval.abstractdecl_)->char_number = (yyloc).first_column; result->abstractdecl_ = (yyval.abstractdecl_); }
#line 6894 "Parser.C"
    break;

  case 304: /* AbstractDecl: _STAR ListAttribute PointerOpt  */
#line 1268 "full_bnfc_parser.y"
                                   { (yyval.abstractdecl_) = new acsl::AbstractDeclPointer((yyvsp[-1].listattribute_), (yyvsp[0].pointeropt_)); (yyval.abstractdecl_)->line_number = (yyloc).first_line; (yyval.abstractdecl_)->char_number = (yyloc).first_column; result->abstractdecl_ = (yyval.abstractdecl_); }
#line 6900 "Parser.C"
    break;

  case 305: /* AbsDirectDecl: _LPAREN ListAttribute AbstractDecl _RPAREN  */
#line 1270 "full_bnfc_parser.y"
                                                           { (yyval.absdirectdecl_) = new acsl::AbsDirectDeclPar((yyvsp[-2].listattribute_), (yyvsp[-1].abstractdecl_)); (yyval.absdirectdecl_)->line_number = (yyloc).first_line; (yyval.absdirectdecl_)->char_number = (yyloc).first_column; result->absdirectdecl_ = (yyval.absdirectdecl_); }
#line 6906 "Parser.C"
    break;

  case 306: /* AbsDirectDecl: AbsDirectDeclOpt T_LBRACKET CommaExpressionOpt T_RBRACKET  */
#line 1271 "full_bnfc_parser.y"
                                                              { (yyval.absdirectdecl_) = new acsl::AbsDirectDeclBreckets((yyvsp[-3].absdirectdeclopt_), (yyvsp[-2]._string), (yyvsp[-1].commaexpressionopt_), (yyvsp[0]._string)); (yyval.absdirectdecl_)->line_number = (yyloc).first_line; (yyval.absdirectdecl_)->char_number = (yyloc).first_column; result->absdirectdecl_ = (yyval.absdirectdecl_); }
#line 6912 "Parser.C"
    break;

  case 307: /* AbsDirectDecl: AbsDirectDecl _LPAREN RestParList _RPAREN  */
#line 1272 "full_bnfc_parser.y"
                                              { (yyval.absdirectdecl_) = new acsl::AbsDirectDeclRestPar((yyvsp[-3].absdirectdecl_), (yyvsp[-1].restparlist_)); (yyval.absdirectdecl_)->line_number = (yyloc).first_line; (yyval.absdirectdecl_)->char_number = (yyloc).first_column; result->absdirectdecl_ = (yyval.absdirectdecl_); }
#line 6918 "Parser.C"
    break;

  case 308: /* AbsDirectDecl: AbsDirectDecl _LPAREN _RPAREN  */
#line 1273 "full_bnfc_parser.y"
                                  { (yyval.absdirectdecl_) = new acsl::AbsDirectDeclNoRestPar((yyvsp[-2].absdirectdecl_)); (yyval.absdirectdecl_)->line_number = (yyloc).first_line; (yyval.absdirectdecl_)->char_number = (yyloc).first_column; result->absdirectdecl_ = (yyval.absdirectdecl_); }
#line 6924 "Parser.C"
    break;

  case 309: /* AbsDirectDeclOpt: AbsDirectDecl  */
#line 1275 "full_bnfc_parser.y"
                                 { (yyval.absdirectdeclopt_) = new acsl::SomeAbsDirectDecl((yyvsp[0].absdirectdecl_)); (yyval.absdirectdeclopt_)->line_number = (yyloc).first_line; (yyval.absdirectdeclopt_)->char_number = (yyloc).first_column; result->absdirectdeclopt_ = (yyval.absdirectdeclopt_); }
#line 6930 "Parser.C"
    break;

  case 310: /* AbsDirectDeclOpt: %empty  */
#line 1276 "full_bnfc_parser.y"
                { (yyval.absdirectdeclopt_) = new acsl::NoAbsDirectDecl(); (yyval.absdirectdeclopt_)->line_number = (yyloc).first_line; (yyval.absdirectdeclopt_)->char_number = (yyloc).first_column; result->absdirectdeclopt_ = (yyval.absdirectdeclopt_); }
#line 6936 "Parser.C"
    break;

  case 311: /* FunctionDef: IsACSLSpec ListWildcard FunctionDefStart Block  */
#line 1278 "full_bnfc_parser.y"
                                                             { std::reverse((yyvsp[-2].listwildcard_)->begin(),(yyvsp[-2].listwildcard_)->end()) ;(yyval.functiondef_) = new acsl::FunctionDefSpec((yyvsp[-3].isacslspec_), (yyvsp[-2].listwildcard_), (yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 6942 "Parser.C"
    break;

  case 312: /* FunctionDef: FunctionDefStart Block  */
#line 1279 "full_bnfc_parser.y"
                           { (yyval.functiondef_) = new acsl::SimpleFunctionDef((yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 6948 "Parser.C"
    break;

  case 313: /* FunctionDefStart: DeclSpecList Declarator  */
#line 1281 "full_bnfc_parser.y"
                                           { (yyval.functiondefstart_) = new acsl::FunctionDefStartDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 6954 "Parser.C"
    break;

  case 314: /* FunctionDefStart: DeclSpecList PointerOpt DirectOldProtoDecl  */
#line 1282 "full_bnfc_parser.y"
                                               { (yyval.functiondefstart_) = new acsl::FunctionDefStartOldProtoDecl((yyvsp[-2].declspeclist_), (yyvsp[-1].pointeropt_), (yyvsp[0].directoldprotodecl_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 6960 "Parser.C"
    break;

  case 315: /* FunctionDefStart: _IDENT_ _LPAREN RestParList _RPAREN GhostParameterOpt  */
#line 1283 "full_bnfc_parser.y"
                                                          { (yyval.functiondefstart_) = new acsl::FunctionDefStartReatParGhostParameter((yyvsp[-4]._string), (yyvsp[-2].restparlist_), (yyvsp[0].ghostparameteropt_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 6966 "Parser.C"
    break;

  case 316: /* FunctionDefStart: _IDENT_ _LPAREN ListIdent _RPAREN OldPardefList  */
#line 1284 "full_bnfc_parser.y"
                                                    { std::reverse((yyvsp[-2].listident_)->begin(),(yyvsp[-2].listident_)->end()) ;(yyval.functiondefstart_) = new acsl::FunctionDefStartOldPardef((yyvsp[-4]._string), (yyvsp[-2].listident_), (yyvsp[0].oldpardeflist_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 6972 "Parser.C"
    break;

  case 317: /* FunctionDefStart: _IDENT_ _LPAREN _RPAREN GhostParameterOpt  */
#line 1285 "full_bnfc_parser.y"
                                              { (yyval.functiondefstart_) = new acsl::FunctionDefStartGhostParameter((yyvsp[-3]._string), (yyvsp[0].ghostparameteropt_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 6978 "Parser.C"
    break;

  case 318: /* CVSpec: T_CONST  */
#line 1287 "full_bnfc_parser.y"
                 { (yyval.cvspec_) = new acsl::CVSpecConstKeyWord((yyvsp[0]._string)); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 6984 "Parser.C"
    break;

  case 319: /* CVSpec: T_VOLATILE  */
#line 1288 "full_bnfc_parser.y"
               { (yyval.cvspec_) = new acsl::CVSpecVolatileKeyWord((yyvsp[0]._string)); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 6990 "Parser.C"
    break;

  case 320: /* CVSpec: T_RESTRICT  */
#line 1289 "full_bnfc_parser.y"
               { (yyval.cvspec_) = new acsl::CVSpecRestrictKeyWord((yyvsp[0]._string)); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 6996 "Parser.C"
    break;

  case 321: /* CVSpec: _SYMB_56  */
#line 1290 "full_bnfc_parser.y"
             { (yyval.cvspec_) = new acsl::CVSpecGhostKeyWord(); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 7002 "Parser.C"
    break;

  case 322: /* CVSpec: Identifier  */
#line 1291 "full_bnfc_parser.y"
               { (yyval.cvspec_) = new acsl::CVSpecAttribute_annotKeyWord((yyvsp[0].identifier_)); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 7008 "Parser.C"
    break;

  case 323: /* AttributesWithAsm: %empty  */
#line 1293 "full_bnfc_parser.y"
                                { (yyval.attributeswithasm_) = new acsl::EmptyAttrWithASM(); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 7014 "Parser.C"
    break;

  case 324: /* AttributesWithAsm: Attribute ListAttribute  */
#line 1294 "full_bnfc_parser.y"
                            { (yyval.attributeswithasm_) = new acsl::ListAttrWithASM((yyvsp[-1].attribute_), (yyvsp[0].listattribute_)); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 7020 "Parser.C"
    break;

  case 325: /* AttributesWithAsm: Attribute ListAttribute T_ASM _LPAREN StringConstant _RPAREN ListAttribute  */
#line 1295 "full_bnfc_parser.y"
                                                                               { (yyval.attributeswithasm_) = new acsl::ListASMAttrWithASM((yyvsp[-6].attribute_), (yyvsp[-5].listattribute_), (yyvsp[-4]._string), (yyvsp[-2].stringconstant_), (yyvsp[0].listattribute_)); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 7026 "Parser.C"
    break;

  case 326: /* AttributesWithAsm: T_ASM _LPAREN StringConstant _RPAREN ListAttribute  */
#line 1296 "full_bnfc_parser.y"
                                                       { (yyval.attributeswithasm_) = new acsl::ASMAttrWithASM((yyvsp[-4]._string), (yyvsp[-2].stringconstant_), (yyvsp[0].listattribute_)); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 7032 "Parser.C"
    break;

  case 327: /* AttributeNocv: T_ATTRIBUTE _LPAREN _LPAREN AttrList _RPAREN _RPAREN  */
#line 1298 "full_bnfc_parser.y"
                                                                     { (yyval.attributenocv_) = new acsl::AttributeAttrNocv((yyvsp[-5]._string), (yyvsp[-2].attrlist_)); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 7038 "Parser.C"
    break;

  case 328: /* AttributeNocv: _SYMB_57 _LPAREN ListAttr _RPAREN  */
#line 1299 "full_bnfc_parser.y"
                                      { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.attributenocv_) = new acsl::DeclspecAttrNocv((yyvsp[-1].listattr_)); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 7044 "Parser.C"
    break;

  case 329: /* AttributeNocv: T_MSATTR  */
#line 1300 "full_bnfc_parser.y"
             { (yyval.attributenocv_) = new acsl::MsattrAttrNocv((yyvsp[0]._string)); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 7050 "Parser.C"
    break;

  case 330: /* AttributeNocv: _SYMB_58  */
#line 1301 "full_bnfc_parser.y"
             { (yyval.attributenocv_) = new acsl::ThreadAttrNocv(); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 7056 "Parser.C"
    break;

  case 331: /* AttributeNocv: _SYMB_59  */
#line 1302 "full_bnfc_parser.y"
             { (yyval.attributenocv_) = new acsl::ThreadLocalAttrNocv(); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 7062 "Parser.C"
    break;

  case 332: /* ListAttributeNocv: %empty  */
#line 1304 "full_bnfc_parser.y"
                                { (yyval.listattributenocv_) = new acsl::ListAttributeNocv(); result->listattributenocv_ = (yyval.listattributenocv_); }
#line 7068 "Parser.C"
    break;

  case 333: /* ListAttributeNocv: ListAttributeNocv AttributeNocv  */
#line 1305 "full_bnfc_parser.y"
                                    { (yyvsp[-1].listattributenocv_)->push_back((yyvsp[0].attributenocv_)); (yyval.listattributenocv_) = (yyvsp[-1].listattributenocv_); result->listattributenocv_ = (yyval.listattributenocv_); }
#line 7074 "Parser.C"
    break;

  case 334: /* Attribute: AttributeNocv  */
#line 1307 "full_bnfc_parser.y"
                          { (yyval.attribute_) = new acsl::AttributeNoCV((yyvsp[0].attributenocv_)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 7080 "Parser.C"
    break;

  case 335: /* Attribute: T_CONST  */
#line 1308 "full_bnfc_parser.y"
            { (yyval.attribute_) = new acsl::AttributeConst((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 7086 "Parser.C"
    break;

  case 336: /* Attribute: T_RESTRICT  */
#line 1309 "full_bnfc_parser.y"
               { (yyval.attribute_) = new acsl::AttributeRestrict((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 7092 "Parser.C"
    break;

  case 337: /* Attribute: T_VOLATILE  */
#line 1310 "full_bnfc_parser.y"
               { (yyval.attribute_) = new acsl::AttributeVolatile((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 7098 "Parser.C"
    break;

  case 338: /* Attribute: _SYMB_56  */
#line 1311 "full_bnfc_parser.y"
             { (yyval.attribute_) = new acsl::AttributeGhost(); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 7104 "Parser.C"
    break;

  case 339: /* Attribute: Identifier  */
#line 1312 "full_bnfc_parser.y"
               { (yyval.attribute_) = new acsl::AttributeAttributeAnnot((yyvsp[0].identifier_)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 7110 "Parser.C"
    break;

  case 340: /* ListAttribute: %empty  */
#line 1314 "full_bnfc_parser.y"
                            { (yyval.listattribute_) = new acsl::ListAttribute(); result->listattribute_ = (yyval.listattribute_); }
#line 7116 "Parser.C"
    break;

  case 341: /* ListAttribute: ListAttribute Attribute  */
#line 1315 "full_bnfc_parser.y"
                            { (yyvsp[-1].listattribute_)->push_back((yyvsp[0].attribute_)); (yyval.listattribute_) = (yyvsp[-1].listattribute_); result->listattribute_ = (yyval.listattribute_); }
#line 7122 "Parser.C"
    break;

  case 342: /* JustAttribute: T_ATTRIBUTE _LPAREN _LPAREN AttrList _RPAREN _RPAREN  */
#line 1317 "full_bnfc_parser.y"
                                                                     { (yyval.justattribute_) = new acsl::AttributeJustAttribute((yyvsp[-5]._string), (yyvsp[-2].attrlist_)); (yyval.justattribute_)->line_number = (yyloc).first_line; (yyval.justattribute_)->char_number = (yyloc).first_column; result->justattribute_ = (yyval.justattribute_); }
#line 7128 "Parser.C"
    break;

  case 343: /* JustAttribute: _SYMB_57 _LPAREN ListAttr _RPAREN  */
#line 1318 "full_bnfc_parser.y"
                                      { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.justattribute_) = new acsl::DeclspecJustAttribute((yyvsp[-1].listattr_)); (yyval.justattribute_)->line_number = (yyloc).first_line; (yyval.justattribute_)->char_number = (yyloc).first_column; result->justattribute_ = (yyval.justattribute_); }
#line 7134 "Parser.C"
    break;

  case 344: /* ListJustAttribute: JustAttribute  */
#line 1320 "full_bnfc_parser.y"
                                  { (yyval.listjustattribute_) = new acsl::ListJustAttribute(); (yyval.listjustattribute_)->push_back((yyvsp[0].justattribute_)); result->listjustattribute_ = (yyval.listjustattribute_); }
#line 7140 "Parser.C"
    break;

  case 345: /* ListJustAttribute: JustAttribute ListJustAttribute  */
#line 1321 "full_bnfc_parser.y"
                                    { (yyvsp[0].listjustattribute_)->push_back((yyvsp[-1].justattribute_)); (yyval.listjustattribute_) = (yyvsp[0].listjustattribute_); result->listjustattribute_ = (yyval.listjustattribute_); }
#line 7146 "Parser.C"
    break;

  case 346: /* Pragma: _KW_pragma  */
#line 1323 "full_bnfc_parser.y"
                    { (yyval.pragma_) = new acsl::SimplePragma(); (yyval.pragma_)->line_number = (yyloc).first_line; (yyval.pragma_)->char_number = (yyloc).first_column; result->pragma_ = (yyval.pragma_); }
#line 7152 "Parser.C"
    break;

  case 347: /* Pragma: _KW_pragma Attr  */
#line 1324 "full_bnfc_parser.y"
                    { (yyval.pragma_) = new acsl::AttrPragma((yyvsp[0].attr_)); (yyval.pragma_)->line_number = (yyloc).first_line; (yyval.pragma_)->char_number = (yyloc).first_column; result->pragma_ = (yyval.pragma_); }
#line 7158 "Parser.C"
    break;

  case 348: /* Pragma: _KW_pragma Attr _SEMI  */
#line 1325 "full_bnfc_parser.y"
                          { (yyval.pragma_) = new acsl::AttrPragmaSeparated((yyvsp[-1].attr_)); (yyval.pragma_)->line_number = (yyloc).first_line; (yyval.pragma_)->char_number = (yyloc).first_column; result->pragma_ = (yyval.pragma_); }
#line 7164 "Parser.C"
    break;

  case 349: /* Pragma: _KW_pragma  */
#line 1326 "full_bnfc_parser.y"
               { (yyval.pragma_) = new acsl::PragmaKeyrod(); (yyval.pragma_)->line_number = (yyloc).first_line; (yyval.pragma_)->char_number = (yyloc).first_column; result->pragma_ = (yyval.pragma_); }
#line 7170 "Parser.C"
    break;

  case 350: /* VarAttr: _IDENT_  */
#line 1328 "full_bnfc_parser.y"
                  { (yyval.varattr_) = new acsl::IdentifierVarAttr((yyvsp[0]._string)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 7176 "Parser.C"
    break;

  case 351: /* VarAttr: T_NAMEDTYPE  */
#line 1329 "full_bnfc_parser.y"
                { (yyval.varattr_) = new acsl::NamedTypeVarAttr((yyvsp[0]._string)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 7182 "Parser.C"
    break;

  case 352: /* VarAttr: _KW_default _COLON _INTEGER_  */
#line 1330 "full_bnfc_parser.y"
                                 { (yyval.varattr_) = new acsl::DefaultVarAttr((yyvsp[0]._int)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 7188 "Parser.C"
    break;

  case 353: /* VarAttr: T_CONST  */
#line 1331 "full_bnfc_parser.y"
            { (yyval.varattr_) = new acsl::ConstVarAttr((yyvsp[0]._string)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 7194 "Parser.C"
    break;

  case 354: /* VarAttr: T_VOLATILE  */
#line 1332 "full_bnfc_parser.y"
               { (yyval.varattr_) = new acsl::VolatileVarAttr((yyvsp[0]._string)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 7200 "Parser.C"
    break;

  case 355: /* VarAttr: _INTEGER_ _COLON _INTEGER_  */
#line 1333 "full_bnfc_parser.y"
                               { (yyval.varattr_) = new acsl::ContIntVarAttr((yyvsp[-2]._int), (yyvsp[0]._int)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 7206 "Parser.C"
    break;

  case 356: /* BasicAttribute: _INTEGER_  */
#line 1335 "full_bnfc_parser.y"
                           { (yyval.basicattribute_) = new acsl::BasicAttrConsInt((yyvsp[0]._int)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 7212 "Parser.C"
    break;

  case 357: /* BasicAttribute: _DOUBLE_  */
#line 1336 "full_bnfc_parser.y"
             { (yyval.basicattribute_) = new acsl::BasicAttrConsFloat((yyvsp[0]._double)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 7218 "Parser.C"
    break;

  case 358: /* BasicAttribute: VarAttr  */
#line 1337 "full_bnfc_parser.y"
            { (yyval.basicattribute_) = new acsl::BasicAttrVar((yyvsp[0].varattr_)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 7224 "Parser.C"
    break;

  case 359: /* ListBasicAttribute: BasicAttribute  */
#line 1339 "full_bnfc_parser.y"
                                    { (yyval.listbasicattribute_) = new acsl::ListBasicAttribute(); (yyval.listbasicattribute_)->push_back((yyvsp[0].basicattribute_)); result->listbasicattribute_ = (yyval.listbasicattribute_); }
#line 7230 "Parser.C"
    break;

  case 360: /* ListBasicAttribute: BasicAttribute ListBasicAttribute  */
#line 1340 "full_bnfc_parser.y"
                                      { (yyvsp[0].listbasicattribute_)->push_back((yyvsp[-1].basicattribute_)); (yyval.listbasicattribute_) = (yyvsp[0].listbasicattribute_); result->listbasicattribute_ = (yyval.listbasicattribute_); }
#line 7236 "Parser.C"
    break;

  case 361: /* ParameterAttrListNE: ListBasicAttribute  */
#line 1342 "full_bnfc_parser.y"
                                         { std::reverse((yyvsp[0].listbasicattribute_)->begin(),(yyvsp[0].listbasicattribute_)->end()) ;(yyval.parameterattrlistne_) = new acsl::ParameterBasicAttr((yyvsp[0].listbasicattribute_)); (yyval.parameterattrlistne_)->line_number = (yyloc).first_line; (yyval.parameterattrlistne_)->char_number = (yyloc).first_column; result->parameterattrlistne_ = (yyval.parameterattrlistne_); }
#line 7242 "Parser.C"
    break;

  case 362: /* ParameterAttrListNE: ListBasicAttribute StringConstant  */
#line 1343 "full_bnfc_parser.y"
                                      { std::reverse((yyvsp[-1].listbasicattribute_)->begin(),(yyvsp[-1].listbasicattribute_)->end()) ;(yyval.parameterattrlistne_) = new acsl::ParameterBasicAttrStringConst((yyvsp[-1].listbasicattribute_), (yyvsp[0].stringconstant_)); (yyval.parameterattrlistne_)->line_number = (yyloc).first_line; (yyval.parameterattrlistne_)->char_number = (yyloc).first_column; result->parameterattrlistne_ = (yyval.parameterattrlistne_); }
#line 7248 "Parser.C"
    break;

  case 363: /* ParameterAttrListNE: ListBasicAttribute StringConstant ParameterAttrListNE  */
#line 1344 "full_bnfc_parser.y"
                                                          { std::reverse((yyvsp[-2].listbasicattribute_)->begin(),(yyvsp[-2].listbasicattribute_)->end()) ;(yyval.parameterattrlistne_) = new acsl::ParameterBasicAttrStringConstNext((yyvsp[-2].listbasicattribute_), (yyvsp[-1].stringconstant_), (yyvsp[0].parameterattrlistne_)); (yyval.parameterattrlistne_)->line_number = (yyloc).first_line; (yyval.parameterattrlistne_)->char_number = (yyloc).first_column; result->parameterattrlistne_ = (yyval.parameterattrlistne_); }
#line 7254 "Parser.C"
    break;

  case 364: /* ParamAttrListNE: ParameterAttrListNE  */
#line 1346 "full_bnfc_parser.y"
                                      { (yyval.paramattrlistne_) = new acsl::ParamAttrList((yyvsp[0].parameterattrlistne_)); (yyval.paramattrlistne_)->line_number = (yyloc).first_line; (yyval.paramattrlistne_)->char_number = (yyloc).first_column; result->paramattrlistne_ = (yyval.paramattrlistne_); }
#line 7260 "Parser.C"
    break;

  case 365: /* ParamAttrListNE: StringConstant  */
#line 1347 "full_bnfc_parser.y"
                   { (yyval.paramattrlistne_) = new acsl::ParamStringConstant((yyvsp[0].stringconstant_)); (yyval.paramattrlistne_)->line_number = (yyloc).first_line; (yyval.paramattrlistne_)->char_number = (yyloc).first_column; result->paramattrlistne_ = (yyval.paramattrlistne_); }
#line 7266 "Parser.C"
    break;

  case 366: /* Attr14: BasicAttribute  */
#line 1349 "full_bnfc_parser.y"
                        { (yyval.attr_) = new acsl::BasicAttr((yyvsp[0].basicattribute_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7272 "Parser.C"
    break;

  case 367: /* Attr14: _LPAREN Attr _RPAREN  */
#line 1350 "full_bnfc_parser.y"
                         { (yyval.attr_) = (yyvsp[-1].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7278 "Parser.C"
    break;

  case 368: /* Attr14: StringConstant  */
#line 1351 "full_bnfc_parser.y"
                   { (yyval.attr_) = new acsl::AttrStringConstant((yyvsp[0].stringconstant_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7284 "Parser.C"
    break;

  case 369: /* Attr13: Attr14  */
#line 1353 "full_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7290 "Parser.C"
    break;

  case 370: /* Attr13: IdOrTypenameAsId _LPAREN ListAttr _RPAREN  */
#line 1354 "full_bnfc_parser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.attr_) = new acsl::FuncationCall((yyvsp[-3].idortypenameasid_), (yyvsp[-1].listattr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7296 "Parser.C"
    break;

  case 371: /* Attr13: IdOrTypenameAsId _LPAREN _RPAREN  */
#line 1355 "full_bnfc_parser.y"
                                     { (yyval.attr_) = new acsl::ProcedureCall((yyvsp[-2].idortypenameasid_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7302 "Parser.C"
    break;

  case 372: /* Attr13: BasicAttribute ParamAttrListNE  */
#line 1356 "full_bnfc_parser.y"
                                   { (yyval.attr_) = new acsl::BasicPostfix((yyvsp[-1].basicattribute_), (yyvsp[0].paramattrlistne_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7308 "Parser.C"
    break;

  case 373: /* Attr13: Attr13 _RARROW IdOrTypename  */
#line 1357 "full_bnfc_parser.y"
                                { (yyval.attr_) = new acsl::ArrowAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7314 "Parser.C"
    break;

  case 374: /* Attr13: Attr13 _DOT IdOrTypename  */
#line 1358 "full_bnfc_parser.y"
                             { (yyval.attr_) = new acsl::DotAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7320 "Parser.C"
    break;

  case 375: /* Attr13: Attr13 T_LBRACKET Attr T_RBRACKET  */
#line 1359 "full_bnfc_parser.y"
                                      { (yyval.attr_) = new acsl::ArrayAttr((yyvsp[-3].attr_), (yyvsp[-2]._string), (yyvsp[-1].attr_), (yyvsp[0]._string)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7326 "Parser.C"
    break;

  case 376: /* Attr12: Attr13  */
#line 1361 "full_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7332 "Parser.C"
    break;

  case 377: /* Attr12: _KW_sizeof AssignExpr13  */
#line 1362 "full_bnfc_parser.y"
                            { (yyval.attr_) = new acsl::SizeOfAttrUnary((yyvsp[0].assignexpr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7338 "Parser.C"
    break;

  case 378: /* Attr12: _KW_sizeof _LPAREN TypeName _RPAREN  */
#line 1363 "full_bnfc_parser.y"
                                        { (yyval.attr_) = new acsl::SizeOfAttrTypeName((yyvsp[-1].typename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7344 "Parser.C"
    break;

  case 379: /* Attr12: T_ALIGNOF AssignExpr13  */
#line 1364 "full_bnfc_parser.y"
                           { (yyval.attr_) = new acsl::AlignOfAttrUnary((yyvsp[-1]._string), (yyvsp[0].assignexpr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7350 "Parser.C"
    break;

  case 380: /* Attr12: T_ALIGNOF _LPAREN TypeName _RPAREN  */
#line 1365 "full_bnfc_parser.y"
                                       { (yyval.attr_) = new acsl::AlignOfAttrTypeName((yyvsp[-3]._string), (yyvsp[-1].typename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7356 "Parser.C"
    break;

  case 381: /* Attr12: _PLUS Attr12  */
#line 1366 "full_bnfc_parser.y"
                 { (yyval.attr_) = new acsl::PlusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7362 "Parser.C"
    break;

  case 382: /* Attr12: _MINUS Attr12  */
#line 1367 "full_bnfc_parser.y"
                  { (yyval.attr_) = new acsl::MinusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7368 "Parser.C"
    break;

  case 383: /* Attr12: _STAR Attr12  */
#line 1368 "full_bnfc_parser.y"
                 { (yyval.attr_) = new acsl::MultUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7374 "Parser.C"
    break;

  case 384: /* Attr12: _AMP Attr12  */
#line 1369 "full_bnfc_parser.y"
                { (yyval.attr_) = new acsl::AmpUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7380 "Parser.C"
    break;

  case 385: /* Attr12: _BANG Attr12  */
#line 1370 "full_bnfc_parser.y"
                 { (yyval.attr_) = new acsl::NotUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7386 "Parser.C"
    break;

  case 386: /* Attr12: _TILDE Attr12  */
#line 1371 "full_bnfc_parser.y"
                  { (yyval.attr_) = new acsl::TildeUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7392 "Parser.C"
    break;

  case 387: /* Attr11: Attr12  */
#line 1373 "full_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7398 "Parser.C"
    break;

  case 388: /* Attr11: Attr11 _STAR Attr12  */
#line 1374 "full_bnfc_parser.y"
                        { (yyval.attr_) = new acsl::MultOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7404 "Parser.C"
    break;

  case 389: /* Attr11: Attr11 _SLASH Attr12  */
#line 1375 "full_bnfc_parser.y"
                         { (yyval.attr_) = new acsl::DivOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7410 "Parser.C"
    break;

  case 390: /* Attr11: Attr11 _PERCENT Attr12  */
#line 1376 "full_bnfc_parser.y"
                           { (yyval.attr_) = new acsl::ModOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7416 "Parser.C"
    break;

  case 391: /* Attr10: Attr11  */
#line 1378 "full_bnfc_parser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7422 "Parser.C"
    break;

  case 392: /* Attr10: Attr10 _PLUS Attr11  */
#line 1379 "full_bnfc_parser.y"
                        { (yyval.attr_) = new acsl::AddOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7428 "Parser.C"
    break;

  case 393: /* Attr10: Attr10 _MINUS Attr11  */
#line 1380 "full_bnfc_parser.y"
                         { (yyval.attr_) = new acsl::SubOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7434 "Parser.C"
    break;

  case 394: /* Attr9: Attr10  */
#line 1382 "full_bnfc_parser.y"
               { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7440 "Parser.C"
    break;

  case 395: /* Attr9: Attr9 _DLT Attr10  */
#line 1383 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::LeftShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7446 "Parser.C"
    break;

  case 396: /* Attr9: Attr9 _DGT Attr10  */
#line 1384 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::RightShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7452 "Parser.C"
    break;

  case 397: /* Attr8: Attr9  */
#line 1386 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7458 "Parser.C"
    break;

  case 398: /* Attr8: Attr8 _LT Attr9  */
#line 1387 "full_bnfc_parser.y"
                    { (yyval.attr_) = new acsl::Less((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7464 "Parser.C"
    break;

  case 399: /* Attr8: Attr8 _GT Attr9  */
#line 1388 "full_bnfc_parser.y"
                    { (yyval.attr_) = new acsl::Greater((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7470 "Parser.C"
    break;

  case 400: /* Attr8: Attr8 _LDARROW Attr9  */
#line 1389 "full_bnfc_parser.y"
                         { (yyval.attr_) = new acsl::LessEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7476 "Parser.C"
    break;

  case 401: /* Attr8: Attr8 _GTEQ Attr9  */
#line 1390 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::GreaterEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7482 "Parser.C"
    break;

  case 402: /* Attr7: Attr8  */
#line 1392 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7488 "Parser.C"
    break;

  case 403: /* Attr7: Attr7 _DEQ Attr8  */
#line 1393 "full_bnfc_parser.y"
                     { (yyval.attr_) = new acsl::EqualEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7494 "Parser.C"
    break;

  case 404: /* Attr7: Attr7 _BANGEQ Attr8  */
#line 1394 "full_bnfc_parser.y"
                        { (yyval.attr_) = new acsl::NotEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7500 "Parser.C"
    break;

  case 405: /* Attr6: Attr7  */
#line 1396 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7506 "Parser.C"
    break;

  case 406: /* Attr6: Attr6 _AMP Attr7  */
#line 1397 "full_bnfc_parser.y"
                     { (yyval.attr_) = new acsl::BitAnd((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7512 "Parser.C"
    break;

  case 407: /* Attr5: Attr6  */
#line 1399 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7518 "Parser.C"
    break;

  case 408: /* Attr5: Attr5 _CARET Attr6  */
#line 1400 "full_bnfc_parser.y"
                       { (yyval.attr_) = new acsl::Xor((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7524 "Parser.C"
    break;

  case 409: /* Attr4: Attr5  */
#line 1402 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7530 "Parser.C"
    break;

  case 410: /* Attr4: Attr4 _BAR Attr5  */
#line 1403 "full_bnfc_parser.y"
                     { (yyval.attr_) = new acsl::BitOr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7536 "Parser.C"
    break;

  case 411: /* Attr3: Attr4  */
#line 1405 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7542 "Parser.C"
    break;

  case 412: /* Attr3: Attr3 _DAMP Attr4  */
#line 1406 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::And((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7548 "Parser.C"
    break;

  case 413: /* Attr2: Attr3  */
#line 1408 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7554 "Parser.C"
    break;

  case 414: /* Attr2: Attr2 _DBAR Attr3  */
#line 1409 "full_bnfc_parser.y"
                      { (yyval.attr_) = new acsl::Or((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7560 "Parser.C"
    break;

  case 415: /* Attr1: Attr2  */
#line 1411 "full_bnfc_parser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7566 "Parser.C"
    break;

  case 416: /* Attr1: Attr2 _QUESTION AttrTest Attr1 _COLON Attr1  */
#line 1412 "full_bnfc_parser.y"
                                                { (yyval.attr_) = new acsl::TernaryCond((yyvsp[-5].attr_), (yyvsp[-3].attrtest_), (yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7572 "Parser.C"
    break;

  case 417: /* Attr: Attr1  */
#line 1414 "full_bnfc_parser.y"
             { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7578 "Parser.C"
    break;

  case 418: /* Attr: Attr1 _EQ Attr1  */
#line 1415 "full_bnfc_parser.y"
                    { (yyval.attr_) = new acsl::AnAttr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 7584 "Parser.C"
    break;

  case 419: /* ListAttr: Attr  */
#line 1417 "full_bnfc_parser.y"
                { (yyval.listattr_) = new acsl::ListAttr(); (yyval.listattr_)->push_back((yyvsp[0].attr_)); result->listattr_ = (yyval.listattr_); }
#line 7590 "Parser.C"
    break;

  case 420: /* ListAttr: Attr _COMMA ListAttr  */
#line 1418 "full_bnfc_parser.y"
                         { (yyvsp[0].listattr_)->push_back((yyvsp[-2].attr_)); (yyval.listattr_) = (yyvsp[0].listattr_); result->listattr_ = (yyval.listattr_); }
#line 7596 "Parser.C"
    break;

  case 421: /* AttrTest: %empty  */
#line 1420 "full_bnfc_parser.y"
                       { (yyval.attrtest_) = new acsl::AvoidShiftReduce(); (yyval.attrtest_)->line_number = (yyloc).first_line; (yyval.attrtest_)->char_number = (yyloc).first_column; result->attrtest_ = (yyval.attrtest_); }
#line 7602 "Parser.C"
    break;

  case 422: /* AttrList: %empty  */
#line 1422 "full_bnfc_parser.y"
                       { (yyval.attrlist_) = new acsl::EmptyAtrList(); (yyval.attrlist_)->line_number = (yyloc).first_line; (yyval.attrlist_)->char_number = (yyloc).first_column; result->attrlist_ = (yyval.attrlist_); }
#line 7608 "Parser.C"
    break;

  case 423: /* AttrList: ListAttr  */
#line 1423 "full_bnfc_parser.y"
             { std::reverse((yyvsp[0].listattr_)->begin(),(yyvsp[0].listattr_)->end()) ;(yyval.attrlist_) = new acsl::AtrList((yyvsp[0].listattr_)); (yyval.attrlist_)->line_number = (yyloc).first_line; (yyval.attrlist_)->char_number = (yyloc).first_column; result->attrlist_ = (yyval.attrlist_); }
#line 7614 "Parser.C"
    break;

  case 424: /* Asmattr: T_VOLATILE  */
#line 1425 "full_bnfc_parser.y"
                     { (yyval.asmattr_) = new acsl::VolatileKeyWrod((yyvsp[0]._string)); (yyval.asmattr_)->line_number = (yyloc).first_line; (yyval.asmattr_)->char_number = (yyloc).first_column; result->asmattr_ = (yyval.asmattr_); }
#line 7620 "Parser.C"
    break;

  case 425: /* Asmattr: T_CONST  */
#line 1426 "full_bnfc_parser.y"
            { (yyval.asmattr_) = new acsl::ConstKeyWrod((yyvsp[0]._string)); (yyval.asmattr_)->line_number = (yyloc).first_line; (yyval.asmattr_)->char_number = (yyloc).first_column; result->asmattr_ = (yyval.asmattr_); }
#line 7626 "Parser.C"
    break;

  case 426: /* ListAsmattr: %empty  */
#line 1428 "full_bnfc_parser.y"
                          { (yyval.listasmattr_) = new acsl::ListAsmattr(); result->listasmattr_ = (yyval.listasmattr_); }
#line 7632 "Parser.C"
    break;

  case 427: /* ListAsmattr: ListAsmattr Asmattr  */
#line 1429 "full_bnfc_parser.y"
                        { (yyvsp[-1].listasmattr_)->push_back((yyvsp[0].asmattr_)); (yyval.listasmattr_) = (yyvsp[-1].listasmattr_); result->listasmattr_ = (yyval.listasmattr_); }
#line 7638 "Parser.C"
    break;

  case 428: /* Asmoutputs: %empty  */
#line 1431 "full_bnfc_parser.y"
                         { (yyval.asmoutputs_) = new acsl::NoAsmoutputs(); (yyval.asmoutputs_)->line_number = (yyloc).first_line; (yyval.asmoutputs_)->char_number = (yyloc).first_column; result->asmoutputs_ = (yyval.asmoutputs_); }
#line 7644 "Parser.C"
    break;

  case 429: /* Asmoutputs: _COLON Asmoperands Asminputs  */
#line 1432 "full_bnfc_parser.y"
                                 { (yyval.asmoutputs_) = new acsl::SomeAsmoutputs((yyvsp[-1].asmoperands_), (yyvsp[0].asminputs_)); (yyval.asmoutputs_)->line_number = (yyloc).first_line; (yyval.asmoutputs_)->char_number = (yyloc).first_column; result->asmoutputs_ = (yyval.asmoutputs_); }
#line 7650 "Parser.C"
    break;

  case 430: /* Asmoperands: %empty  */
#line 1434 "full_bnfc_parser.y"
                          { (yyval.asmoperands_) = new acsl::NoAsmoperands(); (yyval.asmoperands_)->line_number = (yyloc).first_line; (yyval.asmoperands_)->char_number = (yyloc).first_column; result->asmoperands_ = (yyval.asmoperands_); }
#line 7656 "Parser.C"
    break;

  case 431: /* Asmoperands: ListAsmoperand  */
#line 1435 "full_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listasmoperand_)->begin(),(yyvsp[0].listasmoperand_)->end()) ;(yyval.asmoperands_) = new acsl::SomeAsmoperands((yyvsp[0].listasmoperand_)); (yyval.asmoperands_)->line_number = (yyloc).first_line; (yyval.asmoperands_)->char_number = (yyloc).first_column; result->asmoperands_ = (yyval.asmoperands_); }
#line 7662 "Parser.C"
    break;

  case 432: /* Asmoperand: Asmopname StringConstant _LPAREN Expression _RPAREN  */
#line 1437 "full_bnfc_parser.y"
                                                                 { (yyval.asmoperand_) = new acsl::AsmOperand((yyvsp[-4].asmopname_), (yyvsp[-3].stringconstant_), (yyvsp[-1].expression_)); (yyval.asmoperand_)->line_number = (yyloc).first_line; (yyval.asmoperand_)->char_number = (yyloc).first_column; result->asmoperand_ = (yyval.asmoperand_); }
#line 7668 "Parser.C"
    break;

  case 433: /* ListAsmoperand: Asmoperand  */
#line 1439 "full_bnfc_parser.y"
                            { (yyval.listasmoperand_) = new acsl::ListAsmoperand(); (yyval.listasmoperand_)->push_back((yyvsp[0].asmoperand_)); result->listasmoperand_ = (yyval.listasmoperand_); }
#line 7674 "Parser.C"
    break;

  case 434: /* ListAsmoperand: Asmoperand _COMMA ListAsmoperand  */
#line 1440 "full_bnfc_parser.y"
                                     { (yyvsp[0].listasmoperand_)->push_back((yyvsp[-2].asmoperand_)); (yyval.listasmoperand_) = (yyvsp[0].listasmoperand_); result->listasmoperand_ = (yyval.listasmoperand_); }
#line 7680 "Parser.C"
    break;

  case 435: /* Asminputs: %empty  */
#line 1442 "full_bnfc_parser.y"
                        { (yyval.asminputs_) = new acsl::NoAsminputs(); (yyval.asminputs_)->line_number = (yyloc).first_line; (yyval.asminputs_)->char_number = (yyloc).first_column; result->asminputs_ = (yyval.asminputs_); }
#line 7686 "Parser.C"
    break;

  case 436: /* Asminputs: _COLON Asmoperands Asmclobber  */
#line 1443 "full_bnfc_parser.y"
                                  { (yyval.asminputs_) = new acsl::SomeAsminputs((yyvsp[-1].asmoperands_), (yyvsp[0].asmclobber_)); (yyval.asminputs_)->line_number = (yyloc).first_line; (yyval.asminputs_)->char_number = (yyloc).first_column; result->asminputs_ = (yyval.asminputs_); }
#line 7692 "Parser.C"
    break;

  case 437: /* Asmopname: %empty  */
#line 1445 "full_bnfc_parser.y"
                        { (yyval.asmopname_) = new acsl::NoAsmopname(); (yyval.asmopname_)->line_number = (yyloc).first_line; (yyval.asmopname_)->char_number = (yyloc).first_column; result->asmopname_ = (yyval.asmopname_); }
#line 7698 "Parser.C"
    break;

  case 438: /* Asmopname: T_LBRACKET _IDENT_ T_RBRACKET  */
#line 1446 "full_bnfc_parser.y"
                                  { (yyval.asmopname_) = new acsl::SomeAsmopname((yyvsp[-2]._string), (yyvsp[-1]._string), (yyvsp[0]._string)); (yyval.asmopname_)->line_number = (yyloc).first_line; (yyval.asmopname_)->char_number = (yyloc).first_column; result->asmopname_ = (yyval.asmopname_); }
#line 7704 "Parser.C"
    break;

  case 439: /* Asmclobber: %empty  */
#line 1448 "full_bnfc_parser.y"
                         { (yyval.asmclobber_) = new acsl::NoAsmclobber(); (yyval.asmclobber_)->line_number = (yyloc).first_line; (yyval.asmclobber_)->char_number = (yyloc).first_column; result->asmclobber_ = (yyval.asmclobber_); }
#line 7710 "Parser.C"
    break;

  case 440: /* Asmclobber: _COLON Asmlabels  */
#line 1449 "full_bnfc_parser.y"
                     { (yyval.asmclobber_) = new acsl::ColonAsmclobber((yyvsp[0].asmlabels_)); (yyval.asmclobber_)->line_number = (yyloc).first_line; (yyval.asmclobber_)->char_number = (yyloc).first_column; result->asmclobber_ = (yyval.asmclobber_); }
#line 7716 "Parser.C"
    break;

  case 441: /* Asmclobber: _COLON ListStringConstant Asmlabels  */
#line 1450 "full_bnfc_parser.y"
                                        { std::reverse((yyvsp[-1].liststringconstant_)->begin(),(yyvsp[-1].liststringconstant_)->end()) ;(yyval.asmclobber_) = new acsl::ColonStringAsmclobber((yyvsp[-1].liststringconstant_), (yyvsp[0].asmlabels_)); (yyval.asmclobber_)->line_number = (yyloc).first_line; (yyval.asmclobber_)->char_number = (yyloc).first_column; result->asmclobber_ = (yyval.asmclobber_); }
#line 7722 "Parser.C"
    break;

  case 442: /* ListStringConstant: StringConstant  */
#line 1452 "full_bnfc_parser.y"
                                    { (yyval.liststringconstant_) = new acsl::ListStringConstant(); (yyval.liststringconstant_)->push_back((yyvsp[0].stringconstant_)); result->liststringconstant_ = (yyval.liststringconstant_); }
#line 7728 "Parser.C"
    break;

  case 443: /* ListStringConstant: StringConstant _COMMA ListStringConstant  */
#line 1453 "full_bnfc_parser.y"
                                             { (yyvsp[0].liststringconstant_)->push_back((yyvsp[-2].stringconstant_)); (yyval.liststringconstant_) = (yyvsp[0].liststringconstant_); result->liststringconstant_ = (yyval.liststringconstant_); }
#line 7734 "Parser.C"
    break;

  case 444: /* Asmlabels: %empty  */
#line 1455 "full_bnfc_parser.y"
                        { (yyval.asmlabels_) = new acsl::NoAsmlabels(); (yyval.asmlabels_)->line_number = (yyloc).first_line; (yyval.asmlabels_)->char_number = (yyloc).first_column; result->asmlabels_ = (yyval.asmlabels_); }
#line 7740 "Parser.C"
    break;

  case 445: /* Asmlabels: _COLON ListLocalLabelName  */
#line 1456 "full_bnfc_parser.y"
                              { std::reverse((yyvsp[0].listlocallabelname_)->begin(),(yyvsp[0].listlocallabelname_)->end()) ;(yyval.asmlabels_) = new acsl::SomeAsmlabels((yyvsp[0].listlocallabelname_)); (yyval.asmlabels_)->line_number = (yyloc).first_line; (yyval.asmlabels_)->char_number = (yyloc).first_column; result->asmlabels_ = (yyval.asmlabels_); }
#line 7746 "Parser.C"
    break;

  case 446: /* LexprList: %empty  */
#line 1460 "full_bnfc_parser.y"
                        { (yyval.lexprlist_) = new acsl::EmptyLexprList(); (yyval.lexprlist_)->line_number = (yyloc).first_line; (yyval.lexprlist_)->char_number = (yyloc).first_column; result->lexprlist_ = (yyval.lexprlist_); }
#line 7752 "Parser.C"
    break;

  case 447: /* LexprList: ListLexpr  */
#line 1461 "full_bnfc_parser.y"
              { std::reverse((yyvsp[0].listlexpr_)->begin(),(yyvsp[0].listlexpr_)->end()) ;(yyval.lexprlist_) = new acsl::NonEmptyLexprList((yyvsp[0].listlexpr_)); (yyval.lexprlist_)->line_number = (yyloc).first_line; (yyval.lexprlist_)->char_number = (yyloc).first_column; result->lexprlist_ = (yyval.lexprlist_); }
#line 7758 "Parser.C"
    break;

  case 448: /* ListLexpr: Lexpr  */
#line 1463 "full_bnfc_parser.y"
                  { (yyval.listlexpr_) = new acsl::ListLexpr(); (yyval.listlexpr_)->push_back((yyvsp[0].lexpr_)); result->listlexpr_ = (yyval.listlexpr_); }
#line 7764 "Parser.C"
    break;

  case 449: /* ListLexpr: Lexpr _COMMA ListLexpr  */
#line 1464 "full_bnfc_parser.y"
                           { (yyvsp[0].listlexpr_)->push_back((yyvsp[-2].lexpr_)); (yyval.listlexpr_) = (yyvsp[0].listlexpr_); result->listlexpr_ = (yyval.listlexpr_); }
#line 7770 "Parser.C"
    break;

  case 450: /* LexprOption: %empty  */
#line 1466 "full_bnfc_parser.y"
                          { (yyval.lexproption_) = new acsl::NoLexprOption(); (yyval.lexproption_)->line_number = (yyloc).first_line; (yyval.lexproption_)->char_number = (yyloc).first_column; result->lexproption_ = (yyval.lexproption_); }
#line 7776 "Parser.C"
    break;

  case 451: /* LexprOption: Lexpr  */
#line 1467 "full_bnfc_parser.y"
          { (yyval.lexproption_) = new acsl::SomeLexprOption((yyvsp[0].lexpr_)); (yyval.lexproption_)->line_number = (yyloc).first_line; (yyval.lexproption_)->char_number = (yyloc).first_column; result->lexproption_ = (yyval.lexproption_); }
#line 7782 "Parser.C"
    break;

  case 452: /* Lexpr: %empty  */
#line 1469 "full_bnfc_parser.y"
                    { (yyval.lexpr_) = new acsl::NoLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7788 "Parser.C"
    break;

  case 453: /* Lexpr: Lexpr _SYMB_60 Lexpr  */
#line 1470 "full_bnfc_parser.y"
                         { (yyval.lexpr_) = new acsl::ImplLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7794 "Parser.C"
    break;

  case 454: /* Lexpr: Lexpr _SYMB_61 Lexpr  */
#line 1471 "full_bnfc_parser.y"
                         { (yyval.lexpr_) = new acsl::IffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7800 "Parser.C"
    break;

  case 455: /* Lexpr: Lexpr _DBAR Lexpr  */
#line 1472 "full_bnfc_parser.y"
                      { (yyval.lexpr_) = new acsl::OrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7806 "Parser.C"
    break;

  case 456: /* Lexpr: Lexpr _DAMP Lexpr  */
#line 1473 "full_bnfc_parser.y"
                      { (yyval.lexpr_) = new acsl::AndLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7812 "Parser.C"
    break;

  case 457: /* Lexpr: Lexpr _DCARET Lexpr  */
#line 1474 "full_bnfc_parser.y"
                        { (yyval.lexpr_) = new acsl::HatHatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7818 "Parser.C"
    break;

  case 458: /* Lexpr: Lexpr _AMP Lexpr  */
#line 1475 "full_bnfc_parser.y"
                     { (yyval.lexpr_) = new acsl::AmpLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7824 "Parser.C"
    break;

  case 459: /* Lexpr: Lexpr _BAR Lexpr  */
#line 1476 "full_bnfc_parser.y"
                     { (yyval.lexpr_) = new acsl::PipeLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7830 "Parser.C"
    break;

  case 460: /* Lexpr: Lexpr _CARET Lexpr  */
#line 1477 "full_bnfc_parser.y"
                       { (yyval.lexpr_) = new acsl::HatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7836 "Parser.C"
    break;

  case 461: /* Lexpr: Lexpr _SYMB_63 Lexpr  */
#line 1478 "full_bnfc_parser.y"
                         { (yyval.lexpr_) = new acsl::BimpliesLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7842 "Parser.C"
    break;

  case 462: /* Lexpr: Lexpr _SYMB_64 Lexpr  */
#line 1479 "full_bnfc_parser.y"
                         { (yyval.lexpr_) = new acsl::BiffLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7848 "Parser.C"
    break;

  case 463: /* Lexpr: Lexpr _SYMB_65 Lexpr  */
#line 1480 "full_bnfc_parser.y"
                         { (yyval.lexpr_) = new acsl::InLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7854 "Parser.C"
    break;

  case 464: /* Lexpr: Lexpr _QUESTION Lexpr _COLON Lexpr  */
#line 1481 "full_bnfc_parser.y"
                                       { (yyval.lexpr_) = new acsl::TernaryLexpr((yyvsp[-4].lexpr_), (yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7860 "Parser.C"
    break;

  case 465: /* Lexpr: AnyIdentifier _COLON Lexpr  */
#line 1482 "full_bnfc_parser.y"
                               { (yyval.lexpr_) = new acsl::IdAssignLexpr((yyvsp[-2].anyidentifier_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7866 "Parser.C"
    break;

  case 466: /* Lexpr: ListSTRING_LITERAL _COLON Lexpr  */
#line 1483 "full_bnfc_parser.y"
                                    { std::reverse((yyvsp[-2].liststring_literal_)->begin(),(yyvsp[-2].liststring_literal_)->end()) ;(yyval.lexpr_) = new acsl::StrAssignLexpr((yyvsp[-2].liststring_literal_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7872 "Parser.C"
    break;

  case 467: /* Lexpr: Lexpr1  */
#line 1484 "full_bnfc_parser.y"
           { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7878 "Parser.C"
    break;

  case 468: /* Lexpr1: Lexpr2  */
#line 1486 "full_bnfc_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7884 "Parser.C"
    break;

  case 469: /* Lexpr1: Lexpr3 ListLexprRelInner Relation Lexpr2  */
#line 1487 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::RelationLexpr((yyvsp[-3].lexpr_), (yyvsp[-2].listlexprrelinner_), (yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7890 "Parser.C"
    break;

  case 470: /* Lexpr2: Lexpr3  */
#line 1489 "full_bnfc_parser.y"
                { (yyval.lexpr_) = (yyvsp[0].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7896 "Parser.C"
    break;

  case 471: /* Lexpr2: LexprBinder  */
#line 1490 "full_bnfc_parser.y"
                { (yyval.lexpr_) = new acsl::BinderLexpr((yyvsp[0].lexprbinder_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7902 "Parser.C"
    break;

  case 472: /* Lexpr2: _BANG LexprBinder  */
#line 1491 "full_bnfc_parser.y"
                      { (yyval.lexpr_) = new acsl::NotBinderLexpr((yyvsp[0].lexprbinder_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7908 "Parser.C"
    break;

  case 473: /* LexprBinder: _SYMB_66 BoundedVar _EQ Lexpr _SEMI Lexpr  */
#line 1493 "full_bnfc_parser.y"
                                                        { (yyval.lexprbinder_) = new acsl::LetBinderLexpr((yyvsp[-4].boundedvar_), (yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 7914 "Parser.C"
    break;

  case 474: /* LexprBinder: _SYMB_67 Binders _SEMI Lexpr  */
#line 1494 "full_bnfc_parser.y"
                                 { (yyval.lexprbinder_) = new acsl::ForallBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 7920 "Parser.C"
    break;

  case 475: /* LexprBinder: _SYMB_68 Binders _SEMI Lexpr  */
#line 1495 "full_bnfc_parser.y"
                                 { (yyval.lexprbinder_) = new acsl::ExistBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 7926 "Parser.C"
    break;

  case 476: /* LexprBinder: _SYMB_69 Binders _SEMI Lexpr  */
#line 1496 "full_bnfc_parser.y"
                                 { (yyval.lexprbinder_) = new acsl::LambdaBinderLexpr((yyvsp[-2].binders_), (yyvsp[0].lexpr_)); (yyval.lexprbinder_)->line_number = (yyloc).first_line; (yyval.lexprbinder_)->char_number = (yyloc).first_column; result->lexprbinder_ = (yyval.lexprbinder_); }
#line 7932 "Parser.C"
    break;

  case 477: /* LexprRelInner: Relation Lexpr3  */
#line 1498 "full_bnfc_parser.y"
                                { (yyval.lexprrelinner_) = new acsl::RelInnerLexpr((yyvsp[-1].relation_), (yyvsp[0].lexpr_)); (yyval.lexprrelinner_)->line_number = (yyloc).first_line; (yyval.lexprrelinner_)->char_number = (yyloc).first_column; result->lexprrelinner_ = (yyval.lexprrelinner_); }
#line 7938 "Parser.C"
    break;

  case 478: /* ListLexprRelInner: %empty  */
#line 1500 "full_bnfc_parser.y"
                                { (yyval.listlexprrelinner_) = new acsl::ListLexprRelInner(); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 7944 "Parser.C"
    break;

  case 479: /* ListLexprRelInner: ListLexprRelInner LexprRelInner  */
#line 1501 "full_bnfc_parser.y"
                                    { (yyvsp[-1].listlexprrelinner_)->push_back((yyvsp[0].lexprrelinner_)); (yyval.listlexprrelinner_) = (yyvsp[-1].listlexprrelinner_); result->listlexprrelinner_ = (yyval.listlexprrelinner_); }
#line 7950 "Parser.C"
    break;

  case 480: /* Relation: _LT  */
#line 1503 "full_bnfc_parser.y"
               { (yyval.relation_) = new acsl::LessRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 7956 "Parser.C"
    break;

  case 481: /* Relation: _GT  */
#line 1504 "full_bnfc_parser.y"
        { (yyval.relation_) = new acsl::GreaterRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 7962 "Parser.C"
    break;

  case 482: /* Relation: _LDARROW  */
#line 1505 "full_bnfc_parser.y"
             { (yyval.relation_) = new acsl::LessEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 7968 "Parser.C"
    break;

  case 483: /* Relation: _GTEQ  */
#line 1506 "full_bnfc_parser.y"
          { (yyval.relation_) = new acsl::GreaterEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 7974 "Parser.C"
    break;

  case 484: /* Relation: _DEQ  */
#line 1507 "full_bnfc_parser.y"
         { (yyval.relation_) = new acsl::EqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 7980 "Parser.C"
    break;

  case 485: /* Relation: _BANGEQ  */
#line 1508 "full_bnfc_parser.y"
            { (yyval.relation_) = new acsl::NotEqRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 7986 "Parser.C"
    break;

  case 486: /* Relation: _EQ  */
#line 1509 "full_bnfc_parser.y"
        { (yyval.relation_) = new acsl::EQUALRel(); (yyval.relation_)->line_number = (yyloc).first_line; (yyval.relation_)->char_number = (yyloc).first_column; result->relation_ = (yyval.relation_); }
#line 7992 "Parser.C"
    break;

  case 487: /* Lexpr3: ListSTRING_LITERAL  */
#line 1511 "full_bnfc_parser.y"
                            { std::reverse((yyvsp[0].liststring_literal_)->begin(),(yyvsp[0].liststring_literal_)->end()) ;(yyval.lexpr_) = new acsl::StringLexpr((yyvsp[0].liststring_literal_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 7998 "Parser.C"
    break;

  case 488: /* Lexpr3: _BANG Lexpr3  */
#line 1512 "full_bnfc_parser.y"
                 { (yyval.lexpr_) = new acsl::NotLexprInner((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8004 "Parser.C"
    break;

  case 489: /* Lexpr3: _SYMB_70  */
#line 1513 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::TrueLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8010 "Parser.C"
    break;

  case 490: /* Lexpr3: _SYMB_71  */
#line 1514 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::FalseLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8016 "Parser.C"
    break;

  case 491: /* Lexpr3: _SYMB_72 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1515 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::PointerLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8022 "Parser.C"
    break;

  case 492: /* Lexpr3: _SYMB_73 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1516 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::ValidLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8028 "Parser.C"
    break;

  case 493: /* Lexpr3: _SYMB_74 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1517 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::ValidReadLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8034 "Parser.C"
    break;

  case 494: /* Lexpr3: _SYMB_75 _LPAREN Lexpr _RPAREN  */
#line 1518 "full_bnfc_parser.y"
                                   { (yyval.lexpr_) = new acsl::ValidFuncLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8040 "Parser.C"
    break;

  case 495: /* Lexpr3: _SYMB_76 OptLabel1 _LPAREN Lexpr _COMMA Lexpr _RPAREN  */
#line 1519 "full_bnfc_parser.y"
                                                          { (yyval.lexpr_) = new acsl::ValidIndxLexpr((yyvsp[-5].optlabel_), (yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8046 "Parser.C"
    break;

  case 496: /* Lexpr3: _SYMB_77 OptLabel1 _LPAREN Lexpr _COMMA Lexpr _COMMA Lexpr _RPAREN  */
#line 1520 "full_bnfc_parser.y"
                                                                       { (yyval.lexpr_) = new acsl::ValidRangeLexpr((yyvsp[-7].optlabel_), (yyvsp[-5].lexpr_), (yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8052 "Parser.C"
    break;

  case 497: /* Lexpr3: _SYMB_78 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1521 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::InitializedLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8058 "Parser.C"
    break;

  case 498: /* Lexpr3: _SYMB_79 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1522 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::DanglingLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8064 "Parser.C"
    break;

  case 499: /* Lexpr3: _SYMB_80 OptLabel2 _LPAREN Lexpr _COMMA Lexpr _RPAREN  */
#line 1523 "full_bnfc_parser.y"
                                                          { (yyval.lexpr_) = new acsl::FreshLexpr((yyvsp[-5].optlabel_), (yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8070 "Parser.C"
    break;

  case 500: /* Lexpr3: _SYMB_81 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1524 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::BaseAddrLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8076 "Parser.C"
    break;

  case 501: /* Lexpr3: _SYMB_82 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1525 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::BlockLengthLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8082 "Parser.C"
    break;

  case 502: /* Lexpr3: _SYMB_83 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1526 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::OffsetLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8088 "Parser.C"
    break;

  case 503: /* Lexpr3: _SYMB_84 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1527 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::AllocableLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8094 "Parser.C"
    break;

  case 504: /* Lexpr3: _SYMB_85 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1528 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::FreeableLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8100 "Parser.C"
    break;

  case 505: /* Lexpr3: _SYMB_86 OptLabel1 _LPAREN Lexpr _RPAREN  */
#line 1529 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::AllocationLexpr((yyvsp[-3].optlabel_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8106 "Parser.C"
    break;

  case 506: /* Lexpr3: _SYMB_87  */
#line 1530 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::AutomaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8112 "Parser.C"
    break;

  case 507: /* Lexpr3: _SYMB_88  */
#line 1531 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::DynamicLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8118 "Parser.C"
    break;

  case 508: /* Lexpr3: _SYMB_89  */
#line 1532 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::RegisterLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8124 "Parser.C"
    break;

  case 509: /* Lexpr3: _SYMB_90  */
#line 1533 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::StaticLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8130 "Parser.C"
    break;

  case 510: /* Lexpr3: _SYMB_91  */
#line 1534 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::UnallocatedLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8136 "Parser.C"
    break;

  case 511: /* Lexpr3: _SYMB_92  */
#line 1535 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::NullLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8142 "Parser.C"
    break;

  case 512: /* Lexpr3: _INTEGER_  */
#line 1536 "full_bnfc_parser.y"
              { (yyval.lexpr_) = new acsl::LexprIntConst((yyvsp[0]._int)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8148 "Parser.C"
    break;

  case 513: /* Lexpr3: _DOUBLE_  */
#line 1537 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::LexprFloatConst((yyvsp[0]._double)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8154 "Parser.C"
    break;

  case 514: /* Lexpr3: _STRING_  */
#line 1538 "full_bnfc_parser.y"
             { (yyval.lexpr_) = new acsl::LexprStringConst((yyvsp[0]._string)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8160 "Parser.C"
    break;

  case 515: /* Lexpr3: T_WSTRING_CONSTANT  */
#line 1539 "full_bnfc_parser.y"
                       { (yyval.lexpr_) = new acsl::LexprWStringConst((yyvsp[0]._string)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8166 "Parser.C"
    break;

  case 516: /* Lexpr3: Lexpr3 _PLUS Lexpr3  */
#line 1540 "full_bnfc_parser.y"
                        { (yyval.lexpr_) = new acsl::AddLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8172 "Parser.C"
    break;

  case 517: /* Lexpr3: Lexpr3 _MINUS Lexpr3  */
#line 1541 "full_bnfc_parser.y"
                         { (yyval.lexpr_) = new acsl::SubtrLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8178 "Parser.C"
    break;

  case 518: /* Lexpr3: Lexpr3 _STAR Lexpr3  */
#line 1542 "full_bnfc_parser.y"
                        { (yyval.lexpr_) = new acsl::MultLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8184 "Parser.C"
    break;

  case 519: /* Lexpr3: Lexpr3 _SLASH Lexpr3  */
#line 1543 "full_bnfc_parser.y"
                         { (yyval.lexpr_) = new acsl::DivLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8190 "Parser.C"
    break;

  case 520: /* Lexpr3: Lexpr3 _PERCENT Lexpr3  */
#line 1544 "full_bnfc_parser.y"
                           { (yyval.lexpr_) = new acsl::ModLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8196 "Parser.C"
    break;

  case 521: /* Lexpr3: Lexpr3 _SYMB_93 Lexpr3  */
#line 1545 "full_bnfc_parser.y"
                           { (yyval.lexpr_) = new acsl::StarHatLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8202 "Parser.C"
    break;

  case 522: /* Lexpr3: Lexpr3 _RARROW IdentifierOrTypenameFull  */
#line 1546 "full_bnfc_parser.y"
                                            { (yyval.lexpr_) = new acsl::ArrowLexpr((yyvsp[-2].lexpr_), (yyvsp[0].identifierortypenamefull_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8208 "Parser.C"
    break;

  case 523: /* Lexpr3: Lexpr3 _DOT IdentifierOrTypenameFull  */
#line 1547 "full_bnfc_parser.y"
                                         { (yyval.lexpr_) = new acsl::DotLexpr((yyvsp[-2].lexpr_), (yyvsp[0].identifierortypenamefull_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8214 "Parser.C"
    break;

  case 524: /* Lexpr3: Lexpr3 _LBRACK Range _RBRACK  */
#line 1548 "full_bnfc_parser.y"
                                 { (yyval.lexpr_) = new acsl::SquaresRangeLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].range_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8220 "Parser.C"
    break;

  case 525: /* Lexpr3: Lexpr3 _LBRACK Lexpr _RBRACK  */
#line 1549 "full_bnfc_parser.y"
                                 { (yyval.lexpr_) = new acsl::SquaresLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8226 "Parser.C"
    break;

  case 526: /* Lexpr3: _SYMB_96 LexprList _SYMB_97  */
#line 1550 "full_bnfc_parser.y"
                                { (yyval.lexpr_) = new acsl::SquaresPipeLexpr((yyvsp[-1].lexprlist_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8232 "Parser.C"
    break;

  case 527: /* Lexpr3: _MINUS Lexpr3  */
#line 1551 "full_bnfc_parser.y"
                  { (yyval.lexpr_) = new acsl::MinusLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8238 "Parser.C"
    break;

  case 528: /* Lexpr3: _PLUS Lexpr3  */
#line 1552 "full_bnfc_parser.y"
                 { (yyval.lexpr_) = new acsl::PlusLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8244 "Parser.C"
    break;

  case 529: /* Lexpr3: _TILDE Lexpr3  */
#line 1553 "full_bnfc_parser.y"
                  { (yyval.lexpr_) = new acsl::TildeLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8250 "Parser.C"
    break;

  case 530: /* Lexpr3: _STAR Lexpr3  */
#line 1554 "full_bnfc_parser.y"
                 { (yyval.lexpr_) = new acsl::StarLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8256 "Parser.C"
    break;

  case 531: /* Lexpr3: _AMP Lexpr3  */
#line 1555 "full_bnfc_parser.y"
                { (yyval.lexpr_) = new acsl::AmpUnaryLexpr((yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8262 "Parser.C"
    break;

  case 532: /* Lexpr3: _KW_sizeof _LPAREN Lexpr _RPAREN  */
#line 1556 "full_bnfc_parser.y"
                                     { (yyval.lexpr_) = new acsl::SizeOfLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8268 "Parser.C"
    break;

  case 533: /* Lexpr3: _KW_sizeof _LPAREN CastLogicType _RPAREN  */
#line 1557 "full_bnfc_parser.y"
                                             { (yyval.lexpr_) = new acsl::SizeOfLogicTypeLexpr((yyvsp[-1].castlogictype_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8274 "Parser.C"
    break;

  case 534: /* Lexpr3: _SYMB_98 _LPAREN Lexpr _RPAREN  */
#line 1558 "full_bnfc_parser.y"
                                   { (yyval.lexpr_) = new acsl::OldLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8280 "Parser.C"
    break;

  case 535: /* Lexpr3: _SYMB_99 _LPAREN Lexpr _COMMA LabelName _RPAREN  */
#line 1559 "full_bnfc_parser.y"
                                                    { (yyval.lexpr_) = new acsl::AtLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].labelname_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8286 "Parser.C"
    break;

  case 536: /* Lexpr3: _SYMB_100  */
#line 1560 "full_bnfc_parser.y"
              { (yyval.lexpr_) = new acsl::ResultLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8292 "Parser.C"
    break;

  case 537: /* Lexpr3: _SYMB_101 _LPAREN ListLexpr _RPAREN  */
#line 1561 "full_bnfc_parser.y"
                                        { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new acsl::SeparatedLexpr((yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8298 "Parser.C"
    break;

  case 538: /* Lexpr3: FullIdentifier _LPAREN ListLexpr _RPAREN  */
#line 1562 "full_bnfc_parser.y"
                                             { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new acsl::FullIdParenLexpr((yyvsp[-3].fullidentifier_), (yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8304 "Parser.C"
    break;

  case 539: /* Lexpr3: FullIdentifier _LBRACE ListIdentifierOrTypenameFull _RBRACE _LPAREN ListLexpr _RPAREN  */
#line 1563 "full_bnfc_parser.y"
                                                                                          { std::reverse((yyvsp[-4].listidentifierortypenamefull_)->begin(),(yyvsp[-4].listidentifierortypenamefull_)->end()) ; std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.lexpr_) = new acsl::FullIdBraceParenLexpr((yyvsp[-6].fullidentifier_), (yyvsp[-4].listidentifierortypenamefull_), (yyvsp[-1].listlexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8310 "Parser.C"
    break;

  case 540: /* Lexpr3: FullIdentifier _LBRACE ListIdentifierOrTypenameFull _RBRACE  */
#line 1564 "full_bnfc_parser.y"
                                                                { std::reverse((yyvsp[-1].listidentifierortypenamefull_)->begin(),(yyvsp[-1].listidentifierortypenamefull_)->end()) ;(yyval.lexpr_) = new acsl::FullIdBracesLexpr((yyvsp[-3].fullidentifier_), (yyvsp[-1].listidentifierortypenamefull_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8316 "Parser.C"
    break;

  case 541: /* Lexpr3: FullIdentifier  */
#line 1565 "full_bnfc_parser.y"
                   { (yyval.lexpr_) = new acsl::FullId((yyvsp[0].fullidentifier_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8322 "Parser.C"
    break;

  case 542: /* Lexpr3: _SYMB_104  */
#line 1566 "full_bnfc_parser.y"
              { (yyval.lexpr_) = new acsl::PiLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8328 "Parser.C"
    break;

  case 543: /* Lexpr3: Lexpr3 _DGT Lexpr3  */
#line 1567 "full_bnfc_parser.y"
                       { (yyval.lexpr_) = new acsl::LessLessLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8334 "Parser.C"
    break;

  case 544: /* Lexpr3: Lexpr3 _DLT Lexpr3  */
#line 1568 "full_bnfc_parser.y"
                       { (yyval.lexpr_) = new acsl::GreaterGreaterLexpr((yyvsp[-2].lexpr_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8340 "Parser.C"
    break;

  case 545: /* Lexpr3: _LPAREN Lexpr _RPAREN  */
#line 1569 "full_bnfc_parser.y"
                          { (yyval.lexpr_) = (yyvsp[-1].lexpr_); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8346 "Parser.C"
    break;

  case 546: /* Lexpr3: _LPAREN Range _RPAREN  */
#line 1570 "full_bnfc_parser.y"
                          { (yyval.lexpr_) = new acsl::ParenRangeLexpr((yyvsp[-1].range_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8352 "Parser.C"
    break;

  case 547: /* Lexpr3: _LPAREN CastLogicType _RPAREN Lexpr3  */
#line 1571 "full_bnfc_parser.y"
                                         { (yyval.lexpr_) = new acsl::CastLexpr((yyvsp[-2].castlogictype_), (yyvsp[0].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8358 "Parser.C"
    break;

  case 548: /* Lexpr3: _SYMB_105 _LPAREN Lexpr _RPAREN  */
#line 1572 "full_bnfc_parser.y"
                                    { (yyval.lexpr_) = new acsl::TypeOfLexpr((yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8364 "Parser.C"
    break;

  case 549: /* Lexpr3: _SYMB_106 _LPAREN TypeSpecOFTYPENAME _RPAREN  */
#line 1573 "full_bnfc_parser.y"
                                                 { (yyval.lexpr_) = new acsl::TypeLexpr((yyvsp[-1].typespecoftypename_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8370 "Parser.C"
    break;

  case 550: /* Lexpr3: _SYMB_106 _LPAREN TypeSpecOFTYPENAME ListStars _RPAREN  */
#line 1574 "full_bnfc_parser.y"
                                                           { std::reverse((yyvsp[-1].liststars_)->begin(),(yyvsp[-1].liststars_)->end()) ;(yyval.lexpr_) = new acsl::TypeWithStarsLexpr((yyvsp[-2].typespecoftypename_), (yyvsp[-1].liststars_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8376 "Parser.C"
    break;

  case 551: /* Lexpr3: _SYMB_107  */
#line 1575 "full_bnfc_parser.y"
              { (yyval.lexpr_) = new acsl::EmptyLexpr(); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8382 "Parser.C"
    break;

  case 552: /* Lexpr3: _SYMB_108 _LPAREN LexprList _RPAREN  */
#line 1576 "full_bnfc_parser.y"
                                        { (yyval.lexpr_) = new acsl::UnionLexpr((yyvsp[-1].lexprlist_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8388 "Parser.C"
    break;

  case 553: /* Lexpr3: _SYMB_109 _LPAREN LexprList _RPAREN  */
#line 1577 "full_bnfc_parser.y"
                                        { (yyval.lexpr_) = new acsl::InterLexpr((yyvsp[-1].lexprlist_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8394 "Parser.C"
    break;

  case 554: /* Lexpr3: _LBRACE LexprList _RBRACE  */
#line 1578 "full_bnfc_parser.y"
                              { (yyval.lexpr_) = new acsl::BraceLexprList((yyvsp[-1].lexprlist_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8400 "Parser.C"
    break;

  case 555: /* Lexpr3: _LBRACE Lexpr _BAR Binders _RBRACE  */
#line 1579 "full_bnfc_parser.y"
                                       { (yyval.lexpr_) = new acsl::BraceBinderLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].binders_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8406 "Parser.C"
    break;

  case 556: /* Lexpr3: _LBRACE Lexpr _BAR Binders _SEMI Lexpr _RBRACE  */
#line 1580 "full_bnfc_parser.y"
                                                   { (yyval.lexpr_) = new acsl::BraceBinderLexprLexpr((yyvsp[-5].lexpr_), (yyvsp[-3].binders_), (yyvsp[-1].lexpr_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8412 "Parser.C"
    break;

  case 557: /* Lexpr3: _LBRACE ListFieldInitElt _RBRACE  */
#line 1581 "full_bnfc_parser.y"
                                     { std::reverse((yyvsp[-1].listfieldinitelt_)->begin(),(yyvsp[-1].listfieldinitelt_)->end()) ;(yyval.lexpr_) = new acsl::FieldInitLexpr((yyvsp[-1].listfieldinitelt_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8418 "Parser.C"
    break;

  case 558: /* Lexpr3: _LBRACE ListArrayInitElt _RBRACE  */
#line 1582 "full_bnfc_parser.y"
                                     { std::reverse((yyvsp[-1].listarrayinitelt_)->begin(),(yyvsp[-1].listarrayinitelt_)->end()) ;(yyval.lexpr_) = new acsl::ArrayInitLexpr((yyvsp[-1].listarrayinitelt_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8424 "Parser.C"
    break;

  case 559: /* Lexpr3: _LBRACE Lexpr _SYMB_110 ListUpdateElt _RBRACE  */
#line 1583 "full_bnfc_parser.y"
                                                  { std::reverse((yyvsp[-1].listupdateelt_)->begin(),(yyvsp[-1].listupdateelt_)->end()) ;(yyval.lexpr_) = new acsl::UpdateBraceLexpr((yyvsp[-3].lexpr_), (yyvsp[-1].listupdateelt_)); (yyval.lexpr_)->line_number = (yyloc).first_line; (yyval.lexpr_)->char_number = (yyloc).first_column; result->lexpr_ = (yyval.lexpr_); }
#line 8430 "Parser.C"
    break;

  case 560: /* ListSTRING_LITERAL: T_STRING_LITERAL  */
#line 1585 "full_bnfc_parser.y"
                                      { (yyval.liststring_literal_) = new acsl::ListSTRING_LITERAL(); (yyval.liststring_literal_)->push_back((yyvsp[0]._string)); result->liststring_literal_ = (yyval.liststring_literal_); }
#line 8436 "Parser.C"
    break;

  case 561: /* ListSTRING_LITERAL: T_STRING_LITERAL ListSTRING_LITERAL  */
#line 1586 "full_bnfc_parser.y"
                                        { (yyvsp[0].liststring_literal_)->push_back((yyvsp[-1]._string)); (yyval.liststring_literal_) = (yyvsp[0].liststring_literal_); result->liststring_literal_ = (yyval.liststring_literal_); }
#line 8442 "Parser.C"
    break;

  case 562: /* Range: LexprOption _DDOT LexprOption  */
#line 1588 "full_bnfc_parser.y"
                                      { (yyval.range_) = new acsl::LexprRange((yyvsp[-2].lexproption_), (yyvsp[0].lexproption_)); (yyval.range_)->line_number = (yyloc).first_line; (yyval.range_)->char_number = (yyloc).first_column; result->range_ = (yyval.range_); }
#line 8448 "Parser.C"
    break;

  case 563: /* FieldInitElt: _DOT IdentifierOrTypenameFull _EQ Lexpr  */
#line 1590 "full_bnfc_parser.y"
                                                       { (yyval.fieldinitelt_) = new acsl::AFieldInitElt((yyvsp[-2].identifierortypenamefull_), (yyvsp[0].lexpr_)); (yyval.fieldinitelt_)->line_number = (yyloc).first_line; (yyval.fieldinitelt_)->char_number = (yyloc).first_column; result->fieldinitelt_ = (yyval.fieldinitelt_); }
#line 8454 "Parser.C"
    break;

  case 564: /* ListFieldInitElt: FieldInitElt  */
#line 1592 "full_bnfc_parser.y"
                                { (yyval.listfieldinitelt_) = new acsl::ListFieldInitElt(); (yyval.listfieldinitelt_)->push_back((yyvsp[0].fieldinitelt_)); result->listfieldinitelt_ = (yyval.listfieldinitelt_); }
#line 8460 "Parser.C"
    break;

  case 565: /* ListFieldInitElt: FieldInitElt _COMMA ListFieldInitElt  */
#line 1593 "full_bnfc_parser.y"
                                         { (yyvsp[0].listfieldinitelt_)->push_back((yyvsp[-2].fieldinitelt_)); (yyval.listfieldinitelt_) = (yyvsp[0].listfieldinitelt_); result->listfieldinitelt_ = (yyval.listfieldinitelt_); }
#line 8466 "Parser.C"
    break;

  case 566: /* ArrayInitElt: _LBRACK Lexpr _RBRACK _EQ Lexpr  */
#line 1595 "full_bnfc_parser.y"
                                               { (yyval.arrayinitelt_) = new acsl::AnArrayInitElt((yyvsp[-3].lexpr_), (yyvsp[0].lexpr_)); (yyval.arrayinitelt_)->line_number = (yyloc).first_line; (yyval.arrayinitelt_)->char_number = (yyloc).first_column; result->arrayinitelt_ = (yyval.arrayinitelt_); }
#line 8472 "Parser.C"
    break;

  case 567: /* ArrayInitElt: _LBRACK Range _RBRACK _EQ Lexpr  */
#line 1596 "full_bnfc_parser.y"
                                    { (yyval.arrayinitelt_) = new acsl::ArrayInitRangeElt((yyvsp[-3].range_), (yyvsp[0].lexpr_)); (yyval.arrayinitelt_)->line_number = (yyloc).first_line; (yyval.arrayinitelt_)->char_number = (yyloc).first_column; result->arrayinitelt_ = (yyval.arrayinitelt_); }
#line 8478 "Parser.C"
    break;

  case 568: /* ListArrayInitElt: ArrayInitElt  */
#line 1598 "full_bnfc_parser.y"
                                { (yyval.listarrayinitelt_) = new acsl::ListArrayInitElt(); (yyval.listarrayinitelt_)->push_back((yyvsp[0].arrayinitelt_)); result->listarrayinitelt_ = (yyval.listarrayinitelt_); }
#line 8484 "Parser.C"
    break;

  case 569: /* ListArrayInitElt: ArrayInitElt _COMMA ListArrayInitElt  */
#line 1599 "full_bnfc_parser.y"
                                         { (yyvsp[0].listarrayinitelt_)->push_back((yyvsp[-2].arrayinitelt_)); (yyval.listarrayinitelt_) = (yyvsp[0].listarrayinitelt_); result->listarrayinitelt_ = (yyval.listarrayinitelt_); }
#line 8490 "Parser.C"
    break;

  case 570: /* UpdateElt: ListPathElt _EQ Lexpr  */
#line 1601 "full_bnfc_parser.y"
                                  { std::reverse((yyvsp[-2].listpathelt_)->begin(),(yyvsp[-2].listpathelt_)->end()) ;(yyval.updateelt_) = new acsl::AnUpdateElt((yyvsp[-2].listpathelt_), (yyvsp[0].lexpr_)); (yyval.updateelt_)->line_number = (yyloc).first_line; (yyval.updateelt_)->char_number = (yyloc).first_column; result->updateelt_ = (yyval.updateelt_); }
#line 8496 "Parser.C"
    break;

  case 571: /* UpdateElt: ListPathElt _EQ _LBRACE _SYMB_110 ListUpdateElt _RBRACE  */
#line 1602 "full_bnfc_parser.y"
                                                            { std::reverse((yyvsp[-5].listpathelt_)->begin(),(yyvsp[-5].listpathelt_)->end()) ; std::reverse((yyvsp[-1].listupdateelt_)->begin(),(yyvsp[-1].listupdateelt_)->end()) ;(yyval.updateelt_) = new acsl::UpdateEltWith((yyvsp[-5].listpathelt_), (yyvsp[-1].listupdateelt_)); (yyval.updateelt_)->line_number = (yyloc).first_line; (yyval.updateelt_)->char_number = (yyloc).first_column; result->updateelt_ = (yyval.updateelt_); }
#line 8502 "Parser.C"
    break;

  case 572: /* ListUpdateElt: UpdateElt  */
#line 1604 "full_bnfc_parser.y"
                          { (yyval.listupdateelt_) = new acsl::ListUpdateElt(); (yyval.listupdateelt_)->push_back((yyvsp[0].updateelt_)); result->listupdateelt_ = (yyval.listupdateelt_); }
#line 8508 "Parser.C"
    break;

  case 573: /* ListUpdateElt: UpdateElt _COMMA ListUpdateElt  */
#line 1605 "full_bnfc_parser.y"
                                   { (yyvsp[0].listupdateelt_)->push_back((yyvsp[-2].updateelt_)); (yyval.listupdateelt_) = (yyvsp[0].listupdateelt_); result->listupdateelt_ = (yyval.listupdateelt_); }
#line 8514 "Parser.C"
    break;

  case 574: /* PathElt: _DOT IdentifierOrTypenameFull  */
#line 1607 "full_bnfc_parser.y"
                                        { (yyval.pathelt_) = new acsl::FieldElt((yyvsp[0].identifierortypenamefull_)); (yyval.pathelt_)->line_number = (yyloc).first_line; (yyval.pathelt_)->char_number = (yyloc).first_column; result->pathelt_ = (yyval.pathelt_); }
#line 8520 "Parser.C"
    break;

  case 575: /* PathElt: _LBRACK Lexpr _RBRACK  */
#line 1608 "full_bnfc_parser.y"
                          { (yyval.pathelt_) = new acsl::ArrayElt((yyvsp[-1].lexpr_)); (yyval.pathelt_)->line_number = (yyloc).first_line; (yyval.pathelt_)->char_number = (yyloc).first_column; result->pathelt_ = (yyval.pathelt_); }
#line 8526 "Parser.C"
    break;

  case 576: /* PathElt: _LBRACK Range _RBRACK  */
#line 1609 "full_bnfc_parser.y"
                          { (yyval.pathelt_) = new acsl::ArrayRangeElt((yyvsp[-1].range_)); (yyval.pathelt_)->line_number = (yyloc).first_line; (yyval.pathelt_)->char_number = (yyloc).first_column; result->pathelt_ = (yyval.pathelt_); }
#line 8532 "Parser.C"
    break;

  case 577: /* ListPathElt: PathElt  */
#line 1611 "full_bnfc_parser.y"
                      { (yyval.listpathelt_) = new acsl::ListPathElt(); (yyval.listpathelt_)->push_back((yyvsp[0].pathelt_)); result->listpathelt_ = (yyval.listpathelt_); }
#line 8538 "Parser.C"
    break;

  case 578: /* ListPathElt: PathElt ListPathElt  */
#line 1612 "full_bnfc_parser.y"
                        { (yyvsp[0].listpathelt_)->push_back((yyvsp[-1].pathelt_)); (yyval.listpathelt_) = (yyvsp[0].listpathelt_); result->listpathelt_ = (yyval.listpathelt_); }
#line 8544 "Parser.C"
    break;

  case 579: /* Binders: TypeSpecOFTYPENAME VarSpec _COMMA ListBindersReentrance  */
#line 1614 "full_bnfc_parser.y"
                                                                  { std::reverse((yyvsp[0].listbindersreentrance_)->begin(),(yyvsp[0].listbindersreentrance_)->end()) ;(yyval.binders_) = new acsl::TheBinders((yyvsp[-3].typespecoftypename_), (yyvsp[-2].varspec_), (yyvsp[0].listbindersreentrance_)); (yyval.binders_)->line_number = (yyloc).first_line; (yyval.binders_)->char_number = (yyloc).first_column; result->binders_ = (yyval.binders_); }
#line 8550 "Parser.C"
    break;

  case 580: /* BindersReentrance: TypeSpecOFTYPENAME VarSpec  */
#line 1616 "full_bnfc_parser.y"
                                               { (yyval.bindersreentrance_) = new acsl::BindersReentranceDeclSpec((yyvsp[-1].typespecoftypename_), (yyvsp[0].varspec_)); (yyval.bindersreentrance_)->line_number = (yyloc).first_line; (yyval.bindersreentrance_)->char_number = (yyloc).first_column; result->bindersreentrance_ = (yyval.bindersreentrance_); }
#line 8556 "Parser.C"
    break;

  case 581: /* BindersReentrance: VarSpec  */
#line 1617 "full_bnfc_parser.y"
            { (yyval.bindersreentrance_) = new acsl::BindersReentranceVarSpec((yyvsp[0].varspec_)); (yyval.bindersreentrance_)->line_number = (yyloc).first_line; (yyval.bindersreentrance_)->char_number = (yyloc).first_column; result->bindersreentrance_ = (yyval.bindersreentrance_); }
#line 8562 "Parser.C"
    break;

  case 582: /* ListBindersReentrance: BindersReentrance  */
#line 1619 "full_bnfc_parser.y"
                                          { (yyval.listbindersreentrance_) = new acsl::ListBindersReentrance(); (yyval.listbindersreentrance_)->push_back((yyvsp[0].bindersreentrance_)); result->listbindersreentrance_ = (yyval.listbindersreentrance_); }
#line 8568 "Parser.C"
    break;

  case 583: /* ListBindersReentrance: BindersReentrance _COMMA ListBindersReentrance  */
#line 1620 "full_bnfc_parser.y"
                                                   { (yyvsp[0].listbindersreentrance_)->push_back((yyvsp[-2].bindersreentrance_)); (yyval.listbindersreentrance_) = (yyvsp[0].listbindersreentrance_); result->listbindersreentrance_ = (yyval.listbindersreentrance_); }
#line 8574 "Parser.C"
    break;

  case 584: /* VarSpec: VarSpec1  */
#line 1622 "full_bnfc_parser.y"
                   { (yyval.varspec_) = (yyvsp[0].varspec_); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 8580 "Parser.C"
    break;

  case 585: /* VarSpec: ListStars VarSpec1  */
#line 1623 "full_bnfc_parser.y"
                       { std::reverse((yyvsp[-1].liststars_)->begin(),(yyvsp[-1].liststars_)->end()) ;(yyval.varspec_) = new acsl::StartVarSpec((yyvsp[-1].liststars_), (yyvsp[0].varspec_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 8586 "Parser.C"
    break;

  case 586: /* ArraySize: _INTEGER_  */
#line 1625 "full_bnfc_parser.y"
                      { (yyval.arraysize_) = new acsl::IntConstArraySize((yyvsp[0]._int)); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 8592 "Parser.C"
    break;

  case 587: /* ArraySize: FullIdentifier  */
#line 1626 "full_bnfc_parser.y"
                   { (yyval.arraysize_) = new acsl::SomeArraySize((yyvsp[0].fullidentifier_)); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 8598 "Parser.C"
    break;

  case 588: /* ArraySize: %empty  */
#line 1627 "full_bnfc_parser.y"
                { (yyval.arraysize_) = new acsl::NoSize(); (yyval.arraysize_)->line_number = (yyloc).first_line; (yyval.arraysize_)->char_number = (yyloc).first_column; result->arraysize_ = (yyval.arraysize_); }
#line 8604 "Parser.C"
    break;

  case 589: /* VarSpec1: FullIdentifier  */
#line 1629 "full_bnfc_parser.y"
                          { (yyval.varspec_) = new acsl::SimpleSpec((yyvsp[0].fullidentifier_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 8610 "Parser.C"
    break;

  case 590: /* VarSpec1: VarSpec1 _LBRACK ArraySize _RBRACK  */
#line 1630 "full_bnfc_parser.y"
                                       { (yyval.varspec_) = new acsl::ArraySpec((yyvsp[-3].varspec_), (yyvsp[-1].arraysize_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 8616 "Parser.C"
    break;

  case 591: /* VarSpec1: _LPAREN VarSpec _RPAREN  */
#line 1631 "full_bnfc_parser.y"
                            { (yyval.varspec_) = (yyvsp[-1].varspec_); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 8622 "Parser.C"
    break;

  case 592: /* VarSpec1: VarSpec1 _LPAREN AbsParamTypeList _RPAREN  */
#line 1632 "full_bnfc_parser.y"
                                              { (yyval.varspec_) = new acsl::FunctionSpec((yyvsp[-3].varspec_), (yyvsp[-1].absparamtypelist_)); (yyval.varspec_)->line_number = (yyloc).first_line; (yyval.varspec_)->char_number = (yyloc).first_column; result->varspec_ = (yyval.varspec_); }
#line 8628 "Parser.C"
    break;

  case 593: /* AbsParamTypeList: %empty  */
#line 1634 "full_bnfc_parser.y"
                               { (yyval.absparamtypelist_) = new acsl::EmptyTypeParam(); (yyval.absparamtypelist_)->line_number = (yyloc).first_line; (yyval.absparamtypelist_)->char_number = (yyloc).first_column; result->absparamtypelist_ = (yyval.absparamtypelist_); }
#line 8634 "Parser.C"
    break;

  case 594: /* AbsParamTypeList: ListAbsParam  */
#line 1635 "full_bnfc_parser.y"
                 { std::reverse((yyvsp[0].listabsparam_)->begin(),(yyvsp[0].listabsparam_)->end()) ;(yyval.absparamtypelist_) = new acsl::SomeTypeParam((yyvsp[0].listabsparam_)); (yyval.absparamtypelist_)->line_number = (yyloc).first_line; (yyval.absparamtypelist_)->char_number = (yyloc).first_column; result->absparamtypelist_ = (yyval.absparamtypelist_); }
#line 8640 "Parser.C"
    break;

  case 595: /* AbsParamTypeList: ListAbsParam _COMMA _ELLIPSIS  */
#line 1636 "full_bnfc_parser.y"
                                  { std::reverse((yyvsp[-2].listabsparam_)->begin(),(yyvsp[-2].listabsparam_)->end()) ;(yyval.absparamtypelist_) = new acsl::InfTypeParam((yyvsp[-2].listabsparam_)); (yyval.absparamtypelist_)->line_number = (yyloc).first_line; (yyval.absparamtypelist_)->char_number = (yyloc).first_column; result->absparamtypelist_ = (yyval.absparamtypelist_); }
#line 8646 "Parser.C"
    break;

  case 596: /* AbsParam: LogicTypeGenOFTYPENAME  */
#line 1638 "full_bnfc_parser.y"
                                  { (yyval.absparam_) = new acsl::AbsParamsElement((yyvsp[0].logictypegenoftypename_)); (yyval.absparam_)->line_number = (yyloc).first_line; (yyval.absparam_)->char_number = (yyloc).first_column; result->absparam_ = (yyval.absparam_); }
#line 8652 "Parser.C"
    break;

  case 597: /* ListAbsParam: AbsParam  */
#line 1640 "full_bnfc_parser.y"
                        { (yyval.listabsparam_) = new acsl::ListAbsParam(); (yyval.listabsparam_)->push_back((yyvsp[0].absparam_)); result->listabsparam_ = (yyval.listabsparam_); }
#line 8658 "Parser.C"
    break;

  case 598: /* ListAbsParam: AbsParam _COMMA ListAbsParam  */
#line 1641 "full_bnfc_parser.y"
                                 { (yyvsp[0].listabsparam_)->push_back((yyvsp[-2].absparam_)); (yyval.listabsparam_) = (yyvsp[0].listabsparam_); result->listabsparam_ = (yyval.listabsparam_); }
#line 8664 "Parser.C"
    break;

  case 599: /* LogicTypeGenOFTYPENAME: TypeSpecOFTYPENAME AbsSpecOption  */
#line 1648 "full_bnfc_parser.y"
                                                          { (yyval.logictypegenoftypename_) = new acsl::LogicTypeGenTypemane((yyvsp[-1].typespecoftypename_), (yyvsp[0].absspecoption_)); (yyval.logictypegenoftypename_)->line_number = (yyloc).first_line; (yyval.logictypegenoftypename_)->char_number = (yyloc).first_column; result->logictypegenoftypename_ = (yyval.logictypegenoftypename_); }
#line 8670 "Parser.C"
    break;

  case 600: /* ListLogicTypeGenOFTYPENAME: LogicTypeGenOFTYPENAME  */
#line 1650 "full_bnfc_parser.y"
                                                    { (yyval.listlogictypegenoftypename_) = new acsl::ListLogicTypeGenOFTYPENAME(); (yyval.listlogictypegenoftypename_)->push_back((yyvsp[0].logictypegenoftypename_)); result->listlogictypegenoftypename_ = (yyval.listlogictypegenoftypename_); }
#line 8676 "Parser.C"
    break;

  case 601: /* ListLogicTypeGenOFTYPENAME: LogicTypeGenOFTYPENAME _COMMA ListLogicTypeGenOFTYPENAME  */
#line 1651 "full_bnfc_parser.y"
                                                             { (yyvsp[0].listlogictypegenoftypename_)->push_back((yyvsp[-2].logictypegenoftypename_)); (yyval.listlogictypegenoftypename_) = (yyvsp[0].listlogictypegenoftypename_); result->listlogictypegenoftypename_ = (yyval.listlogictypegenoftypename_); }
#line 8682 "Parser.C"
    break;

  case 602: /* CV: _KW_const  */
#line 1658 "full_bnfc_parser.y"
               { (yyval.cv_) = new acsl::ConstCV(); (yyval.cv_)->line_number = (yyloc).first_line; (yyval.cv_)->char_number = (yyloc).first_column; result->cv_ = (yyval.cv_); }
#line 8688 "Parser.C"
    break;

  case 603: /* CV: _KW_volatile  */
#line 1659 "full_bnfc_parser.y"
                 { (yyval.cv_) = new acsl::VolatileCV(); (yyval.cv_)->line_number = (yyloc).first_line; (yyval.cv_)->char_number = (yyloc).first_column; result->cv_ = (yyval.cv_); }
#line 8694 "Parser.C"
    break;

  case 604: /* CV: _SYMB_56  */
#line 1660 "full_bnfc_parser.y"
             { (yyval.cv_) = new acsl::GhostCV(); (yyval.cv_)->line_number = (yyloc).first_line; (yyval.cv_)->char_number = (yyloc).first_column; result->cv_ = (yyval.cv_); }
#line 8700 "Parser.C"
    break;

  case 605: /* ListCV: %empty  */
#line 1662 "full_bnfc_parser.y"
                     { (yyval.listcv_) = new acsl::ListCV(); result->listcv_ = (yyval.listcv_); }
#line 8706 "Parser.C"
    break;

  case 606: /* ListCV: ListCV CV  */
#line 1663 "full_bnfc_parser.y"
              { (yyvsp[-1].listcv_)->push_back((yyvsp[0].cv_)); (yyval.listcv_) = (yyvsp[-1].listcv_); result->listcv_ = (yyval.listcv_); }
#line 8712 "Parser.C"
    break;

  case 607: /* TypeSpecCVOFTYPENAME: ListCV TypeSpecOFTYPENAME ListCV  */
#line 1665 "full_bnfc_parser.y"
                                                        { (yyval.typespeccvoftypename_) = new acsl::TypeSpecCVTypename((yyvsp[-2].listcv_), (yyvsp[-1].typespecoftypename_), (yyvsp[0].listcv_)); (yyval.typespeccvoftypename_)->line_number = (yyloc).first_line; (yyval.typespeccvoftypename_)->char_number = (yyloc).first_column; result->typespeccvoftypename_ = (yyval.typespeccvoftypename_); }
#line 8718 "Parser.C"
    break;

  case 608: /* CastLogicType: TypeSpecCVOFTYPENAME AbsSpecCVOption  */
#line 1667 "full_bnfc_parser.y"
                                                     { (yyval.castlogictype_) = new acsl::AnCastLogicType((yyvsp[-1].typespeccvoftypename_), (yyvsp[0].absspeccvoption_)); (yyval.castlogictype_)->line_number = (yyloc).first_line; (yyval.castlogictype_)->char_number = (yyloc).first_column; result->castlogictype_ = (yyval.castlogictype_); }
#line 8724 "Parser.C"
    break;

  case 609: /* AbsSpecOption: %empty  */
#line 1671 "full_bnfc_parser.y"
                            { (yyval.absspecoption_) = new acsl::NoAbsSpec(); (yyval.absspecoption_)->line_number = (yyloc).first_line; (yyval.absspecoption_)->char_number = (yyloc).first_column; result->absspecoption_ = (yyval.absspecoption_); }
#line 8730 "Parser.C"
    break;

  case 610: /* AbsSpecOption: AbsSpec  */
#line 1672 "full_bnfc_parser.y"
            { (yyval.absspecoption_) = new acsl::SomeAbsSpec((yyvsp[0].absspec_)); (yyval.absspecoption_)->line_number = (yyloc).first_line; (yyval.absspecoption_)->char_number = (yyloc).first_column; result->absspecoption_ = (yyval.absspecoption_); }
#line 8736 "Parser.C"
    break;

  case 611: /* AbsSpecCVOption: %empty  */
#line 1674 "full_bnfc_parser.y"
                              { (yyval.absspeccvoption_) = new acsl::NoAbsSpecCV(); (yyval.absspeccvoption_)->line_number = (yyloc).first_line; (yyval.absspeccvoption_)->char_number = (yyloc).first_column; result->absspeccvoption_ = (yyval.absspeccvoption_); }
#line 8742 "Parser.C"
    break;

  case 612: /* AbsSpecCVOption: AbsSpecCV  */
#line 1675 "full_bnfc_parser.y"
              { (yyval.absspeccvoption_) = new acsl::SomeAbsSpecCV((yyvsp[0].absspeccv_)); (yyval.absspeccvoption_)->line_number = (yyloc).first_line; (yyval.absspeccvoption_)->char_number = (yyloc).first_column; result->absspeccvoption_ = (yyval.absspeccvoption_); }
#line 8748 "Parser.C"
    break;

  case 613: /* AbsSpec: ListTabs  */
#line 1677 "full_bnfc_parser.y"
                   { std::reverse((yyvsp[0].listtabs_)->begin(),(yyvsp[0].listtabs_)->end()) ;(yyval.absspec_) = new acsl::AbsSpecTabs((yyvsp[0].listtabs_)); (yyval.absspec_)->line_number = (yyloc).first_line; (yyval.absspec_)->char_number = (yyloc).first_column; result->absspec_ = (yyval.absspec_); }
#line 8754 "Parser.C"
    break;

  case 614: /* AbsSpec: ListStars  */
#line 1678 "full_bnfc_parser.y"
              { std::reverse((yyvsp[0].liststars_)->begin(),(yyvsp[0].liststars_)->end()) ;(yyval.absspec_) = new acsl::AbsSpecStars((yyvsp[0].liststars_)); (yyval.absspec_)->line_number = (yyloc).first_line; (yyval.absspec_)->char_number = (yyloc).first_column; result->absspec_ = (yyval.absspec_); }
#line 8760 "Parser.C"
    break;

  case 615: /* AbsSpec: ListStars ListTabs  */
#line 1679 "full_bnfc_parser.y"
                       { std::reverse((yyvsp[-1].liststars_)->begin(),(yyvsp[-1].liststars_)->end()) ; std::reverse((yyvsp[0].listtabs_)->begin(),(yyvsp[0].listtabs_)->end()) ;(yyval.absspec_) = new acsl::AbsSpecStarsTabs((yyvsp[-1].liststars_), (yyvsp[0].listtabs_)); (yyval.absspec_)->line_number = (yyloc).first_line; (yyval.absspec_)->char_number = (yyloc).first_column; result->absspec_ = (yyval.absspec_); }
#line 8766 "Parser.C"
    break;

  case 616: /* AbsSpec: ListStars AbsSpec1  */
#line 1680 "full_bnfc_parser.y"
                       { std::reverse((yyvsp[-1].liststars_)->begin(),(yyvsp[-1].liststars_)->end()) ;(yyval.absspec_) = new acsl::AbsSpecBitsStars((yyvsp[-1].liststars_), (yyvsp[0].absspec_)); (yyval.absspec_)->line_number = (yyloc).first_line; (yyval.absspec_)->char_number = (yyloc).first_column; result->absspec_ = (yyval.absspec_); }
#line 8772 "Parser.C"
    break;

  case 617: /* AbsSpec: ListStars AbsSpec1 ListTabs  */
#line 1681 "full_bnfc_parser.y"
                                { std::reverse((yyvsp[-2].liststars_)->begin(),(yyvsp[-2].liststars_)->end()) ; std::reverse((yyvsp[0].listtabs_)->begin(),(yyvsp[0].listtabs_)->end()) ;(yyval.absspec_) = new acsl::AbsSpecBitsStarsTabs((yyvsp[-2].liststars_), (yyvsp[-1].absspec_), (yyvsp[0].listtabs_)); (yyval.absspec_)->line_number = (yyloc).first_line; (yyval.absspec_)->char_number = (yyloc).first_column; result->absspec_ = (yyval.absspec_); }
#line 8778 "Parser.C"
    break;

  case 618: /* AbsSpec: AbsSpec1 ListTabs  */
#line 1682 "full_bnfc_parser.y"
                      { std::reverse((yyvsp[0].listtabs_)->begin(),(yyvsp[0].listtabs_)->end()) ;(yyval.absspec_) = new acsl::AbsSpecBitsTabs((yyvsp[-1].absspec_), (yyvsp[0].listtabs_)); (yyval.absspec_)->line_number = (yyloc).first_line; (yyval.absspec_)->char_number = (yyloc).first_column; result->absspec_ = (yyval.absspec_); }
#line 8784 "Parser.C"
    break;

  case 619: /* AbsSpec: AbsSpec1  */
#line 1683 "full_bnfc_parser.y"
             { (yyval.absspec_) = new acsl::AbsSpecBits((yyvsp[0].absspec_)); (yyval.absspec_)->line_number = (yyloc).first_line; (yyval.absspec_)->char_number = (yyloc).first_column; result->absspec_ = (yyval.absspec_); }
#line 8790 "Parser.C"
    break;

  case 620: /* AbsSpecCV: ListTabs  */
#line 1685 "full_bnfc_parser.y"
                     { std::reverse((yyvsp[0].listtabs_)->begin(),(yyvsp[0].listtabs_)->end()) ;(yyval.absspeccv_) = new acsl::AbsSpecCVTabs((yyvsp[0].listtabs_)); (yyval.absspeccv_)->line_number = (yyloc).first_line; (yyval.absspeccv_)->char_number = (yyloc).first_column; result->absspeccv_ = (yyval.absspeccv_); }
#line 8796 "Parser.C"
    break;

  case 621: /* AbsSpecCV: ListStarsCV  */
#line 1686 "full_bnfc_parser.y"
                { std::reverse((yyvsp[0].liststarscv_)->begin(),(yyvsp[0].liststarscv_)->end()) ;(yyval.absspeccv_) = new acsl::AbsSpecCVStars((yyvsp[0].liststarscv_)); (yyval.absspeccv_)->line_number = (yyloc).first_line; (yyval.absspeccv_)->char_number = (yyloc).first_column; result->absspeccv_ = (yyval.absspeccv_); }
#line 8802 "Parser.C"
    break;

  case 622: /* AbsSpecCV: ListStarsCV ListTabs  */
#line 1687 "full_bnfc_parser.y"
                         { std::reverse((yyvsp[-1].liststarscv_)->begin(),(yyvsp[-1].liststarscv_)->end()) ; std::reverse((yyvsp[0].listtabs_)->begin(),(yyvsp[0].listtabs_)->end()) ;(yyval.absspeccv_) = new acsl::AbsSpecCVStarsTabs((yyvsp[-1].liststarscv_), (yyvsp[0].listtabs_)); (yyval.absspeccv_)->line_number = (yyloc).first_line; (yyval.absspeccv_)->char_number = (yyloc).first_column; result->absspeccv_ = (yyval.absspeccv_); }
#line 8808 "Parser.C"
    break;

  case 623: /* AbsSpecCV: ListStarsCV AbsSpecCV1  */
#line 1688 "full_bnfc_parser.y"
                           { std::reverse((yyvsp[-1].liststarscv_)->begin(),(yyvsp[-1].liststarscv_)->end()) ;(yyval.absspeccv_) = new acsl::AbsSpecCVBitsStars((yyvsp[-1].liststarscv_), (yyvsp[0].absspeccv_)); (yyval.absspeccv_)->line_number = (yyloc).first_line; (yyval.absspeccv_)->char_number = (yyloc).first_column; result->absspeccv_ = (yyval.absspeccv_); }
#line 8814 "Parser.C"
    break;

  case 624: /* AbsSpecCV: ListStarsCV AbsSpecCV1 ListTabs  */
#line 1689 "full_bnfc_parser.y"
                                    { std::reverse((yyvsp[-2].liststarscv_)->begin(),(yyvsp[-2].liststarscv_)->end()) ; std::reverse((yyvsp[0].listtabs_)->begin(),(yyvsp[0].listtabs_)->end()) ;(yyval.absspeccv_) = new acsl::AbsSpecCVBitsStarsTabs((yyvsp[-2].liststarscv_), (yyvsp[-1].absspeccv_), (yyvsp[0].listtabs_)); (yyval.absspeccv_)->line_number = (yyloc).first_line; (yyval.absspeccv_)->char_number = (yyloc).first_column; result->absspeccv_ = (yyval.absspeccv_); }
#line 8820 "Parser.C"
    break;

  case 625: /* AbsSpecCV: AbsSpecCV1 ListTabs  */
#line 1690 "full_bnfc_parser.y"
                        { std::reverse((yyvsp[0].listtabs_)->begin(),(yyvsp[0].listtabs_)->end()) ;(yyval.absspeccv_) = new acsl::AbsSpecCVBitsTabs((yyvsp[-1].absspeccv_), (yyvsp[0].listtabs_)); (yyval.absspeccv_)->line_number = (yyloc).first_line; (yyval.absspeccv_)->char_number = (yyloc).first_column; result->absspeccv_ = (yyval.absspeccv_); }
#line 8826 "Parser.C"
    break;

  case 626: /* AbsSpecCV: AbsSpecCV1  */
#line 1691 "full_bnfc_parser.y"
               { (yyval.absspeccv_) = new acsl::AbsSpecCVBits((yyvsp[0].absspeccv_)); (yyval.absspeccv_)->line_number = (yyloc).first_line; (yyval.absspeccv_)->char_number = (yyloc).first_column; result->absspeccv_ = (yyval.absspeccv_); }
#line 8832 "Parser.C"
    break;

  case 627: /* AbsSpec1: _LPAREN AbsSpec _RPAREN  */
#line 1693 "full_bnfc_parser.y"
                                   { (yyval.absspec_) = (yyvsp[-1].absspec_); (yyval.absspec_)->line_number = (yyloc).first_line; (yyval.absspec_)->char_number = (yyloc).first_column; result->absspec_ = (yyval.absspec_); }
#line 8838 "Parser.C"
    break;

  case 628: /* AbsSpec1: AbsSpec1 _LPAREN AbsParamTypeList _RPAREN  */
#line 1694 "full_bnfc_parser.y"
                                              { (yyval.absspec_) = new acsl::AbsSpecBitsParams((yyvsp[-3].absspec_), (yyvsp[-1].absparamtypelist_)); (yyval.absspec_)->line_number = (yyloc).first_line; (yyval.absspec_)->char_number = (yyloc).first_column; result->absspec_ = (yyval.absspec_); }
#line 8844 "Parser.C"
    break;

  case 629: /* AbsSpecCV1: _LPAREN AbsSpecCV _RPAREN  */
#line 1696 "full_bnfc_parser.y"
                                       { (yyval.absspeccv_) = (yyvsp[-1].absspeccv_); (yyval.absspeccv_)->line_number = (yyloc).first_line; (yyval.absspeccv_)->char_number = (yyloc).first_column; result->absspeccv_ = (yyval.absspeccv_); }
#line 8850 "Parser.C"
    break;

  case 630: /* AbsSpecCV1: AbsSpecCV1 _LPAREN AbsParamTypeList _RPAREN  */
#line 1697 "full_bnfc_parser.y"
                                                { (yyval.absspeccv_) = new acsl::AbsSpecBitsCVParams((yyvsp[-3].absspeccv_), (yyvsp[-1].absparamtypelist_)); (yyval.absspeccv_)->line_number = (yyloc).first_line; (yyval.absspeccv_)->char_number = (yyloc).first_column; result->absspeccv_ = (yyval.absspeccv_); }
#line 8856 "Parser.C"
    break;

  case 631: /* Stars: _STAR  */
#line 1699 "full_bnfc_parser.y"
              { (yyval.stars_) = new acsl::Star(); (yyval.stars_)->line_number = (yyloc).first_line; (yyval.stars_)->char_number = (yyloc).first_column; result->stars_ = (yyval.stars_); }
#line 8862 "Parser.C"
    break;

  case 632: /* ListStars: Stars  */
#line 1701 "full_bnfc_parser.y"
                  { (yyval.liststars_) = new acsl::ListStars(); (yyval.liststars_)->push_back((yyvsp[0].stars_)); result->liststars_ = (yyval.liststars_); }
#line 8868 "Parser.C"
    break;

  case 633: /* ListStars: Stars ListStars  */
#line 1702 "full_bnfc_parser.y"
                    { (yyvsp[0].liststars_)->push_back((yyvsp[-1].stars_)); (yyval.liststars_) = (yyvsp[0].liststars_); result->liststars_ = (yyval.liststars_); }
#line 8874 "Parser.C"
    break;

  case 634: /* StarsCV: _STAR  */
#line 1704 "full_bnfc_parser.y"
                { (yyval.starscv_) = new acsl::StarCV(); (yyval.starscv_)->line_number = (yyloc).first_line; (yyval.starscv_)->char_number = (yyloc).first_column; result->starscv_ = (yyval.starscv_); }
#line 8880 "Parser.C"
    break;

  case 635: /* StarsCV: _STAR CV  */
#line 1705 "full_bnfc_parser.y"
             { (yyval.starscv_) = new acsl::StarCVWithCV((yyvsp[0].cv_)); (yyval.starscv_)->line_number = (yyloc).first_line; (yyval.starscv_)->char_number = (yyloc).first_column; result->starscv_ = (yyval.starscv_); }
#line 8886 "Parser.C"
    break;

  case 636: /* ListStarsCV: StarsCV  */
#line 1707 "full_bnfc_parser.y"
                      { (yyval.liststarscv_) = new acsl::ListStarsCV(); (yyval.liststarscv_)->push_back((yyvsp[0].starscv_)); result->liststarscv_ = (yyval.liststarscv_); }
#line 8892 "Parser.C"
    break;

  case 637: /* ListStarsCV: StarsCV ListStarsCV  */
#line 1708 "full_bnfc_parser.y"
                        { (yyvsp[0].liststarscv_)->push_back((yyvsp[-1].starscv_)); (yyval.liststarscv_) = (yyvsp[0].liststarscv_); result->liststarscv_ = (yyval.liststarscv_); }
#line 8898 "Parser.C"
    break;

  case 638: /* Tabs: _LBRACK ArraySize _RBRACK  */
#line 1710 "full_bnfc_parser.y"
                                 { (yyval.tabs_) = new acsl::Tab((yyvsp[-1].arraysize_)); (yyval.tabs_)->line_number = (yyloc).first_line; (yyval.tabs_)->char_number = (yyloc).first_column; result->tabs_ = (yyval.tabs_); }
#line 8904 "Parser.C"
    break;

  case 639: /* ListTabs: Tabs  */
#line 1712 "full_bnfc_parser.y"
                { (yyval.listtabs_) = new acsl::ListTabs(); (yyval.listtabs_)->push_back((yyvsp[0].tabs_)); result->listtabs_ = (yyval.listtabs_); }
#line 8910 "Parser.C"
    break;

  case 640: /* ListTabs: Tabs ListTabs  */
#line 1713 "full_bnfc_parser.y"
                  { (yyvsp[0].listtabs_)->push_back((yyvsp[-1].tabs_)); (yyval.listtabs_) = (yyvsp[0].listtabs_); result->listtabs_ = (yyval.listtabs_); }
#line 8916 "Parser.C"
    break;

  case 641: /* TypeSpecSimple: _KW_integer  */
#line 1715 "full_bnfc_parser.y"
                             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleIntegerKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8922 "Parser.C"
    break;

  case 642: /* TypeSpecSimple: _KW_real  */
#line 1716 "full_bnfc_parser.y"
             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleRealKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8928 "Parser.C"
    break;

  case 643: /* TypeSpecSimple: _KW_boolean  */
#line 1717 "full_bnfc_parser.y"
                { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleBooleanKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8934 "Parser.C"
    break;

  case 644: /* TypeSpecSimple: _KW_void  */
#line 1718 "full_bnfc_parser.y"
             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleVoidKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8940 "Parser.C"
    break;

  case 645: /* TypeSpecSimple: _SYMB_53  */
#line 1719 "full_bnfc_parser.y"
             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleBoolKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8946 "Parser.C"
    break;

  case 646: /* TypeSpecSimple: _KW_char  */
#line 1720 "full_bnfc_parser.y"
             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8952 "Parser.C"
    break;

  case 647: /* TypeSpecSimple: _KW_signed _KW_char  */
#line 1721 "full_bnfc_parser.y"
                        { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleSignedCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8958 "Parser.C"
    break;

  case 648: /* TypeSpecSimple: _KW_unsigned _KW_char  */
#line 1722 "full_bnfc_parser.y"
                          { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnsignedCharKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8964 "Parser.C"
    break;

  case 649: /* TypeSpecSimple: _KW_int  */
#line 1723 "full_bnfc_parser.y"
            { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8970 "Parser.C"
    break;

  case 650: /* TypeSpecSimple: _KW_signed _KW_int  */
#line 1724 "full_bnfc_parser.y"
                       { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleSignedIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8976 "Parser.C"
    break;

  case 651: /* TypeSpecSimple: _KW_unsigned _KW_int  */
#line 1725 "full_bnfc_parser.y"
                         { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnsignedIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8982 "Parser.C"
    break;

  case 652: /* TypeSpecSimple: _KW_unsigned  */
#line 1726 "full_bnfc_parser.y"
                 { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnsignedKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8988 "Parser.C"
    break;

  case 653: /* TypeSpecSimple: _KW_short  */
#line 1727 "full_bnfc_parser.y"
              { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleShortKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 8994 "Parser.C"
    break;

  case 654: /* TypeSpecSimple: _KW_signed _KW_short  */
#line 1728 "full_bnfc_parser.y"
                         { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleSignedShortKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9000 "Parser.C"
    break;

  case 655: /* TypeSpecSimple: _KW_unsigned _KW_short  */
#line 1729 "full_bnfc_parser.y"
                           { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnsignedShortKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9006 "Parser.C"
    break;

  case 656: /* TypeSpecSimple: _KW_short _KW_int  */
#line 1730 "full_bnfc_parser.y"
                      { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleShortIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9012 "Parser.C"
    break;

  case 657: /* TypeSpecSimple: _KW_signed _KW_short _KW_int  */
#line 1731 "full_bnfc_parser.y"
                                 { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleSignedShortIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9018 "Parser.C"
    break;

  case 658: /* TypeSpecSimple: _KW_unsigned _KW_short _KW_int  */
#line 1732 "full_bnfc_parser.y"
                                   { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnsignedShortIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9024 "Parser.C"
    break;

  case 659: /* TypeSpecSimple: _KW_long  */
#line 1733 "full_bnfc_parser.y"
             { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9030 "Parser.C"
    break;

  case 660: /* TypeSpecSimple: _KW_signed _KW_long  */
#line 1734 "full_bnfc_parser.y"
                        { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleSignedLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9036 "Parser.C"
    break;

  case 661: /* TypeSpecSimple: _KW_unsigned _KW_long  */
#line 1735 "full_bnfc_parser.y"
                          { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnsignedLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9042 "Parser.C"
    break;

  case 662: /* TypeSpecSimple: _KW_signed _KW_long _KW_int  */
#line 1736 "full_bnfc_parser.y"
                                { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleSignedLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9048 "Parser.C"
    break;

  case 663: /* TypeSpecSimple: _KW_long _KW_int  */
#line 1737 "full_bnfc_parser.y"
                     { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9054 "Parser.C"
    break;

  case 664: /* TypeSpecSimple: _KW_unsigned _KW_long _KW_int  */
#line 1738 "full_bnfc_parser.y"
                                  { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnsignedLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9060 "Parser.C"
    break;

  case 665: /* TypeSpecSimple: _KW_long _KW_long  */
#line 1739 "full_bnfc_parser.y"
                      { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleLongLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9066 "Parser.C"
    break;

  case 666: /* TypeSpecSimple: _KW_signed _KW_long _KW_long  */
#line 1740 "full_bnfc_parser.y"
                                 { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleSignedLongLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9072 "Parser.C"
    break;

  case 667: /* TypeSpecSimple: _KW_unsigned _KW_long _KW_long  */
#line 1741 "full_bnfc_parser.y"
                                   { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnsignedLongLongKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9078 "Parser.C"
    break;

  case 668: /* TypeSpecSimple: _KW_long _KW_long _KW_int  */
#line 1742 "full_bnfc_parser.y"
                              { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleLongLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9084 "Parser.C"
    break;

  case 669: /* TypeSpecSimple: _KW_signed _KW_long _KW_long _KW_int  */
#line 1743 "full_bnfc_parser.y"
                                         { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleSignedLongLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9090 "Parser.C"
    break;

  case 670: /* TypeSpecSimple: _KW_unsigned _KW_long _KW_long _KW_int  */
#line 1744 "full_bnfc_parser.y"
                                           { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnsignedLongLongIntKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9096 "Parser.C"
    break;

  case 671: /* TypeSpecSimple: _KW_float  */
#line 1745 "full_bnfc_parser.y"
              { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleFloatKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9102 "Parser.C"
    break;

  case 672: /* TypeSpecSimple: _KW_double  */
#line 1746 "full_bnfc_parser.y"
               { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleDoubleKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9108 "Parser.C"
    break;

  case 673: /* TypeSpecSimple: _KW_long _KW_double  */
#line 1747 "full_bnfc_parser.y"
                        { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleLongDoubleKeyWord(); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9114 "Parser.C"
    break;

  case 674: /* TypeSpecSimple: _KW_struct IdentifierOrTypenameFull  */
#line 1748 "full_bnfc_parser.y"
                                        { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleStruct((yyvsp[0].identifierortypenamefull_)); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9120 "Parser.C"
    break;

  case 675: /* TypeSpecSimple: _KW_enum IdentifierOrTypenameFull  */
#line 1749 "full_bnfc_parser.y"
                                      { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleEnum((yyvsp[0].identifierortypenamefull_)); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9126 "Parser.C"
    break;

  case 676: /* TypeSpecSimple: _KW_union IdentifierOrTypenameFull  */
#line 1750 "full_bnfc_parser.y"
                                       { (yyval.typespecsimple_) = new acsl::TypeSpecSimpleUnion((yyvsp[0].identifierortypenamefull_)); (yyval.typespecsimple_)->line_number = (yyloc).first_line; (yyval.typespecsimple_)->char_number = (yyloc).first_column; result->typespecsimple_ = (yyval.typespecsimple_); }
#line 9132 "Parser.C"
    break;

  case 677: /* TypeSpecOFTYPENAME: T_TYPENAME  */
#line 1752 "full_bnfc_parser.y"
                                { (yyval.typespecoftypename_) = new acsl::TypeSpecTYPENAME((yyvsp[0]._string)); (yyval.typespecoftypename_)->line_number = (yyloc).first_line; (yyval.typespecoftypename_)->char_number = (yyloc).first_column; result->typespecoftypename_ = (yyval.typespecoftypename_); }
#line 9138 "Parser.C"
    break;

  case 678: /* TypeSpecOFTYPENAME: T_TYPENAME _LT ListLogicTypeGenOFTYPENAME _GT  */
#line 1753 "full_bnfc_parser.y"
                                                  { std::reverse((yyvsp[-1].listlogictypegenoftypename_)->begin(),(yyvsp[-1].listlogictypegenoftypename_)->end()) ;(yyval.typespecoftypename_) = new acsl::TypeSpecTYPENAMELogicTypeGen((yyvsp[-3]._string), (yyvsp[-1].listlogictypegenoftypename_)); (yyval.typespecoftypename_)->line_number = (yyloc).first_line; (yyval.typespecoftypename_)->char_number = (yyloc).first_column; result->typespecoftypename_ = (yyval.typespecoftypename_); }
#line 9144 "Parser.C"
    break;

  case 679: /* TypeSpecOFTYPENAME: TypeSpecSimple  */
#line 1754 "full_bnfc_parser.y"
                   { (yyval.typespecoftypename_) = new acsl::TypeSpecSimpleFromTypenameTypeSpec((yyvsp[0].typespecsimple_)); (yyval.typespecoftypename_)->line_number = (yyloc).first_line; (yyval.typespecoftypename_)->char_number = (yyloc).first_column; result->typespecoftypename_ = (yyval.typespecoftypename_); }
#line 9150 "Parser.C"
    break;

  case 680: /* FullIdentifier: Identifier  */
#line 1760 "full_bnfc_parser.y"
                            { (yyval.fullidentifier_) = new acsl::SimpleIdentifierFull((yyvsp[0].identifier_)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9156 "Parser.C"
    break;

  case 681: /* FullIdentifier: _KW_admit  */
#line 1761 "full_bnfc_parser.y"
              { (yyval.fullidentifier_) = new acsl::AdmitKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9162 "Parser.C"
    break;

  case 682: /* FullIdentifier: _KW_allocates  */
#line 1762 "full_bnfc_parser.y"
                  { (yyval.fullidentifier_) = new acsl::AllocatesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9168 "Parser.C"
    break;

  case 683: /* FullIdentifier: _KW_assert  */
#line 1763 "full_bnfc_parser.y"
               { (yyval.fullidentifier_) = new acsl::AssertKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9174 "Parser.C"
    break;

  case 684: /* FullIdentifier: _KW_Assigns  */
#line 1764 "full_bnfc_parser.y"
                { (yyval.fullidentifier_) = new acsl::AssignsKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9180 "Parser.C"
    break;

  case 685: /* FullIdentifier: _KW_Assumes  */
#line 1765 "full_bnfc_parser.y"
                { (yyval.fullidentifier_) = new acsl::AssumesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9186 "Parser.C"
    break;

  case 686: /* FullIdentifier: _KW_at  */
#line 1766 "full_bnfc_parser.y"
           { (yyval.fullidentifier_) = new acsl::AtKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9192 "Parser.C"
    break;

  case 687: /* FullIdentifier: _KW_axiom  */
#line 1767 "full_bnfc_parser.y"
              { (yyval.fullidentifier_) = new acsl::AxiomKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9198 "Parser.C"
    break;

  case 688: /* FullIdentifier: _KW_axiomatic  */
#line 1768 "full_bnfc_parser.y"
                  { (yyval.fullidentifier_) = new acsl::AxiomaticKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9204 "Parser.C"
    break;

  case 689: /* FullIdentifier: _KW_behavior  */
#line 1769 "full_bnfc_parser.y"
                 { (yyval.fullidentifier_) = new acsl::BehaviorKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9210 "Parser.C"
    break;

  case 690: /* FullIdentifier: _KW_breaks  */
#line 1770 "full_bnfc_parser.y"
               { (yyval.fullidentifier_) = new acsl::BreaksKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9216 "Parser.C"
    break;

  case 691: /* FullIdentifier: _KW_check  */
#line 1771 "full_bnfc_parser.y"
              { (yyval.fullidentifier_) = new acsl::CheckKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9222 "Parser.C"
    break;

  case 692: /* FullIdentifier: _KW_complete  */
#line 1772 "full_bnfc_parser.y"
                 { (yyval.fullidentifier_) = new acsl::CompleteKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9228 "Parser.C"
    break;

  case 693: /* FullIdentifier: _KW_continues  */
#line 1773 "full_bnfc_parser.y"
                  { (yyval.fullidentifier_) = new acsl::ContinuesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9234 "Parser.C"
    break;

  case 694: /* FullIdentifier: _KW_Contract  */
#line 1774 "full_bnfc_parser.y"
                 { (yyval.fullidentifier_) = new acsl::ContractKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9240 "Parser.C"
    break;

  case 695: /* FullIdentifier: _KW_Decreases  */
#line 1775 "full_bnfc_parser.y"
                  { (yyval.fullidentifier_) = new acsl::DecreasesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9246 "Parser.C"
    break;

  case 696: /* FullIdentifier: _KW_disjoint  */
#line 1776 "full_bnfc_parser.y"
                 { (yyval.fullidentifier_) = new acsl::DisjointKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9252 "Parser.C"
    break;

  case 697: /* FullIdentifier: _KW_ensures  */
#line 1777 "full_bnfc_parser.y"
                { (yyval.fullidentifier_) = new acsl::EnsuresKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9258 "Parser.C"
    break;

  case 698: /* FullIdentifier: _KW_exits  */
#line 1778 "full_bnfc_parser.y"
              { (yyval.fullidentifier_) = new acsl::ExitsKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9264 "Parser.C"
    break;

  case 699: /* FullIdentifier: _KW_frees  */
#line 1779 "full_bnfc_parser.y"
              { (yyval.fullidentifier_) = new acsl::FreesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9270 "Parser.C"
    break;

  case 700: /* FullIdentifier: _KW_function  */
#line 1780 "full_bnfc_parser.y"
                 { (yyval.fullidentifier_) = new acsl::FunctionKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9276 "Parser.C"
    break;

  case 701: /* FullIdentifier: _KW_global  */
#line 1781 "full_bnfc_parser.y"
               { (yyval.fullidentifier_) = new acsl::GlobalKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9282 "Parser.C"
    break;

  case 702: /* FullIdentifier: _KW_impact  */
#line 1782 "full_bnfc_parser.y"
               { (yyval.fullidentifier_) = new acsl::ImpactKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9288 "Parser.C"
    break;

  case 703: /* FullIdentifier: _KW_inductive  */
#line 1783 "full_bnfc_parser.y"
                  { (yyval.fullidentifier_) = new acsl::InductiveKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9294 "Parser.C"
    break;

  case 704: /* FullIdentifier: _KW_include  */
#line 1784 "full_bnfc_parser.y"
                { (yyval.fullidentifier_) = new acsl::IncludeKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9300 "Parser.C"
    break;

  case 705: /* FullIdentifier: _KW_invariant  */
#line 1785 "full_bnfc_parser.y"
                  { (yyval.fullidentifier_) = new acsl::InvariantKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9306 "Parser.C"
    break;

  case 706: /* FullIdentifier: _KW_lemma  */
#line 1786 "full_bnfc_parser.y"
              { (yyval.fullidentifier_) = new acsl::LemmaKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9312 "Parser.C"
    break;

  case 707: /* FullIdentifier: _KW_let  */
#line 1787 "full_bnfc_parser.y"
            { (yyval.fullidentifier_) = new acsl::LetKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9318 "Parser.C"
    break;

  case 708: /* FullIdentifier: _KW_logic  */
#line 1788 "full_bnfc_parser.y"
              { (yyval.fullidentifier_) = new acsl::LogicKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9324 "Parser.C"
    break;

  case 709: /* FullIdentifier: _KW_loop  */
#line 1789 "full_bnfc_parser.y"
             { (yyval.fullidentifier_) = new acsl::LoopKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9330 "Parser.C"
    break;

  case 710: /* FullIdentifier: _KW_model  */
#line 1790 "full_bnfc_parser.y"
              { (yyval.fullidentifier_) = new acsl::ModelKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9336 "Parser.C"
    break;

  case 711: /* FullIdentifier: _KW_module  */
#line 1791 "full_bnfc_parser.y"
               { (yyval.fullidentifier_) = new acsl::ModuleKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9342 "Parser.C"
    break;

  case 712: /* FullIdentifier: _KW_pragma  */
#line 1792 "full_bnfc_parser.y"
               { (yyval.fullidentifier_) = new acsl::PragmaKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9348 "Parser.C"
    break;

  case 713: /* FullIdentifier: _KW_predicate  */
#line 1793 "full_bnfc_parser.y"
                  { (yyval.fullidentifier_) = new acsl::PredicateKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9354 "Parser.C"
    break;

  case 714: /* FullIdentifier: _KW_Requires  */
#line 1794 "full_bnfc_parser.y"
                 { (yyval.fullidentifier_) = new acsl::RequiresKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9360 "Parser.C"
    break;

  case 715: /* FullIdentifier: _KW_returns  */
#line 1795 "full_bnfc_parser.y"
                { (yyval.fullidentifier_) = new acsl::ReturnsKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9366 "Parser.C"
    break;

  case 716: /* FullIdentifier: _KW_slice  */
#line 1796 "full_bnfc_parser.y"
              { (yyval.fullidentifier_) = new acsl::SliceKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9372 "Parser.C"
    break;

  case 717: /* FullIdentifier: _KW_Terminates  */
#line 1797 "full_bnfc_parser.y"
                   { (yyval.fullidentifier_) = new acsl::TerminatesKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9378 "Parser.C"
    break;

  case 718: /* FullIdentifier: _KW_type  */
#line 1798 "full_bnfc_parser.y"
             { (yyval.fullidentifier_) = new acsl::TypeKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9384 "Parser.C"
    break;

  case 719: /* FullIdentifier: _KW_Variant  */
#line 1799 "full_bnfc_parser.y"
                { (yyval.fullidentifier_) = new acsl::VariantKeyWordFullIdent(); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9390 "Parser.C"
    break;

  case 720: /* FullIdentifier: T_EXT_CODE_ANNOT  */
#line 1800 "full_bnfc_parser.y"
                     { (yyval.fullidentifier_) = new acsl::IdentExtCodeAnnotFullIdent((yyvsp[0]._string)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9396 "Parser.C"
    break;

  case 721: /* FullIdentifier: T_EXT_CONTRACT  */
#line 1801 "full_bnfc_parser.y"
                   { (yyval.fullidentifier_) = new acsl::IdentExtContractFullIdent((yyvsp[0]._string)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9402 "Parser.C"
    break;

  case 722: /* FullIdentifier: T_EXT_GLOBAL  */
#line 1802 "full_bnfc_parser.y"
                 { (yyval.fullidentifier_) = new acsl::IdentExtGlobalFullIdent((yyvsp[0]._string)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9408 "Parser.C"
    break;

  case 723: /* FullIdentifier: T_EXT_GLOBAL_BLOCK  */
#line 1803 "full_bnfc_parser.y"
                       { (yyval.fullidentifier_) = new acsl::IdentExtGlobalBlockFullIdent((yyvsp[0]._string)); (yyval.fullidentifier_)->line_number = (yyloc).first_line; (yyval.fullidentifier_)->char_number = (yyloc).first_column; result->fullidentifier_ = (yyval.fullidentifier_); }
#line 9414 "Parser.C"
    break;

  case 724: /* Variant: Lexpr _KW_for AnyIdentifier  */
#line 1934 "full_bnfc_parser.y"
                                      { (yyval.variant_) = new acsl::ForVariant((yyvsp[-2].lexpr_), (yyvsp[0].anyidentifier_)); (yyval.variant_)->line_number = (yyloc).first_line; (yyval.variant_)->char_number = (yyloc).first_column; result->variant_ = (yyval.variant_); }
#line 9420 "Parser.C"
    break;

  case 725: /* Variant: Lexpr  */
#line 1935 "full_bnfc_parser.y"
          { (yyval.variant_) = new acsl::LexprVariant((yyvsp[0].lexpr_)); (yyval.variant_)->line_number = (yyloc).first_line; (yyval.variant_)->char_number = (yyloc).first_column; result->variant_ = (yyval.variant_); }
#line 9426 "Parser.C"
    break;

  case 726: /* Allocation: _KW_allocates Zones  */
#line 1940 "full_bnfc_parser.y"
                                 { (yyval.allocation_) = new acsl::AllocatesZones((yyvsp[0].zones_)); (yyval.allocation_)->line_number = (yyloc).first_line; (yyval.allocation_)->char_number = (yyloc).first_column; result->allocation_ = (yyval.allocation_); }
#line 9432 "Parser.C"
    break;

  case 727: /* Allocation: _KW_frees Zones  */
#line 1941 "full_bnfc_parser.y"
                    { (yyval.allocation_) = new acsl::FreesZones((yyvsp[0].zones_)); (yyval.allocation_)->line_number = (yyloc).first_line; (yyval.allocation_)->char_number = (yyloc).first_column; result->allocation_ = (yyval.allocation_); }
#line 9438 "Parser.C"
    break;

  case 728: /* ExtensionContent: %empty  */
#line 1952 "full_bnfc_parser.y"
                               { (yyval.extensioncontent_) = new acsl::NoExtensionContent(); (yyval.extensioncontent_)->line_number = (yyloc).first_line; (yyval.extensioncontent_)->char_number = (yyloc).first_column; result->extensioncontent_ = (yyval.extensioncontent_); }
#line 9444 "Parser.C"
    break;

  case 729: /* ExtensionContent: Zones  */
#line 1953 "full_bnfc_parser.y"
          { (yyval.extensioncontent_) = new acsl::SomeExtensionContent((yyvsp[0].zones_)); (yyval.extensioncontent_)->line_number = (yyloc).first_line; (yyval.extensioncontent_)->char_number = (yyloc).first_column; result->extensioncontent_ = (yyval.extensioncontent_); }
#line 9450 "Parser.C"
    break;

  case 730: /* Assigns: Zones  */
#line 1977 "full_bnfc_parser.y"
                { (yyval.assigns_) = new acsl::AssignZone((yyvsp[0].zones_)); (yyval.assigns_)->line_number = (yyloc).first_line; (yyval.assigns_)->char_number = (yyloc).first_column; result->assigns_ = (yyval.assigns_); }
#line 9456 "Parser.C"
    break;

  case 731: /* Assigns: ListLexpr _SYMB_112 Zones  */
#line 1978 "full_bnfc_parser.y"
                              { std::reverse((yyvsp[-2].listlexpr_)->begin(),(yyvsp[-2].listlexpr_)->end()) ;(yyval.assigns_) = new acsl::AssignZoneFromZone((yyvsp[-2].listlexpr_), (yyvsp[0].zones_)); (yyval.assigns_)->line_number = (yyloc).first_line; (yyval.assigns_)->char_number = (yyloc).first_column; result->assigns_ = (yyval.assigns_); }
#line 9462 "Parser.C"
    break;

  case 732: /* Zones: ListLexpr  */
#line 1980 "full_bnfc_parser.y"
                  { std::reverse((yyvsp[0].listlexpr_)->begin(),(yyvsp[0].listlexpr_)->end()) ;(yyval.zones_) = new acsl::SomeZone((yyvsp[0].listlexpr_)); (yyval.zones_)->line_number = (yyloc).first_line; (yyval.zones_)->char_number = (yyloc).first_column; result->zones_ = (yyval.zones_); }
#line 9468 "Parser.C"
    break;

  case 733: /* Zones: _SYMB_113  */
#line 1981 "full_bnfc_parser.y"
              { (yyval.zones_) = new acsl::NoZone(); (yyval.zones_)->line_number = (yyloc).first_line; (yyval.zones_)->char_number = (yyloc).first_column; result->zones_ = (yyval.zones_); }
#line 9474 "Parser.C"
    break;

  case 734: /* LoopAnnotStack: LoopInvariant LoopAnnotOpt  */
#line 1998 "full_bnfc_parser.y"
                                            { (yyval.loopannotstack_) = new acsl::LoopAnnotStackInvariant((yyvsp[-1].loopinvariant_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 9480 "Parser.C"
    break;

  case 735: /* LoopAnnotStack: LoopEffects LoopAnnotOpt  */
#line 1999 "full_bnfc_parser.y"
                             { (yyval.loopannotstack_) = new acsl::LoopAnnotStackEffects((yyvsp[-1].loopeffects_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 9486 "Parser.C"
    break;

  case 736: /* LoopAnnotStack: LoopAllocation LoopAnnotOpt  */
#line 2000 "full_bnfc_parser.y"
                                { (yyval.loopannotstack_) = new acsl::LoopAnnotStackAllocation((yyvsp[-1].loopallocation_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 9492 "Parser.C"
    break;

  case 737: /* LoopAnnotStack: _KW_for ListBehaviorName _COLON LoopAnnotStack  */
#line 2001 "full_bnfc_parser.y"
                                                   { std::reverse((yyvsp[-2].listbehaviorname_)->begin(),(yyvsp[-2].listbehaviorname_)->end()) ;(yyval.loopannotstack_) = new acsl::LoopAnnotStackForBehavior((yyvsp[-2].listbehaviorname_), (yyvsp[0].loopannotstack_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 9498 "Parser.C"
    break;

  case 738: /* LoopAnnotStack: LoopVariant LoopAnnotOpt  */
#line 2002 "full_bnfc_parser.y"
                             { (yyval.loopannotstack_) = new acsl::LoopAnnotStackVariant((yyvsp[-1].loopvariant_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 9504 "Parser.C"
    break;

  case 739: /* LoopAnnotStack: LoopPragma LoopAnnotOpt  */
#line 2003 "full_bnfc_parser.y"
                            { (yyval.loopannotstack_) = new acsl::LoopAnnotStackPragma((yyvsp[-1].looppragma_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 9510 "Parser.C"
    break;

  case 740: /* LoopAnnotStack: LoopGrammarExtension LoopAnnotOpt  */
#line 2004 "full_bnfc_parser.y"
                                      { (yyval.loopannotstack_) = new acsl::LoopAnnotStackGrammarExten((yyvsp[-1].loopgrammarextension_), (yyvsp[0].loopannotopt_)); (yyval.loopannotstack_)->line_number = (yyloc).first_line; (yyval.loopannotstack_)->char_number = (yyloc).first_column; result->loopannotstack_ = (yyval.loopannotstack_); }
#line 9516 "Parser.C"
    break;

  case 741: /* LoopAnnotOpt: %empty  */
#line 2006 "full_bnfc_parser.y"
                           { (yyval.loopannotopt_) = new acsl::NoLoopAnnot(); (yyval.loopannotopt_)->line_number = (yyloc).first_line; (yyval.loopannotopt_)->char_number = (yyloc).first_column; result->loopannotopt_ = (yyval.loopannotopt_); }
#line 9522 "Parser.C"
    break;

  case 742: /* LoopAnnotOpt: LoopAnnotStack  */
#line 2007 "full_bnfc_parser.y"
                   { (yyval.loopannotopt_) = new acsl::SomeLoopAnnot((yyvsp[0].loopannotstack_)); (yyval.loopannotopt_)->line_number = (yyloc).first_line; (yyval.loopannotopt_)->char_number = (yyloc).first_column; result->loopannotopt_ = (yyval.loopannotopt_); }
#line 9528 "Parser.C"
    break;

  case 743: /* LoopEffects: _KW_loop _KW_Assigns Assigns _SEMI  */
#line 2009 "full_bnfc_parser.y"
                                                 { (yyval.loopeffects_) = new acsl::LoopAssigns((yyvsp[-1].assigns_)); (yyval.loopeffects_)->line_number = (yyloc).first_line; (yyval.loopeffects_)->char_number = (yyloc).first_column; result->loopeffects_ = (yyval.loopeffects_); }
#line 9534 "Parser.C"
    break;

  case 744: /* LoopAllocation: _KW_loop Allocation _SEMI  */
#line 2011 "full_bnfc_parser.y"
                                           { (yyval.loopallocation_) = new acsl::SimpleLoopAllocation((yyvsp[-1].allocation_)); (yyval.loopallocation_)->line_number = (yyloc).first_line; (yyval.loopallocation_)->char_number = (yyloc).first_column; result->loopallocation_ = (yyval.loopallocation_); }
#line 9540 "Parser.C"
    break;

  case 745: /* LoopInvariant: _KW_loop _KW_invariant Lexpr _SEMI  */
#line 2013 "full_bnfc_parser.y"
                                                   { (yyval.loopinvariant_) = new acsl::SimpleLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 9546 "Parser.C"
    break;

  case 746: /* LoopInvariant: _KW_check _KW_loop _KW_invariant Lexpr _SEMI  */
#line 2014 "full_bnfc_parser.y"
                                                 { (yyval.loopinvariant_) = new acsl::CheckLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 9552 "Parser.C"
    break;

  case 747: /* LoopInvariant: _KW_admit _KW_loop _KW_invariant Lexpr _SEMI  */
#line 2015 "full_bnfc_parser.y"
                                                 { (yyval.loopinvariant_) = new acsl::AdmitLoopInvariant((yyvsp[-1].lexpr_)); (yyval.loopinvariant_)->line_number = (yyloc).first_line; (yyval.loopinvariant_)->char_number = (yyloc).first_column; result->loopinvariant_ = (yyval.loopinvariant_); }
#line 9558 "Parser.C"
    break;

  case 748: /* LoopVariant: _KW_loop _KW_Variant Variant _SEMI  */
#line 2017 "full_bnfc_parser.y"
                                                 { (yyval.loopvariant_) = new acsl::SimpleLoopVariant((yyvsp[-1].variant_)); (yyval.loopvariant_)->line_number = (yyloc).first_line; (yyval.loopvariant_)->char_number = (yyloc).first_column; result->loopvariant_ = (yyval.loopvariant_); }
#line 9564 "Parser.C"
    break;

  case 749: /* LoopGrammarExtension: _KW_loop T_EXT_CODE_ANNOT ExtensionContent _SEMI  */
#line 2019 "full_bnfc_parser.y"
                                                                        { (yyval.loopgrammarextension_) = new acsl::SimpleLoopGrammarExten((yyvsp[-2]._string), (yyvsp[-1].extensioncontent_)); (yyval.loopgrammarextension_)->line_number = (yyloc).first_line; (yyval.loopgrammarextension_)->char_number = (yyloc).first_column; result->loopgrammarextension_ = (yyval.loopgrammarextension_); }
#line 9570 "Parser.C"
    break;

  case 750: /* LoopPragma: _KW_loop _KW_pragma AnyIdentifier ListLexpr _SEMI  */
#line 2021 "full_bnfc_parser.y"
                                                               { std::reverse((yyvsp[-1].listlexpr_)->begin(),(yyvsp[-1].listlexpr_)->end()) ;(yyval.looppragma_) = new acsl::PragmaLoop((yyvsp[-2].anyidentifier_), (yyvsp[-1].listlexpr_)); (yyval.looppragma_)->line_number = (yyloc).first_line; (yyval.looppragma_)->char_number = (yyloc).first_column; result->looppragma_ = (yyval.looppragma_); }
#line 9576 "Parser.C"
    break;

  case 751: /* PragmaOrCodeAnnotation: SlicePragma  */
#line 2036 "full_bnfc_parser.y"
                                     { (yyval.pragmaorcodeannotation_) = new acsl::PragmaCodeAnnotSlice((yyvsp[0].slicepragma_)); (yyval.pragmaorcodeannotation_)->line_number = (yyloc).first_line; (yyval.pragmaorcodeannotation_)->char_number = (yyloc).first_column; result->pragmaorcodeannotation_ = (yyval.pragmaorcodeannotation_); }
#line 9582 "Parser.C"
    break;

  case 752: /* PragmaOrCodeAnnotation: ImpactPragma  */
#line 2037 "full_bnfc_parser.y"
                 { (yyval.pragmaorcodeannotation_) = new acsl::PragmaCodeAnnotImpact((yyvsp[0].impactpragma_)); (yyval.pragmaorcodeannotation_)->line_number = (yyloc).first_line; (yyval.pragmaorcodeannotation_)->char_number = (yyloc).first_column; result->pragmaorcodeannotation_ = (yyval.pragmaorcodeannotation_); }
#line 9588 "Parser.C"
    break;

  case 753: /* PragmaOrCodeAnnotation: CodeAnnotation  */
#line 2038 "full_bnfc_parser.y"
                   { (yyval.pragmaorcodeannotation_) = new acsl::PragmaOrCodeAnnotCodeAnnot((yyvsp[0].codeannotation_)); (yyval.pragmaorcodeannotation_)->line_number = (yyloc).first_line; (yyval.pragmaorcodeannotation_)->char_number = (yyloc).first_column; result->pragmaorcodeannotation_ = (yyval.pragmaorcodeannotation_); }
#line 9594 "Parser.C"
    break;

  case 754: /* CodeAnnotation: _KW_assert Lexpr _SEMI  */
#line 2040 "full_bnfc_parser.y"
                                        { (yyval.codeannotation_) = new acsl::AssertCodeAnnot((yyvsp[-1].lexpr_)); (yyval.codeannotation_)->line_number = (yyloc).first_line; (yyval.codeannotation_)->char_number = (yyloc).first_column; result->codeannotation_ = (yyval.codeannotation_); }
#line 9600 "Parser.C"
    break;

  case 755: /* CodeAnnotation: _KW_check Lexpr _SEMI  */
#line 2041 "full_bnfc_parser.y"
                          { (yyval.codeannotation_) = new acsl::CheckCodeAnnot((yyvsp[-1].lexpr_)); (yyval.codeannotation_)->line_number = (yyloc).first_line; (yyval.codeannotation_)->char_number = (yyloc).first_column; result->codeannotation_ = (yyval.codeannotation_); }
#line 9606 "Parser.C"
    break;

  case 756: /* CodeAnnotation: _KW_admit Lexpr _SEMI  */
#line 2042 "full_bnfc_parser.y"
                          { (yyval.codeannotation_) = new acsl::AdmitCodeAnnot((yyvsp[-1].lexpr_)); (yyval.codeannotation_)->line_number = (yyloc).first_line; (yyval.codeannotation_)->char_number = (yyloc).first_column; result->codeannotation_ = (yyval.codeannotation_); }
#line 9612 "Parser.C"
    break;

  case 757: /* CodeAnnotation: _KW_invariant Lexpr _SEMI  */
#line 2043 "full_bnfc_parser.y"
                              { (yyval.codeannotation_) = new acsl::InvariantCodeAnnot((yyvsp[-1].lexpr_)); (yyval.codeannotation_)->line_number = (yyloc).first_line; (yyval.codeannotation_)->char_number = (yyloc).first_column; result->codeannotation_ = (yyval.codeannotation_); }
#line 9618 "Parser.C"
    break;

  case 758: /* CodeAnnotation: _KW_check _KW_invariant Lexpr _SEMI  */
#line 2044 "full_bnfc_parser.y"
                                        { (yyval.codeannotation_) = new acsl::CheckInvariantCodeAnnot((yyvsp[-1].lexpr_)); (yyval.codeannotation_)->line_number = (yyloc).first_line; (yyval.codeannotation_)->char_number = (yyloc).first_column; result->codeannotation_ = (yyval.codeannotation_); }
#line 9624 "Parser.C"
    break;

  case 759: /* CodeAnnotation: _KW_admit _KW_invariant Lexpr _SEMI  */
#line 2045 "full_bnfc_parser.y"
                                        { (yyval.codeannotation_) = new acsl::AdmitInvariantCodeAnnot((yyvsp[-1].lexpr_)); (yyval.codeannotation_)->line_number = (yyloc).first_line; (yyval.codeannotation_)->char_number = (yyloc).first_column; result->codeannotation_ = (yyval.codeannotation_); }
#line 9630 "Parser.C"
    break;

  case 760: /* CodeAnnotation: T_EXT_CODE_ANNOT ExtensionContent _SEMI  */
#line 2046 "full_bnfc_parser.y"
                                            { (yyval.codeannotation_) = new acsl::ExtCodeAnnotCodeAnnot((yyvsp[-2]._string), (yyvsp[-1].extensioncontent_)); (yyval.codeannotation_)->line_number = (yyloc).first_line; (yyval.codeannotation_)->char_number = (yyloc).first_column; result->codeannotation_ = (yyval.codeannotation_); }
#line 9636 "Parser.C"
    break;

  case 761: /* SlicePragma: _KW_slice _KW_pragma AnyIdentifier Lexpr _SEMI  */
#line 2048 "full_bnfc_parser.y"
                                                             { (yyval.slicepragma_) = new acsl::PragmaSliceLexpr((yyvsp[-2].anyidentifier_), (yyvsp[-1].lexpr_)); (yyval.slicepragma_)->line_number = (yyloc).first_line; (yyval.slicepragma_)->char_number = (yyloc).first_column; result->slicepragma_ = (yyval.slicepragma_); }
#line 9642 "Parser.C"
    break;

  case 762: /* SlicePragma: _KW_slice _KW_pragma AnyIdentifier _SEMI  */
#line 2049 "full_bnfc_parser.y"
                                             { (yyval.slicepragma_) = new acsl::PragmaSlice((yyvsp[-1].anyidentifier_)); (yyval.slicepragma_)->line_number = (yyloc).first_line; (yyval.slicepragma_)->char_number = (yyloc).first_column; result->slicepragma_ = (yyval.slicepragma_); }
#line 9648 "Parser.C"
    break;

  case 763: /* ImpactPragma: _KW_impact _KW_pragma AnyIdentifier Lexpr _SEMI  */
#line 2051 "full_bnfc_parser.y"
                                                               { (yyval.impactpragma_) = new acsl::ImpactPragmaLexpr((yyvsp[-2].anyidentifier_), (yyvsp[-1].lexpr_)); (yyval.impactpragma_)->line_number = (yyloc).first_line; (yyval.impactpragma_)->char_number = (yyloc).first_column; result->impactpragma_ = (yyval.impactpragma_); }
#line 9654 "Parser.C"
    break;

  case 764: /* ImpactPragma: _KW_impact _KW_pragma AnyIdentifier _SEMI  */
#line 2052 "full_bnfc_parser.y"
                                              { (yyval.impactpragma_) = new acsl::AnImpactPragma((yyvsp[-1].anyidentifier_)); (yyval.impactpragma_)->line_number = (yyloc).first_line; (yyval.impactpragma_)->char_number = (yyloc).first_column; result->impactpragma_ = (yyval.impactpragma_); }
#line 9660 "Parser.C"
    break;

  case 765: /* OptLabel1: OptLabelList  */
#line 2139 "full_bnfc_parser.y"
                         { (yyval.optlabel_) = new acsl::OptLabelOne((yyvsp[0].optlabellist_)); (yyval.optlabel_)->line_number = (yyloc).first_line; (yyval.optlabel_)->char_number = (yyloc).first_column; result->optlabel_ = (yyval.optlabel_); }
#line 9666 "Parser.C"
    break;

  case 766: /* OptLabel2: OptLabelList  */
#line 2141 "full_bnfc_parser.y"
                         { (yyval.optlabel_) = new acsl::OptLabelTwo((yyvsp[0].optlabellist_)); (yyval.optlabel_)->line_number = (yyloc).first_line; (yyval.optlabel_)->char_number = (yyloc).first_column; result->optlabel_ = (yyval.optlabel_); }
#line 9672 "Parser.C"
    break;

  case 767: /* OptLabelList: %empty  */
#line 2143 "full_bnfc_parser.y"
                           { (yyval.optlabellist_) = new acsl::NoLableList(); (yyval.optlabellist_)->line_number = (yyloc).first_line; (yyval.optlabellist_)->char_number = (yyloc).first_column; result->optlabellist_ = (yyval.optlabellist_); }
#line 9678 "Parser.C"
    break;

  case 768: /* OptLabelList: _LBRACE ListLabelName _RBRACE  */
#line 2144 "full_bnfc_parser.y"
                                  { std::reverse((yyvsp[-1].listlabelname_)->begin(),(yyvsp[-1].listlabelname_)->end()) ;(yyval.optlabellist_) = new acsl::LableList((yyvsp[-1].listlabelname_)); (yyval.optlabellist_)->line_number = (yyloc).first_line; (yyval.optlabellist_)->char_number = (yyloc).first_column; result->optlabellist_ = (yyval.optlabellist_); }
#line 9684 "Parser.C"
    break;

  case 769: /* LabelName: AnyIdentifier  */
#line 2146 "full_bnfc_parser.y"
                          { (yyval.labelname_) = new acsl::LableName((yyvsp[0].anyidentifier_)); (yyval.labelname_)->line_number = (yyloc).first_line; (yyval.labelname_)->char_number = (yyloc).first_column; result->labelname_ = (yyval.labelname_); }
#line 9690 "Parser.C"
    break;

  case 770: /* ListLabelName: LabelName  */
#line 2148 "full_bnfc_parser.y"
                          { (yyval.listlabelname_) = new acsl::ListLabelName(); (yyval.listlabelname_)->push_back((yyvsp[0].labelname_)); result->listlabelname_ = (yyval.listlabelname_); }
#line 9696 "Parser.C"
    break;

  case 771: /* ListLabelName: LabelName _COMMA ListLabelName  */
#line 2149 "full_bnfc_parser.y"
                                   { (yyvsp[0].listlabelname_)->push_back((yyvsp[-2].labelname_)); (yyval.listlabelname_) = (yyvsp[0].listlabelname_); result->listlabelname_ = (yyval.listlabelname_); }
#line 9702 "Parser.C"
    break;

  case 772: /* BehaviorName: AnyIdentifier  */
#line 2154 "full_bnfc_parser.y"
                             { (yyval.behaviorname_) = new acsl::BehaviorNameAnyIdent((yyvsp[0].anyidentifier_)); (yyval.behaviorname_)->line_number = (yyloc).first_line; (yyval.behaviorname_)->char_number = (yyloc).first_column; result->behaviorname_ = (yyval.behaviorname_); }
#line 9708 "Parser.C"
    break;

  case 773: /* ListBehaviorName: BehaviorName  */
#line 2156 "full_bnfc_parser.y"
                                { (yyval.listbehaviorname_) = new acsl::ListBehaviorName(); (yyval.listbehaviorname_)->push_back((yyvsp[0].behaviorname_)); result->listbehaviorname_ = (yyval.listbehaviorname_); }
#line 9714 "Parser.C"
    break;

  case 774: /* ListBehaviorName: BehaviorName _COMMA ListBehaviorName  */
#line 2157 "full_bnfc_parser.y"
                                         { (yyvsp[0].listbehaviorname_)->push_back((yyvsp[-2].behaviorname_)); (yyval.listbehaviorname_) = (yyvsp[0].listbehaviorname_); result->listbehaviorname_ = (yyval.listbehaviorname_); }
#line 9720 "Parser.C"
    break;

  case 775: /* AnyIdentifier: Identifier  */
#line 2159 "full_bnfc_parser.y"
                           { (yyval.anyidentifier_) = new acsl::SimpleIdentifierAny((yyvsp[0].identifier_)); (yyval.anyidentifier_)->line_number = (yyloc).first_line; (yyval.anyidentifier_)->char_number = (yyloc).first_column; result->anyidentifier_ = (yyval.anyidentifier_); }
#line 9726 "Parser.C"
    break;

  case 776: /* AnyIdentifier: IsACSLTypename  */
#line 2160 "full_bnfc_parser.y"
                   { (yyval.anyidentifier_) = new acsl::ACSLTypenameIdentifier((yyvsp[0].isacsltypename_)); (yyval.anyidentifier_)->line_number = (yyloc).first_line; (yyval.anyidentifier_)->char_number = (yyloc).first_column; result->anyidentifier_ = (yyval.anyidentifier_); }
#line 9732 "Parser.C"
    break;

  case 777: /* AnyIdentifier: T_TYPENAME  */
#line 2161 "full_bnfc_parser.y"
               { (yyval.anyidentifier_) = new acsl::TypenameIdentifier((yyvsp[0]._string)); (yyval.anyidentifier_)->line_number = (yyloc).first_line; (yyval.anyidentifier_)->char_number = (yyloc).first_column; result->anyidentifier_ = (yyval.anyidentifier_); }
#line 9738 "Parser.C"
    break;

  case 778: /* AnyIdentifier: Keyword  */
#line 2162 "full_bnfc_parser.y"
            { (yyval.anyidentifier_) = new acsl::KeywordIdentifier((yyvsp[0].keyword_)); (yyval.anyidentifier_)->line_number = (yyloc).first_line; (yyval.anyidentifier_)->char_number = (yyloc).first_column; result->anyidentifier_ = (yyval.anyidentifier_); }
#line 9744 "Parser.C"
    break;

  case 779: /* IdentifierOrTypename: T_TYPENAME  */
#line 2164 "full_bnfc_parser.y"
                                  { (yyval.identifierortypename_) = new acsl::Typename((yyvsp[0]._string)); (yyval.identifierortypename_)->line_number = (yyloc).first_line; (yyval.identifierortypename_)->char_number = (yyloc).first_column; result->identifierortypename_ = (yyval.identifierortypename_); }
#line 9750 "Parser.C"
    break;

  case 780: /* IdentifierOrTypename: FullIdentifier  */
#line 2165 "full_bnfc_parser.y"
                   { (yyval.identifierortypename_) = new acsl::AnFullIdentifier((yyvsp[0].fullidentifier_)); (yyval.identifierortypename_)->line_number = (yyloc).first_line; (yyval.identifierortypename_)->char_number = (yyloc).first_column; result->identifierortypename_ = (yyval.identifierortypename_); }
#line 9756 "Parser.C"
    break;

  case 781: /* IdentifierOrTypenameFull: IsACSLTypename  */
#line 2167 "full_bnfc_parser.y"
                                          { (yyval.identifierortypenamefull_) = new acsl::ACSLTypename((yyvsp[0].isacsltypename_)); (yyval.identifierortypenamefull_)->line_number = (yyloc).first_line; (yyval.identifierortypenamefull_)->char_number = (yyloc).first_column; result->identifierortypenamefull_ = (yyval.identifierortypenamefull_); }
#line 9762 "Parser.C"
    break;

  case 782: /* IdentifierOrTypenameFull: IdentifierOrTypename  */
#line 2168 "full_bnfc_parser.y"
                         { (yyval.identifierortypenamefull_) = new acsl::AnIdentifierOrTypename((yyvsp[0].identifierortypename_)); (yyval.identifierortypenamefull_)->line_number = (yyloc).first_line; (yyval.identifierortypenamefull_)->char_number = (yyloc).first_column; result->identifierortypenamefull_ = (yyval.identifierortypenamefull_); }
#line 9768 "Parser.C"
    break;

  case 783: /* ListIdentifierOrTypenameFull: IdentifierOrTypenameFull  */
#line 2170 "full_bnfc_parser.y"
                                                        { (yyval.listidentifierortypenamefull_) = new acsl::ListIdentifierOrTypenameFull(); (yyval.listidentifierortypenamefull_)->push_back((yyvsp[0].identifierortypenamefull_)); result->listidentifierortypenamefull_ = (yyval.listidentifierortypenamefull_); }
#line 9774 "Parser.C"
    break;

  case 784: /* ListIdentifierOrTypenameFull: IdentifierOrTypenameFull _COMMA ListIdentifierOrTypenameFull  */
#line 2171 "full_bnfc_parser.y"
                                                                 { (yyvsp[0].listidentifierortypenamefull_)->push_back((yyvsp[-2].identifierortypenamefull_)); (yyval.listidentifierortypenamefull_) = (yyvsp[0].listidentifierortypenamefull_); result->listidentifierortypenamefull_ = (yyval.listidentifierortypenamefull_); }
#line 9780 "Parser.C"
    break;

  case 785: /* Identifier: _IDENT_  */
#line 2173 "full_bnfc_parser.y"
                     { (yyval.identifier_) = new acsl::IdentifierIdent((yyvsp[0]._string)); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 9786 "Parser.C"
    break;

  case 786: /* Identifier: _KW_Behaviors  */
#line 2174 "full_bnfc_parser.y"
                  { (yyval.identifier_) = new acsl::BehaviorsKeyWord(); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 9792 "Parser.C"
    break;

  case 787: /* Identifier: _KW_label  */
#line 2175 "full_bnfc_parser.y"
              { (yyval.identifier_) = new acsl::LabelKeyWord(); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 9798 "Parser.C"
    break;

  case 788: /* Identifier: _KW_reads  */
#line 2176 "full_bnfc_parser.y"
              { (yyval.identifier_) = new acsl::ReadsKeyWord(); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 9804 "Parser.C"
    break;

  case 789: /* Identifier: _KW_writes  */
#line 2177 "full_bnfc_parser.y"
               { (yyval.identifier_) = new acsl::WritesKeyWord(); (yyval.identifier_)->line_number = (yyloc).first_line; (yyval.identifier_)->char_number = (yyloc).first_column; result->identifier_ = (yyval.identifier_); }
#line 9810 "Parser.C"
    break;

  case 790: /* BoundedVar: FullIdentifier  */
#line 2179 "full_bnfc_parser.y"
                            { (yyval.boundedvar_) = new acsl::BoendedVarFullIdentifier((yyvsp[0].fullidentifier_)); (yyval.boundedvar_)->line_number = (yyloc).first_line; (yyval.boundedvar_)->char_number = (yyloc).first_column; result->boundedvar_ = (yyval.boundedvar_); }
#line 9816 "Parser.C"
    break;

  case 791: /* BoundedVar: IsACSLTypename  */
#line 2180 "full_bnfc_parser.y"
                   { (yyval.boundedvar_) = new acsl::BoendedVarACSLTypename((yyvsp[0].isacsltypename_)); (yyval.boundedvar_)->line_number = (yyloc).first_line; (yyval.boundedvar_)->char_number = (yyloc).first_column; result->boundedvar_ = (yyval.boundedvar_); }
#line 9822 "Parser.C"
    break;

  case 792: /* BoundedVar: T_TYPENAME  */
#line 2181 "full_bnfc_parser.y"
               { (yyval.boundedvar_) = new acsl::BoendedVarTypename((yyvsp[0]._string)); (yyval.boundedvar_)->line_number = (yyloc).first_line; (yyval.boundedvar_)->char_number = (yyloc).first_column; result->boundedvar_ = (yyval.boundedvar_); }
#line 9828 "Parser.C"
    break;

  case 793: /* CKeyword: _KW_char  */
#line 2183 "full_bnfc_parser.y"
                    { (yyval.ckeyword_) = new acsl::CharKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9834 "Parser.C"
    break;

  case 794: /* CKeyword: _KW_boolean  */
#line 2184 "full_bnfc_parser.y"
                { (yyval.ckeyword_) = new acsl::BooleanKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9840 "Parser.C"
    break;

  case 795: /* CKeyword: _SYMB_53  */
#line 2185 "full_bnfc_parser.y"
             { (yyval.ckeyword_) = new acsl::BoolKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9846 "Parser.C"
    break;

  case 796: /* CKeyword: _KW_const  */
#line 2186 "full_bnfc_parser.y"
              { (yyval.ckeyword_) = new acsl::ConstKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9852 "Parser.C"
    break;

  case 797: /* CKeyword: _KW_double  */
#line 2187 "full_bnfc_parser.y"
               { (yyval.ckeyword_) = new acsl::DoubleKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9858 "Parser.C"
    break;

  case 798: /* CKeyword: _KW_enum  */
#line 2188 "full_bnfc_parser.y"
             { (yyval.ckeyword_) = new acsl::EnumKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9864 "Parser.C"
    break;

  case 799: /* CKeyword: _KW_else  */
#line 2189 "full_bnfc_parser.y"
             { (yyval.ckeyword_) = new acsl::ElseKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9870 "Parser.C"
    break;

  case 800: /* CKeyword: _KW_float  */
#line 2190 "full_bnfc_parser.y"
              { (yyval.ckeyword_) = new acsl::FloatKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9876 "Parser.C"
    break;

  case 801: /* CKeyword: _KW_if  */
#line 2191 "full_bnfc_parser.y"
           { (yyval.ckeyword_) = new acsl::IfKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9882 "Parser.C"
    break;

  case 802: /* CKeyword: _KW_int  */
#line 2192 "full_bnfc_parser.y"
            { (yyval.ckeyword_) = new acsl::IntKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9888 "Parser.C"
    break;

  case 803: /* CKeyword: _KW_long  */
#line 2193 "full_bnfc_parser.y"
             { (yyval.ckeyword_) = new acsl::LongKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9894 "Parser.C"
    break;

  case 804: /* CKeyword: _KW_short  */
#line 2194 "full_bnfc_parser.y"
              { (yyval.ckeyword_) = new acsl::ShortKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9900 "Parser.C"
    break;

  case 805: /* CKeyword: _KW_signed  */
#line 2195 "full_bnfc_parser.y"
               { (yyval.ckeyword_) = new acsl::SignedKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9906 "Parser.C"
    break;

  case 806: /* CKeyword: _KW_sizeof  */
#line 2196 "full_bnfc_parser.y"
               { (yyval.ckeyword_) = new acsl::SizeofKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9912 "Parser.C"
    break;

  case 807: /* CKeyword: _SYMB_90  */
#line 2197 "full_bnfc_parser.y"
             { (yyval.ckeyword_) = new acsl::StaticKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9918 "Parser.C"
    break;

  case 808: /* CKeyword: _KW_struct  */
#line 2198 "full_bnfc_parser.y"
               { (yyval.ckeyword_) = new acsl::StructKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9924 "Parser.C"
    break;

  case 809: /* CKeyword: _KW_union  */
#line 2199 "full_bnfc_parser.y"
              { (yyval.ckeyword_) = new acsl::UnionKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9930 "Parser.C"
    break;

  case 810: /* CKeyword: _KW_unsigned  */
#line 2200 "full_bnfc_parser.y"
                 { (yyval.ckeyword_) = new acsl::UnsignedKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9936 "Parser.C"
    break;

  case 811: /* CKeyword: _KW_void  */
#line 2201 "full_bnfc_parser.y"
             { (yyval.ckeyword_) = new acsl::VoidKeyWord(); (yyval.ckeyword_)->line_number = (yyloc).first_line; (yyval.ckeyword_)->char_number = (yyloc).first_column; result->ckeyword_ = (yyval.ckeyword_); }
#line 9942 "Parser.C"
    break;

  case 812: /* ACSLCKeyword: _KW_case  */
#line 2203 "full_bnfc_parser.y"
                        { (yyval.acslckeyword_) = new acsl::CaseKeyWord(); (yyval.acslckeyword_)->line_number = (yyloc).first_line; (yyval.acslckeyword_)->char_number = (yyloc).first_column; result->acslckeyword_ = (yyval.acslckeyword_); }
#line 9948 "Parser.C"
    break;

  case 813: /* ACSLCKeyword: _KW_for  */
#line 2204 "full_bnfc_parser.y"
            { (yyval.acslckeyword_) = new acsl::ForKeyWord(); (yyval.acslckeyword_)->line_number = (yyloc).first_line; (yyval.acslckeyword_)->char_number = (yyloc).first_column; result->acslckeyword_ = (yyval.acslckeyword_); }
#line 9954 "Parser.C"
    break;

  case 814: /* ACSLCKeyword: _KW_volatile  */
#line 2205 "full_bnfc_parser.y"
                 { (yyval.acslckeyword_) = new acsl::VolatileKeyWord(); (yyval.acslckeyword_)->line_number = (yyloc).first_line; (yyval.acslckeyword_)->char_number = (yyloc).first_column; result->acslckeyword_ = (yyval.acslckeyword_); }
#line 9960 "Parser.C"
    break;

  case 815: /* PostCond: _KW_ensures  */
#line 2207 "full_bnfc_parser.y"
                       { (yyval.postcond_) = new acsl::EnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 9966 "Parser.C"
    break;

  case 816: /* PostCond: _KW_exits  */
#line 2208 "full_bnfc_parser.y"
              { (yyval.postcond_) = new acsl::ExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 9972 "Parser.C"
    break;

  case 817: /* PostCond: _KW_breaks  */
#line 2209 "full_bnfc_parser.y"
               { (yyval.postcond_) = new acsl::BreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 9978 "Parser.C"
    break;

  case 818: /* PostCond: _KW_continues  */
#line 2210 "full_bnfc_parser.y"
                  { (yyval.postcond_) = new acsl::ContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 9984 "Parser.C"
    break;

  case 819: /* PostCond: _KW_returns  */
#line 2211 "full_bnfc_parser.y"
                { (yyval.postcond_) = new acsl::ReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 9990 "Parser.C"
    break;

  case 820: /* PostCond: _KW_check _KW_ensures  */
#line 2212 "full_bnfc_parser.y"
                          { (yyval.postcond_) = new acsl::CheckEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 9996 "Parser.C"
    break;

  case 821: /* PostCond: _KW_check _KW_exits  */
#line 2213 "full_bnfc_parser.y"
                        { (yyval.postcond_) = new acsl::CheckExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 10002 "Parser.C"
    break;

  case 822: /* PostCond: _KW_check _KW_breaks  */
#line 2214 "full_bnfc_parser.y"
                         { (yyval.postcond_) = new acsl::CheckBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 10008 "Parser.C"
    break;

  case 823: /* PostCond: _KW_check _KW_continues  */
#line 2215 "full_bnfc_parser.y"
                            { (yyval.postcond_) = new acsl::CheckContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 10014 "Parser.C"
    break;

  case 824: /* PostCond: _KW_check _KW_returns  */
#line 2216 "full_bnfc_parser.y"
                          { (yyval.postcond_) = new acsl::CheckReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 10020 "Parser.C"
    break;

  case 825: /* PostCond: _KW_admit _KW_ensures  */
#line 2217 "full_bnfc_parser.y"
                          { (yyval.postcond_) = new acsl::AdmitEnsuresKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 10026 "Parser.C"
    break;

  case 826: /* PostCond: _KW_admit _KW_exits  */
#line 2218 "full_bnfc_parser.y"
                        { (yyval.postcond_) = new acsl::AdmitExitsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 10032 "Parser.C"
    break;

  case 827: /* PostCond: _KW_admit _KW_breaks  */
#line 2219 "full_bnfc_parser.y"
                         { (yyval.postcond_) = new acsl::AdmitBreaksKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 10038 "Parser.C"
    break;

  case 828: /* PostCond: _KW_admit _KW_continues  */
#line 2220 "full_bnfc_parser.y"
                            { (yyval.postcond_) = new acsl::AdmitContinuesKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 10044 "Parser.C"
    break;

  case 829: /* PostCond: _KW_admit _KW_returns  */
#line 2221 "full_bnfc_parser.y"
                          { (yyval.postcond_) = new acsl::AdmitReturnsKeyWord(); (yyval.postcond_)->line_number = (yyloc).first_line; (yyval.postcond_)->char_number = (yyloc).first_column; result->postcond_ = (yyval.postcond_); }
#line 10050 "Parser.C"
    break;

  case 830: /* IsACSLSpec: PostCond  */
#line 2223 "full_bnfc_parser.y"
                      { (yyval.isacslspec_) = new acsl::PostCondKeyWord((yyvsp[0].postcond_)); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10056 "Parser.C"
    break;

  case 831: /* IsACSLSpec: T_EXT_CONTRACT  */
#line 2224 "full_bnfc_parser.y"
                   { (yyval.isacslspec_) = new acsl::ExtContractKeyWord((yyvsp[0]._string)); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10062 "Parser.C"
    break;

  case 832: /* IsACSLSpec: _KW_Assigns  */
#line 2225 "full_bnfc_parser.y"
                { (yyval.isacslspec_) = new acsl::AssignsKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10068 "Parser.C"
    break;

  case 833: /* IsACSLSpec: _KW_allocates  */
#line 2226 "full_bnfc_parser.y"
                  { (yyval.isacslspec_) = new acsl::AllocatesKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10074 "Parser.C"
    break;

  case 834: /* IsACSLSpec: _KW_frees  */
#line 2227 "full_bnfc_parser.y"
              { (yyval.isacslspec_) = new acsl::FreesKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10080 "Parser.C"
    break;

  case 835: /* IsACSLSpec: _KW_behavior  */
#line 2228 "full_bnfc_parser.y"
                 { (yyval.isacslspec_) = new acsl::BehaviorKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10086 "Parser.C"
    break;

  case 836: /* IsACSLSpec: _KW_Requires  */
#line 2229 "full_bnfc_parser.y"
                 { (yyval.isacslspec_) = new acsl::RequiresKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10092 "Parser.C"
    break;

  case 837: /* IsACSLSpec: _KW_check _KW_requires  */
#line 2230 "full_bnfc_parser.y"
                           { (yyval.isacslspec_) = new acsl::CheckRequiresKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10098 "Parser.C"
    break;

  case 838: /* IsACSLSpec: _KW_admit _KW_requires  */
#line 2231 "full_bnfc_parser.y"
                           { (yyval.isacslspec_) = new acsl::AdmitRequiresKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10104 "Parser.C"
    break;

  case 839: /* IsACSLSpec: _KW_Terminates  */
#line 2232 "full_bnfc_parser.y"
                   { (yyval.isacslspec_) = new acsl::TerminatesKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10110 "Parser.C"
    break;

  case 840: /* IsACSLSpec: _KW_complete  */
#line 2233 "full_bnfc_parser.y"
                 { (yyval.isacslspec_) = new acsl::CompleteKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10116 "Parser.C"
    break;

  case 841: /* IsACSLSpec: _KW_Decreases  */
#line 2234 "full_bnfc_parser.y"
                  { (yyval.isacslspec_) = new acsl::DecreasesKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10122 "Parser.C"
    break;

  case 842: /* IsACSLSpec: _KW_disjoint  */
#line 2235 "full_bnfc_parser.y"
                 { (yyval.isacslspec_) = new acsl::DisjointKeyWord(); (yyval.isacslspec_)->line_number = (yyloc).first_line; (yyval.isacslspec_)->char_number = (yyloc).first_column; result->isacslspec_ = (yyval.isacslspec_); }
#line 10128 "Parser.C"
    break;

  case 843: /* IsACSLDeclOrCodeAnnot: T_EXT_CODE_ANNOT  */
#line 2237 "full_bnfc_parser.y"
                                         { (yyval.isacsldeclorcodeannot_) = new acsl::ExtCodeAnnotKeyWord((yyvsp[0]._string)); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10134 "Parser.C"
    break;

  case 844: /* IsACSLDeclOrCodeAnnot: T_EXT_GLOBAL  */
#line 2238 "full_bnfc_parser.y"
                 { (yyval.isacsldeclorcodeannot_) = new acsl::ExtGlobalKeyWord((yyvsp[0]._string)); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10140 "Parser.C"
    break;

  case 845: /* IsACSLDeclOrCodeAnnot: T_EXT_GLOBAL_BLOCK  */
#line 2239 "full_bnfc_parser.y"
                       { (yyval.isacsldeclorcodeannot_) = new acsl::ExtGlobalBlockKeyWord((yyvsp[0]._string)); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10146 "Parser.C"
    break;

  case 846: /* IsACSLDeclOrCodeAnnot: _KW_Assumes  */
#line 2240 "full_bnfc_parser.y"
                { (yyval.isacsldeclorcodeannot_) = new acsl::AssumesKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10152 "Parser.C"
    break;

  case 847: /* IsACSLDeclOrCodeAnnot: _KW_assert  */
#line 2241 "full_bnfc_parser.y"
               { (yyval.isacsldeclorcodeannot_) = new acsl::AssertKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10158 "Parser.C"
    break;

  case 848: /* IsACSLDeclOrCodeAnnot: _KW_check  */
#line 2242 "full_bnfc_parser.y"
              { (yyval.isacsldeclorcodeannot_) = new acsl::CheckKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10164 "Parser.C"
    break;

  case 849: /* IsACSLDeclOrCodeAnnot: _KW_admit  */
#line 2243 "full_bnfc_parser.y"
              { (yyval.isacsldeclorcodeannot_) = new acsl::AdmitKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10170 "Parser.C"
    break;

  case 850: /* IsACSLDeclOrCodeAnnot: _KW_global  */
#line 2244 "full_bnfc_parser.y"
               { (yyval.isacsldeclorcodeannot_) = new acsl::GlobalKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10176 "Parser.C"
    break;

  case 851: /* IsACSLDeclOrCodeAnnot: _KW_impact  */
#line 2245 "full_bnfc_parser.y"
               { (yyval.isacsldeclorcodeannot_) = new acsl::ImpactKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10182 "Parser.C"
    break;

  case 852: /* IsACSLDeclOrCodeAnnot: _KW_inductive  */
#line 2246 "full_bnfc_parser.y"
                  { (yyval.isacsldeclorcodeannot_) = new acsl::InductiveKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10188 "Parser.C"
    break;

  case 853: /* IsACSLDeclOrCodeAnnot: _KW_invariant  */
#line 2247 "full_bnfc_parser.y"
                  { (yyval.isacsldeclorcodeannot_) = new acsl::InvariantKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10194 "Parser.C"
    break;

  case 854: /* IsACSLDeclOrCodeAnnot: _KW_admit _KW_invariant  */
#line 2248 "full_bnfc_parser.y"
                            { (yyval.isacsldeclorcodeannot_) = new acsl::AdmitInvariantKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10200 "Parser.C"
    break;

  case 855: /* IsACSLDeclOrCodeAnnot: _KW_check _KW_invariant  */
#line 2249 "full_bnfc_parser.y"
                            { (yyval.isacsldeclorcodeannot_) = new acsl::CheckInvariantKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10206 "Parser.C"
    break;

  case 856: /* IsACSLDeclOrCodeAnnot: _KW_lemma  */
#line 2250 "full_bnfc_parser.y"
              { (yyval.isacsldeclorcodeannot_) = new acsl::LemmaKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10212 "Parser.C"
    break;

  case 857: /* IsACSLDeclOrCodeAnnot: _KW_admit _KW_lemma  */
#line 2251 "full_bnfc_parser.y"
                        { (yyval.isacsldeclorcodeannot_) = new acsl::AdmitLemmaKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10218 "Parser.C"
    break;

  case 858: /* IsACSLDeclOrCodeAnnot: _KW_check _KW_lemma  */
#line 2252 "full_bnfc_parser.y"
                        { (yyval.isacsldeclorcodeannot_) = new acsl::CheckLemmaKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10224 "Parser.C"
    break;

  case 859: /* IsACSLDeclOrCodeAnnot: _KW_loop  */
#line 2253 "full_bnfc_parser.y"
             { (yyval.isacsldeclorcodeannot_) = new acsl::LoopKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10230 "Parser.C"
    break;

  case 860: /* IsACSLDeclOrCodeAnnot: _KW_admit _KW_loop  */
#line 2254 "full_bnfc_parser.y"
                       { (yyval.isacsldeclorcodeannot_) = new acsl::AdmitLoopKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10236 "Parser.C"
    break;

  case 861: /* IsACSLDeclOrCodeAnnot: _KW_check _KW_loop  */
#line 2255 "full_bnfc_parser.y"
                       { (yyval.isacsldeclorcodeannot_) = new acsl::CheckLoopKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10242 "Parser.C"
    break;

  case 862: /* IsACSLDeclOrCodeAnnot: _KW_pragma  */
#line 2256 "full_bnfc_parser.y"
               { (yyval.isacsldeclorcodeannot_) = new acsl::PragmaKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10248 "Parser.C"
    break;

  case 863: /* IsACSLDeclOrCodeAnnot: _KW_predicate  */
#line 2257 "full_bnfc_parser.y"
                  { (yyval.isacsldeclorcodeannot_) = new acsl::PredicateKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10254 "Parser.C"
    break;

  case 864: /* IsACSLDeclOrCodeAnnot: _KW_slice  */
#line 2258 "full_bnfc_parser.y"
              { (yyval.isacsldeclorcodeannot_) = new acsl::SliceKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10260 "Parser.C"
    break;

  case 865: /* IsACSLDeclOrCodeAnnot: _KW_type  */
#line 2259 "full_bnfc_parser.y"
             { (yyval.isacsldeclorcodeannot_) = new acsl::TypeKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10266 "Parser.C"
    break;

  case 866: /* IsACSLDeclOrCodeAnnot: _KW_model  */
#line 2260 "full_bnfc_parser.y"
              { (yyval.isacsldeclorcodeannot_) = new acsl::ModelKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10272 "Parser.C"
    break;

  case 867: /* IsACSLDeclOrCodeAnnot: _KW_axiom  */
#line 2261 "full_bnfc_parser.y"
              { (yyval.isacsldeclorcodeannot_) = new acsl::AxiomKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10278 "Parser.C"
    break;

  case 868: /* IsACSLDeclOrCodeAnnot: _KW_Variant  */
#line 2262 "full_bnfc_parser.y"
                { (yyval.isacsldeclorcodeannot_) = new acsl::VariantKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10284 "Parser.C"
    break;

  case 869: /* IsACSLDeclOrCodeAnnot: _KW_axiomatic  */
#line 2263 "full_bnfc_parser.y"
                  { (yyval.isacsldeclorcodeannot_) = new acsl::AxiomaticKeyWord(); (yyval.isacsldeclorcodeannot_)->line_number = (yyloc).first_line; (yyval.isacsldeclorcodeannot_)->char_number = (yyloc).first_column; result->isacsldeclorcodeannot_ = (yyval.isacsldeclorcodeannot_); }
#line 10290 "Parser.C"
    break;

  case 870: /* IsACSLTypename: _KW_integer  */
#line 2265 "full_bnfc_parser.y"
                             { (yyval.isacsltypename_) = new acsl::IntegerKeyWord(); (yyval.isacsltypename_)->line_number = (yyloc).first_line; (yyval.isacsltypename_)->char_number = (yyloc).first_column; result->isacsltypename_ = (yyval.isacsltypename_); }
#line 10296 "Parser.C"
    break;

  case 871: /* IsACSLTypename: _KW_real  */
#line 2266 "full_bnfc_parser.y"
             { (yyval.isacsltypename_) = new acsl::RealKeyWord(); (yyval.isacsltypename_)->line_number = (yyloc).first_line; (yyval.isacsltypename_)->char_number = (yyloc).first_column; result->isacsltypename_ = (yyval.isacsltypename_); }
#line 10302 "Parser.C"
    break;

  case 872: /* IsExtSpec: _KW_Contract  */
#line 2268 "full_bnfc_parser.y"
                         { (yyval.isextspec_) = new acsl::ContractKeyWord(); (yyval.isextspec_)->line_number = (yyloc).first_line; (yyval.isextspec_)->char_number = (yyloc).first_column; result->isextspec_ = (yyval.isextspec_); }
#line 10308 "Parser.C"
    break;

  case 873: /* IsExtSpec: _KW_function  */
#line 2269 "full_bnfc_parser.y"
                 { (yyval.isextspec_) = new acsl::FunctionKeyWord(); (yyval.isextspec_)->line_number = (yyloc).first_line; (yyval.isextspec_)->char_number = (yyloc).first_column; result->isextspec_ = (yyval.isextspec_); }
#line 10314 "Parser.C"
    break;

  case 874: /* IsExtSpec: _KW_module  */
#line 2270 "full_bnfc_parser.y"
               { (yyval.isextspec_) = new acsl::ModuleKeyWord(); (yyval.isextspec_)->line_number = (yyloc).first_line; (yyval.isextspec_)->char_number = (yyloc).first_column; result->isextspec_ = (yyval.isextspec_); }
#line 10320 "Parser.C"
    break;

  case 875: /* IsExtSpec: _KW_include  */
#line 2271 "full_bnfc_parser.y"
                { (yyval.isextspec_) = new acsl::IncludeKeyWord(); (yyval.isextspec_)->line_number = (yyloc).first_line; (yyval.isextspec_)->char_number = (yyloc).first_column; result->isextspec_ = (yyval.isextspec_); }
#line 10326 "Parser.C"
    break;

  case 876: /* IsExtSpec: _KW_at  */
#line 2272 "full_bnfc_parser.y"
           { (yyval.isextspec_) = new acsl::AtKeyWord(); (yyval.isextspec_)->line_number = (yyloc).first_line; (yyval.isextspec_)->char_number = (yyloc).first_column; result->isextspec_ = (yyval.isextspec_); }
#line 10332 "Parser.C"
    break;

  case 877: /* IsExtSpec: _KW_let  */
#line 2273 "full_bnfc_parser.y"
            { (yyval.isextspec_) = new acsl::LetKeyWord(); (yyval.isextspec_)->line_number = (yyloc).first_line; (yyval.isextspec_)->char_number = (yyloc).first_column; result->isextspec_ = (yyval.isextspec_); }
#line 10338 "Parser.C"
    break;

  case 878: /* Keyword: _KW_logic  */
#line 2275 "full_bnfc_parser.y"
                    { (yyval.keyword_) = new acsl::LogicKeyWord(); (yyval.keyword_)->line_number = (yyloc).first_line; (yyval.keyword_)->char_number = (yyloc).first_column; result->keyword_ = (yyval.keyword_); }
#line 10344 "Parser.C"
    break;

  case 879: /* Keyword: CKeyword  */
#line 2276 "full_bnfc_parser.y"
             { (yyval.keyword_) = new acsl::CKeyWord((yyvsp[0].ckeyword_)); (yyval.keyword_)->line_number = (yyloc).first_line; (yyval.keyword_)->char_number = (yyloc).first_column; result->keyword_ = (yyval.keyword_); }
#line 10350 "Parser.C"
    break;

  case 880: /* Keyword: ACSLCKeyword  */
#line 2277 "full_bnfc_parser.y"
                 { (yyval.keyword_) = new acsl::ACSLCKeyWord((yyvsp[0].acslckeyword_)); (yyval.keyword_)->line_number = (yyloc).first_line; (yyval.keyword_)->char_number = (yyloc).first_column; result->keyword_ = (yyval.keyword_); }
#line 10356 "Parser.C"
    break;

  case 881: /* Keyword: IsExtSpec  */
#line 2278 "full_bnfc_parser.y"
              { (yyval.keyword_) = new acsl::ExtSpecKeyWord((yyvsp[0].isextspec_)); (yyval.keyword_)->line_number = (yyloc).first_line; (yyval.keyword_)->char_number = (yyloc).first_column; result->keyword_ = (yyval.keyword_); }
#line 10362 "Parser.C"
    break;

  case 882: /* Keyword: IsACSLSpec  */
#line 2279 "full_bnfc_parser.y"
               { (yyval.keyword_) = new acsl::ACSLSpecKeyWord((yyvsp[0].isacslspec_)); (yyval.keyword_)->line_number = (yyloc).first_line; (yyval.keyword_)->char_number = (yyloc).first_column; result->keyword_ = (yyval.keyword_); }
#line 10368 "Parser.C"
    break;

  case 883: /* Keyword: IsACSLDeclOrCodeAnnot  */
#line 2280 "full_bnfc_parser.y"
                          { (yyval.keyword_) = new acsl::ACSLDeclCodeAnnotKeyWord((yyvsp[0].isacsldeclorcodeannot_)); (yyval.keyword_)->line_number = (yyloc).first_line; (yyval.keyword_)->char_number = (yyloc).first_column; result->keyword_ = (yyval.keyword_); }
#line 10374 "Parser.C"
    break;

  case 884: /* BSKeyword: _SYMB_84  */
#line 2282 "full_bnfc_parser.y"
                     { (yyval.bskeyword_) = new acsl::SlashAllocableKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10380 "Parser.C"
    break;

  case 885: /* BSKeyword: _SYMB_86  */
#line 2283 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashAllocationKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10386 "Parser.C"
    break;

  case 886: /* BSKeyword: _SYMB_87  */
#line 2284 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashAutomaticKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10392 "Parser.C"
    break;

  case 887: /* BSKeyword: _SYMB_99  */
#line 2285 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashAtKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10398 "Parser.C"
    break;

  case 888: /* BSKeyword: _SYMB_81  */
#line 2286 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashBaseAddrKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10404 "Parser.C"
    break;

  case 889: /* BSKeyword: _SYMB_82  */
#line 2287 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashBlockLengthKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10410 "Parser.C"
    break;

  case 890: /* BSKeyword: _SYMB_56  */
#line 2288 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashGhostKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10416 "Parser.C"
    break;

  case 891: /* BSKeyword: _SYMB_88  */
#line 2289 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashDynamicKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10422 "Parser.C"
    break;

  case 892: /* BSKeyword: _SYMB_107  */
#line 2290 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashEmptyKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10428 "Parser.C"
    break;

  case 893: /* BSKeyword: _SYMB_71  */
#line 2291 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashFalseKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10434 "Parser.C"
    break;

  case 894: /* BSKeyword: _SYMB_67  */
#line 2292 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashForallKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10440 "Parser.C"
    break;

  case 895: /* BSKeyword: _SYMB_85  */
#line 2293 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashFreeableKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10446 "Parser.C"
    break;

  case 896: /* BSKeyword: _SYMB_80  */
#line 2294 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashFreshKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10452 "Parser.C"
    break;

  case 897: /* BSKeyword: _SYMB_112  */
#line 2295 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashFromKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10458 "Parser.C"
    break;

  case 898: /* BSKeyword: _SYMB_109  */
#line 2296 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashInterKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10464 "Parser.C"
    break;

  case 899: /* BSKeyword: _SYMB_69  */
#line 2297 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashLambdaKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10470 "Parser.C"
    break;

  case 900: /* BSKeyword: _SYMB_66  */
#line 2298 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashLetKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10476 "Parser.C"
    break;

  case 901: /* BSKeyword: _SYMB_113  */
#line 2299 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashNothingKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10482 "Parser.C"
    break;

  case 902: /* BSKeyword: _SYMB_92  */
#line 2300 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashNullKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10488 "Parser.C"
    break;

  case 903: /* BSKeyword: _SYMB_98  */
#line 2301 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashOldKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10494 "Parser.C"
    break;

  case 904: /* BSKeyword: _SYMB_83  */
#line 2302 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashOffsetKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10500 "Parser.C"
    break;

  case 905: /* BSKeyword: _SYMB_89  */
#line 2303 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashRegisterKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10506 "Parser.C"
    break;

  case 906: /* BSKeyword: _SYMB_100  */
#line 2304 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashResultKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10512 "Parser.C"
    break;

  case 907: /* BSKeyword: _SYMB_101  */
#line 2305 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashSeparatedKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10518 "Parser.C"
    break;

  case 908: /* BSKeyword: _SYMB_70  */
#line 2306 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashTrueKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10524 "Parser.C"
    break;

  case 909: /* BSKeyword: _SYMB_106  */
#line 2307 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashTypeKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10530 "Parser.C"
    break;

  case 910: /* BSKeyword: _SYMB_105  */
#line 2308 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashTypeofKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10536 "Parser.C"
    break;

  case 911: /* BSKeyword: _SYMB_108  */
#line 2309 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashUnionKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10542 "Parser.C"
    break;

  case 912: /* BSKeyword: _SYMB_91  */
#line 2310 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashUnallocatedKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10548 "Parser.C"
    break;

  case 913: /* BSKeyword: _SYMB_72  */
#line 2311 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashObjectPointerKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10554 "Parser.C"
    break;

  case 914: /* BSKeyword: _SYMB_73  */
#line 2312 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashValidKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10560 "Parser.C"
    break;

  case 915: /* BSKeyword: _SYMB_76  */
#line 2313 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashValidIndexKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10566 "Parser.C"
    break;

  case 916: /* BSKeyword: _SYMB_77  */
#line 2314 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashValidRangeKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10572 "Parser.C"
    break;

  case 917: /* BSKeyword: _SYMB_74  */
#line 2315 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashValidReadKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10578 "Parser.C"
    break;

  case 918: /* BSKeyword: _SYMB_75  */
#line 2316 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashValidFunctionKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10584 "Parser.C"
    break;

  case 919: /* BSKeyword: _SYMB_78  */
#line 2317 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashInitializedKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10590 "Parser.C"
    break;

  case 920: /* BSKeyword: _SYMB_79  */
#line 2318 "full_bnfc_parser.y"
             { (yyval.bskeyword_) = new acsl::SlashDanglingKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10596 "Parser.C"
    break;

  case 921: /* BSKeyword: _SYMB_110  */
#line 2319 "full_bnfc_parser.y"
              { (yyval.bskeyword_) = new acsl::SlashWithKeyWord(); (yyval.bskeyword_)->line_number = (yyloc).first_line; (yyval.bskeyword_)->char_number = (yyloc).first_column; result->bskeyword_ = (yyval.bskeyword_); }
#line 10602 "Parser.C"
    break;

  case 922: /* Wildcard: AnyIdentifier  */
#line 2321 "full_bnfc_parser.y"
                         { (yyval.wildcard_) = new acsl::WildCardAnyIdent((yyvsp[0].anyidentifier_)); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10608 "Parser.C"
    break;

  case 923: /* Wildcard: BSKeyword  */
#line 2322 "full_bnfc_parser.y"
              { (yyval.wildcard_) = new acsl::WildCardBSKeyWord((yyvsp[0].bskeyword_)); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10614 "Parser.C"
    break;

  case 924: /* Wildcard: _AMP  */
#line 2323 "full_bnfc_parser.y"
         { (yyval.wildcard_) = new acsl::WildcardAmp(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10620 "Parser.C"
    break;

  case 925: /* Wildcard: _DAMP  */
#line 2324 "full_bnfc_parser.y"
          { (yyval.wildcard_) = new acsl::WildcardAnd(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10626 "Parser.C"
    break;

  case 926: /* Wildcard: _RARROW  */
#line 2325 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardArrow(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10632 "Parser.C"
    break;

  case 927: /* Wildcard: _SYMB_64  */
#line 2326 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardBIff(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10638 "Parser.C"
    break;

  case 928: /* Wildcard: _SYMB_63  */
#line 2327 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardBImplicate(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10644 "Parser.C"
    break;

  case 929: /* Wildcard: _COLON  */
#line 2328 "full_bnfc_parser.y"
           { (yyval.wildcard_) = new acsl::WildcardColon(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10650 "Parser.C"
    break;

  case 930: /* Wildcard: _DCOLON  */
#line 2329 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardColonColon(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10656 "Parser.C"
    break;

  case 931: /* Wildcard: _COMMA  */
#line 2330 "full_bnfc_parser.y"
           { (yyval.wildcard_) = new acsl::WildcardComma(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10662 "Parser.C"
    break;

  case 932: /* Wildcard: _INTEGER_  */
#line 2331 "full_bnfc_parser.y"
              { (yyval.wildcard_) = new acsl::WildcardIntConstant((yyvsp[0]._int)); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10668 "Parser.C"
    break;

  case 933: /* Wildcard: _DOUBLE_  */
#line 2332 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardFloatConstant((yyvsp[0]._double)); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10674 "Parser.C"
    break;

  case 934: /* Wildcard: _STRING_  */
#line 2333 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardStringConstant((yyvsp[0]._string)); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10680 "Parser.C"
    break;

  case 935: /* Wildcard: T_WSTRING_CONSTANT  */
#line 2334 "full_bnfc_parser.y"
                       { (yyval.wildcard_) = new acsl::WildcardWstringConstant((yyvsp[0]._string)); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10686 "Parser.C"
    break;

  case 936: /* Wildcard: _DOLLAR  */
#line 2335 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardDollar(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10692 "Parser.C"
    break;

  case 937: /* Wildcard: _DOT  */
#line 2336 "full_bnfc_parser.y"
         { (yyval.wildcard_) = new acsl::WildcardDot(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10698 "Parser.C"
    break;

  case 938: /* Wildcard: _DDOT  */
#line 2337 "full_bnfc_parser.y"
          { (yyval.wildcard_) = new acsl::WildcardDotDot(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10704 "Parser.C"
    break;

  case 939: /* Wildcard: _ELLIPSIS  */
#line 2338 "full_bnfc_parser.y"
              { (yyval.wildcard_) = new acsl::WildcardDotDotDot(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10710 "Parser.C"
    break;

  case 940: /* Wildcard: _DEQ  */
#line 2339 "full_bnfc_parser.y"
         { (yyval.wildcard_) = new acsl::WildcardEQ(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10716 "Parser.C"
    break;

  case 941: /* Wildcard: _EQ  */
#line 2340 "full_bnfc_parser.y"
        { (yyval.wildcard_) = new acsl::WildcardEqual(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10722 "Parser.C"
    break;

  case 942: /* Wildcard: _SYMB_68  */
#line 2341 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardExistsKeyWord(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10728 "Parser.C"
    break;

  case 943: /* Wildcard: _GTEQ  */
#line 2342 "full_bnfc_parser.y"
          { (yyval.wildcard_) = new acsl::WildcardGreaterEq(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10734 "Parser.C"
    break;

  case 944: /* Wildcard: _SYMB_56  */
#line 2343 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardGhostKeyWord(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10740 "Parser.C"
    break;

  case 945: /* Wildcard: _GT  */
#line 2344 "full_bnfc_parser.y"
        { (yyval.wildcard_) = new acsl::WildcardGreater(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10746 "Parser.C"
    break;

  case 946: /* Wildcard: _DGT  */
#line 2345 "full_bnfc_parser.y"
         { (yyval.wildcard_) = new acsl::WildcardGreaterGreater(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10752 "Parser.C"
    break;

  case 947: /* Wildcard: _CARET  */
#line 2346 "full_bnfc_parser.y"
           { (yyval.wildcard_) = new acsl::WildcardHat(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10758 "Parser.C"
    break;

  case 948: /* Wildcard: _DCARET  */
#line 2347 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardHatHat(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10764 "Parser.C"
    break;

  case 949: /* Wildcard: _SYMB_61  */
#line 2348 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardIff(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10770 "Parser.C"
    break;

  case 950: /* Wildcard: _SYMB_60  */
#line 2349 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardImplicate(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10776 "Parser.C"
    break;

  case 951: /* Wildcard: _LBRACE  */
#line 2350 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardLeftBrace(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10782 "Parser.C"
    break;

  case 952: /* Wildcard: _LDARROW  */
#line 2351 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardLessEq(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10788 "Parser.C"
    break;

  case 953: /* Wildcard: _LPAREN  */
#line 2352 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardLeftPar(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10794 "Parser.C"
    break;

  case 954: /* Wildcard: _LBRACK  */
#line 2353 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardLeftSquare(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10800 "Parser.C"
    break;

  case 955: /* Wildcard: _SYMB_96  */
#line 2354 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardLeftSquarePipe(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10806 "Parser.C"
    break;

  case 956: /* Wildcard: _LT  */
#line 2355 "full_bnfc_parser.y"
        { (yyval.wildcard_) = new acsl::WildcardLess(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10812 "Parser.C"
    break;

  case 957: /* Wildcard: _DLT  */
#line 2356 "full_bnfc_parser.y"
         { (yyval.wildcard_) = new acsl::WildcardLessLess(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10818 "Parser.C"
    break;

  case 958: /* Wildcard: _MINUS  */
#line 2357 "full_bnfc_parser.y"
           { (yyval.wildcard_) = new acsl::WildcardMinus(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10824 "Parser.C"
    break;

  case 959: /* Wildcard: _BANGEQ  */
#line 2358 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardNotEq(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10830 "Parser.C"
    break;

  case 960: /* Wildcard: _BANG  */
#line 2359 "full_bnfc_parser.y"
          { (yyval.wildcard_) = new acsl::WildcardNot(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10836 "Parser.C"
    break;

  case 961: /* Wildcard: _DBAR  */
#line 2360 "full_bnfc_parser.y"
          { (yyval.wildcard_) = new acsl::WildcardPipePipe(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10842 "Parser.C"
    break;

  case 962: /* Wildcard: _PERCENT  */
#line 2361 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardMod(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10848 "Parser.C"
    break;

  case 963: /* Wildcard: _SYMB_104  */
#line 2362 "full_bnfc_parser.y"
              { (yyval.wildcard_) = new acsl::WildcardPiKeyWord(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10854 "Parser.C"
    break;

  case 964: /* Wildcard: _BAR  */
#line 2363 "full_bnfc_parser.y"
         { (yyval.wildcard_) = new acsl::WildcardPipe(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10860 "Parser.C"
    break;

  case 965: /* Wildcard: _PLUS  */
#line 2364 "full_bnfc_parser.y"
          { (yyval.wildcard_) = new acsl::WildcardPlus(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10866 "Parser.C"
    break;

  case 966: /* Wildcard: _QUESTION  */
#line 2365 "full_bnfc_parser.y"
              { (yyval.wildcard_) = new acsl::WildcardQuestion(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10872 "Parser.C"
    break;

  case 967: /* Wildcard: _RBRACE  */
#line 2366 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardRightBrace(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10878 "Parser.C"
    break;

  case 968: /* Wildcard: _RPAREN  */
#line 2367 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardRightPar(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10884 "Parser.C"
    break;

  case 969: /* Wildcard: _RBRACK  */
#line 2368 "full_bnfc_parser.y"
            { (yyval.wildcard_) = new acsl::WildcardRightSquare(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10890 "Parser.C"
    break;

  case 970: /* Wildcard: _SYMB_97  */
#line 2369 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardRightSquarePipe(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10896 "Parser.C"
    break;

  case 971: /* Wildcard: _SEMI  */
#line 2370 "full_bnfc_parser.y"
          { (yyval.wildcard_) = new acsl::WildcardSemiColon(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10902 "Parser.C"
    break;

  case 972: /* Wildcard: _SLASH  */
#line 2371 "full_bnfc_parser.y"
           { (yyval.wildcard_) = new acsl::WildcardDivide(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10908 "Parser.C"
    break;

  case 973: /* Wildcard: _STAR  */
#line 2372 "full_bnfc_parser.y"
          { (yyval.wildcard_) = new acsl::WildcardMult(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10914 "Parser.C"
    break;

  case 974: /* Wildcard: _SYMB_93  */
#line 2373 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardMultHat(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10920 "Parser.C"
    break;

  case 975: /* Wildcard: T_STRING_LITERAL  */
#line 2374 "full_bnfc_parser.y"
                     { (yyval.wildcard_) = new acsl::WildcardStringLiteral((yyvsp[0]._string)); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10926 "Parser.C"
    break;

  case 976: /* Wildcard: _TILDE  */
#line 2375 "full_bnfc_parser.y"
           { (yyval.wildcard_) = new acsl::WildcardTildeKeyWord(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10932 "Parser.C"
    break;

  case 977: /* Wildcard: _SYMB_65  */
#line 2376 "full_bnfc_parser.y"
             { (yyval.wildcard_) = new acsl::WildcardInKeyWord(); (yyval.wildcard_)->line_number = (yyloc).first_line; (yyval.wildcard_)->char_number = (yyloc).first_column; result->wildcard_ = (yyval.wildcard_); }
#line 10938 "Parser.C"
    break;

  case 978: /* ListWildcard: Wildcard  */
#line 2378 "full_bnfc_parser.y"
                        { (yyval.listwildcard_) = new acsl::ListWildcard(); (yyval.listwildcard_)->push_back((yyvsp[0].wildcard_)); result->listwildcard_ = (yyval.listwildcard_); }
#line 10944 "Parser.C"
    break;

  case 979: /* ListWildcard: Wildcard ListWildcard  */
#line 2379 "full_bnfc_parser.y"
                          { (yyvsp[0].listwildcard_)->push_back((yyvsp[-1].wildcard_)); (yyval.listwildcard_) = (yyvsp[0].listwildcard_); result->listwildcard_ = (yyval.listwildcard_); }
#line 10950 "Parser.C"
    break;


#line 10954 "Parser.C"

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

#line 2382 "full_bnfc_parser.y"


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

/* Entrypoint: parse GhostGlobals* from file. */
GhostGlobals* pGhostGlobals(FILE *inp)
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
    return result.ghostglobals_;
  }
}

/* Entrypoint: parse GhostGlobals* from string. */
GhostGlobals* psGhostGlobals(const char *str)
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
    return result.ghostglobals_;
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

/* Entrypoint: parse MaybeComma* from file. */
MaybeComma* pMaybeComma(FILE *inp)
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
    return result.maybecomma_;
  }
}

/* Entrypoint: parse MaybeComma* from string. */
MaybeComma* psMaybeComma(const char *str)
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
    return result.maybecomma_;
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

/* Entrypoint: parse OffsetofMemberDesignator* from file. */
OffsetofMemberDesignator* pOffsetofMemberDesignator(FILE *inp)
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
    return result.offsetofmemberdesignator_;
  }
}

/* Entrypoint: parse OffsetofMemberDesignator* from string. */
OffsetofMemberDesignator* psOffsetofMemberDesignator(const char *str)
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
    return result.offsetofmemberdesignator_;
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

/* Entrypoint: parse StringConstant* from file. */
StringConstant* pStringConstant(FILE *inp)
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
    return result.stringconstant_;
  }
}

/* Entrypoint: parse StringConstant* from string. */
StringConstant* psStringConstant(const char *str)
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
    return result.stringconstant_;
  }
}

/* Entrypoint: parse WStringList* from file. */
WStringList* pWStringList(FILE *inp)
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
    return result.wstringlist_;
  }
}

/* Entrypoint: parse WStringList* from string. */
WStringList* psWStringList(const char *str)
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
    return result.wstringlist_;
  }
}

/* Entrypoint: parse OneString* from file. */
OneString* pOneString(FILE *inp)
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
    return result.onestring_;
  }
}

/* Entrypoint: parse OneString* from string. */
OneString* psOneString(const char *str)
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
    return result.onestring_;
  }
}

/* Entrypoint: parse ListOneString* from file. */
ListOneString* pListOneString(FILE *inp)
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
std::reverse(result.listonestring_->begin(), result.listonestring_->end());
    return result.listonestring_;
  }
}

/* Entrypoint: parse ListOneString* from string. */
ListOneString* psListOneString(const char *str)
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
std::reverse(result.listonestring_->begin(), result.listonestring_->end());
    return result.listonestring_;
  }
}

/* Entrypoint: parse InitExpression* from file. */
InitExpression* pInitExpression(FILE *inp)
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
    return result.initexpression_;
  }
}

/* Entrypoint: parse InitExpression* from string. */
InitExpression* psInitExpression(const char *str)
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
    return result.initexpression_;
  }
}

/* Entrypoint: parse InitializerListOpt* from file. */
InitializerListOpt* pInitializerListOpt(FILE *inp)
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
    return result.initializerlistopt_;
  }
}

/* Entrypoint: parse InitializerListOpt* from string. */
InitializerListOpt* psInitializerListOpt(const char *str)
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
    return result.initializerlistopt_;
  }
}

/* Entrypoint: parse InitializerSingle* from file. */
InitializerSingle* pInitializerSingle(FILE *inp)
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
    return result.initializersingle_;
  }
}

/* Entrypoint: parse InitializerSingle* from string. */
InitializerSingle* psInitializerSingle(const char *str)
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
    return result.initializersingle_;
  }
}

/* Entrypoint: parse ListInitializerSingle* from file. */
ListInitializerSingle* pListInitializerSingle(FILE *inp)
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
std::reverse(result.listinitializersingle_->begin(), result.listinitializersingle_->end());
    return result.listinitializersingle_;
  }
}

/* Entrypoint: parse ListInitializerSingle* from string. */
ListInitializerSingle* psListInitializerSingle(const char *str)
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
std::reverse(result.listinitializersingle_->begin(), result.listinitializersingle_->end());
    return result.listinitializersingle_;
  }
}

/* Entrypoint: parse EqOpt* from file. */
EqOpt* pEqOpt(FILE *inp)
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
    return result.eqopt_;
  }
}

/* Entrypoint: parse EqOpt* from string. */
EqOpt* psEqOpt(const char *str)
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
    return result.eqopt_;
  }
}

/* Entrypoint: parse InitDesignators* from file. */
InitDesignators* pInitDesignators(FILE *inp)
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
    return result.initdesignators_;
  }
}

/* Entrypoint: parse InitDesignators* from string. */
InitDesignators* psInitDesignators(const char *str)
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
    return result.initdesignators_;
  }
}

/* Entrypoint: parse InitDesignatorsOpt* from file. */
InitDesignatorsOpt* pInitDesignatorsOpt(FILE *inp)
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
    return result.initdesignatorsopt_;
  }
}

/* Entrypoint: parse InitDesignatorsOpt* from string. */
InitDesignatorsOpt* psInitDesignatorsOpt(const char *str)
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
    return result.initdesignatorsopt_;
  }
}

/* Entrypoint: parse GhostArgumentsOpt* from file. */
GhostArgumentsOpt* pGhostArgumentsOpt(FILE *inp)
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
    return result.ghostargumentsopt_;
  }
}

/* Entrypoint: parse GhostArgumentsOpt* from string. */
GhostArgumentsOpt* psGhostArgumentsOpt(const char *str)
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
    return result.ghostargumentsopt_;
  }
}

/* Entrypoint: parse Arguments* from file. */
Arguments* pArguments(FILE *inp)
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
    return result.arguments_;
  }
}

/* Entrypoint: parse Arguments* from string. */
Arguments* psArguments(const char *str)
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
    return result.arguments_;
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

/* Entrypoint: parse CommaExpressionOpt* from file. */
CommaExpressionOpt* pCommaExpressionOpt(FILE *inp)
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
    return result.commaexpressionopt_;
  }
}

/* Entrypoint: parse CommaExpressionOpt* from string. */
CommaExpressionOpt* psCommaExpressionOpt(const char *str)
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
    return result.commaexpressionopt_;
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

/* Entrypoint: parse ListAnnot* from file. */
ListAnnot* pListAnnot(FILE *inp)
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
    return result.listannot_;
  }
}

/* Entrypoint: parse ListAnnot* from string. */
ListAnnot* psListAnnot(const char *str)
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
    return result.listannot_;
  }
}

/* Entrypoint: parse LocalLabel* from file. */
LocalLabel* pLocalLabel(FILE *inp)
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
    return result.locallabel_;
  }
}

/* Entrypoint: parse LocalLabel* from string. */
LocalLabel* psLocalLabel(const char *str)
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
    return result.locallabel_;
  }
}

/* Entrypoint: parse ListLocalLabel* from file. */
ListLocalLabel* pListLocalLabel(FILE *inp)
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
    return result.listlocallabel_;
  }
}

/* Entrypoint: parse ListLocalLabel* from string. */
ListLocalLabel* psListLocalLabel(const char *str)
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
    return result.listlocallabel_;
  }
}

/* Entrypoint: parse LocalLabelName* from file. */
LocalLabelName* pLocalLabelName(FILE *inp)
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
    return result.locallabelname_;
  }
}

/* Entrypoint: parse LocalLabelName* from string. */
LocalLabelName* psLocalLabelName(const char *str)
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
    return result.locallabelname_;
  }
}

/* Entrypoint: parse ListLocalLabelName* from file. */
ListLocalLabelName* pListLocalLabelName(FILE *inp)
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
std::reverse(result.listlocallabelname_->begin(), result.listlocallabelname_->end());
    return result.listlocallabelname_;
  }
}

/* Entrypoint: parse ListLocalLabelName* from string. */
ListLocalLabelName* psListLocalLabelName(const char *str)
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
std::reverse(result.listlocallabelname_->begin(), result.listlocallabelname_->end());
    return result.listlocallabelname_;
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

/* Entrypoint: parse OptLoopAnnotations* from file. */
OptLoopAnnotations* pOptLoopAnnotations(FILE *inp)
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
    return result.optloopannotations_;
  }
}

/* Entrypoint: parse OptLoopAnnotations* from string. */
OptLoopAnnotations* psOptLoopAnnotations(const char *str)
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
    return result.optloopannotations_;
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

/* Entrypoint: parse GenericAssociation* from file. */
GenericAssociation* pGenericAssociation(FILE *inp)
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
    return result.genericassociation_;
  }
}

/* Entrypoint: parse GenericAssociation* from string. */
GenericAssociation* psGenericAssociation(const char *str)
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
    return result.genericassociation_;
  }
}

/* Entrypoint: parse ListGenericAssociation* from file. */
ListGenericAssociation* pListGenericAssociation(FILE *inp)
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
std::reverse(result.listgenericassociation_->begin(), result.listgenericassociation_->end());
    return result.listgenericassociation_;
  }
}

/* Entrypoint: parse ListGenericAssociation* from string. */
ListGenericAssociation* psListGenericAssociation(const char *str)
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
std::reverse(result.listgenericassociation_->begin(), result.listgenericassociation_->end());
    return result.listgenericassociation_;
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

/* Entrypoint: parse DeclSpecWOType* from file. */
DeclSpecWOType* pDeclSpecWOType(FILE *inp)
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
    return result.declspecwotype_;
  }
}

/* Entrypoint: parse DeclSpecWOType* from string. */
DeclSpecWOType* psDeclSpecWOType(const char *str)
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
    return result.declspecwotype_;
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

/* Entrypoint: parse StaticAssertDeclaration* from file. */
StaticAssertDeclaration* pStaticAssertDeclaration(FILE *inp)
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
    return result.staticassertdeclaration_;
  }
}

/* Entrypoint: parse StaticAssertDeclaration* from string. */
StaticAssertDeclaration* psStaticAssertDeclaration(const char *str)
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
    return result.staticassertdeclaration_;
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

/* Entrypoint: parse Enumerator* from file. */
Enumerator* pEnumerator(FILE *inp)
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
    return result.enumerator_;
  }
}

/* Entrypoint: parse Enumerator* from string. */
Enumerator* psEnumerator(const char *str)
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
    return result.enumerator_;
  }
}

/* Entrypoint: parse ListEnumerator* from file. */
ListEnumerator* pListEnumerator(FILE *inp)
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
std::reverse(result.listenumerator_->begin(), result.listenumerator_->end());
    return result.listenumerator_;
  }
}

/* Entrypoint: parse ListEnumerator* from string. */
ListEnumerator* psListEnumerator(const char *str)
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
std::reverse(result.listenumerator_->begin(), result.listenumerator_->end());
    return result.listenumerator_;
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

/* Entrypoint: parse ListDeclarator* from file. */
ListDeclarator* pListDeclarator(FILE *inp)
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
std::reverse(result.listdeclarator_->begin(), result.listdeclarator_->end());
    return result.listdeclarator_;
  }
}

/* Entrypoint: parse ListDeclarator* from string. */
ListDeclarator* psListDeclarator(const char *str)
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
std::reverse(result.listdeclarator_->begin(), result.listdeclarator_->end());
    return result.listdeclarator_;
  }
}

/* Entrypoint: parse AttributesOrStatic* from file. */
AttributesOrStatic* pAttributesOrStatic(FILE *inp)
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
    return result.attributesorstatic_;
  }
}

/* Entrypoint: parse AttributesOrStatic* from string. */
AttributesOrStatic* psAttributesOrStatic(const char *str)
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
    return result.attributesorstatic_;
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

/* Entrypoint: parse DirectOldProtoDecl* from file. */
DirectOldProtoDecl* pDirectOldProtoDecl(FILE *inp)
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
    return result.directoldprotodecl_;
  }
}

/* Entrypoint: parse DirectOldProtoDecl* from string. */
DirectOldProtoDecl* psDirectOldProtoDecl(const char *str)
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
    return result.directoldprotodecl_;
  }
}

/* Entrypoint: parse ListIdent* from file. */
ListIdent* pListIdent(FILE *inp)
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
std::reverse(result.listident_->begin(), result.listident_->end());
    return result.listident_;
  }
}

/* Entrypoint: parse ListIdent* from string. */
ListIdent* psListIdent(const char *str)
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
std::reverse(result.listident_->begin(), result.listident_->end());
    return result.listident_;
  }
}

/* Entrypoint: parse OldPardefList* from file. */
OldPardefList* pOldPardefList(FILE *inp)
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
    return result.oldpardeflist_;
  }
}

/* Entrypoint: parse OldPardefList* from string. */
OldPardefList* psOldPardefList(const char *str)
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
    return result.oldpardeflist_;
  }
}

/* Entrypoint: parse OldPardef* from file. */
OldPardef* pOldPardef(FILE *inp)
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
    return result.oldpardef_;
  }
}

/* Entrypoint: parse OldPardef* from string. */
OldPardef* psOldPardef(const char *str)
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
    return result.oldpardef_;
  }
}

/* Entrypoint: parse ListOldPardef* from file. */
ListOldPardef* pListOldPardef(FILE *inp)
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
std::reverse(result.listoldpardef_->begin(), result.listoldpardef_->end());
    return result.listoldpardef_;
  }
}

/* Entrypoint: parse ListOldPardef* from string. */
ListOldPardef* psListOldPardef(const char *str)
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
std::reverse(result.listoldpardef_->begin(), result.listoldpardef_->end());
    return result.listoldpardef_;
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

/* Entrypoint: parse AbstractDecl* from file. */
AbstractDecl* pAbstractDecl(FILE *inp)
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
    return result.abstractdecl_;
  }
}

/* Entrypoint: parse AbstractDecl* from string. */
AbstractDecl* psAbstractDecl(const char *str)
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
    return result.abstractdecl_;
  }
}

/* Entrypoint: parse AbsDirectDecl* from file. */
AbsDirectDecl* pAbsDirectDecl(FILE *inp)
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
    return result.absdirectdecl_;
  }
}

/* Entrypoint: parse AbsDirectDecl* from string. */
AbsDirectDecl* psAbsDirectDecl(const char *str)
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
    return result.absdirectdecl_;
  }
}

/* Entrypoint: parse AbsDirectDeclOpt* from file. */
AbsDirectDeclOpt* pAbsDirectDeclOpt(FILE *inp)
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
    return result.absdirectdeclopt_;
  }
}

/* Entrypoint: parse AbsDirectDeclOpt* from string. */
AbsDirectDeclOpt* psAbsDirectDeclOpt(const char *str)
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
    return result.absdirectdeclopt_;
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

/* Entrypoint: parse CVSpec* from file. */
CVSpec* pCVSpec(FILE *inp)
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
    return result.cvspec_;
  }
}

/* Entrypoint: parse CVSpec* from string. */
CVSpec* psCVSpec(const char *str)
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
    return result.cvspec_;
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

/* Entrypoint: parse AttributeNocv* from file. */
AttributeNocv* pAttributeNocv(FILE *inp)
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
    return result.attributenocv_;
  }
}

/* Entrypoint: parse AttributeNocv* from string. */
AttributeNocv* psAttributeNocv(const char *str)
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
    return result.attributenocv_;
  }
}

/* Entrypoint: parse ListAttributeNocv* from file. */
ListAttributeNocv* pListAttributeNocv(FILE *inp)
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
    return result.listattributenocv_;
  }
}

/* Entrypoint: parse ListAttributeNocv* from string. */
ListAttributeNocv* psListAttributeNocv(const char *str)
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
    return result.listattributenocv_;
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

/* Entrypoint: parse JustAttribute* from file. */
JustAttribute* pJustAttribute(FILE *inp)
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
    return result.justattribute_;
  }
}

/* Entrypoint: parse JustAttribute* from string. */
JustAttribute* psJustAttribute(const char *str)
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
    return result.justattribute_;
  }
}

/* Entrypoint: parse ListJustAttribute* from file. */
ListJustAttribute* pListJustAttribute(FILE *inp)
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
std::reverse(result.listjustattribute_->begin(), result.listjustattribute_->end());
    return result.listjustattribute_;
  }
}

/* Entrypoint: parse ListJustAttribute* from string. */
ListJustAttribute* psListJustAttribute(const char *str)
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
std::reverse(result.listjustattribute_->begin(), result.listjustattribute_->end());
    return result.listjustattribute_;
  }
}

/* Entrypoint: parse Pragma* from file. */
Pragma* pPragma(FILE *inp)
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
    return result.pragma_;
  }
}

/* Entrypoint: parse Pragma* from string. */
Pragma* psPragma(const char *str)
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
    return result.pragma_;
  }
}

/* Entrypoint: parse VarAttr* from file. */
VarAttr* pVarAttr(FILE *inp)
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
    return result.varattr_;
  }
}

/* Entrypoint: parse VarAttr* from string. */
VarAttr* psVarAttr(const char *str)
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
    return result.varattr_;
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

/* Entrypoint: parse ListBasicAttribute* from file. */
ListBasicAttribute* pListBasicAttribute(FILE *inp)
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
std::reverse(result.listbasicattribute_->begin(), result.listbasicattribute_->end());
    return result.listbasicattribute_;
  }
}

/* Entrypoint: parse ListBasicAttribute* from string. */
ListBasicAttribute* psListBasicAttribute(const char *str)
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
std::reverse(result.listbasicattribute_->begin(), result.listbasicattribute_->end());
    return result.listbasicattribute_;
  }
}

/* Entrypoint: parse ParameterAttrListNE* from file. */
ParameterAttrListNE* pParameterAttrListNE(FILE *inp)
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
    return result.parameterattrlistne_;
  }
}

/* Entrypoint: parse ParameterAttrListNE* from string. */
ParameterAttrListNE* psParameterAttrListNE(const char *str)
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
    return result.parameterattrlistne_;
  }
}

/* Entrypoint: parse ParamAttrListNE* from file. */
ParamAttrListNE* pParamAttrListNE(FILE *inp)
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
    return result.paramattrlistne_;
  }
}

/* Entrypoint: parse ParamAttrListNE* from string. */
ParamAttrListNE* psParamAttrListNE(const char *str)
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
    return result.paramattrlistne_;
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

/* Entrypoint: parse AttrTest* from file. */
AttrTest* pAttrTest(FILE *inp)
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
    return result.attrtest_;
  }
}

/* Entrypoint: parse AttrTest* from string. */
AttrTest* psAttrTest(const char *str)
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
    return result.attrtest_;
  }
}

/* Entrypoint: parse AttrList* from file. */
AttrList* pAttrList(FILE *inp)
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
    return result.attrlist_;
  }
}

/* Entrypoint: parse AttrList* from string. */
AttrList* psAttrList(const char *str)
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
    return result.attrlist_;
  }
}

/* Entrypoint: parse Asmattr* from file. */
Asmattr* pAsmattr(FILE *inp)
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
    return result.asmattr_;
  }
}

/* Entrypoint: parse Asmattr* from string. */
Asmattr* psAsmattr(const char *str)
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
    return result.asmattr_;
  }
}

/* Entrypoint: parse ListAsmattr* from file. */
ListAsmattr* pListAsmattr(FILE *inp)
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
    return result.listasmattr_;
  }
}

/* Entrypoint: parse ListAsmattr* from string. */
ListAsmattr* psListAsmattr(const char *str)
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
    return result.listasmattr_;
  }
}

/* Entrypoint: parse Asmoutputs* from file. */
Asmoutputs* pAsmoutputs(FILE *inp)
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
    return result.asmoutputs_;
  }
}

/* Entrypoint: parse Asmoutputs* from string. */
Asmoutputs* psAsmoutputs(const char *str)
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
    return result.asmoutputs_;
  }
}

/* Entrypoint: parse Asmoperands* from file. */
Asmoperands* pAsmoperands(FILE *inp)
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
    return result.asmoperands_;
  }
}

/* Entrypoint: parse Asmoperands* from string. */
Asmoperands* psAsmoperands(const char *str)
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
    return result.asmoperands_;
  }
}

/* Entrypoint: parse Asmoperand* from file. */
Asmoperand* pAsmoperand(FILE *inp)
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
    return result.asmoperand_;
  }
}

/* Entrypoint: parse Asmoperand* from string. */
Asmoperand* psAsmoperand(const char *str)
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
    return result.asmoperand_;
  }
}

/* Entrypoint: parse ListAsmoperand* from file. */
ListAsmoperand* pListAsmoperand(FILE *inp)
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
std::reverse(result.listasmoperand_->begin(), result.listasmoperand_->end());
    return result.listasmoperand_;
  }
}

/* Entrypoint: parse ListAsmoperand* from string. */
ListAsmoperand* psListAsmoperand(const char *str)
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
std::reverse(result.listasmoperand_->begin(), result.listasmoperand_->end());
    return result.listasmoperand_;
  }
}

/* Entrypoint: parse Asminputs* from file. */
Asminputs* pAsminputs(FILE *inp)
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
    return result.asminputs_;
  }
}

/* Entrypoint: parse Asminputs* from string. */
Asminputs* psAsminputs(const char *str)
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
    return result.asminputs_;
  }
}

/* Entrypoint: parse Asmopname* from file. */
Asmopname* pAsmopname(FILE *inp)
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
    return result.asmopname_;
  }
}

/* Entrypoint: parse Asmopname* from string. */
Asmopname* psAsmopname(const char *str)
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
    return result.asmopname_;
  }
}

/* Entrypoint: parse Asmclobber* from file. */
Asmclobber* pAsmclobber(FILE *inp)
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
    return result.asmclobber_;
  }
}

/* Entrypoint: parse Asmclobber* from string. */
Asmclobber* psAsmclobber(const char *str)
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
    return result.asmclobber_;
  }
}

/* Entrypoint: parse ListStringConstant* from file. */
ListStringConstant* pListStringConstant(FILE *inp)
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
std::reverse(result.liststringconstant_->begin(), result.liststringconstant_->end());
    return result.liststringconstant_;
  }
}

/* Entrypoint: parse ListStringConstant* from string. */
ListStringConstant* psListStringConstant(const char *str)
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
std::reverse(result.liststringconstant_->begin(), result.liststringconstant_->end());
    return result.liststringconstant_;
  }
}

/* Entrypoint: parse Asmlabels* from file. */
Asmlabels* pAsmlabels(FILE *inp)
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
    return result.asmlabels_;
  }
}

/* Entrypoint: parse Asmlabels* from string. */
Asmlabels* psAsmlabels(const char *str)
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
    return result.asmlabels_;
  }
}

/* Entrypoint: parse LexprEOF* from file. */
LexprEOF* pLexprEOF(FILE *inp)
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
    return result.lexpreof_;
  }
}

/* Entrypoint: parse LexprEOF* from string. */
LexprEOF* psLexprEOF(const char *str)
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
    return result.lexpreof_;
  }
}

/* Entrypoint: parse LexprList* from file. */
LexprList* pLexprList(FILE *inp)
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
    return result.lexprlist_;
  }
}

/* Entrypoint: parse LexprList* from string. */
LexprList* psLexprList(const char *str)
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
    return result.lexprlist_;
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

/* Entrypoint: parse ListSTRING_LITERAL* from file. */
ListSTRING_LITERAL* pListSTRING_LITERAL(FILE *inp)
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
std::reverse(result.liststring_literal_->begin(), result.liststring_literal_->end());
    return result.liststring_literal_;
  }
}

/* Entrypoint: parse ListSTRING_LITERAL* from string. */
ListSTRING_LITERAL* psListSTRING_LITERAL(const char *str)
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
std::reverse(result.liststring_literal_->begin(), result.liststring_literal_->end());
    return result.liststring_literal_;
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

/* Entrypoint: parse FieldInitElt* from file. */
FieldInitElt* pFieldInitElt(FILE *inp)
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
    return result.fieldinitelt_;
  }
}

/* Entrypoint: parse FieldInitElt* from string. */
FieldInitElt* psFieldInitElt(const char *str)
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
    return result.fieldinitelt_;
  }
}

/* Entrypoint: parse ListFieldInitElt* from file. */
ListFieldInitElt* pListFieldInitElt(FILE *inp)
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
std::reverse(result.listfieldinitelt_->begin(), result.listfieldinitelt_->end());
    return result.listfieldinitelt_;
  }
}

/* Entrypoint: parse ListFieldInitElt* from string. */
ListFieldInitElt* psListFieldInitElt(const char *str)
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
std::reverse(result.listfieldinitelt_->begin(), result.listfieldinitelt_->end());
    return result.listfieldinitelt_;
  }
}

/* Entrypoint: parse ArrayInitElt* from file. */
ArrayInitElt* pArrayInitElt(FILE *inp)
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
    return result.arrayinitelt_;
  }
}

/* Entrypoint: parse ArrayInitElt* from string. */
ArrayInitElt* psArrayInitElt(const char *str)
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
    return result.arrayinitelt_;
  }
}

/* Entrypoint: parse ListArrayInitElt* from file. */
ListArrayInitElt* pListArrayInitElt(FILE *inp)
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
std::reverse(result.listarrayinitelt_->begin(), result.listarrayinitelt_->end());
    return result.listarrayinitelt_;
  }
}

/* Entrypoint: parse ListArrayInitElt* from string. */
ListArrayInitElt* psListArrayInitElt(const char *str)
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
std::reverse(result.listarrayinitelt_->begin(), result.listarrayinitelt_->end());
    return result.listarrayinitelt_;
  }
}

/* Entrypoint: parse UpdateElt* from file. */
UpdateElt* pUpdateElt(FILE *inp)
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
    return result.updateelt_;
  }
}

/* Entrypoint: parse UpdateElt* from string. */
UpdateElt* psUpdateElt(const char *str)
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
    return result.updateelt_;
  }
}

/* Entrypoint: parse ListUpdateElt* from file. */
ListUpdateElt* pListUpdateElt(FILE *inp)
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
std::reverse(result.listupdateelt_->begin(), result.listupdateelt_->end());
    return result.listupdateelt_;
  }
}

/* Entrypoint: parse ListUpdateElt* from string. */
ListUpdateElt* psListUpdateElt(const char *str)
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
std::reverse(result.listupdateelt_->begin(), result.listupdateelt_->end());
    return result.listupdateelt_;
  }
}

/* Entrypoint: parse PathElt* from file. */
PathElt* pPathElt(FILE *inp)
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
    return result.pathelt_;
  }
}

/* Entrypoint: parse PathElt* from string. */
PathElt* psPathElt(const char *str)
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
    return result.pathelt_;
  }
}

/* Entrypoint: parse ListPathElt* from file. */
ListPathElt* pListPathElt(FILE *inp)
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
std::reverse(result.listpathelt_->begin(), result.listpathelt_->end());
    return result.listpathelt_;
  }
}

/* Entrypoint: parse ListPathElt* from string. */
ListPathElt* psListPathElt(const char *str)
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
std::reverse(result.listpathelt_->begin(), result.listpathelt_->end());
    return result.listpathelt_;
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
std::reverse(result.listbindersreentrance_->begin(), result.listbindersreentrance_->end());
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
std::reverse(result.listbindersreentrance_->begin(), result.listbindersreentrance_->end());
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

/* Entrypoint: parse AbsParamTypeList* from file. */
AbsParamTypeList* pAbsParamTypeList(FILE *inp)
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
    return result.absparamtypelist_;
  }
}

/* Entrypoint: parse AbsParamTypeList* from string. */
AbsParamTypeList* psAbsParamTypeList(const char *str)
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
    return result.absparamtypelist_;
  }
}

/* Entrypoint: parse AbsParam* from file. */
AbsParam* pAbsParam(FILE *inp)
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
    return result.absparam_;
  }
}

/* Entrypoint: parse AbsParam* from string. */
AbsParam* psAbsParam(const char *str)
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
    return result.absparam_;
  }
}

/* Entrypoint: parse ListAbsParam* from file. */
ListAbsParam* pListAbsParam(FILE *inp)
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
std::reverse(result.listabsparam_->begin(), result.listabsparam_->end());
    return result.listabsparam_;
  }
}

/* Entrypoint: parse ListAbsParam* from string. */
ListAbsParam* psListAbsParam(const char *str)
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
std::reverse(result.listabsparam_->begin(), result.listabsparam_->end());
    return result.listabsparam_;
  }
}

/* Entrypoint: parse Parameter* from file. */
Parameter* pParameter(FILE *inp)
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
    return result.parameter_;
  }
}

/* Entrypoint: parse Parameter* from string. */
Parameter* psParameter(const char *str)
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
    return result.parameter_;
  }
}

/* Entrypoint: parse ListParameter* from file. */
ListParameter* pListParameter(FILE *inp)
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
std::reverse(result.listparameter_->begin(), result.listparameter_->end());
    return result.listparameter_;
  }
}

/* Entrypoint: parse ListParameter* from string. */
ListParameter* psListParameter(const char *str)
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
std::reverse(result.listparameter_->begin(), result.listparameter_->end());
    return result.listparameter_;
  }
}

/* Entrypoint: parse LogicTypeGenOFTYPENAME* from file. */
LogicTypeGenOFTYPENAME* pLogicTypeGenOFTYPENAME(FILE *inp)
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
    return result.logictypegenoftypename_;
  }
}

/* Entrypoint: parse LogicTypeGenOFTYPENAME* from string. */
LogicTypeGenOFTYPENAME* psLogicTypeGenOFTYPENAME(const char *str)
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
    return result.logictypegenoftypename_;
  }
}

/* Entrypoint: parse ListLogicTypeGenOFTYPENAME* from file. */
ListLogicTypeGenOFTYPENAME* pListLogicTypeGenOFTYPENAME(FILE *inp)
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
std::reverse(result.listlogictypegenoftypename_->begin(), result.listlogictypegenoftypename_->end());
    return result.listlogictypegenoftypename_;
  }
}

/* Entrypoint: parse ListLogicTypeGenOFTYPENAME* from string. */
ListLogicTypeGenOFTYPENAME* psListLogicTypeGenOFTYPENAME(const char *str)
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
std::reverse(result.listlogictypegenoftypename_->begin(), result.listlogictypegenoftypename_->end());
    return result.listlogictypegenoftypename_;
  }
}

/* Entrypoint: parse LogicTypeGenOFIdentifierOrTypename* from file. */
LogicTypeGenOFIdentifierOrTypename* pLogicTypeGenOFIdentifierOrTypename(FILE *inp)
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
    return result.logictypegenofidentifierortypename_;
  }
}

/* Entrypoint: parse LogicTypeGenOFIdentifierOrTypename* from string. */
LogicTypeGenOFIdentifierOrTypename* psLogicTypeGenOFIdentifierOrTypename(const char *str)
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
    return result.logictypegenofidentifierortypename_;
  }
}

/* Entrypoint: parse ListLogicTypeGenOFIdentifierOrTypename* from file. */
ListLogicTypeGenOFIdentifierOrTypename* pListLogicTypeGenOFIdentifierOrTypename(FILE *inp)
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
std::reverse(result.listlogictypegenofidentifierortypename_->begin(), result.listlogictypegenofidentifierortypename_->end());
    return result.listlogictypegenofidentifierortypename_;
  }
}

/* Entrypoint: parse ListLogicTypeGenOFIdentifierOrTypename* from string. */
ListLogicTypeGenOFIdentifierOrTypename* psListLogicTypeGenOFIdentifierOrTypename(const char *str)
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
std::reverse(result.listlogictypegenofidentifierortypename_->begin(), result.listlogictypegenofidentifierortypename_->end());
    return result.listlogictypegenofidentifierortypename_;
  }
}

/* Entrypoint: parse CV* from file. */
CV* pCV(FILE *inp)
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
    return result.cv_;
  }
}

/* Entrypoint: parse CV* from string. */
CV* psCV(const char *str)
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
    return result.cv_;
  }
}

/* Entrypoint: parse ListCV* from file. */
ListCV* pListCV(FILE *inp)
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
    return result.listcv_;
  }
}

/* Entrypoint: parse ListCV* from string. */
ListCV* psListCV(const char *str)
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
    return result.listcv_;
  }
}

/* Entrypoint: parse TypeSpecCVOFTYPENAME* from file. */
TypeSpecCVOFTYPENAME* pTypeSpecCVOFTYPENAME(FILE *inp)
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
    return result.typespeccvoftypename_;
  }
}

/* Entrypoint: parse TypeSpecCVOFTYPENAME* from string. */
TypeSpecCVOFTYPENAME* psTypeSpecCVOFTYPENAME(const char *str)
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
    return result.typespeccvoftypename_;
  }
}

/* Entrypoint: parse CastLogicType* from file. */
CastLogicType* pCastLogicType(FILE *inp)
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
    return result.castlogictype_;
  }
}

/* Entrypoint: parse CastLogicType* from string. */
CastLogicType* psCastLogicType(const char *str)
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
    return result.castlogictype_;
  }
}

/* Entrypoint: parse LogicRtType* from file. */
LogicRtType* pLogicRtType(FILE *inp)
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
    return result.logicrttype_;
  }
}

/* Entrypoint: parse LogicRtType* from string. */
LogicRtType* psLogicRtType(const char *str)
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
    return result.logicrttype_;
  }
}

/* Entrypoint: parse AbsSpecOption* from file. */
AbsSpecOption* pAbsSpecOption(FILE *inp)
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
    return result.absspecoption_;
  }
}

/* Entrypoint: parse AbsSpecOption* from string. */
AbsSpecOption* psAbsSpecOption(const char *str)
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
    return result.absspecoption_;
  }
}

/* Entrypoint: parse AbsSpecCVOption* from file. */
AbsSpecCVOption* pAbsSpecCVOption(FILE *inp)
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
    return result.absspeccvoption_;
  }
}

/* Entrypoint: parse AbsSpecCVOption* from string. */
AbsSpecCVOption* psAbsSpecCVOption(const char *str)
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
    return result.absspeccvoption_;
  }
}

/* Entrypoint: parse AbsSpec* from file. */
AbsSpec* pAbsSpec(FILE *inp)
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
    return result.absspec_;
  }
}

/* Entrypoint: parse AbsSpec* from string. */
AbsSpec* psAbsSpec(const char *str)
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
    return result.absspec_;
  }
}

/* Entrypoint: parse AbsSpecCV* from file. */
AbsSpecCV* pAbsSpecCV(FILE *inp)
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
    return result.absspeccv_;
  }
}

/* Entrypoint: parse AbsSpecCV* from string. */
AbsSpecCV* psAbsSpecCV(const char *str)
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
    return result.absspeccv_;
  }
}

/* Entrypoint: parse AbsSpec* from file. */
AbsSpec* pAbsSpec1(FILE *inp)
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
    return result.absspec_;
  }
}

/* Entrypoint: parse AbsSpec* from string. */
AbsSpec* psAbsSpec1(const char *str)
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
    return result.absspec_;
  }
}

/* Entrypoint: parse AbsSpecCV* from file. */
AbsSpecCV* pAbsSpecCV1(FILE *inp)
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
    return result.absspeccv_;
  }
}

/* Entrypoint: parse AbsSpecCV* from string. */
AbsSpecCV* psAbsSpecCV1(const char *str)
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
    return result.absspeccv_;
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

/* Entrypoint: parse StarsCV* from file. */
StarsCV* pStarsCV(FILE *inp)
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
    return result.starscv_;
  }
}

/* Entrypoint: parse StarsCV* from string. */
StarsCV* psStarsCV(const char *str)
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
    return result.starscv_;
  }
}

/* Entrypoint: parse ListStarsCV* from file. */
ListStarsCV* pListStarsCV(FILE *inp)
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
std::reverse(result.liststarscv_->begin(), result.liststarscv_->end());
    return result.liststarscv_;
  }
}

/* Entrypoint: parse ListStarsCV* from string. */
ListStarsCV* psListStarsCV(const char *str)
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
std::reverse(result.liststarscv_->begin(), result.liststarscv_->end());
    return result.liststarscv_;
  }
}

/* Entrypoint: parse Tabs* from file. */
Tabs* pTabs(FILE *inp)
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
    return result.tabs_;
  }
}

/* Entrypoint: parse Tabs* from string. */
Tabs* psTabs(const char *str)
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
    return result.tabs_;
  }
}

/* Entrypoint: parse ListTabs* from file. */
ListTabs* pListTabs(FILE *inp)
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
std::reverse(result.listtabs_->begin(), result.listtabs_->end());
    return result.listtabs_;
  }
}

/* Entrypoint: parse ListTabs* from string. */
ListTabs* psListTabs(const char *str)
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
std::reverse(result.listtabs_->begin(), result.listtabs_->end());
    return result.listtabs_;
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

/* Entrypoint: parse TypeSpecOFIdentifierOrTypename* from file. */
TypeSpecOFIdentifierOrTypename* pTypeSpecOFIdentifierOrTypename(FILE *inp)
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
    return result.typespecofidentifierortypename_;
  }
}

/* Entrypoint: parse TypeSpecOFIdentifierOrTypename* from string. */
TypeSpecOFIdentifierOrTypename* psTypeSpecOFIdentifierOrTypename(const char *str)
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
    return result.typespecofidentifierortypename_;
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

/* Entrypoint: parse ExtSpec* from file. */
ExtSpec* pExtSpec(FILE *inp)
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
    return result.extspec_;
  }
}

/* Entrypoint: parse ExtSpec* from string. */
ExtSpec* psExtSpec(const char *str)
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
    return result.extspec_;
  }
}

/* Entrypoint: parse ExtGlobalClausesOpt* from file. */
ExtGlobalClausesOpt* pExtGlobalClausesOpt(FILE *inp)
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
    return result.extglobalclausesopt_;
  }
}

/* Entrypoint: parse ExtGlobalClausesOpt* from string. */
ExtGlobalClausesOpt* psExtGlobalClausesOpt(const char *str)
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
    return result.extglobalclausesopt_;
  }
}

/* Entrypoint: parse ExtGlobalClause* from file. */
ExtGlobalClause* pExtGlobalClause(FILE *inp)
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
    return result.extglobalclause_;
  }
}

/* Entrypoint: parse ExtGlobalClause* from string. */
ExtGlobalClause* psExtGlobalClause(const char *str)
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
    return result.extglobalclause_;
  }
}

/* Entrypoint: parse ListExtGlobalClause* from file. */
ListExtGlobalClause* pListExtGlobalClause(FILE *inp)
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
std::reverse(result.listextglobalclause_->begin(), result.listextglobalclause_->end());
    return result.listextglobalclause_;
  }
}

/* Entrypoint: parse ListExtGlobalClause* from string. */
ListExtGlobalClause* psListExtGlobalClause(const char *str)
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
std::reverse(result.listextglobalclause_->begin(), result.listextglobalclause_->end());
    return result.listextglobalclause_;
  }
}

/* Entrypoint: parse ExtGlobalSpecsOpt* from file. */
ExtGlobalSpecsOpt* pExtGlobalSpecsOpt(FILE *inp)
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
    return result.extglobalspecsopt_;
  }
}

/* Entrypoint: parse ExtGlobalSpecsOpt* from string. */
ExtGlobalSpecsOpt* psExtGlobalSpecsOpt(const char *str)
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
    return result.extglobalspecsopt_;
  }
}

/* Entrypoint: parse ExtGlobalSpec* from file. */
ExtGlobalSpec* pExtGlobalSpec(FILE *inp)
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
    return result.extglobalspec_;
  }
}

/* Entrypoint: parse ExtGlobalSpec* from string. */
ExtGlobalSpec* psExtGlobalSpec(const char *str)
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
    return result.extglobalspec_;
  }
}

/* Entrypoint: parse ListExtGlobalSpec* from file. */
ListExtGlobalSpec* pListExtGlobalSpec(FILE *inp)
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
std::reverse(result.listextglobalspec_->begin(), result.listextglobalspec_->end());
    return result.listextglobalspec_;
  }
}

/* Entrypoint: parse ListExtGlobalSpec* from string. */
ListExtGlobalSpec* psListExtGlobalSpec(const char *str)
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
std::reverse(result.listextglobalspec_->begin(), result.listextglobalspec_->end());
    return result.listextglobalspec_;
  }
}

/* Entrypoint: parse ExtModuleSpecsOpt* from file. */
ExtModuleSpecsOpt* pExtModuleSpecsOpt(FILE *inp)
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
    return result.extmodulespecsopt_;
  }
}

/* Entrypoint: parse ExtModuleSpecsOpt* from string. */
ExtModuleSpecsOpt* psExtModuleSpecsOpt(const char *str)
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
    return result.extmodulespecsopt_;
  }
}

/* Entrypoint: parse ExtModuleSpec* from file. */
ExtModuleSpec* pExtModuleSpec(FILE *inp)
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
    return result.extmodulespec_;
  }
}

/* Entrypoint: parse ExtModuleSpec* from string. */
ExtModuleSpec* psExtModuleSpec(const char *str)
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
    return result.extmodulespec_;
  }
}

/* Entrypoint: parse ListExtModuleSpec* from file. */
ListExtModuleSpec* pListExtModuleSpec(FILE *inp)
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
std::reverse(result.listextmodulespec_->begin(), result.listextmodulespec_->end());
    return result.listextmodulespec_;
  }
}

/* Entrypoint: parse ListExtModuleSpec* from string. */
ListExtModuleSpec* psListExtModuleSpec(const char *str)
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
std::reverse(result.listextmodulespec_->begin(), result.listextmodulespec_->end());
    return result.listextmodulespec_;
  }
}

/* Entrypoint: parse ExtFunctionSpecsOpt* from file. */
ExtFunctionSpecsOpt* pExtFunctionSpecsOpt(FILE *inp)
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
    return result.extfunctionspecsopt_;
  }
}

/* Entrypoint: parse ExtFunctionSpecsOpt* from string. */
ExtFunctionSpecsOpt* psExtFunctionSpecsOpt(const char *str)
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
    return result.extfunctionspecsopt_;
  }
}

/* Entrypoint: parse ExtFunctionSpecs* from file. */
ExtFunctionSpecs* pExtFunctionSpecs(FILE *inp)
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
    return result.extfunctionspecs_;
  }
}

/* Entrypoint: parse ExtFunctionSpecs* from string. */
ExtFunctionSpecs* psExtFunctionSpecs(const char *str)
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
    return result.extfunctionspecs_;
  }
}

/* Entrypoint: parse ExtFunctionSpec* from file. */
ExtFunctionSpec* pExtFunctionSpec(FILE *inp)
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
    return result.extfunctionspec_;
  }
}

/* Entrypoint: parse ExtFunctionSpec* from string. */
ExtFunctionSpec* psExtFunctionSpec(const char *str)
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
    return result.extfunctionspec_;
  }
}

/* Entrypoint: parse ListExtFunctionSpec* from file. */
ListExtFunctionSpec* pListExtFunctionSpec(FILE *inp)
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
std::reverse(result.listextfunctionspec_->begin(), result.listextfunctionspec_->end());
    return result.listextfunctionspec_;
  }
}

/* Entrypoint: parse ListExtFunctionSpec* from string. */
ListExtFunctionSpec* psListExtFunctionSpec(const char *str)
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
std::reverse(result.listextfunctionspec_->begin(), result.listextfunctionspec_->end());
    return result.listextfunctionspec_;
  }
}

/* Entrypoint: parse ExtFunSpec* from file. */
ExtFunSpec* pExtFunSpec(FILE *inp)
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
    return result.extfunspec_;
  }
}

/* Entrypoint: parse ExtFunSpec* from string. */
ExtFunSpec* psExtFunSpec(const char *str)
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
    return result.extfunspec_;
  }
}

/* Entrypoint: parse ListExtFunSpec* from file. */
ListExtFunSpec* pListExtFunSpec(FILE *inp)
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
std::reverse(result.listextfunspec_->begin(), result.listextfunspec_->end());
    return result.listextfunspec_;
  }
}

/* Entrypoint: parse ListExtFunSpec* from string. */
ListExtFunSpec* psListExtFunSpec(const char *str)
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
std::reverse(result.listextfunspec_->begin(), result.listextfunspec_->end());
    return result.listextfunspec_;
  }
}

/* Entrypoint: parse ExtIdentifierOpt* from file. */
ExtIdentifierOpt* pExtIdentifierOpt(FILE *inp)
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
    return result.extidentifieropt_;
  }
}

/* Entrypoint: parse ExtIdentifierOpt* from string. */
ExtIdentifierOpt* psExtIdentifierOpt(const char *str)
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
    return result.extidentifieropt_;
  }
}

/* Entrypoint: parse StmtMarkup* from file. */
StmtMarkup* pStmtMarkup(FILE *inp)
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
    return result.stmtmarkup_;
  }
}

/* Entrypoint: parse StmtMarkup* from string. */
StmtMarkup* psStmtMarkup(const char *str)
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
    return result.stmtmarkup_;
  }
}

/* Entrypoint: parse ListStmtMarkup* from file. */
ListStmtMarkup* pListStmtMarkup(FILE *inp)
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
std::reverse(result.liststmtmarkup_->begin(), result.liststmtmarkup_->end());
    return result.liststmtmarkup_;
  }
}

/* Entrypoint: parse ListStmtMarkup* from string. */
ListStmtMarkup* psListStmtMarkup(const char *str)
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
std::reverse(result.liststmtmarkup_->begin(), result.liststmtmarkup_->end());
    return result.liststmtmarkup_;
  }
}

/* Entrypoint: parse Spec* from file. */
Spec* pSpec(FILE *inp)
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
    return result.spec_;
  }
}

/* Entrypoint: parse Spec* from string. */
Spec* psSpec(const char *str)
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
    return result.spec_;
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

/* Entrypoint: parse ClauseKW* from file. */
ClauseKW* pClauseKW(FILE *inp)
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
    return result.clausekw_;
  }
}

/* Entrypoint: parse ClauseKW* from string. */
ClauseKW* psClauseKW(const char *str)
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
    return result.clausekw_;
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

/* Entrypoint: parse NETerminates* from file. */
NETerminates* pNETerminates(FILE *inp)
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
    return result.neterminates_;
  }
}

/* Entrypoint: parse NETerminates* from string. */
NETerminates* psNETerminates(const char *str)
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
    return result.neterminates_;
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

/* Entrypoint: parse NEDecreases* from file. */
NEDecreases* pNEDecreases(FILE *inp)
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
    return result.nedecreases_;
  }
}

/* Entrypoint: parse NEDecreases* from string. */
NEDecreases* psNEDecreases(const char *str)
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
    return result.nedecreases_;
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

/* Entrypoint: parse Allocation* from file. */
Allocation* pAllocation(FILE *inp)
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
    return result.allocation_;
  }
}

/* Entrypoint: parse Allocation* from string. */
Allocation* psAllocation(const char *str)
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
    return result.allocation_;
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

/* Entrypoint: parse ExtensionContent* from file. */
ExtensionContent* pExtensionContent(FILE *inp)
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
    return result.extensioncontent_;
  }
}

/* Entrypoint: parse ExtensionContent* from string. */
ExtensionContent* psExtensionContent(const char *str)
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
    return result.extensioncontent_;
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

/* Entrypoint: parse NEBehaviors* from file. */
NEBehaviors* pNEBehaviors(FILE *inp)
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
    return result.nebehaviors_;
  }
}

/* Entrypoint: parse NEBehaviors* from string. */
NEBehaviors* psNEBehaviors(const char *str)
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
    return result.nebehaviors_;
  }
}

/* Entrypoint: parse BehaviorBody* from file. */
BehaviorBody* pBehaviorBody(FILE *inp)
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
    return result.behaviorbody_;
  }
}

/* Entrypoint: parse BehaviorBody* from string. */
BehaviorBody* psBehaviorBody(const char *str)
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
    return result.behaviorbody_;
  }
}

/* Entrypoint: parse Assumes* from file. */
Assumes* pAssumes(FILE *inp)
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
    return result.assumes_;
  }
}

/* Entrypoint: parse Assumes* from string. */
Assumes* psAssumes(const char *str)
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
    return result.assumes_;
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

/* Entrypoint: parse NECompleteOrDisjoint* from file. */
NECompleteOrDisjoint* pNECompleteOrDisjoint(FILE *inp)
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
    return result.necompleteordisjoint_;
  }
}

/* Entrypoint: parse NECompleteOrDisjoint* from string. */
NECompleteOrDisjoint* psNECompleteOrDisjoint(const char *str)
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
    return result.necompleteordisjoint_;
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

/* Entrypoint: parse ListLogicPTreeAnnot* from file. */
ListLogicPTreeAnnot* pListLogicPTreeAnnot(FILE *inp)
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
    return result.listlogicptreeannot_;
  }
}

/* Entrypoint: parse ListLogicPTreeAnnot* from string. */
ListLogicPTreeAnnot* psListLogicPTreeAnnot(const char *str)
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
    return result.listlogicptreeannot_;
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

/* Entrypoint: parse LoopAllocation* from file. */
LoopAllocation* pLoopAllocation(FILE *inp)
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
    return result.loopallocation_;
  }
}

/* Entrypoint: parse LoopAllocation* from string. */
LoopAllocation* psLoopAllocation(const char *str)
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
    return result.loopallocation_;
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

/* Entrypoint: parse LoopGrammarExtension* from file. */
LoopGrammarExtension* pLoopGrammarExtension(FILE *inp)
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
    return result.loopgrammarextension_;
  }
}

/* Entrypoint: parse LoopGrammarExtension* from string. */
LoopGrammarExtension* psLoopGrammarExtension(const char *str)
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
    return result.loopgrammarextension_;
  }
}

/* Entrypoint: parse LoopPragma* from file. */
LoopPragma* pLoopPragma(FILE *inp)
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
    return result.looppragma_;
  }
}

/* Entrypoint: parse LoopPragma* from string. */
LoopPragma* psLoopPragma(const char *str)
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
    return result.looppragma_;
  }
}

/* Entrypoint: parse BegPragmaOrCodeAnnotation* from file. */
BegPragmaOrCodeAnnotation* pBegPragmaOrCodeAnnotation(FILE *inp)
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
    return result.begpragmaorcodeannotation_;
  }
}

/* Entrypoint: parse BegPragmaOrCodeAnnotation* from string. */
BegPragmaOrCodeAnnotation* psBegPragmaOrCodeAnnotation(const char *str)
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
    return result.begpragmaorcodeannotation_;
  }
}

/* Entrypoint: parse PragmaOrCodeAnnotation* from file. */
PragmaOrCodeAnnotation* pPragmaOrCodeAnnotation(FILE *inp)
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
    return result.pragmaorcodeannotation_;
  }
}

/* Entrypoint: parse PragmaOrCodeAnnotation* from string. */
PragmaOrCodeAnnotation* psPragmaOrCodeAnnotation(const char *str)
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
    return result.pragmaorcodeannotation_;
  }
}

/* Entrypoint: parse CodeAnnotation* from file. */
CodeAnnotation* pCodeAnnotation(FILE *inp)
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
    return result.codeannotation_;
  }
}

/* Entrypoint: parse CodeAnnotation* from string. */
CodeAnnotation* psCodeAnnotation(const char *str)
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
    return result.codeannotation_;
  }
}

/* Entrypoint: parse SlicePragma* from file. */
SlicePragma* pSlicePragma(FILE *inp)
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
    return result.slicepragma_;
  }
}

/* Entrypoint: parse SlicePragma* from string. */
SlicePragma* psSlicePragma(const char *str)
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
    return result.slicepragma_;
  }
}

/* Entrypoint: parse ImpactPragma* from file. */
ImpactPragma* pImpactPragma(FILE *inp)
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
    return result.impactpragma_;
  }
}

/* Entrypoint: parse ImpactPragma* from string. */
ImpactPragma* psImpactPragma(const char *str)
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
    return result.impactpragma_;
  }
}

/* Entrypoint: parse Decl* from file. */
Decl* pDecl(FILE *inp)
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
    return result.decl_;
  }
}

/* Entrypoint: parse Decl* from string. */
Decl* psDecl(const char *str)
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
    return result.decl_;
  }
}

/* Entrypoint: parse ListDecl* from file. */
ListDecl* pListDecl(FILE *inp)
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
std::reverse(result.listdecl_->begin(), result.listdecl_->end());
    return result.listdecl_;
  }
}

/* Entrypoint: parse ListDecl* from string. */
ListDecl* psListDecl(const char *str)
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
std::reverse(result.listdecl_->begin(), result.listdecl_->end());
    return result.listdecl_;
  }
}

/* Entrypoint: parse ExtDecl* from file. */
ExtDecl* pExtDecl(FILE *inp)
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
    return result.extdecl_;
  }
}

/* Entrypoint: parse ExtDecl* from string. */
ExtDecl* psExtDecl(const char *str)
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
    return result.extdecl_;
  }
}

/* Entrypoint: parse ListExtDecl* from file. */
ListExtDecl* pListExtDecl(FILE *inp)
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
    return result.listextdecl_;
  }
}

/* Entrypoint: parse ListExtDecl* from string. */
ListExtDecl* psListExtDecl(const char *str)
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
    return result.listextdecl_;
  }
}

/* Entrypoint: parse VolatileOpt* from file. */
VolatileOpt* pVolatileOpt(FILE *inp)
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
    return result.volatileopt_;
  }
}

/* Entrypoint: parse VolatileOpt* from string. */
VolatileOpt* psVolatileOpt(const char *str)
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
    return result.volatileopt_;
  }
}

/* Entrypoint: parse ListVolatileOpt* from file. */
ListVolatileOpt* pListVolatileOpt(FILE *inp)
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
    return result.listvolatileopt_;
  }
}

/* Entrypoint: parse ListVolatileOpt* from string. */
ListVolatileOpt* psListVolatileOpt(const char *str)
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
    return result.listvolatileopt_;
  }
}

/* Entrypoint: parse TypeAnnot* from file. */
TypeAnnot* pTypeAnnot(FILE *inp)
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
    return result.typeannot_;
  }
}

/* Entrypoint: parse TypeAnnot* from string. */
TypeAnnot* psTypeAnnot(const char *str)
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
    return result.typeannot_;
  }
}

/* Entrypoint: parse OptSemicolon* from file. */
OptSemicolon* pOptSemicolon(FILE *inp)
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
    return result.optsemicolon_;
  }
}

/* Entrypoint: parse OptSemicolon* from string. */
OptSemicolon* psOptSemicolon(const char *str)
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
    return result.optsemicolon_;
  }
}

/* Entrypoint: parse ModelAnnot* from file. */
ModelAnnot* pModelAnnot(FILE *inp)
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
    return result.modelannot_;
  }
}

/* Entrypoint: parse ModelAnnot* from string. */
ModelAnnot* psModelAnnot(const char *str)
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
    return result.modelannot_;
  }
}

/* Entrypoint: parse PolyIdType* from file. */
PolyIdType* pPolyIdType(FILE *inp)
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
    return result.polyidtype_;
  }
}

/* Entrypoint: parse PolyIdType* from string. */
PolyIdType* psPolyIdType(const char *str)
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
    return result.polyidtype_;
  }
}

/* Entrypoint: parse PolyId* from file. */
PolyId* pPolyId(FILE *inp)
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
    return result.polyid_;
  }
}

/* Entrypoint: parse PolyId* from string. */
PolyId* psPolyId(const char *str)
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
    return result.polyid_;
  }
}

/* Entrypoint: parse OptParameters* from file. */
OptParameters* pOptParameters(FILE *inp)
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
    return result.optparameters_;
  }
}

/* Entrypoint: parse OptParameters* from string. */
OptParameters* psOptParameters(const char *str)
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
    return result.optparameters_;
  }
}

/* Entrypoint: parse Parameters* from file. */
Parameters* pParameters(FILE *inp)
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
    return result.parameters_;
  }
}

/* Entrypoint: parse Parameters* from string. */
Parameters* psParameters(const char *str)
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
    return result.parameters_;
  }
}

/* Entrypoint: parse LogicDef* from file. */
LogicDef* pLogicDef(FILE *inp)
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
    return result.logicdef_;
  }
}

/* Entrypoint: parse LogicDef* from string. */
LogicDef* psLogicDef(const char *str)
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
    return result.logicdef_;
  }
}

/* Entrypoint: parse DeprecatedLogicDecl* from file. */
DeprecatedLogicDecl* pDeprecatedLogicDecl(FILE *inp)
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
    return result.deprecatedlogicdecl_;
  }
}

/* Entrypoint: parse DeprecatedLogicDecl* from string. */
DeprecatedLogicDecl* psDeprecatedLogicDecl(const char *str)
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
    return result.deprecatedlogicdecl_;
  }
}

/* Entrypoint: parse LogicDecl* from file. */
LogicDecl* pLogicDecl(FILE *inp)
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
    return result.logicdecl_;
  }
}

/* Entrypoint: parse LogicDecl* from string. */
LogicDecl* psLogicDecl(const char *str)
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
    return result.logicdecl_;
  }
}

/* Entrypoint: parse ListLogicDecl* from file. */
ListLogicDecl* pListLogicDecl(FILE *inp)
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
    return result.listlogicdecl_;
  }
}

/* Entrypoint: parse ListLogicDecl* from string. */
ListLogicDecl* psListLogicDecl(const char *str)
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
    return result.listlogicdecl_;
  }
}

/* Entrypoint: parse ReadsClause* from file. */
ReadsClause* pReadsClause(FILE *inp)
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
    return result.readsclause_;
  }
}

/* Entrypoint: parse ReadsClause* from string. */
ReadsClause* psReadsClause(const char *str)
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
    return result.readsclause_;
  }
}

/* Entrypoint: parse Typedef* from file. */
Typedef* pTypedef(FILE *inp)
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
    return result.typedef_;
  }
}

/* Entrypoint: parse Typedef* from string. */
Typedef* psTypedef(const char *str)
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
    return result.typedef_;
  }
}

/* Entrypoint: parse DataconsWithSeparator* from file. */
DataconsWithSeparator* pDataconsWithSeparator(FILE *inp)
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
    return result.dataconswithseparator_;
  }
}

/* Entrypoint: parse DataconsWithSeparator* from string. */
DataconsWithSeparator* psDataconsWithSeparator(const char *str)
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
    return result.dataconswithseparator_;
  }
}

/* Entrypoint: parse ListDataconsWithSeparator* from file. */
ListDataconsWithSeparator* pListDataconsWithSeparator(FILE *inp)
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
std::reverse(result.listdataconswithseparator_->begin(), result.listdataconswithseparator_->end());
    return result.listdataconswithseparator_;
  }
}

/* Entrypoint: parse ListDataconsWithSeparator* from string. */
ListDataconsWithSeparator* psListDataconsWithSeparator(const char *str)
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
std::reverse(result.listdataconswithseparator_->begin(), result.listdataconswithseparator_->end());
    return result.listdataconswithseparator_;
  }
}

/* Entrypoint: parse Datacons* from file. */
Datacons* pDatacons(FILE *inp)
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
    return result.datacons_;
  }
}

/* Entrypoint: parse Datacons* from string. */
Datacons* psDatacons(const char *str)
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
    return result.datacons_;
  }
}

/* Entrypoint: parse Indcase* from file. */
Indcase* pIndcase(FILE *inp)
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
    return result.indcase_;
  }
}

/* Entrypoint: parse Indcase* from string. */
Indcase* psIndcase(const char *str)
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
    return result.indcase_;
  }
}

/* Entrypoint: parse ListIndcase* from file. */
ListIndcase* pListIndcase(FILE *inp)
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
    return result.listindcase_;
  }
}

/* Entrypoint: parse ListIndcase* from string. */
ListIndcase* psListIndcase(const char *str)
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
    return result.listindcase_;
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

/* Entrypoint: parse BehaviorNameList* from file. */
BehaviorNameList* pBehaviorNameList(FILE *inp)
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
    return result.behaviornamelist_;
  }
}

/* Entrypoint: parse BehaviorNameList* from string. */
BehaviorNameList* psBehaviorNameList(const char *str)
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
    return result.behaviornamelist_;
  }
}

/* Entrypoint: parse BehaviorName* from file. */
BehaviorName* pBehaviorName(FILE *inp)
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
    return result.behaviorname_;
  }
}

/* Entrypoint: parse BehaviorName* from string. */
BehaviorName* psBehaviorName(const char *str)
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
    return result.behaviorname_;
  }
}

/* Entrypoint: parse ListBehaviorName* from file. */
ListBehaviorName* pListBehaviorName(FILE *inp)
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
std::reverse(result.listbehaviorname_->begin(), result.listbehaviorname_->end());
    return result.listbehaviorname_;
  }
}

/* Entrypoint: parse ListBehaviorName* from string. */
ListBehaviorName* psListBehaviorName(const char *str)
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
std::reverse(result.listbehaviorname_->begin(), result.listbehaviorname_->end());
    return result.listbehaviorname_;
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

/* Entrypoint: parse IdentifierOrTypename* from file. */
IdentifierOrTypename* pIdentifierOrTypename(FILE *inp)
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
    return result.identifierortypename_;
  }
}

/* Entrypoint: parse IdentifierOrTypename* from string. */
IdentifierOrTypename* psIdentifierOrTypename(const char *str)
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
    return result.identifierortypename_;
  }
}

/* Entrypoint: parse IdentifierOrTypenameFull* from file. */
IdentifierOrTypenameFull* pIdentifierOrTypenameFull(FILE *inp)
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
    return result.identifierortypenamefull_;
  }
}

/* Entrypoint: parse IdentifierOrTypenameFull* from string. */
IdentifierOrTypenameFull* psIdentifierOrTypenameFull(const char *str)
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
    return result.identifierortypenamefull_;
  }
}

/* Entrypoint: parse ListIdentifierOrTypenameFull* from file. */
ListIdentifierOrTypenameFull* pListIdentifierOrTypenameFull(FILE *inp)
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
std::reverse(result.listidentifierortypenamefull_->begin(), result.listidentifierortypenamefull_->end());
    return result.listidentifierortypenamefull_;
  }
}

/* Entrypoint: parse ListIdentifierOrTypenameFull* from string. */
ListIdentifierOrTypenameFull* psListIdentifierOrTypenameFull(const char *str)
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
std::reverse(result.listidentifierortypenamefull_->begin(), result.listidentifierortypenamefull_->end());
    return result.listidentifierortypenamefull_;
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

/* Entrypoint: parse BoundedVar* from file. */
BoundedVar* pBoundedVar(FILE *inp)
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
    return result.boundedvar_;
  }
}

/* Entrypoint: parse BoundedVar* from string. */
BoundedVar* psBoundedVar(const char *str)
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
    return result.boundedvar_;
  }
}

/* Entrypoint: parse CKeyword* from file. */
CKeyword* pCKeyword(FILE *inp)
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
    return result.ckeyword_;
  }
}

/* Entrypoint: parse CKeyword* from string. */
CKeyword* psCKeyword(const char *str)
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
    return result.ckeyword_;
  }
}

/* Entrypoint: parse ACSLCKeyword* from file. */
ACSLCKeyword* pACSLCKeyword(FILE *inp)
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
    return result.acslckeyword_;
  }
}

/* Entrypoint: parse ACSLCKeyword* from string. */
ACSLCKeyword* psACSLCKeyword(const char *str)
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
    return result.acslckeyword_;
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

/* Entrypoint: parse IsACSLSpec* from file. */
IsACSLSpec* pIsACSLSpec(FILE *inp)
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
    return result.isacslspec_;
  }
}

/* Entrypoint: parse IsACSLSpec* from string. */
IsACSLSpec* psIsACSLSpec(const char *str)
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
    return result.isacslspec_;
  }
}

/* Entrypoint: parse IsACSLDeclOrCodeAnnot* from file. */
IsACSLDeclOrCodeAnnot* pIsACSLDeclOrCodeAnnot(FILE *inp)
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
    return result.isacsldeclorcodeannot_;
  }
}

/* Entrypoint: parse IsACSLDeclOrCodeAnnot* from string. */
IsACSLDeclOrCodeAnnot* psIsACSLDeclOrCodeAnnot(const char *str)
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
    return result.isacsldeclorcodeannot_;
  }
}

/* Entrypoint: parse IsACSLTypename* from file. */
IsACSLTypename* pIsACSLTypename(FILE *inp)
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
    return result.isacsltypename_;
  }
}

/* Entrypoint: parse IsACSLTypename* from string. */
IsACSLTypename* psIsACSLTypename(const char *str)
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
    return result.isacsltypename_;
  }
}

/* Entrypoint: parse IsExtSpec* from file. */
IsExtSpec* pIsExtSpec(FILE *inp)
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
    return result.isextspec_;
  }
}

/* Entrypoint: parse IsExtSpec* from string. */
IsExtSpec* psIsExtSpec(const char *str)
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
    return result.isextspec_;
  }
}

/* Entrypoint: parse Keyword* from file. */
Keyword* pKeyword(FILE *inp)
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
    return result.keyword_;
  }
}

/* Entrypoint: parse Keyword* from string. */
Keyword* psKeyword(const char *str)
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
    return result.keyword_;
  }
}

/* Entrypoint: parse BSKeyword* from file. */
BSKeyword* pBSKeyword(FILE *inp)
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
    return result.bskeyword_;
  }
}

/* Entrypoint: parse BSKeyword* from string. */
BSKeyword* psBSKeyword(const char *str)
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
    return result.bskeyword_;
  }
}

/* Entrypoint: parse Wildcard* from file. */
Wildcard* pWildcard(FILE *inp)
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
    return result.wildcard_;
  }
}

/* Entrypoint: parse Wildcard* from string. */
Wildcard* psWildcard(const char *str)
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
    return result.wildcard_;
  }
}

/* Entrypoint: parse ListWildcard* from file. */
ListWildcard* pListWildcard(FILE *inp)
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
std::reverse(result.listwildcard_->begin(), result.listwildcard_->end());
    return result.listwildcard_;
  }
}

/* Entrypoint: parse ListWildcard* from string. */
ListWildcard* psListWildcard(const char *str)
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
std::reverse(result.listwildcard_->begin(), result.listwildcard_->end());
    return result.listwildcard_;
  }
}


}
