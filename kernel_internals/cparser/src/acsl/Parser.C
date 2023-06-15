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
#line 22 "cparser.y"

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
  YYSYMBOL__SYMB_55 = 40,                  /* _SYMB_55  */
  YYSYMBOL__CARET = 41,                    /* _CARET  */
  YYSYMBOL__CARETEQ = 42,                  /* _CARETEQ  */
  YYSYMBOL__SYMB_53 = 43,                  /* _SYMB_53  */
  YYSYMBOL__SYMB_4 = 44,                   /* _SYMB_4  */
  YYSYMBOL__SYMB_52 = 45,                  /* _SYMB_52  */
  YYSYMBOL__SYMB_51 = 46,                  /* _SYMB_51  */
  YYSYMBOL__SYMB_58 = 47,                  /* _SYMB_58  */
  YYSYMBOL__SYMB_45 = 48,                  /* _SYMB_45  */
  YYSYMBOL__SYMB_7 = 49,                   /* _SYMB_7  */
  YYSYMBOL__SYMB_6 = 50,                   /* _SYMB_6  */
  YYSYMBOL__SYMB_5 = 51,                   /* _SYMB_5  */
  YYSYMBOL__SYMB_56 = 52,                  /* _SYMB_56  */
  YYSYMBOL__SYMB_49 = 53,                  /* _SYMB_49  */
  YYSYMBOL__SYMB_50 = 54,                  /* _SYMB_50  */
  YYSYMBOL__SYMB_54 = 55,                  /* _SYMB_54  */
  YYSYMBOL__SYMB_47 = 56,                  /* _SYMB_47  */
  YYSYMBOL__SYMB_57 = 57,                  /* _SYMB_57  */
  YYSYMBOL__SYMB_48 = 58,                  /* _SYMB_48  */
  YYSYMBOL__KW_auto = 59,                  /* _KW_auto  */
  YYSYMBOL__KW_break = 60,                 /* _KW_break  */
  YYSYMBOL__KW_case = 61,                  /* _KW_case  */
  YYSYMBOL__KW_char = 62,                  /* _KW_char  */
  YYSYMBOL__KW_continue = 63,              /* _KW_continue  */
  YYSYMBOL__KW_default = 64,               /* _KW_default  */
  YYSYMBOL__KW_do = 65,                    /* _KW_do  */
  YYSYMBOL__KW_double = 66,                /* _KW_double  */
  YYSYMBOL__KW_else = 67,                  /* _KW_else  */
  YYSYMBOL__KW_enum = 68,                  /* _KW_enum  */
  YYSYMBOL__KW_extern = 69,                /* _KW_extern  */
  YYSYMBOL__KW_float = 70,                 /* _KW_float  */
  YYSYMBOL__KW_for = 71,                   /* _KW_for  */
  YYSYMBOL__KW_ghost = 72,                 /* _KW_ghost  */
  YYSYMBOL__KW_goto = 73,                  /* _KW_goto  */
  YYSYMBOL__KW_if = 74,                    /* _KW_if  */
  YYSYMBOL__KW_long = 75,                  /* _KW_long  */
  YYSYMBOL__KW_pragma = 76,                /* _KW_pragma  */
  YYSYMBOL__KW_register = 77,              /* _KW_register  */
  YYSYMBOL__KW_return = 78,                /* _KW_return  */
  YYSYMBOL__KW_short = 79,                 /* _KW_short  */
  YYSYMBOL__KW_sizeof = 80,                /* _KW_sizeof  */
  YYSYMBOL__KW_static = 81,                /* _KW_static  */
  YYSYMBOL__KW_struct = 82,                /* _KW_struct  */
  YYSYMBOL__KW_switch = 83,                /* _KW_switch  */
  YYSYMBOL__KW_typedef = 84,               /* _KW_typedef  */
  YYSYMBOL__KW_union = 85,                 /* _KW_union  */
  YYSYMBOL__KW_unsigned = 86,              /* _KW_unsigned  */
  YYSYMBOL__KW_void = 87,                  /* _KW_void  */
  YYSYMBOL__KW_while = 88,                 /* _KW_while  */
  YYSYMBOL__BAR = 89,                      /* _BAR  */
  YYSYMBOL__BAREQ = 90,                    /* _BAREQ  */
  YYSYMBOL__DBAR = 91,                     /* _DBAR  */
  YYSYMBOL__TILDE = 92,                    /* _TILDE  */
  YYSYMBOL_T_ALIGNOF = 93,                 /* T_ALIGNOF  */
  YYSYMBOL_T_ASM = 94,                     /* T_ASM  */
  YYSYMBOL_T_ATTRIBUTE = 95,               /* T_ATTRIBUTE  */
  YYSYMBOL_T_ATTRIBUTE_ANNOT = 96,         /* T_ATTRIBUTE_ANNOT  */
  YYSYMBOL_T_BLOCKATTRIBUTE = 97,          /* T_BLOCKATTRIBUTE  */
  YYSYMBOL_T_CODE_ANNOT = 98,              /* T_CODE_ANNOT  */
  YYSYMBOL_T_CONST = 99,                   /* T_CONST  */
  YYSYMBOL_T_CST_WCHAR = 100,              /* T_CST_WCHAR  */
  YYSYMBOL_T_CST_WSTRING = 101,            /* T_CST_WSTRING  */
  YYSYMBOL_T_DECL = 102,                   /* T_DECL  */
  YYSYMBOL_T_FUNCTION__ = 103,             /* T_FUNCTION__  */
  YYSYMBOL_T_INLINE = 104,                 /* T_INLINE  */
  YYSYMBOL_T_INT = 105,                    /* T_INT  */
  YYSYMBOL_T_LBRACE = 106,                 /* T_LBRACE  */
  YYSYMBOL_T_LBRACKET = 107,               /* T_LBRACKET  */
  YYSYMBOL_T_LOOP_ANNOT = 108,             /* T_LOOP_ANNOT  */
  YYSYMBOL_T_MSATTR = 109,                 /* T_MSATTR  */
  YYSYMBOL_T_NAMEDTYPE = 110,              /* T_NAMEDTYPE  */
  YYSYMBOL_T_RBRACE = 111,                 /* T_RBRACE  */
  YYSYMBOL_T_RBRACKET = 112,               /* T_RBRACKET  */
  YYSYMBOL_T_RESTRICT = 113,               /* T_RESTRICT  */
  YYSYMBOL_T_RGHOST = 114,                 /* T_RGHOST  */
  YYSYMBOL_T_SIGNED = 115,                 /* T_SIGNED  */
  YYSYMBOL_T_SPEC = 116,                   /* T_SPEC  */
  YYSYMBOL_T_TYPEOF = 117,                 /* T_TYPEOF  */
  YYSYMBOL_T_VOLATILE = 118,               /* T_VOLATILE  */
  YYSYMBOL__STRING_ = 119,                 /* _STRING_  */
  YYSYMBOL__CHAR_ = 120,                   /* _CHAR_  */
  YYSYMBOL__INTEGER_ = 121,                /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 122,                 /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 123,                  /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 124,                 /* $accept  */
  YYSYMBOL_Program = 125,                  /* Program  */
  YYSYMBOL_Globals = 126,                  /* Globals  */
  YYSYMBOL_GhostGlobals = 127,             /* GhostGlobals  */
  YYSYMBOL_Global = 128,                   /* Global  */
  YYSYMBOL_IdOrTypenameAsId = 129,         /* IdOrTypenameAsId  */
  YYSYMBOL_IdOrTypename = 130,             /* IdOrTypename  */
  YYSYMBOL_MaybeComma = 131,               /* MaybeComma  */
  YYSYMBOL_AssignExpr15 = 132,             /* AssignExpr15  */
  YYSYMBOL_AssignExpr14 = 133,             /* AssignExpr14  */
  YYSYMBOL_OffsetofMemberDesignator = 134, /* OffsetofMemberDesignator  */
  YYSYMBOL_AssignExpr13 = 135,             /* AssignExpr13  */
  YYSYMBOL_AssignExpr12 = 136,             /* AssignExpr12  */
  YYSYMBOL_AssignExpr11 = 137,             /* AssignExpr11  */
  YYSYMBOL_AssignExpr10 = 138,             /* AssignExpr10  */
  YYSYMBOL_AssignExpr9 = 139,              /* AssignExpr9  */
  YYSYMBOL_AssignExpr8 = 140,              /* AssignExpr8  */
  YYSYMBOL_AssignExpr7 = 141,              /* AssignExpr7  */
  YYSYMBOL_AssignExpr6 = 142,              /* AssignExpr6  */
  YYSYMBOL_AssignExpr5 = 143,              /* AssignExpr5  */
  YYSYMBOL_AssignExpr4 = 144,              /* AssignExpr4  */
  YYSYMBOL_AssignExpr3 = 145,              /* AssignExpr3  */
  YYSYMBOL_AssignExpr2 = 146,              /* AssignExpr2  */
  YYSYMBOL_AssignExpr1 = 147,              /* AssignExpr1  */
  YYSYMBOL_AssignExpr = 148,               /* AssignExpr  */
  YYSYMBOL_Expression = 149,               /* Expression  */
  YYSYMBOL_Constant = 150,                 /* Constant  */
  YYSYMBOL_StringConstant = 151,           /* StringConstant  */
  YYSYMBOL_WStringList = 152,              /* WStringList  */
  YYSYMBOL_OneString = 153,                /* OneString  */
  YYSYMBOL_ListOneString = 154,            /* ListOneString  */
  YYSYMBOL_InitExpression = 155,           /* InitExpression  */
  YYSYMBOL_InitializerListOpt = 156,       /* InitializerListOpt  */
  YYSYMBOL_InitializerSingle = 157,        /* InitializerSingle  */
  YYSYMBOL_ListInitializerSingle = 158,    /* ListInitializerSingle  */
  YYSYMBOL_EqOpt = 159,                    /* EqOpt  */
  YYSYMBOL_InitDesignators = 160,          /* InitDesignators  */
  YYSYMBOL_InitDesignatorsOpt = 161,       /* InitDesignatorsOpt  */
  YYSYMBOL_GhostArgumentsOpt = 162,        /* GhostArgumentsOpt  */
  YYSYMBOL_Arguments = 163,                /* Arguments  */
  YYSYMBOL_OptExpression = 164,            /* OptExpression  */
  YYSYMBOL_ListExpression = 165,           /* ListExpression  */
  YYSYMBOL_CommaExpressionOpt = 166,       /* CommaExpressionOpt  */
  YYSYMBOL_Block = 167,                    /* Block  */
  YYSYMBOL_BlockAttrs = 168,               /* BlockAttrs  */
  YYSYMBOL_BlockElement = 169,             /* BlockElement  */
  YYSYMBOL_ListBlockElement = 170,         /* ListBlockElement  */
  YYSYMBOL_Annot = 171,                    /* Annot  */
  YYSYMBOL_ListAnnot = 172,                /* ListAnnot  */
  YYSYMBOL_LocalLabel = 173,               /* LocalLabel  */
  YYSYMBOL_ListLocalLabel = 174,           /* ListLocalLabel  */
  YYSYMBOL_LocalLabelName = 175,           /* LocalLabelName  */
  YYSYMBOL_ListLocalLabelName = 176,       /* ListLocalLabelName  */
  YYSYMBOL_AnnotatedStmt = 177,            /* AnnotatedStmt  */
  YYSYMBOL_ElsePart = 178,                 /* ElsePart  */
  YYSYMBOL_Statement = 179,                /* Statement  */
  YYSYMBOL_OptLoopAnnotations = 180,       /* OptLoopAnnotations  */
  YYSYMBOL_ForClause = 181,                /* ForClause  */
  YYSYMBOL_GhostParameterOpt = 182,        /* GhostParameterOpt  */
  YYSYMBOL_Declaration = 183,              /* Declaration  */
  YYSYMBOL_GenericAssociation = 184,       /* GenericAssociation  */
  YYSYMBOL_ListGenericAssociation = 185,   /* ListGenericAssociation  */
  YYSYMBOL_DeclAndInitDeclAttrList = 186,  /* DeclAndInitDeclAttrList  */
  YYSYMBOL_InitDeclaratorAttr = 187,       /* InitDeclaratorAttr  */
  YYSYMBOL_ListInitDeclaratorAttr = 188,   /* ListInitDeclaratorAttr  */
  YYSYMBOL_InitDeclarator = 189,           /* InitDeclarator  */
  YYSYMBOL_DeclSpecWOType = 190,           /* DeclSpecWOType  */
  YYSYMBOL_DeclSpecList = 191,             /* DeclSpecList  */
  YYSYMBOL_DeclSpecListNoNamed = 192,      /* DeclSpecListNoNamed  */
  YYSYMBOL_TypeSpec = 193,                 /* TypeSpec  */
  YYSYMBOL_StructDeclList = 194,           /* StructDeclList  */
  YYSYMBOL_StaticAssertDeclaration = 195,  /* StaticAssertDeclaration  */
  YYSYMBOL_FieldDecl = 196,                /* FieldDecl  */
  YYSYMBOL_ListFieldDecl = 197,            /* ListFieldDecl  */
  YYSYMBOL_Enumerator = 198,               /* Enumerator  */
  YYSYMBOL_ListEnumerator = 199,           /* ListEnumerator  */
  YYSYMBOL_Declarator = 200,               /* Declarator  */
  YYSYMBOL_ListDeclarator = 201,           /* ListDeclarator  */
  YYSYMBOL_AttributesOrStatic = 202,       /* AttributesOrStatic  */
  YYSYMBOL_DirectDecl = 203,               /* DirectDecl  */
  YYSYMBOL_RestParList = 204,              /* RestParList  */
  YYSYMBOL_ParameterDecl = 205,            /* ParameterDecl  */
  YYSYMBOL_ListParameterDecl = 206,        /* ListParameterDecl  */
  YYSYMBOL_DirectOldProtoDecl = 207,       /* DirectOldProtoDecl  */
  YYSYMBOL_ListIdent = 208,                /* ListIdent  */
  YYSYMBOL_OldPardefList = 209,            /* OldPardefList  */
  YYSYMBOL_OldPardef = 210,                /* OldPardef  */
  YYSYMBOL_ListOldPardef = 211,            /* ListOldPardef  */
  YYSYMBOL_PointerOpt = 212,               /* PointerOpt  */
  YYSYMBOL_TypeName = 213,                 /* TypeName  */
  YYSYMBOL_AbstractDecl = 214,             /* AbstractDecl  */
  YYSYMBOL_AbsDirectDecl = 215,            /* AbsDirectDecl  */
  YYSYMBOL_AbsDirectDeclOpt = 216,         /* AbsDirectDeclOpt  */
  YYSYMBOL_FunctionDef = 217,              /* FunctionDef  */
  YYSYMBOL_FunctionDefStart = 218,         /* FunctionDefStart  */
  YYSYMBOL_CVSpec = 219,                   /* CVSpec  */
  YYSYMBOL_AttributesWithAsm = 220,        /* AttributesWithAsm  */
  YYSYMBOL_AttributeNocv = 221,            /* AttributeNocv  */
  YYSYMBOL_ListAttributeNocv = 222,        /* ListAttributeNocv  */
  YYSYMBOL_Attribute = 223,                /* Attribute  */
  YYSYMBOL_ListAttribute = 224,            /* ListAttribute  */
  YYSYMBOL_JustAttribute = 225,            /* JustAttribute  */
  YYSYMBOL_ListJustAttribute = 226,        /* ListJustAttribute  */
  YYSYMBOL_Pragma = 227,                   /* Pragma  */
  YYSYMBOL_VarAttr = 228,                  /* VarAttr  */
  YYSYMBOL_BasicAttribute = 229,           /* BasicAttribute  */
  YYSYMBOL_ListBasicAttribute = 230,       /* ListBasicAttribute  */
  YYSYMBOL_ParameterAttrListNE = 231,      /* ParameterAttrListNE  */
  YYSYMBOL_ParamAttrListNE = 232,          /* ParamAttrListNE  */
  YYSYMBOL_Attr14 = 233,                   /* Attr14  */
  YYSYMBOL_Attr13 = 234,                   /* Attr13  */
  YYSYMBOL_Attr12 = 235,                   /* Attr12  */
  YYSYMBOL_Attr11 = 236,                   /* Attr11  */
  YYSYMBOL_Attr10 = 237,                   /* Attr10  */
  YYSYMBOL_Attr9 = 238,                    /* Attr9  */
  YYSYMBOL_Attr8 = 239,                    /* Attr8  */
  YYSYMBOL_Attr7 = 240,                    /* Attr7  */
  YYSYMBOL_Attr6 = 241,                    /* Attr6  */
  YYSYMBOL_Attr5 = 242,                    /* Attr5  */
  YYSYMBOL_Attr4 = 243,                    /* Attr4  */
  YYSYMBOL_Attr3 = 244,                    /* Attr3  */
  YYSYMBOL_Attr2 = 245,                    /* Attr2  */
  YYSYMBOL_Attr1 = 246,                    /* Attr1  */
  YYSYMBOL_Attr = 247,                     /* Attr  */
  YYSYMBOL_ListAttr = 248,                 /* ListAttr  */
  YYSYMBOL_AttrTest = 249,                 /* AttrTest  */
  YYSYMBOL_AttrList = 250,                 /* AttrList  */
  YYSYMBOL_Asmattr = 251,                  /* Asmattr  */
  YYSYMBOL_ListAsmattr = 252,              /* ListAsmattr  */
  YYSYMBOL_Asmoutputs = 253,               /* Asmoutputs  */
  YYSYMBOL_Asmoperands = 254,              /* Asmoperands  */
  YYSYMBOL_Asmoperand = 255,               /* Asmoperand  */
  YYSYMBOL_ListAsmoperand = 256,           /* ListAsmoperand  */
  YYSYMBOL_Asminputs = 257,                /* Asminputs  */
  YYSYMBOL_Asmopname = 258,                /* Asmopname  */
  YYSYMBOL_Asmclobber = 259,               /* Asmclobber  */
  YYSYMBOL_ListStringConstant = 260,       /* ListStringConstant  */
  YYSYMBOL_Asmlabels = 261                 /* Asmlabels  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 167 "cparser.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, acslget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 412 "Parser.C"


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
#define YYFINAL  125
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3534

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  124
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  138
/* YYNRULES -- Number of rules.  */
#define YYNRULES  455
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  870

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
       0,   443,   443,   445,   446,   447,   448,   450,   451,   452,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   464,
     465,   467,   469,   470,   472,   473,   474,   475,   476,   477,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   491,   492,   493,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   510,   511,
     513,   514,   515,   516,   518,   519,   520,   522,   523,   524,
     526,   527,   528,   529,   530,   532,   533,   534,   536,   537,
     539,   540,   542,   543,   545,   546,   548,   549,   551,   552,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   567,   569,   570,   571,   572,   573,   574,   576,
     578,   579,   580,   581,   583,   584,   585,   587,   588,   590,
     591,   593,   594,   595,   597,   598,   599,   601,   602,   604,
     605,   607,   608,   609,   611,   612,   614,   615,   617,   618,
     620,   621,   623,   624,   626,   627,   629,   631,   632,   634,
     635,   636,   638,   639,   641,   642,   644,   645,   647,   649,
     650,   652,   654,   655,   657,   659,   660,   661,   662,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   689,   690,   692,   693,   695,   696,   698,
     699,   700,   701,   702,   703,   705,   706,   708,   709,   711,
     712,   714,   716,   717,   719,   720,   722,   723,   724,   725,
     726,   727,   728,   729,   730,   732,   733,   734,   735,   737,
     738,   739,   740,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   773,   774,   775,   776,   777,   778,   779,
     781,   782,   784,   785,   786,   788,   789,   791,   792,   794,
     795,   797,   799,   800,   802,   803,   804,   806,   807,   808,
     809,   810,   812,   813,   815,   816,   817,   818,   820,   821,
     823,   825,   826,   828,   829,   830,   832,   834,   835,   837,
     838,   840,   841,   843,   844,   846,   847,   848,   849,   851,
     852,   854,   855,   857,   858,   859,   860,   861,   863,   864,
     865,   866,   867,   869,   870,   871,   872,   874,   875,   876,
     877,   878,   880,   881,   883,   884,   885,   886,   887,   888,
     890,   891,   893,   894,   896,   897,   899,   900,   901,   902,
     904,   905,   906,   907,   908,   909,   911,   912,   913,   915,
     916,   918,   919,   920,   922,   923,   925,   926,   927,   929,
     930,   931,   932,   933,   934,   935,   937,   938,   939,   940,
     941,   942,   943,   944,   945,   946,   947,   949,   950,   951,
     952,   954,   955,   956,   958,   959,   960,   962,   963,   964,
     965,   966,   968,   969,   970,   972,   973,   975,   976,   978,
     979,   981,   982,   984,   985,   987,   988,   990,   991,   993,
     994,   996,   998,   999,  1001,  1002,  1004,  1005,  1007,  1008,
    1010,  1011,  1013,  1015,  1016,  1018,  1019,  1021,  1022,  1024,
    1025,  1026,  1028,  1029,  1031,  1032
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
  "_QUESTION", "_SYMB_55", "_CARET", "_CARETEQ", "_SYMB_53", "_SYMB_4",
  "_SYMB_52", "_SYMB_51", "_SYMB_58", "_SYMB_45", "_SYMB_7", "_SYMB_6",
  "_SYMB_5", "_SYMB_56", "_SYMB_49", "_SYMB_50", "_SYMB_54", "_SYMB_47",
  "_SYMB_57", "_SYMB_48", "_KW_auto", "_KW_break", "_KW_case", "_KW_char",
  "_KW_continue", "_KW_default", "_KW_do", "_KW_double", "_KW_else",
  "_KW_enum", "_KW_extern", "_KW_float", "_KW_for", "_KW_ghost",
  "_KW_goto", "_KW_if", "_KW_long", "_KW_pragma", "_KW_register",
  "_KW_return", "_KW_short", "_KW_sizeof", "_KW_static", "_KW_struct",
  "_KW_switch", "_KW_typedef", "_KW_union", "_KW_unsigned", "_KW_void",
  "_KW_while", "_BAR", "_BAREQ", "_DBAR", "_TILDE", "T_ALIGNOF", "T_ASM",
  "T_ATTRIBUTE", "T_ATTRIBUTE_ANNOT", "T_BLOCKATTRIBUTE", "T_CODE_ANNOT",
  "T_CONST", "T_CST_WCHAR", "T_CST_WSTRING", "T_DECL", "T_FUNCTION__",
  "T_INLINE", "T_INT", "T_LBRACE", "T_LBRACKET", "T_LOOP_ANNOT",
  "T_MSATTR", "T_NAMEDTYPE", "T_RBRACE", "T_RBRACKET", "T_RESTRICT",
  "T_RGHOST", "T_SIGNED", "T_SPEC", "T_TYPEOF", "T_VOLATILE", "_STRING_",
  "_CHAR_", "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept", "Program",
  "Globals", "GhostGlobals", "Global", "IdOrTypenameAsId", "IdOrTypename",
  "MaybeComma", "AssignExpr15", "AssignExpr14", "OffsetofMemberDesignator",
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
  "ListStringConstant", "Asmlabels", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-628)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-441)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2948,  2948,  -628,  -628,  -628,    20,  -628,   100,  -628,  -628,
    -628,  -628,  -628,   295,   -29,  -628,  3103,  -628,  2390,  -628,
    -628,  -628,   309,  -628,   442,  -628,  -628,   192,   230,  -628,
    -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  3182,   277,
    -628,   313,   253,  -628,  2948,  -628,  3416,    32,  3416,  -628,
     -33,  -628,  -628,  -628,  -628,  1994,  2390,   347,   383,   294,
    -628,  -628,  -628,   323,    23,   327,  -628,  -628,  -628,  3261,
     -29,  -628,  -628,  -628,   425,  2948,  3103,  3103,  2390,  2390,
    2390,  2390,  2390,  2390,   412,  2056,  2390,  2114,  -628,   434,
    -628,   424,  -628,   448,   454,  -628,  -628,   405,  -628,    29,
    -628,   242,   333,   314,   399,    44,   463,   427,   384,   467,
      -3,   445,   461,  3027,   386,   334,  3027,   400,   352,   -29,
     506,   292,   -33,  1567,  2474,  -628,  -628,  -628,  -628,  -628,
     491,   502,    -4,    11,  3416,  -628,  3416,  -628,  -628,  1994,
    1994,    86,  1447,  1994,  1994,  2176,  1994,  2176,   511,   514,
     518,   523,  2234,  1994,  2296,  -628,    -5,  -628,  -628,  -628,
    -628,  -628,   139,  -628,   460,   288,   357,   340,   522,   287,
     525,   495,   449,   534,    19,  -628,  -628,   304,  -628,  -628,
    -628,    -5,   526,   533,  2390,   536,   520,   537,   538,   294,
    -628,   294,   453,  2948,  3416,  -628,    32,  -628,  2553,  -628,
    -628,  -628,  -628,  -628,   549,  -628,  -628,  -628,   443,  1447,
    -628,  -628,  1447,  -628,   446,  2356,  -628,  -628,  -628,   475,
     -29,  -628,  -628,    86,    86,  2390,  2390,  2390,  2390,  2390,
    2390,  2390,  2390,  2390,  2390,  2390,  2390,  2390,  2390,  2390,
    2390,  2390,  2390,  -628,  2390,  2390,  -628,  3027,   552,   241,
     455,   540,  3027,  3027,  3027,   471,   468,  3027,  3027,   474,
     569,  2390,  -628,   555,  -628,   576,    13,   578,  2869,   138,
     573,   379,   583,   582,   584,   591,  1412,  -628,  -628,   966,
    -628,  -628,   689,  -628,  -628,  -628,   152,  -628,  -628,  -628,
     586,   595,   597,   598,  -628,  -628,  1447,  -628,  -628,  -628,
    1994,  3416,  3416,  1994,  1447,  -628,  -628,  1447,  -628,  -628,
    -628,  1994,  -628,  -628,    86,    86,  1994,  1994,  1994,  1994,
    1994,  1994,  1994,  1994,  1994,  1994,  1994,  1994,  1994,  1994,
    1994,  1994,  1994,  1994,  1994,  1994,  1994,  1994,  1994,  1994,
    1994,  1994,  1994,  1994,  1994,  1994,  1994,  -628,   -29,  -628,
    2390,  -628,   600,  2390,  1994,   294,  -628,   507,   538,   538,
     294,   510,   292,   589,    11,   545,   611,  -628,  -628,   612,
     613,  -628,  -628,   614,  -628,   475,  -628,  -628,   515,  -628,
    -628,  -628,   242,   242,   333,   333,   314,   314,   314,   314,
     399,   399,    44,   463,   427,   384,  2390,   467,  -628,  -628,
    1994,  1994,  3027,   617,   602,   604,  -628,  3027,  -628,   529,
     531,  3027,  -628,   535,   539,  3027,   609,  -628,   633,  -628,
    -628,  -628,   643,  -628,  -628,   644,  -628,   647,  -628,   542,
    -628,    37,  -628,   545,  2869,   636,  3416,  -628,  -628,  -628,
    -628,  -628,  -628,  -628,  -628,   645,  -628,    42,   813,  -628,
    -628,  1412,  2632,   656,   773,  -628,  -628,    86,   657,  -628,
    -628,  1994,  -628,  -628,  1873,   660,   338,   651,   655,   658,
     663,   667,   668,  -628,  -628,  -628,   565,  -628,  -628,  -628,
    -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,  -628,
    -628,  -628,   288,   288,   357,   357,   340,   340,   340,   340,
     522,   522,   287,   525,   495,   449,   654,  -628,   534,   670,
    -628,  -628,   672,  -628,  -628,  -628,   574,   575,   538,  -628,
     808,  3416,   581,   581,  -628,  -628,  -628,   662,   348,  -628,
    -628,   136,  3027,  1994,  -628,  -628,  -628,   579,  -628,  -628,
     580,  -628,   681,  1412,  -628,     5,   587,  -628,  2869,  -628,
    -628,  -628,  -628,  -628,   682,   669,   671,   674,  -628,  -628,
    -628,    86,  1994,   676,   677,  -628,   585,   683,   688,   675,
     695,   545,   697,   698,   -29,  -628,   599,  -628,  1807,   631,
    -628,   699,   687,  2390,  -628,  -628,   813,  -628,   581,  -628,
    3340,    86,  3416,  3416,   581,   581,   646,  -628,  1994,  -628,
     704,  -628,  -628,   608,  2711,  -628,  2390,  -628,   -29,  -628,
    -628,  -628,  -628,  -628,  -628,   362,  1532,  2790,   981,  1994,
     708,  1532,   703,  -628,  -628,  3416,  -628,  -628,    62,     3,
     966,  -628,   813,  -628,  -628,   966,  -628,  -628,   545,  3416,
     710,  1807,  -628,   843,  -628,  -628,   713,    86,  -628,   719,
    -628,  1087,   623,   712,   724,   725,   716,  -628,    34,   733,
     735,   737,  -628,  -628,  -628,  -628,  -628,   738,   981,   740,
    -628,   741,   642,   641,   682,  -628,  -628,  -628,  1994,    62,
    -628,  -628,  -628,  -628,  -628,  -628,  -628,  1994,   -29,  -628,
    -628,  -628,   -33,   728,  1994,   730,   732,  -628,    22,   749,
    1936,   750,   690,  -628,  -628,   739,  -628,  3416,   742,   734,
    -628,  -628,  -628,   261,  -628,  -628,  -628,  1994,  3340,  -628,
    1994,  -628,   652,  1994,  -628,  -628,  1994,  -628,  -628,  -628,
    -628,  -628,  -628,   664,  -628,   981,  -628,   752,   118,  -628,
     237,  -628,  -628,  -628,  1994,   751,  1994,  -628,   753,  1994,
    -628,    36,  1687,  -628,  -628,  -628,  -628,   757,   759,  -628,
    -628,  -628,  -628,   678,   770,  -628,  -628,   780,   -33,  1994,
    -628,  -628,  1207,   764,  -628,   781,  -628,   782,   141,   -29,
    -628,  -628,  -628,  -628,  -628,   321,   711,  1327,  1994,  -628,
     696,   981,  1994,  -628,   774,  -628,  -628,  -628,  -628,  -628,
     -29,   785,  -628,   803,   787,  1994,  -628,   815,  -628,   819,
    -628,     4,  -628,   785,    95,   822,  1994,  -628,   807,  -628,
     -33,  -628,  -628,  -628,  -628,   825,   717,   814,   826,  -628,
     -29,   817,   834,  1994,  -628,  -628,  -628,   736,   821,   747,
      95,  -628,   744,   836,  -628,   824,   854,   804,  -628,  -628,
     846,  -628,  1994,  -628,  -628,  -628,   266,  -628,   858,  -628,
    -628,    86,   856,   850,  -628,  -628,  -628,   -29,  -628,  -628
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     3,   331,   235,   222,     0,   341,     0,   239,   340,
     219,   234,   241,     0,   217,   240,     0,   238,   356,   220,
     236,   218,     0,   216,     0,   243,   233,     0,     0,   332,
     328,    10,   221,   237,   339,   260,   330,   242,     0,     0,
     329,     0,     0,     2,     3,    11,   225,   309,   227,    12,
       0,   223,   224,    16,     6,     0,     0,     0,     0,     0,
      20,    19,    21,   255,   354,     0,   116,   115,   114,     0,
     117,   109,   217,     9,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   363,   361,
     364,   366,   367,   360,     0,   378,   368,   376,   379,   386,
     397,   401,   404,   407,   412,   415,   417,   419,   421,   423,
     425,   427,   357,   263,   244,     0,   263,   250,     0,     0,
       0,   309,     0,     0,     0,     1,     4,   226,   350,   200,
       0,   209,   214,     0,   229,   228,   231,   159,   322,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   110,   105,   103,   104,
      24,    30,    44,    58,    60,    64,    67,    70,    75,    78,
      80,    82,    84,    86,    88,    90,   102,     0,    25,   107,
     108,   117,   429,     0,     0,     0,   277,   279,    22,     0,
     355,     0,     0,     3,     0,    13,   309,   118,     0,     5,
       7,     8,   395,   394,     0,   393,   391,   392,     0,     0,
     387,   396,     0,   389,     0,     0,   361,   360,   375,   369,
     371,   374,   382,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   431,     0,     0,   358,   263,     0,   309,
       0,   268,   263,   263,   263,   245,     0,   263,   263,     0,
       0,   432,   202,     0,   321,     0,   312,     0,     0,   197,
     301,   309,     0,   298,   292,     0,   309,   199,   342,     0,
     350,   287,   333,   324,   230,   232,   147,    55,    54,    57,
     142,     0,     0,     0,    53,    51,     0,    45,    52,    46,
       0,     0,     0,     0,     0,    47,    56,     0,    49,   112,
     113,   138,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   140,     0,   203,     0,   111,
       0,   338,     0,   432,     0,     0,    23,     0,    22,    22,
       0,     0,   309,   214,     0,   197,     0,   377,   362,     0,
       0,   365,   381,     0,   370,   372,   383,   384,     0,   400,
     398,   399,   402,   403,   405,   406,   408,   410,   409,   411,
     414,   413,   416,   418,   420,   422,     0,   424,   428,   265,
       0,     0,   263,   275,     0,   272,   247,   263,   267,     0,
       0,   263,   252,     0,     0,   263,     0,   433,     0,   201,
     261,   350,   320,   311,   262,     0,    18,     0,   327,     0,
     294,   320,   295,   197,     0,     0,   303,   348,   349,   345,
     346,   347,   310,   344,   351,   212,   210,   309,   121,   119,
     215,   309,     0,     0,   350,   281,   350,     0,     0,   152,
     160,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,    37,    36,     0,    96,    97,    94,
      92,    93,    95,   100,    91,   101,    99,    98,    63,    61,
      62,    60,    65,    66,    68,    69,    71,    73,    72,    74,
      77,    76,    79,    81,    83,    85,     0,   141,    87,     0,
     430,   353,     0,   278,   280,   257,     0,     0,    22,    14,
     333,   303,   388,   390,   380,   373,   385,     0,     0,   274,
     264,   309,   263,     0,   269,   246,   249,     0,   251,   254,
       0,    15,     0,   309,   350,   350,     0,   297,     0,   302,
     350,   325,   299,   293,   309,   326,   307,   305,   342,   211,
     343,     0,     0,    24,     0,   126,     0,   127,   122,   130,
       0,   197,     0,     0,     0,   350,     0,   350,   144,   334,
     161,   162,     0,     0,   156,   143,   121,    59,     0,    29,
       0,     0,     0,     0,    48,    50,   136,    31,     0,   204,
       0,   256,   259,     0,     0,   326,     0,   270,     0,   276,
     266,   350,   248,   253,   337,   310,   309,     0,   313,   144,
       0,   309,   282,   306,    17,     0,   304,   213,   134,     0,
       0,   120,     0,   123,   129,     0,   288,   290,   197,   303,
       0,     0,   289,     0,   145,   284,     0,     0,   158,     0,
     153,   193,     0,     0,   207,     0,     0,    41,     0,     0,
       0,     0,    32,    89,   352,   258,   426,     0,   273,     0,
     318,     0,     0,     0,   309,   308,   135,   131,     0,   134,
     125,   128,   124,   291,   300,   350,   286,     0,     0,   163,
     148,   169,     0,     0,     0,     0,     0,   152,     0,     0,
       0,     0,   190,   154,   194,   260,   146,   156,     0,     0,
     172,   157,   150,     0,   149,   151,    40,     0,     0,    28,
       0,    35,     0,     0,    34,    33,   138,   271,   315,   317,
     316,   198,   283,     0,   132,   336,   285,     0,     0,   184,
       0,   185,   156,   156,     0,     0,     0,   182,     0,     0,
     436,     0,   193,   170,   342,   171,   156,     0,     0,   206,
     208,   205,    42,     0,     0,   133,   350,     0,     0,     0,
     156,   181,   193,     0,   186,     0,   183,     0,     0,     0,
     435,   434,   437,   156,   164,   156,     0,   140,     0,    43,
       0,   335,     0,   192,     0,   179,   155,   187,   156,   156,
       0,   438,   178,     0,     0,   140,   196,     0,   137,     0,
     156,   165,   174,   438,   447,     0,     0,   195,     0,   156,
       0,   180,   156,   156,   173,     0,     0,   445,   443,   441,
       0,     0,     0,   140,   175,   191,   166,     0,     0,     0,
     447,   439,   447,     0,   189,     0,     0,   167,   188,   448,
     449,   444,     0,   176,   156,   156,   454,   446,     0,   177,
     168,     0,   452,   454,   450,   442,   455,     0,   451,   453
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -628,  -628,    69,   251,  -628,    15,    73,  -318,  -628,  -628,
    -628,   165,   665,    78,    92,   235,   157,   546,   547,   551,
     544,   532,  -628,   281,  -142,   -46,  -628,    45,   -72,   -14,
     -65,  -271,   306,  -628,   248,  -628,  -575,   202,  -628,   170,
    -542,    51,   278,   -40,  -628,  -628,   201,  -628,  -546,  -628,
    -628,  -628,  -627,  -399,  -628,   147,  -628,  -628,  -403,   -15,
    -628,   190,  -118,  -628,   351,   464,    31,   337,   330,    71,
      88,  -628,  -628,   387,  -628,  -166,   -13,   236,  -628,   789,
    -431,   679,   494,  -628,  -186,  -510,  -628,   300,   -34,  -109,
     137,  -628,  -628,    16,   893,  -628,  -628,  -136,   183,  -264,
    -123,  -628,   301,     6,  -628,   -80,   721,   568,  -628,  -628,
    -628,   221,   271,   279,   380,   276,   705,   706,   707,   709,
     701,  -628,  -243,    26,   -41,  -628,   596,  -628,   200,   140,
     115,  -628,   116,  -628,  -628,  -628,    90,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    42,    43,    75,    44,    94,   281,   357,   161,   162,
     658,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   290,   178,   179,   180,   181,
      71,   565,   566,   567,   568,   635,   569,   677,   662,   472,
     506,   291,   645,   292,   459,   650,   584,   711,   752,   460,
     286,   581,   582,   753,   824,   712,   713,   805,   428,    45,
     654,   655,   130,   445,   446,   131,    46,   249,   135,    48,
     250,   251,   403,   404,   187,   188,   363,   623,   576,   520,
     272,   273,   274,   283,   275,   555,   556,   557,   364,   656,
     669,   545,   546,    49,    50,    51,   455,    52,   447,   444,
     276,    64,    65,   252,    96,    97,   220,   221,   222,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   182,   417,   396,   418,   782,   751,   815,
     827,   828,   829,   841,   830,   857,   863,   864
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    76,   398,   263,    70,   197,    53,    53,   450,   177,
     138,   605,   366,   133,   267,   183,   617,   219,   456,    66,
     689,   572,   280,   358,  -309,   359,   421,   678,    62,   279,
     551,    55,    77,   293,   132,   744,   243,    62,   651,    62,
     516,   517,    70,    66,   112,   128,   721,   779,   550,   237,
      53,   223,   224,   676,   195,   128,    70,   722,   345,    69,
     129,    76,    76,    95,    70,    70,    70,    70,    70,    70,
      54,   822,    70,   137,    67,    57,   823,   265,   238,   134,
      62,    53,   264,    70,   309,   561,    63,   133,   244,     6,
      68,   310,    77,    77,     7,   114,   156,   117,    67,     9,
     369,    95,  -323,   370,   676,    70,   204,  -440,   132,   349,
     346,    56,  -319,   126,    68,   679,   197,   620,    58,   136,
    -309,    60,  -440,    95,    95,    95,    95,    95,    95,   684,
      62,    95,    60,    62,    61,   780,   225,    28,   192,   219,
     443,   723,   218,   352,   199,    61,   443,    60,    62,   128,
     311,    34,   800,   527,   781,   312,   289,   451,   466,   313,
      61,   314,   315,   401,   260,   134,   426,   134,   637,   562,
      70,   767,   768,   572,   373,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   671,   465,   255,   514,
     577,   259,   467,   468,   518,   470,    60,   772,   471,    53,
     603,    70,   826,   119,   256,   136,    70,   136,   457,    61,
     427,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    95,
      70,    70,   422,   449,   866,   683,   405,   431,    62,    62,
     780,   120,   442,   549,   263,   804,   316,    70,   226,   458,
     210,   378,   213,   125,   128,   227,   456,   469,   430,   781,
      95,   769,   361,   818,   770,   375,   573,   228,   401,   402,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,   123,    95,
      95,   846,   339,   861,   328,   219,   376,   377,   543,   202,
     203,   329,   205,   206,   207,   128,    95,   211,   513,   510,
     297,   560,   299,   330,    66,   443,   347,   305,   443,   308,
     262,   340,   348,   115,   124,   118,   756,   200,   201,    62,
      62,   578,   757,   579,    70,   399,    70,    47,    47,    70,
     408,   409,   410,   771,   231,   413,   414,    57,   229,   758,
     589,   232,   230,    47,   528,   529,   590,   786,   184,   680,
     607,    57,   473,   666,   682,   190,   608,   476,     6,    67,
     333,   795,   331,     7,  -314,   121,   332,   334,     9,    62,
    -314,    47,    70,   127,   443,    68,   802,   474,   475,  -314,
      58,  -296,   421,   509,   185,    95,   507,  -296,    95,   811,
     812,    59,   449,   423,    58,    60,   196,   443,   432,   492,
     493,   821,    47,    47,    47,   113,    28,   186,    61,    60,
     834,   616,   618,   836,   837,   494,   495,   621,   233,   189,
      34,   234,    61,   191,   235,   236,   198,    60,   570,   208,
     254,    95,   443,   443,    60,   -20,    62,   379,   380,   381,
      61,   214,   641,    66,   643,   859,   860,    61,   258,   -19,
     266,   271,    60,    62,   284,   215,   285,   317,   240,    84,
     318,   239,   580,   241,   319,    61,   242,   320,   245,   266,
     443,   321,   443,   659,   660,   443,   322,   611,   668,   246,
     530,   323,   253,   324,    57,   534,   500,   501,   325,   537,
     382,   383,   326,   540,    88,   443,   257,   443,    67,   615,
     384,   385,   585,   390,   391,   216,   629,   261,   405,   277,
     278,   564,   300,    90,    68,   301,    91,    92,   217,   302,
      47,   362,   443,   341,   303,   271,   342,    58,   343,    84,
     449,   622,   649,   344,   350,   351,   266,   353,   116,   266,
     327,   335,    60,   354,   336,   355,   356,   337,   338,   360,
      70,   367,   735,   400,   368,    61,   406,   371,   407,    70,
     496,   497,   498,   499,    88,   759,    62,   411,   761,   412,
     415,   416,   422,   419,   449,   216,   449,   431,   420,   449,
     424,   429,    70,    90,    70,   433,    91,    92,   217,   443,
     434,    62,   435,   436,   461,   271,    62,   462,   570,   463,
     464,   710,   511,   386,   387,   388,   389,   427,   515,   640,
     610,   519,   279,   521,   522,   523,   524,   526,    95,   644,
     532,   533,   733,   266,   628,   531,   714,   541,   266,   266,
     535,   266,   536,   791,   266,   542,   538,    62,   740,   560,
     539,    95,   738,   667,   544,   443,   547,   715,   548,   564,
     553,   622,   580,   558,   657,   270,   708,   574,   583,   591,
     644,   437,   588,   592,    70,   594,   593,   597,     6,   595,
     596,   598,   599,     7,   600,   601,   602,   586,     9,   606,
     612,   613,   686,   614,   619,   128,   631,   624,   626,   625,
     452,   632,   709,   -19,   630,   564,   633,   636,   634,   638,
     639,   642,   710,   745,   801,   648,   664,   647,   661,   665,
     673,   674,   685,   794,   688,   646,    28,   438,   793,   437,
     439,   690,   710,   737,   716,   813,     6,   719,   736,   717,
      34,     7,   718,   720,   440,   724,     9,   725,   726,   441,
     727,   748,   728,   729,   730,   731,   739,   714,   741,   742,
     746,   749,   755,   750,   766,    70,   -20,   708,   787,   754,
     788,   271,   806,   554,   763,   762,   765,   473,   715,   774,
     835,   776,   790,   453,    28,   438,    70,   708,   439,   271,
     789,   792,   797,   798,   799,   773,   454,   775,    34,   803,
     777,   810,   440,   709,   287,   288,   858,   441,   294,   295,
     808,   298,   814,   437,   816,   817,    70,   139,   306,   604,
       6,   140,   141,   709,   142,     7,   143,   819,   144,   145,
       9,   820,   146,   147,   831,   833,   561,   838,   507,   807,
     839,   840,    70,   809,   842,   844,   845,   852,   437,   848,
     847,   826,   853,    70,   575,     6,   507,   148,   554,   849,
       7,    66,   149,   150,   151,     9,   854,   832,    28,   438,
     865,   855,   439,   856,   867,   843,   580,   861,   508,   663,
     681,   734,    34,   437,   507,   271,   440,   502,   505,   503,
       6,   441,   652,   152,   504,     7,   764,   672,   743,   784,
       9,   862,   453,    28,   438,   153,   154,   439,   760,   627,
     732,   559,   862,   155,   156,   454,    67,    34,   609,   448,
     562,   440,   282,    60,   687,   675,   441,   266,   552,   266,
     266,   122,    68,   157,   158,   159,   563,   785,    28,   438,
     374,   271,   439,   525,   392,   397,   393,   425,   394,   512,
     778,   395,    34,   825,   271,   850,   440,   869,   851,   868,
       0,   441,   554,     0,     0,     0,     0,     0,     0,     0,
     139,     0,     0,     0,   140,   141,   554,   142,     0,   143,
       0,   144,   145,     0,     0,   146,   147,     0,   196,     0,
       0,     0,     0,   488,   489,   490,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     148,   491,     0,     0,    66,   149,   150,   151,     0,     0,
       0,   437,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,   362,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,   266,     0,     0,   153,   154,
       0,     0,     0,     0,     0,     0,   155,   156,     0,    67,
       0,     0,   448,     0,     0,     0,    28,   438,     0,     0,
     439,     0,     0,     0,     0,    68,   157,   158,   159,   160,
      34,   139,     0,     0,   440,   140,   141,     0,   142,   441,
     143,     0,   144,   145,     0,     0,   146,   147,     0,   196,
       0,     0,     0,     0,     0,   691,     0,     0,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     2,     0,   587,
       3,   148,     4,     5,     6,    66,   149,   150,   151,     7,
       0,     0,     8,     0,     9,   692,    10,   693,   694,    11,
     695,   696,     0,    12,     0,    13,    72,    15,     0,   697,
     698,   699,    17,    18,    19,   700,    20,   152,    21,    22,
     701,    23,    24,    25,    26,     0,     0,     0,     0,   153,
     154,   702,    28,    29,     0,   703,    30,   155,   156,     0,
      67,    32,    33,   137,     0,   704,    34,   705,   706,     0,
      36,     0,    37,   707,    39,    40,    68,   157,   158,   159,
     563,   139,     0,     0,     0,   140,   141,     0,   142,     0,
     143,     0,   144,   145,     0,     0,   146,   147,     0,     0,
       0,     0,     0,     0,     0,   691,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       3,   148,     4,     5,     6,    66,   149,   150,   151,     7,
       0,     0,     8,   491,     9,   692,    10,   693,   694,    11,
     695,   696,     0,    12,     0,    13,    72,    15,     0,   697,
     698,   699,    17,    18,    19,   700,    20,   152,    21,    22,
     701,    23,    24,    25,    26,     0,     0,     0,     0,   153,
     154,   702,    28,    29,     0,   703,    30,   155,   156,     0,
      67,    32,    33,   137,     0,   704,    34,   705,     0,     0,
      36,   796,    37,   707,    39,    40,    68,   157,   158,   159,
     563,   139,     0,     0,     0,   140,   141,     0,   142,     0,
     143,     0,   144,   145,     0,     0,   146,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       3,   148,     4,     5,     6,    66,   149,   150,   151,     7,
       0,     0,     8,     0,     9,     0,    10,     0,     0,    11,
       0,     0,     0,    12,     0,    13,    72,    15,     0,     0,
       0,     0,    17,     0,    19,     0,    20,   152,    21,    22,
       0,    23,    24,    25,    26,     0,     0,     0,     0,   153,
     154,     0,    28,    29,     0,   128,    30,   155,   156,     0,
      67,    32,    33,     0,     0,     0,    34,    35,     0,     0,
      36,     0,    37,   194,    39,    40,    68,   157,   158,   159,
     160,   139,   437,     0,     0,   140,   141,     0,   142,     6,
     143,     0,   144,   145,     7,     0,   146,   147,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       3,   148,     4,     0,     6,    66,   149,   150,   151,     7,
       0,     0,     8,     0,     9,     0,    10,    28,   438,    11,
       0,   439,     0,    12,     0,    13,    72,    15,     0,     0,
       0,    34,    17,     0,    19,   440,    20,   152,    21,    22,
     441,    23,    24,    25,    26,     0,     0,     0,     0,   153,
     154,     0,    28,    29,     0,   421,    30,   155,   156,     0,
      67,    32,    33,   137,     0,     0,    34,    35,     0,     0,
      36,     0,    37,     0,    39,    40,    68,   157,   158,   159,
     160,   139,   437,     0,     0,   140,   141,     0,   142,     6,
     143,     0,   144,   145,     7,     0,   146,   147,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       3,   148,     4,     0,     6,    66,   149,   150,   151,     7,
       0,     0,     8,     0,     9,     0,    10,    28,   438,    11,
       0,   439,     0,    12,     0,    13,    72,    15,     0,     0,
       0,    34,    17,     0,    19,   440,    20,   152,    21,    22,
     441,    23,    24,    25,    26,     0,     0,     0,     0,   153,
     154,     0,    28,    29,     0,     0,    30,   155,   156,     0,
      67,    32,    33,     0,     0,     0,    34,    35,     0,     0,
      36,     0,    37,     0,    39,    40,    68,   157,   158,   159,
     160,   139,     0,     0,     0,   140,   141,     0,   142,     0,
     143,     0,   144,   145,     0,     0,   146,   147,     0,     0,
       0,     0,     0,     0,     0,   691,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,     0,    66,   149,   150,   151,     0,
       0,     0,     0,     0,     0,   692,     0,   693,   694,     0,
     695,   696,     0,     0,     0,     0,     0,     0,     0,   697,
     698,   699,     0,     0,     0,   700,     0,   152,     0,     0,
     701,     0,     0,     0,     0,     0,     0,     0,     0,   153,
     154,   702,     0,     0,     0,   703,     0,   155,   156,     0,
      67,     0,     0,   137,     0,   704,     0,    60,     0,     0,
       0,     0,     0,   783,     0,     0,    68,   157,   158,   159,
     563,   139,     0,     0,     0,   140,   141,     0,   142,     0,
     143,     0,   144,   145,     0,     0,   146,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   437,     0,     0,
       0,   148,     0,     0,     6,    66,   149,   150,   151,     7,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   139,     0,     0,
       0,   140,   141,     0,   142,     0,   143,   152,   144,   145,
       0,     0,   146,   147,     0,     0,     0,     0,     0,   153,
     154,     0,    28,   438,     0,     0,   439,   155,   156,     0,
      67,     0,     0,     0,     0,     0,    34,   148,     0,     0,
     440,    66,   149,   150,   151,   441,    68,   157,   158,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     0,     0,     0,   140,   141,     0,   142,     0,   143,
       0,   144,   145,   152,     0,   146,   147,     0,     0,     0,
       0,     0,     0,     0,   747,   153,   154,     0,     0,     0,
       0,     0,     0,   155,   156,     0,    67,     0,     0,   586,
     148,     0,     0,     0,    66,   149,   150,   151,     0,     0,
       0,     0,    68,   157,   158,   159,   160,     0,   139,     0,
       0,     0,   140,   141,     0,   142,     0,   143,     0,   144,
     145,     0,     0,   146,   147,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   154,
       0,     0,     0,     0,     0,     0,   155,   156,   148,    67,
       0,     0,    66,   149,   150,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,   157,   158,   159,   160,
     139,     0,     0,     0,   140,   141,     0,   209,     0,   143,
       0,   144,   145,     0,   152,   146,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,     0,     0,
       0,     0,     0,     0,   155,   156,     0,    67,     0,     0,
     148,     0,     0,     0,    66,   149,   150,   151,     0,     0,
       0,     0,     0,    68,   157,   158,   159,   160,   139,     0,
       0,     0,   140,   141,     0,   212,     0,   143,     0,   144,
     145,     0,     0,   146,   147,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   154,
       0,     0,     0,     0,     0,     0,   155,   156,   148,    67,
       0,     0,    66,   149,   150,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,   157,   158,   159,   160,
     139,     0,     0,     0,   140,   141,     0,   296,     0,   143,
       0,   144,   145,     0,   152,   146,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,     0,     0,
       0,     0,     0,     0,   155,   156,     0,    67,     0,     0,
     148,     0,     0,     0,    66,   149,   150,   151,     0,     0,
       0,     0,     0,    68,   157,   158,   159,   160,   139,     0,
       0,     0,   140,   141,     0,   304,     0,   143,     0,   144,
     145,     0,     0,   146,   147,     0,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   154,
       0,     0,     0,     0,     0,     0,   155,   156,   148,    67,
       0,     0,    66,   149,   150,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,   157,   158,   159,   160,
     139,     0,     0,     0,   140,   141,     0,   307,     0,   143,
       0,   144,   145,     0,   152,   146,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,     0,     0,
       0,     0,     0,     0,   155,   156,     0,    67,     0,     0,
     148,     0,     0,     0,    66,   149,   150,   151,     0,     0,
       0,     0,     0,    68,   157,   158,   159,   160,     0,     0,
      78,     0,     0,     0,    79,     0,     0,    80,   372,    81,
       0,    82,     0,     0,     0,    83,   152,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   154,
       0,     0,     0,     0,    78,     0,   155,   156,    79,    67,
       0,    80,     0,    81,    66,    82,     0,     0,     0,    83,
       0,     0,     0,     0,     0,    68,   157,   158,   159,   160,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
       0,     0,     0,     0,    84,    88,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
      85,     0,     0,     0,    90,    68,     0,    91,    92,    93,
       0,     0,    86,    87,     0,   268,   269,     0,     0,    88,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,    90,    68,
       0,    91,    92,    93,     2,     0,     0,     3,     0,     4,
       0,     6,     0,     0,     0,     0,     7,     0,     0,     8,
       0,     9,     0,    10,     0,     0,    11,     0,     0,     0,
      12,     0,    13,    72,    15,     0,     0,     0,     0,    17,
       0,    19,     0,    20,     0,    21,    22,     0,    23,    24,
      25,    26,     0,     0,   268,   365,     0,     0,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    34,    35,     0,     0,    36,     0,    37,
       0,    39,    40,     2,     0,     0,     3,   270,     4,     0,
       6,     0,     0,     0,     0,     7,     0,     0,     8,     0,
       9,     0,    10,     0,     0,    11,     0,     0,     0,    12,
       0,    13,    72,    15,     0,     0,     0,     0,    17,     0,
      19,     0,    20,     0,    21,    22,     0,    23,    24,    25,
      26,     0,     0,   268,   571,     0,     0,     0,    28,    29,
       0,     0,    30,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    34,    35,     0,     0,    36,     0,    37,     0,
      39,    40,     2,     0,     0,     3,   270,     4,     0,     6,
       0,     0,     0,     0,     7,     0,     0,     8,     0,     9,
       0,    10,     0,     0,    11,     0,     0,     0,    12,     0,
      13,    72,    15,     0,     0,     0,     0,    17,     0,    19,
       0,    20,     0,    21,    22,     0,    23,    24,    25,    26,
       0,     0,   268,   571,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    34,    35,     0,     0,    36,     0,    37,     0,    39,
      40,     2,     0,     0,     3,   270,     4,     0,     6,     0,
       0,     0,     0,     7,     0,     0,     8,     0,     9,     0,
      10,     0,     0,    11,     0,     0,     0,    12,     0,    13,
      72,    15,     0,     0,     0,     0,    17,     0,    19,     0,
      20,     0,    21,    22,     0,    23,    24,    25,    26,     0,
       0,   268,   670,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    32,    33,     0,     0,     0,
      34,    35,     0,     0,    36,     0,    37,     0,    39,    40,
       2,     0,     0,     3,     0,     4,     0,     6,     0,     0,
       0,     0,     7,     0,     0,     8,     0,     9,     0,    10,
       0,     0,    11,     0,     0,     0,    12,     0,    13,    72,
      15,     0,     0,     0,     0,    17,     0,    19,     0,    20,
       0,    21,    22,     0,    23,    24,    25,    26,     0,     0,
     268,     0,     0,     0,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    34,
      35,     0,     0,    36,     0,    37,     0,    39,    40,     2,
       0,     0,     3,     0,     4,     0,     6,     0,     0,     0,
       0,     7,     0,     0,     8,     0,     9,     0,    10,     0,
       0,    11,     0,     0,     0,    12,     0,    13,    72,    15,
       0,     0,     0,     0,    17,     0,    19,     0,    20,     0,
      21,    22,     0,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,    28,    29,     0,     0,    30,     0,
       0,     0,     0,    32,    33,     0,     1,     0,    34,    35,
       0,     0,    36,     0,    37,     0,    39,    40,     2,     0,
       0,     3,     0,     4,     5,     6,     0,     0,     0,     0,
       7,     0,     0,     8,     0,     9,     0,    10,     0,     0,
      11,     0,     0,     0,    12,     0,    13,    14,    15,     0,
      16,     0,     0,    17,    18,    19,     0,    20,     0,    21,
      22,     0,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,     0,     0,
      31,     0,    32,    33,     0,   247,     0,    34,    35,     0,
       0,    36,     0,    37,    38,    39,    40,     2,     0,     0,
       3,    41,     4,   248,     6,     0,     0,     0,     0,     7,
       0,     0,     8,     0,     9,     0,    10,     0,     0,    11,
       0,     0,     0,    12,     0,    13,    72,    15,     0,     0,
       0,     0,    17,    18,    19,     0,    20,     0,    21,    22,
       0,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    32,    33,     0,     0,     0,    34,    35,     0,     0,
      36,     0,    37,     2,    39,    40,     3,     0,     4,     5,
       6,     0,     0,     0,     0,     7,     0,     0,     8,     0,
       9,     0,    10,     0,     0,    11,     0,     0,     0,    12,
       0,    13,    72,    15,     0,     0,     0,     0,    17,     0,
      19,     0,    20,     0,    21,    22,     0,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,    28,    29,
       0,     0,    30,     0,     0,     0,     0,    32,    33,     0,
       0,     0,    34,    35,     0,     0,    36,    73,    37,    38,
      39,    40,     2,     0,     0,     3,    74,     4,     0,     6,
       0,     0,     0,     0,     7,     0,     0,     8,     0,     9,
       0,    10,     0,     0,    11,     0,     0,     0,    12,     0,
      13,    72,    15,     0,     0,     0,     0,    17,     0,    19,
       0,    20,     0,    21,    22,     0,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    34,    35,     0,     0,    36,     0,    37,     0,    39,
      40,     2,     0,     0,     3,    74,     4,     5,     6,     0,
       0,     0,     0,     7,     0,     0,     8,     0,     9,     0,
      10,     0,     0,    11,     0,     0,     0,    12,     0,    13,
      72,    15,     0,     0,     0,     0,    17,     0,    19,     0,
      20,     0,    21,    22,     0,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    32,    33,   193,     0,     0,
      34,    35,     0,     0,    36,     0,    37,   194,    39,    40,
       2,     0,     0,     3,     0,     4,     0,     6,     0,     0,
       0,     0,     7,     0,     0,     8,     0,     9,     0,    10,
       0,     0,    11,     0,   653,     0,    12,     0,    13,    72,
      15,     0,     0,     0,     0,    17,     0,    19,     0,    20,
       0,    21,    22,     0,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    34,
      35,     0,     0,    36,     0,    37,     2,    39,    40,     3,
       0,     4,     0,     6,     0,     0,     0,     0,     7,     0,
       0,     8,     0,     9,     0,    10,     0,     0,    11,     0,
       0,     0,    12,     0,    13,    72,    15,     0,     0,     0,
       0,    17,     0,    19,     0,    20,     0,    21,    22,     0,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,    30,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    34,    35,     0,     0,    36,
       0,    37,     0,    39,    40
};

static const yytype_int16 yycheck[] =
{
      14,    16,   245,   121,    18,    70,     0,     1,   279,    55,
      50,   521,   198,    47,   123,    56,    11,    97,   282,    48,
     647,   452,    11,   189,    11,   191,    13,    24,    13,    33,
     433,    11,    16,   142,    47,    13,    39,    22,   584,    24,
     358,   359,    56,    48,    18,    13,    12,    11,    11,     5,
      44,    22,    23,   628,    69,    13,    70,    23,    39,    14,
      28,    76,    77,    18,    78,    79,    80,    81,    82,    83,
       1,    67,    86,   106,   103,    52,    72,   123,    34,    48,
      65,    75,   122,    97,   156,    23,    13,   121,    91,    47,
     119,   156,    76,    77,    52,    22,   101,    24,   103,    57,
     209,    56,   106,   212,   679,   119,    80,    12,   121,   181,
      91,    11,   107,    44,   119,   112,   181,   548,    95,    48,
     107,   110,    27,    78,    79,    80,    81,    82,    83,   639,
     115,    86,   110,   118,   123,    99,   107,    95,    65,   219,
     276,   107,    97,   184,    75,   123,   282,   110,   133,    13,
      11,   109,    11,   396,   118,    16,   141,   280,   300,    20,
     123,    22,    23,    27,   119,   134,    28,   136,   571,   107,
     184,    53,    54,   604,   215,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   617,   296,   115,   355,
     454,   118,   301,   302,   360,   304,   110,   743,   307,   193,
     518,   215,   107,    11,   116,   134,   220,   136,    56,   123,
      72,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   184,
     244,   245,   266,   279,   861,   638,   249,   271,   223,   224,
      99,    11,   276,   429,   362,   787,   107,   261,     6,    97,
      85,   225,    87,     0,    13,    13,   520,   303,   271,   118,
     215,    24,   193,   805,    27,   220,   452,    25,    27,    28,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,    11,   244,
     245,   833,     5,    27,     6,   375,   223,   224,   421,    78,
      79,    13,    81,    82,    83,    13,   261,    86,   354,   350,
     145,   447,   147,    25,    48,   451,    12,   152,   454,   154,
      28,    34,    18,    22,    11,    24,    65,    76,    77,   314,
     315,   454,    71,   456,   348,   247,   350,     0,     1,   353,
     252,   253,   254,   742,    30,   257,   258,    52,    15,    88,
      12,    37,    19,    16,   400,   401,    18,   756,    11,   630,
      12,    52,   311,   606,   635,    64,    18,   316,    47,   103,
      30,   770,    15,    52,    12,    38,    19,    37,    57,   364,
      18,    44,   396,    46,   520,   119,   785,   314,   315,    27,
      95,    12,    13,   348,    11,   350,   345,    18,   353,   798,
     799,   106,   448,   266,    95,   110,    69,   543,   271,   331,
     332,   810,    75,    76,    77,   106,    95,   123,   123,   110,
     819,   544,   545,   822,   823,   333,   334,   550,    29,   106,
     109,    32,   123,   106,    35,    36,    11,   110,   451,    27,
     106,   396,   578,   579,   110,    11,   431,   226,   227,   228,
     123,    27,   575,    48,   577,   854,   855,   123,   106,    11,
     123,   124,   110,   448,   134,    11,   136,     7,    41,    64,
      10,     8,   457,    89,    14,   123,     9,    17,    33,   142,
     616,    21,   618,   592,   593,   621,    26,   533,   611,    28,
     402,    31,   106,    33,    52,   407,   339,   340,    38,   411,
     229,   230,    42,   415,    99,   641,   106,   643,   103,   543,
     231,   232,   461,   237,   238,   110,   562,    11,   531,    28,
      18,   448,    11,   118,   119,    11,   121,   122,   123,    11,
     193,   194,   668,     8,    11,   198,    41,    95,    89,    64,
     586,   554,   583,     9,    18,    12,   209,    11,   106,   212,
      90,    29,   110,    33,    32,    18,    18,    35,    36,   106,
     574,    12,   685,    11,   121,   123,   111,   121,    28,   583,
     335,   336,   337,   338,    99,   717,   561,   106,   720,   111,
     106,    12,   616,    28,   630,   110,   632,   621,    12,   635,
      12,    18,   606,   118,   608,    12,   121,   122,   123,   735,
      18,   586,    18,    12,    18,   268,   591,    12,   621,    12,
      12,   651,    12,   233,   234,   235,   236,    72,   111,   574,
     532,   111,    33,    12,    12,    12,    12,   112,   583,   578,
      28,    27,   678,   296,   561,    18,   651,    28,   301,   302,
     111,   304,   111,   766,   307,    12,   111,   632,   694,   785,
     111,   606,   692,   608,    11,   791,    12,   651,    11,   586,
      24,   674,   647,    18,   591,   123,   651,    11,    11,    18,
     619,    40,    12,    18,   688,    12,    18,   112,    47,    12,
      12,    27,    12,    52,    12,   111,   111,   106,    57,    27,
     111,   111,   641,    12,   107,    13,   111,    28,    24,    28,
      11,    18,   651,    27,    27,   632,    18,    12,    33,    12,
      12,   112,   752,   698,   779,    28,    12,    18,    72,   111,
      12,    18,    12,   769,    11,    94,    95,    96,   768,    40,
      99,    12,   772,   688,   111,   800,    47,    12,   687,    27,
     109,    52,    18,    27,   113,    12,    57,    12,    11,   118,
      12,   700,    12,    12,   112,   114,    28,   772,    28,    27,
      11,    11,    28,    73,    12,   779,    27,   752,    11,    27,
      11,   434,   787,   436,   723,   123,   112,   726,   772,    28,
     820,    28,    12,    94,    95,    96,   800,   772,    99,   452,
     112,    11,    28,    12,    12,   744,   107,   746,   109,    88,
     749,    27,   113,   752,   139,   140,   852,   118,   143,   144,
     114,   146,    27,    40,    11,    28,   830,     4,   153,    11,
      47,     8,     9,   772,    11,    52,    13,    12,    15,    16,
      57,    12,    19,    20,    12,    28,    23,    12,   787,   788,
     123,    27,   856,   792,    18,    28,    12,    11,    40,    28,
     114,   107,    28,   867,    81,    47,   805,    44,   521,   112,
      52,    48,    49,    50,    51,    57,    12,   816,    95,    96,
      12,    67,    99,    27,    18,   830,   861,    27,   346,   598,
     632,   679,   109,    40,   833,   548,   113,   341,   344,   342,
      47,   118,   586,    80,   343,    52,   726,   619,   697,   752,
      57,   856,    94,    95,    96,    92,    93,    99,   718,   558,
     674,   447,   867,   100,   101,   107,   103,   109,   531,   106,
     107,   113,   133,   110,    81,   625,   118,   590,   434,   592,
     593,    38,   119,   120,   121,   122,   123,   754,    95,    96,
     219,   604,    99,   375,   239,   244,   240,   268,   241,   353,
     750,   242,   109,   813,   617,   840,   113,   867,   842,   863,
      -1,   118,   625,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,     8,     9,   639,    11,    -1,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    -1,   651,    -1,
      -1,    -1,    -1,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      44,   346,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,   707,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   718,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,    95,    96,    -1,    -1,
      99,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
     109,     4,    -1,    -1,   113,     8,     9,    -1,    11,   118,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    -1,   772,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   787,    -1,    -1,    40,    -1,   464,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    66,    -1,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    -1,    98,    99,   100,   101,    -1,
     103,   104,   105,   106,    -1,   108,   109,   110,   111,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,     4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,   598,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    66,    -1,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    -1,    98,    99,   100,   101,    -1,
     103,   104,   105,   106,    -1,   108,   109,   110,    -1,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,     4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    57,    -1,    59,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    77,    -1,    79,    80,    81,    82,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    13,    99,   100,   101,    -1,
     103,   104,   105,    -1,    -1,    -1,   109,   110,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,     4,    40,    -1,    -1,     8,     9,    -1,    11,    47,
      13,    -1,    15,    16,    52,    -1,    19,    20,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    44,    45,    -1,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    57,    -1,    59,    95,    96,    62,
      -1,    99,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,   109,    75,    -1,    77,   113,    79,    80,    81,    82,
     118,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    13,    99,   100,   101,    -1,
     103,   104,   105,   106,    -1,    -1,   109,   110,    -1,    -1,
     113,    -1,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,     4,    40,    -1,    -1,     8,     9,    -1,    11,    47,
      13,    -1,    15,    16,    52,    -1,    19,    20,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    44,    45,    -1,    47,    48,    49,    50,    51,    52,
      -1,    -1,    55,    -1,    57,    -1,    59,    95,    96,    62,
      -1,    99,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,   109,    75,    -1,    77,   113,    79,    80,    81,    82,
     118,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    -1,    99,   100,   101,    -1,
     103,   104,   105,    -1,    -1,    -1,   109,   110,    -1,    -1,
     113,    -1,   115,    -1,   117,   118,   119,   120,   121,   122,
     123,     4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    -1,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,   108,    -1,   110,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,   119,   120,   121,   122,
     123,     4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    -1,    -1,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,     8,     9,    -1,    11,    -1,    13,    80,    15,    16,
      -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    95,    96,    -1,    -1,    99,   100,   101,    -1,
     103,    -1,    -1,    -1,    -1,    -1,   109,    44,    -1,    -1,
     113,    48,    49,    50,    51,   118,   119,   120,   121,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,    13,
      -1,    15,    16,    80,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,    -1,   103,    -1,    -1,   106,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,    -1,     4,    -1,
      -1,    -1,     8,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    44,   103,
      -1,    -1,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
       4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,    13,
      -1,    15,    16,    -1,    80,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    -1,   103,    -1,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,   122,   123,     4,    -1,
      -1,    -1,     8,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    44,   103,
      -1,    -1,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
       4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,    13,
      -1,    15,    16,    -1,    80,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    -1,   103,    -1,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,   122,   123,     4,    -1,
      -1,    -1,     8,     9,    -1,    11,    -1,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    44,   103,
      -1,    -1,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
       4,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,    13,
      -1,    15,    16,    -1,    80,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    -1,   103,    -1,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,   119,   120,   121,   122,   123,    -1,    -1,
       4,    -1,    -1,    -1,     8,    -1,    -1,    11,    12,    13,
      -1,    15,    -1,    -1,    -1,    19,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,     4,    -1,   100,   101,     8,   103,
      -1,    11,    -1,    13,    48,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    -1,    64,    99,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      80,    -1,    -1,    -1,   118,   119,    -1,   121,   122,   123,
      -1,    -1,    92,    93,    -1,    11,    12,    -1,    -1,    99,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
      -1,   121,   122,   123,    40,    -1,    -1,    43,    -1,    45,
      -1,    47,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      -1,    57,    -1,    59,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    81,    82,    -1,    84,    85,
      86,    87,    -1,    -1,    11,    12,    -1,    -1,    -1,    95,
      96,    -1,    -1,    99,    -1,    -1,    -1,    -1,   104,   105,
      -1,    -1,    -1,   109,   110,    -1,    -1,   113,    -1,   115,
      -1,   117,   118,    40,    -1,    -1,    43,   123,    45,    -1,
      47,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,
      57,    -1,    59,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      77,    -1,    79,    -1,    81,    82,    -1,    84,    85,    86,
      87,    -1,    -1,    11,    12,    -1,    -1,    -1,    95,    96,
      -1,    -1,    99,    -1,    -1,    -1,    -1,   104,   105,    -1,
      -1,    -1,   109,   110,    -1,    -1,   113,    -1,   115,    -1,
     117,   118,    40,    -1,    -1,    43,   123,    45,    -1,    47,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    57,
      -1,    59,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    81,    82,    -1,    84,    85,    86,    87,
      -1,    -1,    11,    12,    -1,    -1,    -1,    95,    96,    -1,
      -1,    99,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,
      -1,   109,   110,    -1,    -1,   113,    -1,   115,    -1,   117,
     118,    40,    -1,    -1,    43,   123,    45,    -1,    47,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    57,    -1,
      59,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    82,    -1,    84,    85,    86,    87,    -1,
      -1,    11,    12,    -1,    -1,    -1,    95,    96,    -1,    -1,
      99,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,
     109,   110,    -1,    -1,   113,    -1,   115,    -1,   117,   118,
      40,    -1,    -1,    43,    -1,    45,    -1,    47,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    57,    -1,    59,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    82,    -1,    84,    85,    86,    87,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    99,
      -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
     110,    -1,    -1,   113,    -1,   115,    -1,   117,   118,    40,
      -1,    -1,    43,    -1,    45,    -1,    47,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    -1,    57,    -1,    59,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,
      81,    82,    -1,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    99,    -1,
      -1,    -1,    -1,   104,   105,    -1,    28,    -1,   109,   110,
      -1,    -1,   113,    -1,   115,    -1,   117,   118,    40,    -1,
      -1,    43,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    -1,    57,    -1,    59,    -1,    -1,
      62,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      72,    -1,    -1,    75,    76,    77,    -1,    79,    -1,    81,
      82,    -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    -1,    -1,    99,    -1,    -1,
     102,    -1,   104,   105,    -1,    28,    -1,   109,   110,    -1,
      -1,   113,    -1,   115,   116,   117,   118,    40,    -1,    -1,
      43,   123,    45,    46,    47,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    -1,    57,    -1,    59,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    79,    -1,    81,    82,
      -1,    84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    -1,    99,    -1,    -1,    -1,
      -1,   104,   105,    -1,    -1,    -1,   109,   110,    -1,    -1,
     113,    -1,   115,    40,   117,   118,    43,    -1,    45,    46,
      47,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,
      57,    -1,    59,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      77,    -1,    79,    -1,    81,    82,    -1,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    99,    -1,    -1,    -1,    -1,   104,   105,    -1,
      -1,    -1,   109,   110,    -1,    -1,   113,   114,   115,   116,
     117,   118,    40,    -1,    -1,    43,   123,    45,    -1,    47,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    57,
      -1,    59,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    81,    82,    -1,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,
      -1,    99,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,
      -1,   109,   110,    -1,    -1,   113,    -1,   115,    -1,   117,
     118,    40,    -1,    -1,    43,   123,    45,    46,    47,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    -1,    57,    -1,
      59,    -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    82,    -1,    84,    85,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,
      99,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,
     109,   110,    -1,    -1,   113,    -1,   115,   116,   117,   118,
      40,    -1,    -1,    43,    -1,    45,    -1,    47,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    -1,    57,    -1,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    82,    -1,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    99,
      -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,   109,
     110,    -1,    -1,   113,    -1,   115,    40,   117,   118,    43,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    59,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    82,    -1,
      84,    85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    -1,    -1,    99,    -1,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,   109,   110,    -1,    -1,   113,
      -1,   115,    -1,   117,   118
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    28,    40,    43,    45,    46,    47,    52,    55,    57,
      59,    62,    66,    68,    69,    70,    72,    75,    76,    77,
      79,    81,    82,    84,    85,    86,    87,    94,    95,    96,
      99,   102,   104,   105,   109,   110,   113,   115,   116,   117,
     118,   123,   125,   126,   128,   183,   190,   191,   193,   217,
     218,   219,   221,   227,   126,    11,    11,    52,    95,   106,
     110,   123,   129,   130,   225,   226,    48,   103,   119,   151,
     153,   154,    69,   114,   123,   127,   183,   217,     4,     8,
      11,    13,    15,    19,    64,    80,    92,    93,    99,   110,
     118,   121,   122,   123,   129,   151,   228,   229,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   106,   130,   226,   106,   130,   226,    11,
      11,   191,   218,    11,    11,     0,   126,   191,    13,    28,
     186,   189,   200,   212,   190,   192,   193,   106,   167,     4,
       8,     9,    11,    13,    15,    16,    19,    20,    44,    49,
      50,    51,    80,    92,    93,   100,   101,   120,   121,   122,
     123,   132,   133,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   247,   248,    11,    11,   123,   198,   199,   106,
     226,   106,   130,   106,   116,   183,   191,   154,    11,   126,
     127,   127,   235,   235,   247,   235,   235,   235,    27,    11,
     135,   235,    11,   135,    27,    11,   110,   123,   151,   229,
     230,   231,   232,    22,    23,   107,     6,    13,    25,    15,
      19,    30,    37,    29,    32,    35,    36,     5,    34,     8,
      41,    89,     9,    39,    91,    33,    28,    28,    46,   191,
     194,   195,   227,   106,   106,   130,   194,   106,   106,   130,
     151,    11,    28,   186,   167,   149,   191,   213,    11,    12,
     123,   191,   204,   205,   206,   208,   224,    28,    18,    33,
      11,   130,   203,   207,   192,   192,   174,   136,   136,   129,
     149,   165,   167,   213,   136,   136,    11,   135,   136,   135,
      11,    11,    11,    11,    11,   135,   136,    11,   135,   152,
     154,    11,    16,    20,    22,    23,   107,     7,    10,    14,
      17,    21,    26,    31,    33,    38,    42,    90,     6,    13,
      25,    15,    19,    30,    37,    29,    32,    35,    36,     5,
      34,     8,    41,    89,     9,    39,    91,    12,    18,   152,
      18,    12,   248,    11,    33,    18,    18,   131,   199,   199,
     106,   126,   191,   200,   212,    12,   208,    12,   121,   213,
     213,   121,    12,   248,   230,   151,   130,   130,   247,   235,
     235,   235,   236,   236,   237,   237,   238,   238,   238,   238,
     239,   239,   240,   241,   242,   243,   249,   244,   246,   194,
      11,    27,    28,   196,   197,   200,   111,    28,   194,   194,
     194,   106,   111,   194,   194,   106,    12,   248,   250,    28,
      12,    13,   212,   214,    12,   205,    28,    72,   182,    18,
     200,   212,   214,    12,    18,    18,    12,    40,    96,    99,
     113,   118,   212,   221,   223,   187,   188,   222,   106,   149,
     155,   224,    11,    94,   107,   220,   223,    56,    97,   168,
     173,    18,    12,    12,    12,   213,   148,   213,   213,   149,
     213,   213,   163,   165,   130,   130,   165,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   136,   136,
     136,   136,   137,   137,   138,   138,   139,   139,   139,   139,
     140,   140,   141,   142,   143,   144,   164,   165,   145,   151,
     248,    12,   250,   149,   199,   111,   131,   131,   199,   111,
     203,    12,    12,    12,    12,   231,   112,   246,   149,   149,
     194,    18,    28,    27,   194,   111,   111,   194,   111,   111,
     194,    28,    12,   224,    11,   215,   216,    12,    11,   208,
      11,   182,   206,    24,   191,   209,   210,   211,    18,   189,
     221,    23,   107,   123,   130,   155,   156,   157,   158,   160,
     200,    12,   204,   208,    11,    81,   202,   223,   224,   224,
     129,   175,   176,    11,   170,   165,   106,   136,    12,    12,
      18,    18,    18,    18,    12,    12,    12,   112,    27,    12,
      12,   111,   111,   131,    11,   209,    27,    12,    18,   197,
     194,   149,   111,   111,    12,   212,   224,    11,   224,   107,
     204,   224,   200,   201,    28,    28,    24,   188,   130,   149,
      27,   111,    18,    18,    33,   159,    12,   182,    12,    12,
     151,   224,   112,   224,   165,   166,    94,    18,    28,   248,
     169,   172,   156,    64,   184,   185,   213,   130,   134,   213,
     213,    72,   162,   147,    12,   111,   246,   151,   224,   214,
      12,   204,   166,    12,    18,   211,   160,   161,    24,   112,
     155,   158,   155,   182,   209,    12,   165,    81,    11,   176,
      12,    28,    58,    60,    61,    63,    64,    72,    73,    74,
      78,    83,    94,    98,   108,   110,   111,   116,   129,   165,
     167,   171,   179,   180,   183,   227,   111,    27,    18,    12,
      27,    12,    23,   107,    12,    12,    11,    12,    12,    12,
     112,   114,   201,   149,   161,   224,   165,   151,   167,    28,
     149,    28,    27,   170,    13,   129,    11,    28,   165,    11,
      73,   252,   172,   177,    27,    28,    65,    71,    88,   148,
     185,   148,   123,   165,   163,   112,    12,    53,    54,    24,
      27,   177,   172,   165,    28,   165,    28,   165,   252,    11,
      99,   118,   251,   116,   179,   222,   177,    11,    11,   112,
      12,   224,    11,   167,   149,   177,   114,    28,    12,    12,
      11,   154,   177,    88,   164,   181,   183,   165,   114,   165,
      27,   177,   177,   154,    27,   253,    11,    28,   164,    12,
      12,   177,    67,    72,   178,   253,   107,   254,   255,   256,
     258,    12,   165,    28,   177,   167,   177,   177,    12,   123,
      27,   257,    18,   151,    28,    12,   164,   114,    28,   112,
     254,   256,    11,    28,    12,    67,    27,   259,   149,   177,
     177,    27,   151,   260,   261,    12,   176,    18,   261,   260
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   124,   125,   126,   126,   126,   126,   127,   127,   127,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   129,
     129,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   136,   136,
     137,   137,   137,   137,   138,   138,   138,   139,   139,   139,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   150,   150,   150,   150,   150,   150,   151,
     152,   152,   152,   152,   153,   153,   153,   154,   154,   155,
     155,   156,   156,   156,   157,   157,   157,   158,   158,   159,
     159,   160,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   167,   168,   168,   169,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   174,
     174,   175,   176,   176,   177,   178,   178,   178,   178,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   180,   180,   181,   181,   182,   182,   183,
     183,   183,   183,   183,   183,   184,   184,   185,   185,   186,
     186,   187,   188,   188,   189,   189,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   191,   191,   191,   191,   192,
     192,   192,   192,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   194,   194,   194,   194,   194,   194,   194,
     195,   195,   196,   196,   196,   197,   197,   198,   198,   199,
     199,   200,   201,   201,   202,   202,   202,   203,   203,   203,
     203,   203,   204,   204,   205,   205,   205,   205,   206,   206,
     207,   208,   208,   209,   209,   209,   210,   211,   211,   212,
     212,   213,   213,   214,   214,   215,   215,   215,   215,   216,
     216,   217,   217,   218,   218,   218,   218,   218,   219,   219,
     219,   219,   219,   220,   220,   220,   220,   221,   221,   221,
     221,   221,   222,   222,   223,   223,   223,   223,   223,   223,
     224,   224,   225,   225,   226,   226,   227,   227,   227,   227,
     228,   228,   228,   228,   228,   228,   229,   229,   229,   230,
     230,   231,   231,   231,   232,   232,   233,   233,   233,   234,
     234,   234,   234,   234,   234,   234,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   236,   236,   236,
     236,   237,   237,   237,   238,   238,   238,   239,   239,   239,
     239,   239,   240,   240,   240,   241,   241,   242,   242,   243,
     243,   244,   244,   245,   245,   246,   246,   247,   247,   248,
     248,   249,   250,   250,   251,   251,   252,   252,   253,   253,
     254,   254,   255,   256,   256,   257,   257,   258,   258,   259,
     259,   259,   260,   260,   261,   261
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     2,     2,     1,
       1,     1,     1,     3,     5,     5,     1,     6,     4,     1,
       1,     1,     0,     1,     1,     1,     3,     3,     6,     4,
       1,     4,     5,     6,     6,     6,     3,     3,     2,     2,
       6,     1,     3,     4,     1,     2,     2,     2,     4,     2,
       4,     2,     2,     2,     2,     2,     2,     2,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     2,     1,
       3,     0,     1,     2,     3,     3,     1,     1,     3,     1,
       0,     3,     4,     5,     0,     1,     0,     5,     0,     1,
       0,     1,     1,     3,     0,     1,     6,     0,     4,     2,
       2,     2,     0,     2,     1,     4,     0,     2,     3,     0,
       2,     1,     1,     3,     2,     0,     2,     3,     5,     1,
       2,     2,     1,     6,     5,     6,     8,     9,     4,     4,
       6,     3,     2,     3,     2,     2,     3,     4,     8,     7,
       1,     7,     4,     0,     1,     2,     1,     0,     5,     3,
       2,     4,     3,     4,     6,     3,     3,     1,     3,     1,
       3,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     5,     4,     6,     5,
       2,     5,     4,     6,     5,     2,     6,     5,     7,     6,
       1,     4,     4,     0,     3,     2,     4,     2,     1,     3,
       4,     6,     1,     4,     2,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     2,     4,     3,     1,     4,     4,
       4,     5,     1,     3,     2,     2,     1,     3,     1,     3,
       5,     1,     3,     0,     2,     1,     2,     1,     3,     0,
       3,     2,     1,     3,     3,     4,     4,     4,     3,     1,
       0,     3,     2,     2,     3,     5,     5,     4,     1,     1,
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
       2,     3,     1,     3,     0,     2
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
#line 443 "cparser.y"
                  { (yyval.program_) = new acsl::AProgram((yyvsp[0].globals_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 2671 "Parser.C"
    break;

  case 3: /* Globals: %empty  */
#line 445 "cparser.y"
                      { (yyval.globals_) = new acsl::NoGlobals(); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 2677 "Parser.C"
    break;

  case 4: /* Globals: Global Globals  */
#line 446 "cparser.y"
                   { (yyval.globals_) = new acsl::SimpleGlobals((yyvsp[-1].global_), (yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 2683 "Parser.C"
    break;

  case 5: /* Globals: _KW_ghost GhostGlobals Globals  */
#line 447 "cparser.y"
                                   { (yyval.globals_) = new acsl::AGhostGlobals((yyvsp[-1].ghostglobals_), (yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 2689 "Parser.C"
    break;

  case 6: /* Globals: _SEMI Globals  */
#line 448 "cparser.y"
                  { (yyval.globals_) = new acsl::SemiColonGlobals((yyvsp[0].globals_)); (yyval.globals_)->line_number = (yyloc).first_line; (yyval.globals_)->char_number = (yyloc).first_column; result->globals_ = (yyval.globals_); }
#line 2695 "Parser.C"
    break;

  case 7: /* GhostGlobals: Declaration GhostGlobals  */
#line 450 "cparser.y"
                                        { (yyval.ghostglobals_) = new acsl::GhostGlobalsDeclataion((yyvsp[-1].declaration_), (yyvsp[0].ghostglobals_)); (yyval.ghostglobals_)->line_number = (yyloc).first_line; (yyval.ghostglobals_)->char_number = (yyloc).first_column; result->ghostglobals_ = (yyval.ghostglobals_); }
#line 2701 "Parser.C"
    break;

  case 8: /* GhostGlobals: FunctionDef GhostGlobals  */
#line 451 "cparser.y"
                             { (yyval.ghostglobals_) = new acsl::GhostGlobalsFunctionDef((yyvsp[-1].functiondef_), (yyvsp[0].ghostglobals_)); (yyval.ghostglobals_)->line_number = (yyloc).first_line; (yyval.ghostglobals_)->char_number = (yyloc).first_column; result->ghostglobals_ = (yyval.ghostglobals_); }
#line 2707 "Parser.C"
    break;

  case 9: /* GhostGlobals: T_RGHOST  */
#line 452 "cparser.y"
             { (yyval.ghostglobals_) = new acsl::GhostGlobalsRGhost((yyvsp[0]._string)); (yyval.ghostglobals_)->line_number = (yyloc).first_line; (yyval.ghostglobals_)->char_number = (yyloc).first_column; result->ghostglobals_ = (yyval.ghostglobals_); }
#line 2713 "Parser.C"
    break;

  case 10: /* Global: T_DECL  */
#line 454 "cparser.y"
                { (yyval.global_) = new acsl::GlobalDecl((yyvsp[0]._string)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2719 "Parser.C"
    break;

  case 11: /* Global: Declaration  */
#line 455 "cparser.y"
                { (yyval.global_) = new acsl::GlobalsDeclataion((yyvsp[0].declaration_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2725 "Parser.C"
    break;

  case 12: /* Global: FunctionDef  */
#line 456 "cparser.y"
                { (yyval.global_) = new acsl::GlobalsFunctionDef((yyvsp[0].functiondef_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2731 "Parser.C"
    break;

  case 13: /* Global: _KW_extern StringConstant Declaration  */
#line 457 "cparser.y"
                                          { (yyval.global_) = new acsl::ExternGlobalDeclataion((yyvsp[-1].stringconstant_), (yyvsp[0].declaration_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2737 "Parser.C"
    break;

  case 14: /* Global: _KW_extern StringConstant T_LBRACE Globals T_RBRACE  */
#line 458 "cparser.y"
                                                        { (yyval.global_) = new acsl::ExternGlobalPar((yyvsp[-3].stringconstant_), (yyvsp[-2]._string), (yyvsp[-1].globals_), (yyvsp[0]._string)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2743 "Parser.C"
    break;

  case 15: /* Global: T_ASM _LPAREN StringConstant _RPAREN _SEMI  */
#line 459 "cparser.y"
                                               { (yyval.global_) = new acsl::AsmGlobal((yyvsp[-4]._string), (yyvsp[-2].stringconstant_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2749 "Parser.C"
    break;

  case 16: /* Global: Pragma  */
#line 460 "cparser.y"
           { (yyval.global_) = new acsl::PragmaGlobal((yyvsp[0].pragma_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2755 "Parser.C"
    break;

  case 17: /* Global: _IDENT_ _LPAREN ListIdent _RPAREN OldPardefList _SEMI  */
#line 461 "cparser.y"
                                                          { std::reverse((yyvsp[-3].listident_)->begin(),(yyvsp[-3].listident_)->end()) ;(yyval.global_) = new acsl::GlobalOldStyle((yyvsp[-5]._string), (yyvsp[-3].listident_), (yyvsp[-1].oldpardeflist_)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2761 "Parser.C"
    break;

  case 18: /* Global: _IDENT_ _LPAREN _RPAREN _SEMI  */
#line 462 "cparser.y"
                                  { (yyval.global_) = new acsl::GlobalEmptyOldStyle((yyvsp[-3]._string)); (yyval.global_)->line_number = (yyloc).first_line; (yyval.global_)->char_number = (yyloc).first_column; result->global_ = (yyval.global_); }
#line 2767 "Parser.C"
    break;

  case 19: /* IdOrTypenameAsId: _IDENT_  */
#line 464 "cparser.y"
                           { (yyval.idortypenameasid_) = new acsl::Identifier((yyvsp[0]._string)); (yyval.idortypenameasid_)->line_number = (yyloc).first_line; (yyval.idortypenameasid_)->char_number = (yyloc).first_column; result->idortypenameasid_ = (yyval.idortypenameasid_); }
#line 2773 "Parser.C"
    break;

  case 20: /* IdOrTypenameAsId: T_NAMEDTYPE  */
#line 465 "cparser.y"
                { (yyval.idortypenameasid_) = new acsl::NamedType((yyvsp[0]._string)); (yyval.idortypenameasid_)->line_number = (yyloc).first_line; (yyval.idortypenameasid_)->char_number = (yyloc).first_column; result->idortypenameasid_ = (yyval.idortypenameasid_); }
#line 2779 "Parser.C"
    break;

  case 21: /* IdOrTypename: IdOrTypenameAsId  */
#line 467 "cparser.y"
                                { (yyval.idortypename_) = new acsl::IdTypename((yyvsp[0].idortypenameasid_)); (yyval.idortypename_)->line_number = (yyloc).first_line; (yyval.idortypename_)->char_number = (yyloc).first_column; result->idortypename_ = (yyval.idortypename_); }
#line 2785 "Parser.C"
    break;

  case 22: /* MaybeComma: %empty  */
#line 469 "cparser.y"
                         { (yyval.maybecomma_) = new acsl::NoComa(); (yyval.maybecomma_)->line_number = (yyloc).first_line; (yyval.maybecomma_)->char_number = (yyloc).first_column; result->maybecomma_ = (yyval.maybecomma_); }
#line 2791 "Parser.C"
    break;

  case 23: /* MaybeComma: _COMMA  */
#line 470 "cparser.y"
           { (yyval.maybecomma_) = new acsl::Coma(); (yyval.maybecomma_)->line_number = (yyloc).first_line; (yyval.maybecomma_)->char_number = (yyloc).first_column; result->maybecomma_ = (yyval.maybecomma_); }
#line 2797 "Parser.C"
    break;

  case 24: /* AssignExpr15: _IDENT_  */
#line 472 "cparser.y"
                       { (yyval.assignexpr_) = new acsl::IdentifierPrimaryExpression((yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2803 "Parser.C"
    break;

  case 25: /* AssignExpr15: Constant  */
#line 473 "cparser.y"
             { (yyval.assignexpr_) = new acsl::ConstantPrimaryExpressin((yyvsp[0].constant_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2809 "Parser.C"
    break;

  case 26: /* AssignExpr15: _LPAREN ListExpression _RPAREN  */
#line 474 "cparser.y"
                                   { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new acsl::CommaExpressionPrimaryExpressin((yyvsp[-1].listexpression_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2815 "Parser.C"
    break;

  case 27: /* AssignExpr15: _LPAREN Block _RPAREN  */
#line 475 "cparser.y"
                          { (yyval.assignexpr_) = new acsl::BlockPrimaryExpressin((yyvsp[-1].block_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2821 "Parser.C"
    break;

  case 28: /* AssignExpr15: _SYMB_4 _LPAREN AssignExpr _COMMA ListGenericAssociation _RPAREN  */
#line 476 "cparser.y"
                                                                     { std::reverse((yyvsp[-1].listgenericassociation_)->begin(),(yyvsp[-1].listgenericassociation_)->end()) ;(yyval.assignexpr_) = new acsl::GenericAssociationPrimaryExpressin((yyvsp[-3].assignexpr_), (yyvsp[-1].listgenericassociation_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2827 "Parser.C"
    break;

  case 29: /* AssignExpr15: _SYMB_4 _LPAREN AssignExpr _RPAREN  */
#line 477 "cparser.y"
                                       { (yyval.assignexpr_) = new acsl::GenericPrimaryExpressin((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2833 "Parser.C"
    break;

  case 30: /* AssignExpr14: AssignExpr15  */
#line 479 "cparser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2839 "Parser.C"
    break;

  case 31: /* AssignExpr14: AssignExpr14 T_LBRACKET ListExpression T_RBRACKET  */
#line 480 "cparser.y"
                                                      { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.assignexpr_) = new acsl::BracketsPostfixExpression((yyvsp[-3].assignexpr_), (yyvsp[-2]._string), (yyvsp[-1].listexpression_), (yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2845 "Parser.C"
    break;

  case 32: /* AssignExpr14: AssignExpr14 _LPAREN Arguments _RPAREN GhostArgumentsOpt  */
#line 481 "cparser.y"
                                                             { (yyval.assignexpr_) = new acsl::ArgumentsPostfixExpression((yyvsp[-4].assignexpr_), (yyvsp[-2].arguments_), (yyvsp[0].ghostargumentsopt_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2851 "Parser.C"
    break;

  case 33: /* AssignExpr14: _SYMB_5 _LPAREN Expression _COMMA TypeName _RPAREN  */
#line 482 "cparser.y"
                                                       { (yyval.assignexpr_) = new acsl::BuiltinVaArgPostfixExpression((yyvsp[-3].expression_), (yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2857 "Parser.C"
    break;

  case 34: /* AssignExpr14: _SYMB_6 _LPAREN TypeName _COMMA TypeName _RPAREN  */
#line 483 "cparser.y"
                                                     { (yyval.assignexpr_) = new acsl::BuiltinTypesCompatPostfixExpression((yyvsp[-3].typename_), (yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2863 "Parser.C"
    break;

  case 35: /* AssignExpr14: _SYMB_7 _LPAREN TypeName _COMMA OffsetofMemberDesignator _RPAREN  */
#line 484 "cparser.y"
                                                                     { (yyval.assignexpr_) = new acsl::BuiltinOffsetOfPostfixExpression((yyvsp[-3].typename_), (yyvsp[-1].offsetofmemberdesignator_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2869 "Parser.C"
    break;

  case 36: /* AssignExpr14: AssignExpr14 _DOT IdOrTypename  */
#line 485 "cparser.y"
                                   { (yyval.assignexpr_) = new acsl::DotPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2875 "Parser.C"
    break;

  case 37: /* AssignExpr14: AssignExpr14 _RARROW IdOrTypename  */
#line 486 "cparser.y"
                                      { (yyval.assignexpr_) = new acsl::ArrowPostfixExpression((yyvsp[-2].assignexpr_), (yyvsp[0].idortypename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2881 "Parser.C"
    break;

  case 38: /* AssignExpr14: AssignExpr14 _DPLUS  */
#line 487 "cparser.y"
                        { (yyval.assignexpr_) = new acsl::PlusPlusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2887 "Parser.C"
    break;

  case 39: /* AssignExpr14: AssignExpr14 _DMINUS  */
#line 488 "cparser.y"
                         { (yyval.assignexpr_) = new acsl::MinusMinusPostfixExpression((yyvsp[-1].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2893 "Parser.C"
    break;

  case 40: /* AssignExpr14: _LPAREN TypeName _RPAREN T_LBRACE InitializerListOpt T_RBRACE  */
#line 489 "cparser.y"
                                                                  { (yyval.assignexpr_) = new acsl::ConstructorPostfixExpression((yyvsp[-4].typename_), (yyvsp[-2]._string), (yyvsp[-1].initializerlistopt_), (yyvsp[0]._string)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2899 "Parser.C"
    break;

  case 41: /* OffsetofMemberDesignator: IdOrTypename  */
#line 491 "cparser.y"
                                        { (yyval.offsetofmemberdesignator_) = new acsl::IdTypenameOffsetMembetDesignator((yyvsp[0].idortypename_)); (yyval.offsetofmemberdesignator_)->line_number = (yyloc).first_line; (yyval.offsetofmemberdesignator_)->char_number = (yyloc).first_column; result->offsetofmemberdesignator_ = (yyval.offsetofmemberdesignator_); }
#line 2905 "Parser.C"
    break;

  case 42: /* OffsetofMemberDesignator: OffsetofMemberDesignator _DOT _IDENT_  */
#line 492 "cparser.y"
                                          { (yyval.offsetofmemberdesignator_) = new acsl::DotOffsetMembetDesignator((yyvsp[-2].offsetofmemberdesignator_), (yyvsp[0]._string)); (yyval.offsetofmemberdesignator_)->line_number = (yyloc).first_line; (yyval.offsetofmemberdesignator_)->char_number = (yyloc).first_column; result->offsetofmemberdesignator_ = (yyval.offsetofmemberdesignator_); }
#line 2911 "Parser.C"
    break;

  case 43: /* OffsetofMemberDesignator: OffsetofMemberDesignator T_LBRACKET ListExpression T_RBRACKET  */
#line 493 "cparser.y"
                                                                  { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.offsetofmemberdesignator_) = new acsl::BracketsOffsetMembetDesignator((yyvsp[-3].offsetofmemberdesignator_), (yyvsp[-2]._string), (yyvsp[-1].listexpression_), (yyvsp[0]._string)); (yyval.offsetofmemberdesignator_)->line_number = (yyloc).first_line; (yyval.offsetofmemberdesignator_)->char_number = (yyloc).first_column; result->offsetofmemberdesignator_ = (yyval.offsetofmemberdesignator_); }
#line 2917 "Parser.C"
    break;

  case 44: /* AssignExpr13: AssignExpr14  */
#line 495 "cparser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2923 "Parser.C"
    break;

  case 45: /* AssignExpr13: _DPLUS AssignExpr13  */
#line 496 "cparser.y"
                        { (yyval.assignexpr_) = new acsl::UnaryExprPlusPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2929 "Parser.C"
    break;

  case 46: /* AssignExpr13: _DMINUS AssignExpr13  */
#line 497 "cparser.y"
                         { (yyval.assignexpr_) = new acsl::UnaryExprMinusMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2935 "Parser.C"
    break;

  case 47: /* AssignExpr13: _KW_sizeof AssignExpr13  */
#line 498 "cparser.y"
                            { (yyval.assignexpr_) = new acsl::UnaryExprSizeOf((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2941 "Parser.C"
    break;

  case 48: /* AssignExpr13: _KW_sizeof _LPAREN TypeName _RPAREN  */
#line 499 "cparser.y"
                                        { (yyval.assignexpr_) = new acsl::UnaryExprSizeOfTypeName((yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2947 "Parser.C"
    break;

  case 49: /* AssignExpr13: T_ALIGNOF AssignExpr13  */
#line 500 "cparser.y"
                           { (yyval.assignexpr_) = new acsl::UnaryExprAlignOfUnaryExpr((yyvsp[-1]._string), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2953 "Parser.C"
    break;

  case 50: /* AssignExpr13: T_ALIGNOF _LPAREN TypeName _RPAREN  */
#line 501 "cparser.y"
                                       { (yyval.assignexpr_) = new acsl::UnaryExprAlignOfTypeName((yyvsp[-3]._string), (yyvsp[-1].typename_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2959 "Parser.C"
    break;

  case 51: /* AssignExpr13: _PLUS AssignExpr12  */
#line 502 "cparser.y"
                       { (yyval.assignexpr_) = new acsl::UnaryExprPlus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2965 "Parser.C"
    break;

  case 52: /* AssignExpr13: _MINUS AssignExpr12  */
#line 503 "cparser.y"
                        { (yyval.assignexpr_) = new acsl::UnaryExprMinus((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2971 "Parser.C"
    break;

  case 53: /* AssignExpr13: _STAR AssignExpr12  */
#line 504 "cparser.y"
                       { (yyval.assignexpr_) = new acsl::UnaryExprMult((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2977 "Parser.C"
    break;

  case 54: /* AssignExpr13: _AMP AssignExpr12  */
#line 505 "cparser.y"
                      { (yyval.assignexpr_) = new acsl::UnaryExprAmp((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2983 "Parser.C"
    break;

  case 55: /* AssignExpr13: _BANG AssignExpr12  */
#line 506 "cparser.y"
                       { (yyval.assignexpr_) = new acsl::UnaryExprNot((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2989 "Parser.C"
    break;

  case 56: /* AssignExpr13: _TILDE AssignExpr12  */
#line 507 "cparser.y"
                        { (yyval.assignexpr_) = new acsl::UnaryExprTilde((yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 2995 "Parser.C"
    break;

  case 57: /* AssignExpr13: _DAMP IdOrTypenameAsId  */
#line 508 "cparser.y"
                           { (yyval.assignexpr_) = new acsl::UnaryExprAddress((yyvsp[0].idortypenameasid_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3001 "Parser.C"
    break;

  case 58: /* AssignExpr12: AssignExpr13  */
#line 510 "cparser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3007 "Parser.C"
    break;

  case 59: /* AssignExpr12: _LPAREN TypeName _RPAREN AssignExpr12  */
#line 511 "cparser.y"
                                          { (yyval.assignexpr_) = new acsl::CastExpr((yyvsp[-2].typename_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3013 "Parser.C"
    break;

  case 60: /* AssignExpr11: AssignExpr12  */
#line 513 "cparser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3019 "Parser.C"
    break;

  case 61: /* AssignExpr11: AssignExpr11 _STAR AssignExpr12  */
#line 514 "cparser.y"
                                    { (yyval.assignexpr_) = new acsl::MulsExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3025 "Parser.C"
    break;

  case 62: /* AssignExpr11: AssignExpr11 _SLASH AssignExpr12  */
#line 515 "cparser.y"
                                     { (yyval.assignexpr_) = new acsl::DivExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3031 "Parser.C"
    break;

  case 63: /* AssignExpr11: AssignExpr11 _PERCENT AssignExpr12  */
#line 516 "cparser.y"
                                       { (yyval.assignexpr_) = new acsl::ModExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3037 "Parser.C"
    break;

  case 64: /* AssignExpr10: AssignExpr11  */
#line 518 "cparser.y"
                            { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3043 "Parser.C"
    break;

  case 65: /* AssignExpr10: AssignExpr10 _PLUS AssignExpr11  */
#line 519 "cparser.y"
                                    { (yyval.assignexpr_) = new acsl::PlusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3049 "Parser.C"
    break;

  case 66: /* AssignExpr10: AssignExpr10 _MINUS AssignExpr11  */
#line 520 "cparser.y"
                                     { (yyval.assignexpr_) = new acsl::MinusExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3055 "Parser.C"
    break;

  case 67: /* AssignExpr9: AssignExpr10  */
#line 522 "cparser.y"
                           { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3061 "Parser.C"
    break;

  case 68: /* AssignExpr9: AssignExpr9 _DLT AssignExpr10  */
#line 523 "cparser.y"
                                  { (yyval.assignexpr_) = new acsl::LeftShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3067 "Parser.C"
    break;

  case 69: /* AssignExpr9: AssignExpr9 _DGT AssignExpr10  */
#line 524 "cparser.y"
                                  { (yyval.assignexpr_) = new acsl::RightShiftExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3073 "Parser.C"
    break;

  case 70: /* AssignExpr8: AssignExpr9  */
#line 526 "cparser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3079 "Parser.C"
    break;

  case 71: /* AssignExpr8: AssignExpr8 _LT AssignExpr9  */
#line 527 "cparser.y"
                                { (yyval.assignexpr_) = new acsl::LessExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3085 "Parser.C"
    break;

  case 72: /* AssignExpr8: AssignExpr8 _GT AssignExpr9  */
#line 528 "cparser.y"
                                { (yyval.assignexpr_) = new acsl::GreaterExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3091 "Parser.C"
    break;

  case 73: /* AssignExpr8: AssignExpr8 _LDARROW AssignExpr9  */
#line 529 "cparser.y"
                                     { (yyval.assignexpr_) = new acsl::LessEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3097 "Parser.C"
    break;

  case 74: /* AssignExpr8: AssignExpr8 _GTEQ AssignExpr9  */
#line 530 "cparser.y"
                                  { (yyval.assignexpr_) = new acsl::GreaterEqualExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3103 "Parser.C"
    break;

  case 75: /* AssignExpr7: AssignExpr8  */
#line 532 "cparser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3109 "Parser.C"
    break;

  case 76: /* AssignExpr7: AssignExpr7 _DEQ AssignExpr8  */
#line 533 "cparser.y"
                                 { (yyval.assignexpr_) = new acsl::EqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3115 "Parser.C"
    break;

  case 77: /* AssignExpr7: AssignExpr7 _BANGEQ AssignExpr8  */
#line 534 "cparser.y"
                                    { (yyval.assignexpr_) = new acsl::NotEqExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3121 "Parser.C"
    break;

  case 78: /* AssignExpr6: AssignExpr7  */
#line 536 "cparser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3127 "Parser.C"
    break;

  case 79: /* AssignExpr6: AssignExpr6 _AMP AssignExpr7  */
#line 537 "cparser.y"
                                 { (yyval.assignexpr_) = new acsl::BitAndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3133 "Parser.C"
    break;

  case 80: /* AssignExpr5: AssignExpr6  */
#line 539 "cparser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3139 "Parser.C"
    break;

  case 81: /* AssignExpr5: AssignExpr5 _CARET AssignExpr6  */
#line 540 "cparser.y"
                                   { (yyval.assignexpr_) = new acsl::BitXorExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3145 "Parser.C"
    break;

  case 82: /* AssignExpr4: AssignExpr5  */
#line 542 "cparser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3151 "Parser.C"
    break;

  case 83: /* AssignExpr4: AssignExpr4 _BAR AssignExpr5  */
#line 543 "cparser.y"
                                 { (yyval.assignexpr_) = new acsl::BitOrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3157 "Parser.C"
    break;

  case 84: /* AssignExpr3: AssignExpr4  */
#line 545 "cparser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3163 "Parser.C"
    break;

  case 85: /* AssignExpr3: AssignExpr3 _DAMP AssignExpr4  */
#line 546 "cparser.y"
                                  { (yyval.assignexpr_) = new acsl::AndExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3169 "Parser.C"
    break;

  case 86: /* AssignExpr2: AssignExpr3  */
#line 548 "cparser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3175 "Parser.C"
    break;

  case 87: /* AssignExpr2: AssignExpr2 _DBAR AssignExpr3  */
#line 549 "cparser.y"
                                  { (yyval.assignexpr_) = new acsl::OrExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3181 "Parser.C"
    break;

  case 88: /* AssignExpr1: AssignExpr2  */
#line 551 "cparser.y"
                          { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3187 "Parser.C"
    break;

  case 89: /* AssignExpr1: AssignExpr2 _QUESTION OptExpression _COLON AssignExpr1  */
#line 552 "cparser.y"
                                                           { (yyval.assignexpr_) = new acsl::TernaryCondExpr((yyvsp[-4].assignexpr_), (yyvsp[-2].optexpression_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3193 "Parser.C"
    break;

  case 90: /* AssignExpr: AssignExpr1  */
#line 554 "cparser.y"
                         { (yyval.assignexpr_) = (yyvsp[0].assignexpr_); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3199 "Parser.C"
    break;

  case 91: /* AssignExpr: AssignExpr12 _EQ AssignExpr  */
#line 555 "cparser.y"
                                { (yyval.assignexpr_) = new acsl::EqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3205 "Parser.C"
    break;

  case 92: /* AssignExpr: AssignExpr12 _PLUSEQ AssignExpr  */
#line 556 "cparser.y"
                                    { (yyval.assignexpr_) = new acsl::PlusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3211 "Parser.C"
    break;

  case 93: /* AssignExpr: AssignExpr12 _MINUSEQ AssignExpr  */
#line 557 "cparser.y"
                                     { (yyval.assignexpr_) = new acsl::MinusEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3217 "Parser.C"
    break;

  case 94: /* AssignExpr: AssignExpr12 _STAREQ AssignExpr  */
#line 558 "cparser.y"
                                    { (yyval.assignexpr_) = new acsl::MultEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3223 "Parser.C"
    break;

  case 95: /* AssignExpr: AssignExpr12 _SLASHEQ AssignExpr  */
#line 559 "cparser.y"
                                     { (yyval.assignexpr_) = new acsl::DivEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3229 "Parser.C"
    break;

  case 96: /* AssignExpr: AssignExpr12 _PERCENTEQ AssignExpr  */
#line 560 "cparser.y"
                                       { (yyval.assignexpr_) = new acsl::ModEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3235 "Parser.C"
    break;

  case 97: /* AssignExpr: AssignExpr12 _AMPEQ AssignExpr  */
#line 561 "cparser.y"
                                   { (yyval.assignexpr_) = new acsl::AndEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3241 "Parser.C"
    break;

  case 98: /* AssignExpr: AssignExpr12 _BAREQ AssignExpr  */
#line 562 "cparser.y"
                                   { (yyval.assignexpr_) = new acsl::OrEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3247 "Parser.C"
    break;

  case 99: /* AssignExpr: AssignExpr12 _CARETEQ AssignExpr  */
#line 563 "cparser.y"
                                     { (yyval.assignexpr_) = new acsl::XorEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3253 "Parser.C"
    break;

  case 100: /* AssignExpr: AssignExpr12 _DLTEQ AssignExpr  */
#line 564 "cparser.y"
                                   { (yyval.assignexpr_) = new acsl::LeftShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3259 "Parser.C"
    break;

  case 101: /* AssignExpr: AssignExpr12 _DGTEQ AssignExpr  */
#line 565 "cparser.y"
                                   { (yyval.assignexpr_) = new acsl::RightShiftEqAssignExpr((yyvsp[-2].assignexpr_), (yyvsp[0].assignexpr_)); (yyval.assignexpr_)->line_number = (yyloc).first_line; (yyval.assignexpr_)->char_number = (yyloc).first_column; result->assignexpr_ = (yyval.assignexpr_); }
#line 3265 "Parser.C"
    break;

  case 102: /* Expression: AssignExpr  */
#line 567 "cparser.y"
                        { (yyval.expression_) = new acsl::AssignmentExpr((yyvsp[0].assignexpr_)); (yyval.expression_)->line_number = (yyloc).first_line; (yyval.expression_)->char_number = (yyloc).first_column; result->expression_ = (yyval.expression_); }
#line 3271 "Parser.C"
    break;

  case 103: /* Constant: _INTEGER_  */
#line 569 "cparser.y"
                     { (yyval.constant_) = new acsl::ConstantInt((yyvsp[0]._int)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3277 "Parser.C"
    break;

  case 104: /* Constant: _DOUBLE_  */
#line 570 "cparser.y"
             { (yyval.constant_) = new acsl::ConstantFloat((yyvsp[0]._double)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3283 "Parser.C"
    break;

  case 105: /* Constant: _CHAR_  */
#line 571 "cparser.y"
           { (yyval.constant_) = new acsl::ConstantChar((yyvsp[0]._char)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3289 "Parser.C"
    break;

  case 106: /* Constant: T_CST_WCHAR  */
#line 572 "cparser.y"
                { (yyval.constant_) = new acsl::ConstantWChar((yyvsp[0]._string)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3295 "Parser.C"
    break;

  case 107: /* Constant: StringConstant  */
#line 573 "cparser.y"
                   { (yyval.constant_) = new acsl::ConstantString((yyvsp[0].stringconstant_)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3301 "Parser.C"
    break;

  case 108: /* Constant: WStringList  */
#line 574 "cparser.y"
                { (yyval.constant_) = new acsl::ConstantWString((yyvsp[0].wstringlist_)); (yyval.constant_)->line_number = (yyloc).first_line; (yyval.constant_)->char_number = (yyloc).first_column; result->constant_ = (yyval.constant_); }
#line 3307 "Parser.C"
    break;

  case 109: /* StringConstant: ListOneString  */
#line 576 "cparser.y"
                               { std::reverse((yyvsp[0].listonestring_)->begin(),(yyvsp[0].listonestring_)->end()) ;(yyval.stringconstant_) = new acsl::StringConst((yyvsp[0].listonestring_)); (yyval.stringconstant_)->line_number = (yyloc).first_line; (yyval.stringconstant_)->char_number = (yyloc).first_column; result->stringconstant_ = (yyval.stringconstant_); }
#line 3313 "Parser.C"
    break;

  case 110: /* WStringList: T_CST_WSTRING  */
#line 578 "cparser.y"
                            { (yyval.wstringlist_) = new acsl::LastConstantWString((yyvsp[0]._string)); (yyval.wstringlist_)->line_number = (yyloc).first_line; (yyval.wstringlist_)->char_number = (yyloc).first_column; result->wstringlist_ = (yyval.wstringlist_); }
#line 3319 "Parser.C"
    break;

  case 111: /* WStringList: OneString WStringList  */
#line 579 "cparser.y"
                          { (yyval.wstringlist_) = new acsl::OneStringWithList((yyvsp[-1].onestring_), (yyvsp[0].wstringlist_)); (yyval.wstringlist_)->line_number = (yyloc).first_line; (yyval.wstringlist_)->char_number = (yyloc).first_column; result->wstringlist_ = (yyval.wstringlist_); }
#line 3325 "Parser.C"
    break;

  case 112: /* WStringList: T_CST_WSTRING WStringList  */
#line 580 "cparser.y"
                              { (yyval.wstringlist_) = new acsl::WStringWithList((yyvsp[-1]._string), (yyvsp[0].wstringlist_)); (yyval.wstringlist_)->line_number = (yyloc).first_line; (yyval.wstringlist_)->char_number = (yyloc).first_column; result->wstringlist_ = (yyval.wstringlist_); }
#line 3331 "Parser.C"
    break;

  case 113: /* WStringList: T_CST_WSTRING ListOneString  */
#line 581 "cparser.y"
                                { std::reverse((yyvsp[0].listonestring_)->begin(),(yyvsp[0].listonestring_)->end()) ;(yyval.wstringlist_) = new acsl::LatersConstantWString((yyvsp[-1]._string), (yyvsp[0].listonestring_)); (yyval.wstringlist_)->line_number = (yyloc).first_line; (yyval.wstringlist_)->char_number = (yyloc).first_column; result->wstringlist_ = (yyval.wstringlist_); }
#line 3337 "Parser.C"
    break;

  case 114: /* OneString: _STRING_  */
#line 583 "cparser.y"
                     { (yyval.onestring_) = new acsl::SimpleConstantString((yyvsp[0]._string)); (yyval.onestring_)->line_number = (yyloc).first_line; (yyval.onestring_)->char_number = (yyloc).first_column; result->onestring_ = (yyval.onestring_); }
#line 3343 "Parser.C"
    break;

  case 115: /* OneString: T_FUNCTION__  */
#line 584 "cparser.y"
                 { (yyval.onestring_) = new acsl::FunctionConstantString((yyvsp[0]._string)); (yyval.onestring_)->line_number = (yyloc).first_line; (yyval.onestring_)->char_number = (yyloc).first_column; result->onestring_ = (yyval.onestring_); }
#line 3349 "Parser.C"
    break;

  case 116: /* OneString: _SYMB_45  */
#line 585 "cparser.y"
             { (yyval.onestring_) = new acsl::PrettyFunctionConstantString(); (yyval.onestring_)->line_number = (yyloc).first_line; (yyval.onestring_)->char_number = (yyloc).first_column; result->onestring_ = (yyval.onestring_); }
#line 3355 "Parser.C"
    break;

  case 117: /* ListOneString: OneString  */
#line 587 "cparser.y"
                          { (yyval.listonestring_) = new acsl::ListOneString(); (yyval.listonestring_)->push_back((yyvsp[0].onestring_)); result->listonestring_ = (yyval.listonestring_); }
#line 3361 "Parser.C"
    break;

  case 118: /* ListOneString: OneString ListOneString  */
#line 588 "cparser.y"
                            { (yyvsp[0].listonestring_)->push_back((yyvsp[-1].onestring_)); (yyval.listonestring_) = (yyvsp[0].listonestring_); result->listonestring_ = (yyval.listonestring_); }
#line 3367 "Parser.C"
    break;

  case 119: /* InitExpression: Expression  */
#line 590 "cparser.y"
                            { (yyval.initexpression_) = new acsl::SimpleExpression((yyvsp[0].expression_)); (yyval.initexpression_)->line_number = (yyloc).first_line; (yyval.initexpression_)->char_number = (yyloc).first_column; result->initexpression_ = (yyval.initexpression_); }
#line 3373 "Parser.C"
    break;

  case 120: /* InitExpression: T_LBRACE InitializerListOpt T_RBRACE  */
#line 591 "cparser.y"
                                         { (yyval.initexpression_) = new acsl::BracesExpression((yyvsp[-2]._string), (yyvsp[-1].initializerlistopt_), (yyvsp[0]._string)); (yyval.initexpression_)->line_number = (yyloc).first_line; (yyval.initexpression_)->char_number = (yyloc).first_column; result->initexpression_ = (yyval.initexpression_); }
#line 3379 "Parser.C"
    break;

  case 121: /* InitializerListOpt: %empty  */
#line 593 "cparser.y"
                                 { (yyval.initializerlistopt_) = new acsl::EmptyInitializerList(); (yyval.initializerlistopt_)->line_number = (yyloc).first_line; (yyval.initializerlistopt_)->char_number = (yyloc).first_column; result->initializerlistopt_ = (yyval.initializerlistopt_); }
#line 3385 "Parser.C"
    break;

  case 122: /* InitializerListOpt: ListInitializerSingle  */
#line 594 "cparser.y"
                          { std::reverse((yyvsp[0].listinitializersingle_)->begin(),(yyvsp[0].listinitializersingle_)->end()) ;(yyval.initializerlistopt_) = new acsl::InitializerList((yyvsp[0].listinitializersingle_)); (yyval.initializerlistopt_)->line_number = (yyloc).first_line; (yyval.initializerlistopt_)->char_number = (yyloc).first_column; result->initializerlistopt_ = (yyval.initializerlistopt_); }
#line 3391 "Parser.C"
    break;

  case 123: /* InitializerListOpt: ListInitializerSingle _COMMA  */
#line 595 "cparser.y"
                                 { std::reverse((yyvsp[-1].listinitializersingle_)->begin(),(yyvsp[-1].listinitializersingle_)->end()) ;(yyval.initializerlistopt_) = new acsl::InitializerListComma((yyvsp[-1].listinitializersingle_)); (yyval.initializerlistopt_)->line_number = (yyloc).first_line; (yyval.initializerlistopt_)->char_number = (yyloc).first_column; result->initializerlistopt_ = (yyval.initializerlistopt_); }
#line 3397 "Parser.C"
    break;

  case 124: /* InitializerSingle: InitDesignators EqOpt InitExpression  */
#line 597 "cparser.y"
                                                         { (yyval.initializersingle_) = new acsl::InitializerDesignator((yyvsp[-2].initdesignators_), (yyvsp[-1].eqopt_), (yyvsp[0].initexpression_)); (yyval.initializersingle_)->line_number = (yyloc).first_line; (yyval.initializersingle_)->char_number = (yyloc).first_column; result->initializersingle_ = (yyval.initializersingle_); }
#line 3403 "Parser.C"
    break;

  case 125: /* InitializerSingle: IdOrTypename _COLON InitExpression  */
#line 598 "cparser.y"
                                       { (yyval.initializersingle_) = new acsl::InitializerGCCDesignator((yyvsp[-2].idortypename_), (yyvsp[0].initexpression_)); (yyval.initializersingle_)->line_number = (yyloc).first_line; (yyval.initializersingle_)->char_number = (yyloc).first_column; result->initializersingle_ = (yyval.initializersingle_); }
#line 3409 "Parser.C"
    break;

  case 126: /* InitializerSingle: InitExpression  */
#line 599 "cparser.y"
                   { (yyval.initializersingle_) = new acsl::EmptyInitializer((yyvsp[0].initexpression_)); (yyval.initializersingle_)->line_number = (yyloc).first_line; (yyval.initializersingle_)->char_number = (yyloc).first_column; result->initializersingle_ = (yyval.initializersingle_); }
#line 3415 "Parser.C"
    break;

  case 127: /* ListInitializerSingle: InitializerSingle  */
#line 601 "cparser.y"
                                          { (yyval.listinitializersingle_) = new acsl::ListInitializerSingle(); (yyval.listinitializersingle_)->push_back((yyvsp[0].initializersingle_)); result->listinitializersingle_ = (yyval.listinitializersingle_); }
#line 3421 "Parser.C"
    break;

  case 128: /* ListInitializerSingle: InitializerSingle _COMMA ListInitializerSingle  */
#line 602 "cparser.y"
                                                   { (yyvsp[0].listinitializersingle_)->push_back((yyvsp[-2].initializersingle_)); (yyval.listinitializersingle_) = (yyvsp[0].listinitializersingle_); result->listinitializersingle_ = (yyval.listinitializersingle_); }
#line 3427 "Parser.C"
    break;

  case 129: /* EqOpt: _EQ  */
#line 604 "cparser.y"
            { (yyval.eqopt_) = new acsl::EquationSign(); (yyval.eqopt_)->line_number = (yyloc).first_line; (yyval.eqopt_)->char_number = (yyloc).first_column; result->eqopt_ = (yyval.eqopt_); }
#line 3433 "Parser.C"
    break;

  case 130: /* EqOpt: %empty  */
#line 605 "cparser.y"
                { (yyval.eqopt_) = new acsl::NoEquationSign(); (yyval.eqopt_)->line_number = (yyloc).first_line; (yyval.eqopt_)->char_number = (yyloc).first_column; result->eqopt_ = (yyval.eqopt_); }
#line 3439 "Parser.C"
    break;

  case 131: /* InitDesignators: _DOT IdOrTypename InitDesignatorsOpt  */
#line 607 "cparser.y"
                                                       { (yyval.initdesignators_) = new acsl::DotInitDesignator((yyvsp[-1].idortypename_), (yyvsp[0].initdesignatorsopt_)); (yyval.initdesignators_)->line_number = (yyloc).first_line; (yyval.initdesignators_)->char_number = (yyloc).first_column; result->initdesignators_ = (yyval.initdesignators_); }
#line 3445 "Parser.C"
    break;

  case 132: /* InitDesignators: T_LBRACKET Expression T_RBRACKET InitDesignatorsOpt  */
#line 608 "cparser.y"
                                                        { (yyval.initdesignators_) = new acsl::BracketsInitDesignator((yyvsp[-3]._string), (yyvsp[-2].expression_), (yyvsp[-1]._string), (yyvsp[0].initdesignatorsopt_)); (yyval.initdesignators_)->line_number = (yyloc).first_line; (yyval.initdesignators_)->char_number = (yyloc).first_column; result->initdesignators_ = (yyval.initdesignators_); }
#line 3451 "Parser.C"
    break;

  case 133: /* InitDesignators: T_LBRACKET Expression _ELLIPSIS Expression T_RBRACKET  */
#line 609 "cparser.y"
                                                          { (yyval.initdesignators_) = new acsl::BracketsSliceInitDesignator((yyvsp[-4]._string), (yyvsp[-3].expression_), (yyvsp[-1].expression_), (yyvsp[0]._string)); (yyval.initdesignators_)->line_number = (yyloc).first_line; (yyval.initdesignators_)->char_number = (yyloc).first_column; result->initdesignators_ = (yyval.initdesignators_); }
#line 3457 "Parser.C"
    break;

  case 134: /* InitDesignatorsOpt: %empty  */
#line 611 "cparser.y"
                                 { (yyval.initdesignatorsopt_) = new acsl::NoInitDesignator(); (yyval.initdesignatorsopt_)->line_number = (yyloc).first_line; (yyval.initdesignatorsopt_)->char_number = (yyloc).first_column; result->initdesignatorsopt_ = (yyval.initdesignatorsopt_); }
#line 3463 "Parser.C"
    break;

  case 135: /* InitDesignatorsOpt: InitDesignators  */
#line 612 "cparser.y"
                    { (yyval.initdesignatorsopt_) = new acsl::SomeInitDesignator((yyvsp[0].initdesignators_)); (yyval.initdesignatorsopt_)->line_number = (yyloc).first_line; (yyval.initdesignatorsopt_)->char_number = (yyloc).first_column; result->initdesignatorsopt_ = (yyval.initdesignatorsopt_); }
#line 3469 "Parser.C"
    break;

  case 136: /* GhostArgumentsOpt: %empty  */
#line 614 "cparser.y"
                                { (yyval.ghostargumentsopt_) = new acsl::NoGhostArguments(); (yyval.ghostargumentsopt_)->line_number = (yyloc).first_line; (yyval.ghostargumentsopt_)->char_number = (yyloc).first_column; result->ghostargumentsopt_ = (yyval.ghostargumentsopt_); }
#line 3475 "Parser.C"
    break;

  case 137: /* GhostArgumentsOpt: _KW_ghost _LPAREN Arguments _RPAREN T_RGHOST  */
#line 615 "cparser.y"
                                                 { (yyval.ghostargumentsopt_) = new acsl::SomeGhostArguments((yyvsp[-2].arguments_), (yyvsp[0]._string)); (yyval.ghostargumentsopt_)->line_number = (yyloc).first_line; (yyval.ghostargumentsopt_)->char_number = (yyloc).first_column; result->ghostargumentsopt_ = (yyval.ghostargumentsopt_); }
#line 3481 "Parser.C"
    break;

  case 138: /* Arguments: %empty  */
#line 617 "cparser.y"
                        { (yyval.arguments_) = new acsl::NoArguments(); (yyval.arguments_)->line_number = (yyloc).first_line; (yyval.arguments_)->char_number = (yyloc).first_column; result->arguments_ = (yyval.arguments_); }
#line 3487 "Parser.C"
    break;

  case 139: /* Arguments: ListExpression  */
#line 618 "cparser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.arguments_) = new acsl::SomeArguments((yyvsp[0].listexpression_)); (yyval.arguments_)->line_number = (yyloc).first_line; (yyval.arguments_)->char_number = (yyloc).first_column; result->arguments_ = (yyval.arguments_); }
#line 3493 "Parser.C"
    break;

  case 140: /* OptExpression: %empty  */
#line 620 "cparser.y"
                            { (yyval.optexpression_) = new acsl::NoExpression(); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 3499 "Parser.C"
    break;

  case 141: /* OptExpression: ListExpression  */
#line 621 "cparser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.optexpression_) = new acsl::SomeExpression((yyvsp[0].listexpression_)); (yyval.optexpression_)->line_number = (yyloc).first_line; (yyval.optexpression_)->char_number = (yyloc).first_column; result->optexpression_ = (yyval.optexpression_); }
#line 3505 "Parser.C"
    break;

  case 142: /* ListExpression: Expression  */
#line 623 "cparser.y"
                            { (yyval.listexpression_) = new acsl::ListExpression(); (yyval.listexpression_)->push_back((yyvsp[0].expression_)); result->listexpression_ = (yyval.listexpression_); }
#line 3511 "Parser.C"
    break;

  case 143: /* ListExpression: Expression _COMMA ListExpression  */
#line 624 "cparser.y"
                                     { (yyvsp[0].listexpression_)->push_back((yyvsp[-2].expression_)); (yyval.listexpression_) = (yyvsp[0].listexpression_); result->listexpression_ = (yyval.listexpression_); }
#line 3517 "Parser.C"
    break;

  case 144: /* CommaExpressionOpt: %empty  */
#line 626 "cparser.y"
                                 { (yyval.commaexpressionopt_) = new acsl::NoCommaExpression(); (yyval.commaexpressionopt_)->line_number = (yyloc).first_line; (yyval.commaexpressionopt_)->char_number = (yyloc).first_column; result->commaexpressionopt_ = (yyval.commaexpressionopt_); }
#line 3523 "Parser.C"
    break;

  case 145: /* CommaExpressionOpt: ListExpression  */
#line 627 "cparser.y"
                   { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.commaexpressionopt_) = new acsl::SomeCommaExpression((yyvsp[0].listexpression_)); (yyval.commaexpressionopt_)->line_number = (yyloc).first_line; (yyval.commaexpressionopt_)->char_number = (yyloc).first_column; result->commaexpressionopt_ = (yyval.commaexpressionopt_); }
#line 3529 "Parser.C"
    break;

  case 146: /* Block: T_LBRACE ListLocalLabel BlockAttrs ListBlockElement ListAnnot T_RBRACE  */
#line 629 "cparser.y"
                                                                               { (yyval.block_) = new acsl::ABlock((yyvsp[-5]._string), (yyvsp[-4].listlocallabel_), (yyvsp[-3].blockattrs_), (yyvsp[-2].listblockelement_), (yyvsp[-1].listannot_), (yyvsp[0]._string)); (yyval.block_)->line_number = (yyloc).first_line; (yyval.block_)->char_number = (yyloc).first_column; result->block_ = (yyval.block_); }
#line 3535 "Parser.C"
    break;

  case 147: /* BlockAttrs: %empty  */
#line 631 "cparser.y"
                         { (yyval.blockattrs_) = new acsl::NoBlockAttrs(); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 3541 "Parser.C"
    break;

  case 148: /* BlockAttrs: T_BLOCKATTRIBUTE _LPAREN ListAttr _RPAREN  */
#line 632 "cparser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.blockattrs_) = new acsl::SomeBlockAttrs((yyvsp[-3]._string), (yyvsp[-1].listattr_)); (yyval.blockattrs_)->line_number = (yyloc).first_line; (yyval.blockattrs_)->char_number = (yyloc).first_column; result->blockattrs_ = (yyval.blockattrs_); }
#line 3547 "Parser.C"
    break;

  case 149: /* BlockElement: ListAnnot Declaration  */
#line 634 "cparser.y"
                                     { (yyval.blockelement_) = new acsl::DeclarationElement((yyvsp[-1].listannot_), (yyvsp[0].declaration_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 3553 "Parser.C"
    break;

  case 150: /* BlockElement: ListAnnot Statement  */
#line 635 "cparser.y"
                        { (yyval.blockelement_) = new acsl::StatementElement((yyvsp[-1].listannot_), (yyvsp[0].statement_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 3559 "Parser.C"
    break;

  case 151: /* BlockElement: ListAnnot Pragma  */
#line 636 "cparser.y"
                     { (yyval.blockelement_) = new acsl::PragmaElement((yyvsp[-1].listannot_), (yyvsp[0].pragma_)); (yyval.blockelement_)->line_number = (yyloc).first_line; (yyval.blockelement_)->char_number = (yyloc).first_column; result->blockelement_ = (yyval.blockelement_); }
#line 3565 "Parser.C"
    break;

  case 152: /* ListBlockElement: %empty  */
#line 638 "cparser.y"
                               { (yyval.listblockelement_) = new acsl::ListBlockElement(); result->listblockelement_ = (yyval.listblockelement_); }
#line 3571 "Parser.C"
    break;

  case 153: /* ListBlockElement: ListBlockElement BlockElement  */
#line 639 "cparser.y"
                                  { (yyvsp[-1].listblockelement_)->push_back((yyvsp[0].blockelement_)); (yyval.listblockelement_) = (yyvsp[-1].listblockelement_); result->listblockelement_ = (yyval.listblockelement_); }
#line 3577 "Parser.C"
    break;

  case 154: /* Annot: T_CODE_ANNOT  */
#line 641 "cparser.y"
                     { (yyval.annot_) = new acsl::CodeAnnot((yyvsp[0]._string)); (yyval.annot_)->line_number = (yyloc).first_line; (yyval.annot_)->char_number = (yyloc).first_column; result->annot_ = (yyval.annot_); }
#line 3583 "Parser.C"
    break;

  case 155: /* Annot: _KW_ghost ListBlockElement ListAnnot T_RGHOST  */
#line 642 "cparser.y"
                                                  { (yyval.annot_) = new acsl::GhostAnnot((yyvsp[-2].listblockelement_), (yyvsp[-1].listannot_), (yyvsp[0]._string)); (yyval.annot_)->line_number = (yyloc).first_line; (yyval.annot_)->char_number = (yyloc).first_column; result->annot_ = (yyval.annot_); }
#line 3589 "Parser.C"
    break;

  case 156: /* ListAnnot: %empty  */
#line 644 "cparser.y"
                        { (yyval.listannot_) = new acsl::ListAnnot(); result->listannot_ = (yyval.listannot_); }
#line 3595 "Parser.C"
    break;

  case 157: /* ListAnnot: ListAnnot Annot  */
#line 645 "cparser.y"
                    { (yyvsp[-1].listannot_)->push_back((yyvsp[0].annot_)); (yyval.listannot_) = (yyvsp[-1].listannot_); result->listannot_ = (yyval.listannot_); }
#line 3601 "Parser.C"
    break;

  case 158: /* LocalLabel: _SYMB_47 ListLocalLabelName _SEMI  */
#line 647 "cparser.y"
                                               { std::reverse((yyvsp[-1].listlocallabelname_)->begin(),(yyvsp[-1].listlocallabelname_)->end()) ;(yyval.locallabel_) = new acsl::LocalLable((yyvsp[-1].listlocallabelname_)); (yyval.locallabel_)->line_number = (yyloc).first_line; (yyval.locallabel_)->char_number = (yyloc).first_column; result->locallabel_ = (yyval.locallabel_); }
#line 3607 "Parser.C"
    break;

  case 159: /* ListLocalLabel: %empty  */
#line 649 "cparser.y"
                             { (yyval.listlocallabel_) = new acsl::ListLocalLabel(); result->listlocallabel_ = (yyval.listlocallabel_); }
#line 3613 "Parser.C"
    break;

  case 160: /* ListLocalLabel: ListLocalLabel LocalLabel  */
#line 650 "cparser.y"
                              { (yyvsp[-1].listlocallabel_)->push_back((yyvsp[0].locallabel_)); (yyval.listlocallabel_) = (yyvsp[-1].listlocallabel_); result->listlocallabel_ = (yyval.listlocallabel_); }
#line 3619 "Parser.C"
    break;

  case 161: /* LocalLabelName: IdOrTypenameAsId  */
#line 652 "cparser.y"
                                  { (yyval.locallabelname_) = new acsl::ALocalLabelName((yyvsp[0].idortypenameasid_)); (yyval.locallabelname_)->line_number = (yyloc).first_line; (yyval.locallabelname_)->char_number = (yyloc).first_column; result->locallabelname_ = (yyval.locallabelname_); }
#line 3625 "Parser.C"
    break;

  case 162: /* ListLocalLabelName: LocalLabelName  */
#line 654 "cparser.y"
                                    { (yyval.listlocallabelname_) = new acsl::ListLocalLabelName(); (yyval.listlocallabelname_)->push_back((yyvsp[0].locallabelname_)); result->listlocallabelname_ = (yyval.listlocallabelname_); }
#line 3631 "Parser.C"
    break;

  case 163: /* ListLocalLabelName: LocalLabelName _COMMA ListLocalLabelName  */
#line 655 "cparser.y"
                                             { (yyvsp[0].listlocallabelname_)->push_back((yyvsp[-2].locallabelname_)); (yyval.listlocallabelname_) = (yyvsp[0].listlocallabelname_); result->listlocallabelname_ = (yyval.listlocallabelname_); }
#line 3637 "Parser.C"
    break;

  case 164: /* AnnotatedStmt: ListAnnot Statement  */
#line 657 "cparser.y"
                                    { (yyval.annotatedstmt_) = new acsl::AnnotatedStatement((yyvsp[-1].listannot_), (yyvsp[0].statement_)); (yyval.annotatedstmt_)->line_number = (yyloc).first_line; (yyval.annotatedstmt_)->char_number = (yyloc).first_column; result->annotatedstmt_ = (yyval.annotatedstmt_); }
#line 3643 "Parser.C"
    break;

  case 165: /* ElsePart: %empty  */
#line 659 "cparser.y"
                       { (yyval.elsepart_) = new acsl::NoElsePart(); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 3649 "Parser.C"
    break;

  case 166: /* ElsePart: _KW_else AnnotatedStmt  */
#line 660 "cparser.y"
                           { (yyval.elsepart_) = new acsl::SimpleElsePart((yyvsp[0].annotatedstmt_)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 3655 "Parser.C"
    break;

  case 167: /* ElsePart: _KW_ghost AnnotatedStmt T_RGHOST  */
#line 661 "cparser.y"
                                     { (yyval.elsepart_) = new acsl::SimpleGhostElsePart((yyvsp[-1].annotatedstmt_), (yyvsp[0]._string)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 3661 "Parser.C"
    break;

  case 168: /* ElsePart: _KW_ghost AnnotatedStmt T_RGHOST _KW_else AnnotatedStmt  */
#line 662 "cparser.y"
                                                            { (yyval.elsepart_) = new acsl::GhostElsePart((yyvsp[-3].annotatedstmt_), (yyvsp[-2]._string), (yyvsp[0].annotatedstmt_)); (yyval.elsepart_)->line_number = (yyloc).first_line; (yyval.elsepart_)->char_number = (yyloc).first_column; result->elsepart_ = (yyval.elsepart_); }
#line 3667 "Parser.C"
    break;

  case 169: /* Statement: _SEMI  */
#line 664 "cparser.y"
                  { (yyval.statement_) = new acsl::SemicolonStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3673 "Parser.C"
    break;

  case 170: /* Statement: T_SPEC AnnotatedStmt  */
#line 665 "cparser.y"
                         { (yyval.statement_) = new acsl::SpecStatement((yyvsp[-1]._string), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3679 "Parser.C"
    break;

  case 171: /* Statement: ListExpression _SEMI  */
#line 666 "cparser.y"
                         { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new acsl::ExprsStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3685 "Parser.C"
    break;

  case 172: /* Statement: Block  */
#line 667 "cparser.y"
          { (yyval.statement_) = new acsl::BlockStatement((yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3691 "Parser.C"
    break;

  case 173: /* Statement: _KW_if _LPAREN ListExpression _RPAREN AnnotatedStmt ElsePart  */
#line 668 "cparser.y"
                                                                 { std::reverse((yyvsp[-3].listexpression_)->begin(),(yyvsp[-3].listexpression_)->end()) ;(yyval.statement_) = new acsl::IfStatement((yyvsp[-3].listexpression_), (yyvsp[-1].annotatedstmt_), (yyvsp[0].elsepart_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3697 "Parser.C"
    break;

  case 174: /* Statement: _KW_switch _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 669 "cparser.y"
                                                            { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::SwitchStatement((yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3703 "Parser.C"
    break;

  case 175: /* Statement: OptLoopAnnotations _KW_while _LPAREN ListExpression _RPAREN AnnotatedStmt  */
#line 670 "cparser.y"
                                                                              { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::WhileStatement((yyvsp[-5].optloopannotations_), (yyvsp[-2].listexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3709 "Parser.C"
    break;

  case 176: /* Statement: OptLoopAnnotations _KW_do AnnotatedStmt _KW_while _LPAREN ListExpression _RPAREN _SEMI  */
#line 671 "cparser.y"
                                                                                           { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::DoWhileStatement((yyvsp[-7].optloopannotations_), (yyvsp[-5].annotatedstmt_), (yyvsp[-2].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3715 "Parser.C"
    break;

  case 177: /* Statement: OptLoopAnnotations _KW_for _LPAREN ForClause OptExpression _SEMI OptExpression _RPAREN AnnotatedStmt  */
#line 672 "cparser.y"
                                                                                                         { (yyval.statement_) = new acsl::ForStatement((yyvsp[-8].optloopannotations_), (yyvsp[-5].forclause_), (yyvsp[-4].optexpression_), (yyvsp[-2].optexpression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3721 "Parser.C"
    break;

  case 178: /* Statement: IdOrTypenameAsId _COLON ListAttributeNocv AnnotatedStmt  */
#line 673 "cparser.y"
                                                            { (yyval.statement_) = new acsl::ColonStatement((yyvsp[-3].idortypenameasid_), (yyvsp[-1].listattributenocv_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3727 "Parser.C"
    break;

  case 179: /* Statement: _KW_case Expression _COLON AnnotatedStmt  */
#line 674 "cparser.y"
                                             { (yyval.statement_) = new acsl::CaseStatement((yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3733 "Parser.C"
    break;

  case 180: /* Statement: _KW_case Expression _ELLIPSIS Expression _COLON AnnotatedStmt  */
#line 675 "cparser.y"
                                                                  { (yyval.statement_) = new acsl::CaseSliceStatement((yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3739 "Parser.C"
    break;

  case 181: /* Statement: _KW_default _COLON AnnotatedStmt  */
#line 676 "cparser.y"
                                     { (yyval.statement_) = new acsl::DefaultStatement((yyvsp[0].annotatedstmt_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3745 "Parser.C"
    break;

  case 182: /* Statement: _KW_return _SEMI  */
#line 677 "cparser.y"
                     { (yyval.statement_) = new acsl::EmptyReturnStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3751 "Parser.C"
    break;

  case 183: /* Statement: _KW_return ListExpression _SEMI  */
#line 678 "cparser.y"
                                    { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new acsl::ReturnStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3757 "Parser.C"
    break;

  case 184: /* Statement: _KW_break _SEMI  */
#line 679 "cparser.y"
                    { (yyval.statement_) = new acsl::BreakStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3763 "Parser.C"
    break;

  case 185: /* Statement: _KW_continue _SEMI  */
#line 680 "cparser.y"
                       { (yyval.statement_) = new acsl::ContinueStatement(); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3769 "Parser.C"
    break;

  case 186: /* Statement: _KW_goto IdOrTypenameAsId _SEMI  */
#line 681 "cparser.y"
                                    { (yyval.statement_) = new acsl::GotoStatement((yyvsp[-1].idortypenameasid_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3775 "Parser.C"
    break;

  case 187: /* Statement: _KW_goto _STAR ListExpression _SEMI  */
#line 682 "cparser.y"
                                        { std::reverse((yyvsp[-1].listexpression_)->begin(),(yyvsp[-1].listexpression_)->end()) ;(yyval.statement_) = new acsl::StarGotoStatement((yyvsp[-1].listexpression_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3781 "Parser.C"
    break;

  case 188: /* Statement: T_ASM _KW_goto ListAsmattr _LPAREN ListOneString Asmoutputs _RPAREN _SEMI  */
#line 683 "cparser.y"
                                                                              { std::reverse((yyvsp[-3].listonestring_)->begin(),(yyvsp[-3].listonestring_)->end()) ;(yyval.statement_) = new acsl::AsmGotoAsmattrStatement((yyvsp[-7]._string), (yyvsp[-5].listasmattr_), (yyvsp[-3].listonestring_), (yyvsp[-2].asmoutputs_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3787 "Parser.C"
    break;

  case 189: /* Statement: T_ASM ListAsmattr _LPAREN ListOneString Asmoutputs _RPAREN _SEMI  */
#line 684 "cparser.y"
                                                                     { std::reverse((yyvsp[-3].listonestring_)->begin(),(yyvsp[-3].listonestring_)->end()) ;(yyval.statement_) = new acsl::AsmAsmattrStatement((yyvsp[-6]._string), (yyvsp[-5].listasmattr_), (yyvsp[-3].listonestring_), (yyvsp[-2].asmoutputs_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3793 "Parser.C"
    break;

  case 190: /* Statement: T_ASM  */
#line 685 "cparser.y"
          { (yyval.statement_) = new acsl::AsmStatement((yyvsp[0]._string)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3799 "Parser.C"
    break;

  case 191: /* Statement: _SYMB_48 Block _SYMB_49 _LPAREN ListExpression _RPAREN Block  */
#line 686 "cparser.y"
                                                                 { std::reverse((yyvsp[-2].listexpression_)->begin(),(yyvsp[-2].listexpression_)->end()) ;(yyval.statement_) = new acsl::TryExceptStatement((yyvsp[-5].block_), (yyvsp[-2].listexpression_), (yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3805 "Parser.C"
    break;

  case 192: /* Statement: _SYMB_48 Block _SYMB_50 Block  */
#line 687 "cparser.y"
                                  { (yyval.statement_) = new acsl::TryFinallyStatement((yyvsp[-2].block_), (yyvsp[0].block_)); (yyval.statement_)->line_number = (yyloc).first_line; (yyval.statement_)->char_number = (yyloc).first_column; result->statement_ = (yyval.statement_); }
#line 3811 "Parser.C"
    break;

  case 193: /* OptLoopAnnotations: %empty  */
#line 689 "cparser.y"
                                 { (yyval.optloopannotations_) = new acsl::NoLoopAnnotations(); (yyval.optloopannotations_)->line_number = (yyloc).first_line; (yyval.optloopannotations_)->char_number = (yyloc).first_column; result->optloopannotations_ = (yyval.optloopannotations_); }
#line 3817 "Parser.C"
    break;

  case 194: /* OptLoopAnnotations: T_LOOP_ANNOT  */
#line 690 "cparser.y"
                 { (yyval.optloopannotations_) = new acsl::SomeLoopAnnotations((yyvsp[0]._string)); (yyval.optloopannotations_)->line_number = (yyloc).first_line; (yyval.optloopannotations_)->char_number = (yyloc).first_column; result->optloopannotations_ = (yyval.optloopannotations_); }
#line 3823 "Parser.C"
    break;

  case 195: /* ForClause: OptExpression _SEMI  */
#line 692 "cparser.y"
                                { (yyval.forclause_) = new acsl::ForClauseExpression((yyvsp[-1].optexpression_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 3829 "Parser.C"
    break;

  case 196: /* ForClause: Declaration  */
#line 693 "cparser.y"
                { (yyval.forclause_) = new acsl::ForClauseDeclaration((yyvsp[0].declaration_)); (yyval.forclause_)->line_number = (yyloc).first_line; (yyval.forclause_)->char_number = (yyloc).first_column; result->forclause_ = (yyval.forclause_); }
#line 3835 "Parser.C"
    break;

  case 197: /* GhostParameterOpt: %empty  */
#line 695 "cparser.y"
                                { (yyval.ghostparameteropt_) = new acsl::NoGhostParameter(); (yyval.ghostparameteropt_)->line_number = (yyloc).first_line; (yyval.ghostparameteropt_)->char_number = (yyloc).first_column; result->ghostparameteropt_ = (yyval.ghostparameteropt_); }
#line 3841 "Parser.C"
    break;

  case 198: /* GhostParameterOpt: _KW_ghost _LPAREN RestParList _RPAREN T_RGHOST  */
#line 696 "cparser.y"
                                                   { (yyval.ghostparameteropt_) = new acsl::SomeGhostParameter((yyvsp[-2].restparlist_), (yyvsp[0]._string)); (yyval.ghostparameteropt_)->line_number = (yyloc).first_line; (yyval.ghostparameteropt_)->char_number = (yyloc).first_column; result->ghostparameteropt_ = (yyval.ghostparameteropt_); }
#line 3847 "Parser.C"
    break;

  case 199: /* Declaration: DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 698 "cparser.y"
                                                         { (yyval.declaration_) = new acsl::DeclSpecInitDecl((yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 3853 "Parser.C"
    break;

  case 200: /* Declaration: DeclSpecList _SEMI  */
#line 699 "cparser.y"
                       { (yyval.declaration_) = new acsl::DeclSpec((yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 3859 "Parser.C"
    break;

  case 201: /* Declaration: T_SPEC DeclSpecList DeclAndInitDeclAttrList _SEMI  */
#line 700 "cparser.y"
                                                      { (yyval.declaration_) = new acsl::SpecDeclSpecInitDecl((yyvsp[-3]._string), (yyvsp[-2].declspeclist_), (yyvsp[-1].declandinitdeclattrlist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 3865 "Parser.C"
    break;

  case 202: /* Declaration: T_SPEC DeclSpecList _SEMI  */
#line 701 "cparser.y"
                              { (yyval.declaration_) = new acsl::SpecDeclSpec((yyvsp[-2]._string), (yyvsp[-1].declspeclist_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 3871 "Parser.C"
    break;

  case 203: /* Declaration: _SYMB_51 _LPAREN Expression _RPAREN  */
#line 702 "cparser.y"
                                        { (yyval.declaration_) = new acsl::StaticAssertDecl((yyvsp[-1].expression_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 3877 "Parser.C"
    break;

  case 204: /* Declaration: _SYMB_51 _LPAREN Expression _COMMA StringConstant _RPAREN  */
#line 703 "cparser.y"
                                                              { (yyval.declaration_) = new acsl::StaticAssertDeclStringConst((yyvsp[-3].expression_), (yyvsp[-1].stringconstant_)); (yyval.declaration_)->line_number = (yyloc).first_line; (yyval.declaration_)->char_number = (yyloc).first_column; result->declaration_ = (yyval.declaration_); }
#line 3883 "Parser.C"
    break;

  case 205: /* GenericAssociation: TypeName _COLON AssignExpr  */
#line 705 "cparser.y"
                                                { (yyval.genericassociation_) = new acsl::ColonGenericAssociation((yyvsp[-2].typename_), (yyvsp[0].assignexpr_)); (yyval.genericassociation_)->line_number = (yyloc).first_line; (yyval.genericassociation_)->char_number = (yyloc).first_column; result->genericassociation_ = (yyval.genericassociation_); }
#line 3889 "Parser.C"
    break;

  case 206: /* GenericAssociation: _KW_default _COLON AssignExpr  */
#line 706 "cparser.y"
                                  { (yyval.genericassociation_) = new acsl::DefaultGenericAssociation((yyvsp[0].assignexpr_)); (yyval.genericassociation_)->line_number = (yyloc).first_line; (yyval.genericassociation_)->char_number = (yyloc).first_column; result->genericassociation_ = (yyval.genericassociation_); }
#line 3895 "Parser.C"
    break;

  case 207: /* ListGenericAssociation: GenericAssociation  */
#line 708 "cparser.y"
                                            { (yyval.listgenericassociation_) = new acsl::ListGenericAssociation(); (yyval.listgenericassociation_)->push_back((yyvsp[0].genericassociation_)); result->listgenericassociation_ = (yyval.listgenericassociation_); }
#line 3901 "Parser.C"
    break;

  case 208: /* ListGenericAssociation: GenericAssociation _COMMA ListGenericAssociation  */
#line 709 "cparser.y"
                                                     { (yyvsp[0].listgenericassociation_)->push_back((yyvsp[-2].genericassociation_)); (yyval.listgenericassociation_) = (yyvsp[0].listgenericassociation_); result->listgenericassociation_ = (yyval.listgenericassociation_); }
#line 3907 "Parser.C"
    break;

  case 209: /* DeclAndInitDeclAttrList: InitDeclarator  */
#line 711 "cparser.y"
                                         { (yyval.declandinitdeclattrlist_) = new acsl::InitDeclaration((yyvsp[0].initdeclarator_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 3913 "Parser.C"
    break;

  case 210: /* DeclAndInitDeclAttrList: InitDeclarator _COMMA ListInitDeclaratorAttr  */
#line 712 "cparser.y"
                                                 { std::reverse((yyvsp[0].listinitdeclaratorattr_)->begin(),(yyvsp[0].listinitdeclaratorattr_)->end()) ;(yyval.declandinitdeclattrlist_) = new acsl::InitDeclarationWithAttr((yyvsp[-2].initdeclarator_), (yyvsp[0].listinitdeclaratorattr_)); (yyval.declandinitdeclattrlist_)->line_number = (yyloc).first_line; (yyval.declandinitdeclattrlist_)->char_number = (yyloc).first_column; result->declandinitdeclattrlist_ = (yyval.declandinitdeclattrlist_); }
#line 3919 "Parser.C"
    break;

  case 211: /* InitDeclaratorAttr: ListAttributeNocv InitDeclarator  */
#line 714 "cparser.y"
                                                      { (yyval.initdeclaratorattr_) = new acsl::InitDeclaratorAttribute((yyvsp[-1].listattributenocv_), (yyvsp[0].initdeclarator_)); (yyval.initdeclaratorattr_)->line_number = (yyloc).first_line; (yyval.initdeclaratorattr_)->char_number = (yyloc).first_column; result->initdeclaratorattr_ = (yyval.initdeclaratorattr_); }
#line 3925 "Parser.C"
    break;

  case 212: /* ListInitDeclaratorAttr: InitDeclaratorAttr  */
#line 716 "cparser.y"
                                            { (yyval.listinitdeclaratorattr_) = new acsl::ListInitDeclaratorAttr(); (yyval.listinitdeclaratorattr_)->push_back((yyvsp[0].initdeclaratorattr_)); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 3931 "Parser.C"
    break;

  case 213: /* ListInitDeclaratorAttr: InitDeclaratorAttr _COMMA ListInitDeclaratorAttr  */
#line 717 "cparser.y"
                                                     { (yyvsp[0].listinitdeclaratorattr_)->push_back((yyvsp[-2].initdeclaratorattr_)); (yyval.listinitdeclaratorattr_) = (yyvsp[0].listinitdeclaratorattr_); result->listinitdeclaratorattr_ = (yyval.listinitdeclaratorattr_); }
#line 3937 "Parser.C"
    break;

  case 214: /* InitDeclarator: Declarator  */
#line 719 "cparser.y"
                            { (yyval.initdeclarator_) = new acsl::SimpleInitDeclarator((yyvsp[0].declarator_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 3943 "Parser.C"
    break;

  case 215: /* InitDeclarator: Declarator _EQ InitExpression  */
#line 720 "cparser.y"
                                  { (yyval.initdeclarator_) = new acsl::InitDeclaratorExpression((yyvsp[-2].declarator_), (yyvsp[0].initexpression_)); (yyval.initdeclarator_)->line_number = (yyloc).first_line; (yyval.initdeclarator_)->char_number = (yyloc).first_column; result->initdeclarator_ = (yyval.initdeclarator_); }
#line 3949 "Parser.C"
    break;

  case 216: /* DeclSpecWOType: _KW_typedef  */
#line 722 "cparser.y"
                             { (yyval.declspecwotype_) = new acsl::TypedefKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 3955 "Parser.C"
    break;

  case 217: /* DeclSpecWOType: _KW_extern  */
#line 723 "cparser.y"
               { (yyval.declspecwotype_) = new acsl::ExternKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 3961 "Parser.C"
    break;

  case 218: /* DeclSpecWOType: _KW_static  */
#line 724 "cparser.y"
               { (yyval.declspecwotype_) = new acsl::StaticKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 3967 "Parser.C"
    break;

  case 219: /* DeclSpecWOType: _KW_auto  */
#line 725 "cparser.y"
             { (yyval.declspecwotype_) = new acsl::AutoKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 3973 "Parser.C"
    break;

  case 220: /* DeclSpecWOType: _KW_register  */
#line 726 "cparser.y"
                 { (yyval.declspecwotype_) = new acsl::RegisterKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 3979 "Parser.C"
    break;

  case 221: /* DeclSpecWOType: T_INLINE  */
#line 727 "cparser.y"
             { (yyval.declspecwotype_) = new acsl::InlineKeyWord((yyvsp[0]._string)); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 3985 "Parser.C"
    break;

  case 222: /* DeclSpecWOType: _SYMB_52  */
#line 728 "cparser.y"
             { (yyval.declspecwotype_) = new acsl::NoReturnKeyWord(); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 3991 "Parser.C"
    break;

  case 223: /* DeclSpecWOType: CVSpec  */
#line 729 "cparser.y"
           { (yyval.declspecwotype_) = new acsl::DeclSpecCVSpec((yyvsp[0].cvspec_)); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 3997 "Parser.C"
    break;

  case 224: /* DeclSpecWOType: AttributeNocv  */
#line 730 "cparser.y"
                  { (yyval.declspecwotype_) = new acsl::DeclSpecAtribNOCV((yyvsp[0].attributenocv_)); (yyval.declspecwotype_)->line_number = (yyloc).first_line; (yyval.declspecwotype_)->char_number = (yyloc).first_column; result->declspecwotype_ = (yyval.declspecwotype_); }
#line 4003 "Parser.C"
    break;

  case 225: /* DeclSpecList: DeclSpecWOType  */
#line 732 "cparser.y"
                              { (yyval.declspeclist_) = new acsl::DeclSpecWoType((yyvsp[0].declspecwotype_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 4009 "Parser.C"
    break;

  case 226: /* DeclSpecList: DeclSpecWOType DeclSpecList  */
#line 733 "cparser.y"
                                { (yyval.declspeclist_) = new acsl::DeclSpecWoTypeNext((yyvsp[-1].declspecwotype_), (yyvsp[0].declspeclist_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 4015 "Parser.C"
    break;

  case 227: /* DeclSpecList: TypeSpec  */
#line 734 "cparser.y"
             { (yyval.declspeclist_) = new acsl::DeclSpecTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 4021 "Parser.C"
    break;

  case 228: /* DeclSpecList: TypeSpec DeclSpecListNoNamed  */
#line 735 "cparser.y"
                                 { (yyval.declspeclist_) = new acsl::DeclSpecTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclist_)->line_number = (yyloc).first_line; (yyval.declspeclist_)->char_number = (yyloc).first_column; result->declspeclist_ = (yyval.declspeclist_); }
#line 4027 "Parser.C"
    break;

  case 229: /* DeclSpecListNoNamed: DeclSpecWOType  */
#line 737 "cparser.y"
                                     { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedWOType((yyvsp[0].declspecwotype_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 4033 "Parser.C"
    break;

  case 230: /* DeclSpecListNoNamed: DeclSpecWOType DeclSpecListNoNamed  */
#line 738 "cparser.y"
                                       { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedWOTypeNext((yyvsp[-1].declspecwotype_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 4039 "Parser.C"
    break;

  case 231: /* DeclSpecListNoNamed: TypeSpec  */
#line 739 "cparser.y"
             { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedTypeSpec((yyvsp[0].typespec_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 4045 "Parser.C"
    break;

  case 232: /* DeclSpecListNoNamed: TypeSpec DeclSpecListNoNamed  */
#line 740 "cparser.y"
                                 { (yyval.declspeclistnonamed_) = new acsl::DeclSpecNoNamedTypeSpecNext((yyvsp[-1].typespec_), (yyvsp[0].declspeclistnonamed_)); (yyval.declspeclistnonamed_)->line_number = (yyloc).first_line; (yyval.declspeclistnonamed_)->char_number = (yyloc).first_column; result->declspeclistnonamed_ = (yyval.declspeclistnonamed_); }
#line 4051 "Parser.C"
    break;

  case 233: /* TypeSpec: _KW_void  */
#line 742 "cparser.y"
                    { (yyval.typespec_) = new acsl::VoidKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4057 "Parser.C"
    break;

  case 234: /* TypeSpec: _KW_char  */
#line 743 "cparser.y"
             { (yyval.typespec_) = new acsl::CharKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4063 "Parser.C"
    break;

  case 235: /* TypeSpec: _SYMB_53  */
#line 744 "cparser.y"
             { (yyval.typespec_) = new acsl::BoolKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4069 "Parser.C"
    break;

  case 236: /* TypeSpec: _KW_short  */
#line 745 "cparser.y"
              { (yyval.typespec_) = new acsl::ShortKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4075 "Parser.C"
    break;

  case 237: /* TypeSpec: T_INT  */
#line 746 "cparser.y"
          { (yyval.typespec_) = new acsl::IntKeyWord((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4081 "Parser.C"
    break;

  case 238: /* TypeSpec: _KW_long  */
#line 747 "cparser.y"
             { (yyval.typespec_) = new acsl::LongKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4087 "Parser.C"
    break;

  case 239: /* TypeSpec: _SYMB_54  */
#line 748 "cparser.y"
             { (yyval.typespec_) = new acsl::Int64KeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4093 "Parser.C"
    break;

  case 240: /* TypeSpec: _KW_float  */
#line 749 "cparser.y"
              { (yyval.typespec_) = new acsl::FloatKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4099 "Parser.C"
    break;

  case 241: /* TypeSpec: _KW_double  */
#line 750 "cparser.y"
               { (yyval.typespec_) = new acsl::DoubleKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4105 "Parser.C"
    break;

  case 242: /* TypeSpec: T_SIGNED  */
#line 751 "cparser.y"
             { (yyval.typespec_) = new acsl::SignedKeyWord((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4111 "Parser.C"
    break;

  case 243: /* TypeSpec: _KW_unsigned  */
#line 752 "cparser.y"
                 { (yyval.typespec_) = new acsl::UnsignedKeyWord(); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4117 "Parser.C"
    break;

  case 244: /* TypeSpec: _KW_struct IdOrTypename  */
#line 753 "cparser.y"
                            { (yyval.typespec_) = new acsl::StructId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4123 "Parser.C"
    break;

  case 245: /* TypeSpec: _KW_struct ListJustAttribute IdOrTypename  */
#line 754 "cparser.y"
                                              { std::reverse((yyvsp[-1].listjustattribute_)->begin(),(yyvsp[-1].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::StructJustAttr((yyvsp[-1].listjustattribute_), (yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4129 "Parser.C"
    break;

  case 246: /* TypeSpec: _KW_struct IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 755 "cparser.y"
                                                             { (yyval.typespec_) = new acsl::StructIdBraces((yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4135 "Parser.C"
    break;

  case 247: /* TypeSpec: _KW_struct T_LBRACE StructDeclList T_RBRACE  */
#line 756 "cparser.y"
                                                { (yyval.typespec_) = new acsl::StructBraces((yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4141 "Parser.C"
    break;

  case 248: /* TypeSpec: _KW_struct ListJustAttribute IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 757 "cparser.y"
                                                                               { std::reverse((yyvsp[-4].listjustattribute_)->begin(),(yyvsp[-4].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::StructJustAttrIdBraces((yyvsp[-4].listjustattribute_), (yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4147 "Parser.C"
    break;

  case 249: /* TypeSpec: _KW_struct ListJustAttribute T_LBRACE StructDeclList T_RBRACE  */
#line 758 "cparser.y"
                                                                  { std::reverse((yyvsp[-3].listjustattribute_)->begin(),(yyvsp[-3].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::StructJustAttrBraces((yyvsp[-3].listjustattribute_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4153 "Parser.C"
    break;

  case 250: /* TypeSpec: _KW_union IdOrTypename  */
#line 759 "cparser.y"
                           { (yyval.typespec_) = new acsl::UnionId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4159 "Parser.C"
    break;

  case 251: /* TypeSpec: _KW_union IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 760 "cparser.y"
                                                            { (yyval.typespec_) = new acsl::UnionIdBraces((yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4165 "Parser.C"
    break;

  case 252: /* TypeSpec: _KW_union T_LBRACE StructDeclList T_RBRACE  */
#line 761 "cparser.y"
                                               { (yyval.typespec_) = new acsl::UnionBraces((yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4171 "Parser.C"
    break;

  case 253: /* TypeSpec: _KW_union ListJustAttribute IdOrTypename T_LBRACE StructDeclList T_RBRACE  */
#line 762 "cparser.y"
                                                                              { std::reverse((yyvsp[-4].listjustattribute_)->begin(),(yyvsp[-4].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::UnionJustAttrIdBraces((yyvsp[-4].listjustattribute_), (yyvsp[-3].idortypename_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4177 "Parser.C"
    break;

  case 254: /* TypeSpec: _KW_union ListJustAttribute T_LBRACE StructDeclList T_RBRACE  */
#line 763 "cparser.y"
                                                                 { std::reverse((yyvsp[-3].listjustattribute_)->begin(),(yyvsp[-3].listjustattribute_)->end()) ;(yyval.typespec_) = new acsl::UnionJustAttrBraces((yyvsp[-3].listjustattribute_), (yyvsp[-2]._string), (yyvsp[-1].structdecllist_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4183 "Parser.C"
    break;

  case 255: /* TypeSpec: _KW_enum IdOrTypename  */
#line 764 "cparser.y"
                          { (yyval.typespec_) = new acsl::EnumId((yyvsp[0].idortypename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4189 "Parser.C"
    break;

  case 256: /* TypeSpec: _KW_enum IdOrTypename T_LBRACE ListEnumerator MaybeComma T_RBRACE  */
#line 765 "cparser.y"
                                                                      { std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new acsl::EnumIdBraces((yyvsp[-4].idortypename_), (yyvsp[-3]._string), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4195 "Parser.C"
    break;

  case 257: /* TypeSpec: _KW_enum T_LBRACE ListEnumerator MaybeComma T_RBRACE  */
#line 766 "cparser.y"
                                                         { std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new acsl::EnumBraces((yyvsp[-3]._string), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4201 "Parser.C"
    break;

  case 258: /* TypeSpec: _KW_enum ListJustAttribute IdOrTypename T_LBRACE ListEnumerator MaybeComma T_RBRACE  */
#line 767 "cparser.y"
                                                                                        { std::reverse((yyvsp[-5].listjustattribute_)->begin(),(yyvsp[-5].listjustattribute_)->end()) ; std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new acsl::EnumJustAttrIdBraces((yyvsp[-5].listjustattribute_), (yyvsp[-4].idortypename_), (yyvsp[-3]._string), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4207 "Parser.C"
    break;

  case 259: /* TypeSpec: _KW_enum ListJustAttribute T_LBRACE ListEnumerator MaybeComma T_RBRACE  */
#line 768 "cparser.y"
                                                                           { std::reverse((yyvsp[-4].listjustattribute_)->begin(),(yyvsp[-4].listjustattribute_)->end()) ; std::reverse((yyvsp[-2].listenumerator_)->begin(),(yyvsp[-2].listenumerator_)->end()) ;(yyval.typespec_) = new acsl::EnumJustAttrBraces((yyvsp[-4].listjustattribute_), (yyvsp[-3]._string), (yyvsp[-2].listenumerator_), (yyvsp[-1].maybecomma_), (yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4213 "Parser.C"
    break;

  case 260: /* TypeSpec: T_NAMEDTYPE  */
#line 769 "cparser.y"
                { (yyval.typespec_) = new acsl::NamedTypeTypeSpec((yyvsp[0]._string)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4219 "Parser.C"
    break;

  case 261: /* TypeSpec: T_TYPEOF _LPAREN Expression _RPAREN  */
#line 770 "cparser.y"
                                        { (yyval.typespec_) = new acsl::TypeOfExpression((yyvsp[-3]._string), (yyvsp[-1].expression_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4225 "Parser.C"
    break;

  case 262: /* TypeSpec: T_TYPEOF _LPAREN TypeName _RPAREN  */
#line 771 "cparser.y"
                                      { (yyval.typespec_) = new acsl::TypeOfTypeName((yyvsp[-3]._string), (yyvsp[-1].typename_)); (yyval.typespec_)->line_number = (yyloc).first_line; (yyval.typespec_)->char_number = (yyloc).first_column; result->typespec_ = (yyval.typespec_); }
#line 4231 "Parser.C"
    break;

  case 263: /* StructDeclList: %empty  */
#line 773 "cparser.y"
                             { (yyval.structdecllist_) = new acsl::EmptyStructDecl(); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 4237 "Parser.C"
    break;

  case 264: /* StructDeclList: DeclSpecList _SEMI StructDeclList  */
#line 774 "cparser.y"
                                      { (yyval.structdecllist_) = new acsl::DeclSpecStructDecl((yyvsp[-2].declspeclist_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 4243 "Parser.C"
    break;

  case 265: /* StructDeclList: _SEMI StructDeclList  */
#line 775 "cparser.y"
                         { (yyval.structdecllist_) = new acsl::SemicolonStructDecl((yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 4249 "Parser.C"
    break;

  case 266: /* StructDeclList: DeclSpecList ListFieldDecl _SEMI StructDeclList  */
#line 776 "cparser.y"
                                                    { std::reverse((yyvsp[-2].listfielddecl_)->begin(),(yyvsp[-2].listfielddecl_)->end()) ;(yyval.structdecllist_) = new acsl::SpecFieldDeclStructDecl((yyvsp[-3].declspeclist_), (yyvsp[-2].listfielddecl_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 4255 "Parser.C"
    break;

  case 267: /* StructDeclList: Pragma StructDeclList  */
#line 777 "cparser.y"
                          { (yyval.structdecllist_) = new acsl::PragmaStructDecl((yyvsp[-1].pragma_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 4261 "Parser.C"
    break;

  case 268: /* StructDeclList: StaticAssertDeclaration  */
#line 778 "cparser.y"
                            { (yyval.structdecllist_) = new acsl::StaticAssertStructDecl((yyvsp[0].staticassertdeclaration_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 4267 "Parser.C"
    break;

  case 269: /* StructDeclList: StaticAssertDeclaration _SEMI StructDeclList  */
#line 779 "cparser.y"
                                                 { (yyval.structdecllist_) = new acsl::StaticAssertStructDeclNext((yyvsp[-2].staticassertdeclaration_), (yyvsp[0].structdecllist_)); (yyval.structdecllist_)->line_number = (yyloc).first_line; (yyval.structdecllist_)->char_number = (yyloc).first_column; result->structdecllist_ = (yyval.structdecllist_); }
#line 4273 "Parser.C"
    break;

  case 270: /* StaticAssertDeclaration: _SYMB_51 _LPAREN Expression _RPAREN  */
#line 781 "cparser.y"
                                                              { (yyval.staticassertdeclaration_) = new acsl::StaticAssert((yyvsp[-1].expression_)); (yyval.staticassertdeclaration_)->line_number = (yyloc).first_line; (yyval.staticassertdeclaration_)->char_number = (yyloc).first_column; result->staticassertdeclaration_ = (yyval.staticassertdeclaration_); }
#line 4279 "Parser.C"
    break;

  case 271: /* StaticAssertDeclaration: _SYMB_51 _LPAREN Expression _COMMA StringConstant _RPAREN  */
#line 782 "cparser.y"
                                                              { (yyval.staticassertdeclaration_) = new acsl::StaticAssertStringConst((yyvsp[-3].expression_), (yyvsp[-1].stringconstant_)); (yyval.staticassertdeclaration_)->line_number = (yyloc).first_line; (yyval.staticassertdeclaration_)->char_number = (yyloc).first_column; result->staticassertdeclaration_ = (yyval.staticassertdeclaration_); }
#line 4285 "Parser.C"
    break;

  case 272: /* FieldDecl: Declarator  */
#line 784 "cparser.y"
                       { (yyval.fielddecl_) = new acsl::FieldDeclDeclarator((yyvsp[0].declarator_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 4291 "Parser.C"
    break;

  case 273: /* FieldDecl: Declarator _COLON Expression ListAttribute  */
#line 785 "cparser.y"
                                               { (yyval.fielddecl_) = new acsl::FieldDeclDeclaratorColon((yyvsp[-3].declarator_), (yyvsp[-1].expression_), (yyvsp[0].listattribute_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 4297 "Parser.C"
    break;

  case 274: /* FieldDecl: _COLON Expression  */
#line 786 "cparser.y"
                      { (yyval.fielddecl_) = new acsl::FieldDeclColonExpression((yyvsp[0].expression_)); (yyval.fielddecl_)->line_number = (yyloc).first_line; (yyval.fielddecl_)->char_number = (yyloc).first_column; result->fielddecl_ = (yyval.fielddecl_); }
#line 4303 "Parser.C"
    break;

  case 275: /* ListFieldDecl: FieldDecl  */
#line 788 "cparser.y"
                          { (yyval.listfielddecl_) = new acsl::ListFieldDecl(); (yyval.listfielddecl_)->push_back((yyvsp[0].fielddecl_)); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 4309 "Parser.C"
    break;

  case 276: /* ListFieldDecl: FieldDecl _COMMA ListFieldDecl  */
#line 789 "cparser.y"
                                   { (yyvsp[0].listfielddecl_)->push_back((yyvsp[-2].fielddecl_)); (yyval.listfielddecl_) = (yyvsp[0].listfielddecl_); result->listfielddecl_ = (yyval.listfielddecl_); }
#line 4315 "Parser.C"
    break;

  case 277: /* Enumerator: _IDENT_  */
#line 791 "cparser.y"
                     { (yyval.enumerator_) = new acsl::IdentEnumerator((yyvsp[0]._string)); (yyval.enumerator_)->line_number = (yyloc).first_line; (yyval.enumerator_)->char_number = (yyloc).first_column; result->enumerator_ = (yyval.enumerator_); }
#line 4321 "Parser.C"
    break;

  case 278: /* Enumerator: _IDENT_ _EQ Expression  */
#line 792 "cparser.y"
                           { (yyval.enumerator_) = new acsl::IdentAssignExpr((yyvsp[-2]._string), (yyvsp[0].expression_)); (yyval.enumerator_)->line_number = (yyloc).first_line; (yyval.enumerator_)->char_number = (yyloc).first_column; result->enumerator_ = (yyval.enumerator_); }
#line 4327 "Parser.C"
    break;

  case 279: /* ListEnumerator: Enumerator  */
#line 794 "cparser.y"
                            { (yyval.listenumerator_) = new acsl::ListEnumerator(); (yyval.listenumerator_)->push_back((yyvsp[0].enumerator_)); result->listenumerator_ = (yyval.listenumerator_); }
#line 4333 "Parser.C"
    break;

  case 280: /* ListEnumerator: Enumerator _COMMA ListEnumerator  */
#line 795 "cparser.y"
                                     { (yyvsp[0].listenumerator_)->push_back((yyvsp[-2].enumerator_)); (yyval.listenumerator_) = (yyvsp[0].listenumerator_); result->listenumerator_ = (yyval.listenumerator_); }
#line 4339 "Parser.C"
    break;

  case 281: /* Declarator: PointerOpt DirectDecl AttributesWithAsm  */
#line 797 "cparser.y"
                                                     { (yyval.declarator_) = new acsl::ADeclarator((yyvsp[-2].pointeropt_), (yyvsp[-1].directdecl_), (yyvsp[0].attributeswithasm_)); (yyval.declarator_)->line_number = (yyloc).first_line; (yyval.declarator_)->char_number = (yyloc).first_column; result->declarator_ = (yyval.declarator_); }
#line 4345 "Parser.C"
    break;

  case 282: /* ListDeclarator: Declarator  */
#line 799 "cparser.y"
                            { (yyval.listdeclarator_) = new acsl::ListDeclarator(); (yyval.listdeclarator_)->push_back((yyvsp[0].declarator_)); result->listdeclarator_ = (yyval.listdeclarator_); }
#line 4351 "Parser.C"
    break;

  case 283: /* ListDeclarator: Declarator _COMMA ListDeclarator  */
#line 800 "cparser.y"
                                     { (yyvsp[0].listdeclarator_)->push_back((yyvsp[-2].declarator_)); (yyval.listdeclarator_) = (yyvsp[0].listdeclarator_); result->listdeclarator_ = (yyval.listdeclarator_); }
#line 4357 "Parser.C"
    break;

  case 284: /* AttributesOrStatic: ListAttribute CommaExpressionOpt  */
#line 802 "cparser.y"
                                                      { (yyval.attributesorstatic_) = new acsl::AttributesCommaExpression((yyvsp[-1].listattribute_), (yyvsp[0].commaexpressionopt_)); (yyval.attributesorstatic_)->line_number = (yyloc).first_line; (yyval.attributesorstatic_)->char_number = (yyloc).first_column; result->attributesorstatic_ = (yyval.attributesorstatic_); }
#line 4363 "Parser.C"
    break;

  case 285: /* AttributesOrStatic: Attribute ListAttribute _KW_static ListExpression  */
#line 803 "cparser.y"
                                                      { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.attributesorstatic_) = new acsl::AttributesStaticExpression((yyvsp[-3].attribute_), (yyvsp[-2].listattribute_), (yyvsp[0].listexpression_)); (yyval.attributesorstatic_)->line_number = (yyloc).first_line; (yyval.attributesorstatic_)->char_number = (yyloc).first_column; result->attributesorstatic_ = (yyval.attributesorstatic_); }
#line 4369 "Parser.C"
    break;

  case 286: /* AttributesOrStatic: _KW_static ListAttribute ListExpression  */
#line 804 "cparser.y"
                                            { std::reverse((yyvsp[0].listexpression_)->begin(),(yyvsp[0].listexpression_)->end()) ;(yyval.attributesorstatic_) = new acsl::StaticAttributesExpression((yyvsp[-1].listattribute_), (yyvsp[0].listexpression_)); (yyval.attributesorstatic_)->line_number = (yyloc).first_line; (yyval.attributesorstatic_)->char_number = (yyloc).first_column; result->attributesorstatic_ = (yyval.attributesorstatic_); }
#line 4375 "Parser.C"
    break;

  case 287: /* DirectDecl: IdOrTypename  */
#line 806 "cparser.y"
                          { (yyval.directdecl_) = new acsl::DirectDeclIdTypename((yyvsp[0].idortypename_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 4381 "Parser.C"
    break;

  case 288: /* DirectDecl: _LPAREN ListAttribute Declarator _RPAREN  */
#line 807 "cparser.y"
                                             { (yyval.directdecl_) = new acsl::DirectDeclAttrDecl((yyvsp[-2].listattribute_), (yyvsp[-1].declarator_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 4387 "Parser.C"
    break;

  case 289: /* DirectDecl: DirectDecl T_LBRACKET AttributesOrStatic T_RBRACKET  */
#line 808 "cparser.y"
                                                        { (yyval.directdecl_) = new acsl::DirectDeclAttrStatic((yyvsp[-3].directdecl_), (yyvsp[-2]._string), (yyvsp[-1].attributesorstatic_), (yyvsp[0]._string)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 4393 "Parser.C"
    break;

  case 290: /* DirectDecl: DirectDecl _LPAREN _RPAREN GhostParameterOpt  */
#line 809 "cparser.y"
                                                 { (yyval.directdecl_) = new acsl::DirectDeclGhostParam((yyvsp[-3].directdecl_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 4399 "Parser.C"
    break;

  case 291: /* DirectDecl: DirectDecl _LPAREN RestParList _RPAREN GhostParameterOpt  */
#line 810 "cparser.y"
                                                             { (yyval.directdecl_) = new acsl::DirectDeclGhostRestParParam((yyvsp[-4].directdecl_), (yyvsp[-2].restparlist_), (yyvsp[0].ghostparameteropt_)); (yyval.directdecl_)->line_number = (yyloc).first_line; (yyval.directdecl_)->char_number = (yyloc).first_column; result->directdecl_ = (yyval.directdecl_); }
#line 4405 "Parser.C"
    break;

  case 292: /* RestParList: ListParameterDecl  */
#line 812 "cparser.y"
                                { std::reverse((yyvsp[0].listparameterdecl_)->begin(),(yyvsp[0].listparameterdecl_)->end()) ;(yyval.restparlist_) = new acsl::SimpleParameterDecl((yyvsp[0].listparameterdecl_)); (yyval.restparlist_)->line_number = (yyloc).first_line; (yyval.restparlist_)->char_number = (yyloc).first_column; result->restparlist_ = (yyval.restparlist_); }
#line 4411 "Parser.C"
    break;

  case 293: /* RestParList: ListParameterDecl _COMMA _ELLIPSIS  */
#line 813 "cparser.y"
                                       { std::reverse((yyvsp[-2].listparameterdecl_)->begin(),(yyvsp[-2].listparameterdecl_)->end()) ;(yyval.restparlist_) = new acsl::DotDotDotParameterDecl((yyvsp[-2].listparameterdecl_)); (yyval.restparlist_)->line_number = (yyloc).first_line; (yyval.restparlist_)->char_number = (yyloc).first_column; result->restparlist_ = (yyval.restparlist_); }
#line 4417 "Parser.C"
    break;

  case 294: /* ParameterDecl: DeclSpecList Declarator  */
#line 815 "cparser.y"
                                        { (yyval.parameterdecl_) = new acsl::ParameterDeclSpecDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 4423 "Parser.C"
    break;

  case 295: /* ParameterDecl: DeclSpecList AbstractDecl  */
#line 816 "cparser.y"
                              { (yyval.parameterdecl_) = new acsl::ParameterDeclSpecAbstract((yyvsp[-1].declspeclist_), (yyvsp[0].abstractdecl_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 4429 "Parser.C"
    break;

  case 296: /* ParameterDecl: DeclSpecList  */
#line 817 "cparser.y"
                 { (yyval.parameterdecl_) = new acsl::ParameterDeclSpec((yyvsp[0].declspeclist_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 4435 "Parser.C"
    break;

  case 297: /* ParameterDecl: _LPAREN ParameterDecl _RPAREN  */
#line 818 "cparser.y"
                                  { (yyval.parameterdecl_) = new acsl::ParameterDeclPar((yyvsp[-1].parameterdecl_)); (yyval.parameterdecl_)->line_number = (yyloc).first_line; (yyval.parameterdecl_)->char_number = (yyloc).first_column; result->parameterdecl_ = (yyval.parameterdecl_); }
#line 4441 "Parser.C"
    break;

  case 298: /* ListParameterDecl: ParameterDecl  */
#line 820 "cparser.y"
                                  { (yyval.listparameterdecl_) = new acsl::ListParameterDecl(); (yyval.listparameterdecl_)->push_back((yyvsp[0].parameterdecl_)); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 4447 "Parser.C"
    break;

  case 299: /* ListParameterDecl: ParameterDecl _COMMA ListParameterDecl  */
#line 821 "cparser.y"
                                           { (yyvsp[0].listparameterdecl_)->push_back((yyvsp[-2].parameterdecl_)); (yyval.listparameterdecl_) = (yyvsp[0].listparameterdecl_); result->listparameterdecl_ = (yyval.listparameterdecl_); }
#line 4453 "Parser.C"
    break;

  case 300: /* DirectOldProtoDecl: DirectDecl _LPAREN ListIdent _RPAREN OldPardefList  */
#line 823 "cparser.y"
                                                                        { std::reverse((yyvsp[-2].listident_)->begin(),(yyvsp[-2].listident_)->end()) ;(yyval.directoldprotodecl_) = new acsl::OldDirectProtoDecl((yyvsp[-4].directdecl_), (yyvsp[-2].listident_), (yyvsp[0].oldpardeflist_)); (yyval.directoldprotodecl_)->line_number = (yyloc).first_line; (yyval.directoldprotodecl_)->char_number = (yyloc).first_column; result->directoldprotodecl_ = (yyval.directoldprotodecl_); }
#line 4459 "Parser.C"
    break;

  case 301: /* ListIdent: _IDENT_  */
#line 825 "cparser.y"
                    { (yyval.listident_) = new acsl::ListIdent(); (yyval.listident_)->push_back((yyvsp[0]._string)); result->listident_ = (yyval.listident_); }
#line 4465 "Parser.C"
    break;

  case 302: /* ListIdent: _IDENT_ _COMMA ListIdent  */
#line 826 "cparser.y"
                             { (yyvsp[0].listident_)->push_back((yyvsp[-2]._string)); (yyval.listident_) = (yyvsp[0].listident_); result->listident_ = (yyval.listident_); }
#line 4471 "Parser.C"
    break;

  case 303: /* OldPardefList: %empty  */
#line 828 "cparser.y"
                            { (yyval.oldpardeflist_) = new acsl::EmptyOldPardefList(); (yyval.oldpardeflist_)->line_number = (yyloc).first_line; (yyval.oldpardeflist_)->char_number = (yyloc).first_column; result->oldpardeflist_ = (yyval.oldpardeflist_); }
#line 4477 "Parser.C"
    break;

  case 304: /* OldPardefList: ListOldPardef _ELLIPSIS  */
#line 829 "cparser.y"
                            { std::reverse((yyvsp[-1].listoldpardef_)->begin(),(yyvsp[-1].listoldpardef_)->end()) ;(yyval.oldpardeflist_) = new acsl::DotDotDotOldPardefList((yyvsp[-1].listoldpardef_)); (yyval.oldpardeflist_)->line_number = (yyloc).first_line; (yyval.oldpardeflist_)->char_number = (yyloc).first_column; result->oldpardeflist_ = (yyval.oldpardeflist_); }
#line 4483 "Parser.C"
    break;

  case 305: /* OldPardefList: ListOldPardef  */
#line 830 "cparser.y"
                  { std::reverse((yyvsp[0].listoldpardef_)->begin(),(yyvsp[0].listoldpardef_)->end()) ;(yyval.oldpardeflist_) = new acsl::SimpleOldPardefList((yyvsp[0].listoldpardef_)); (yyval.oldpardeflist_)->line_number = (yyloc).first_line; (yyval.oldpardeflist_)->char_number = (yyloc).first_column; result->oldpardeflist_ = (yyval.oldpardeflist_); }
#line 4489 "Parser.C"
    break;

  case 306: /* OldPardef: DeclSpecList ListDeclarator  */
#line 832 "cparser.y"
                                        { std::reverse((yyvsp[0].listdeclarator_)->begin(),(yyvsp[0].listdeclarator_)->end()) ;(yyval.oldpardef_) = new acsl::OldParDef((yyvsp[-1].declspeclist_), (yyvsp[0].listdeclarator_)); (yyval.oldpardef_)->line_number = (yyloc).first_line; (yyval.oldpardef_)->char_number = (yyloc).first_column; result->oldpardef_ = (yyval.oldpardef_); }
#line 4495 "Parser.C"
    break;

  case 307: /* ListOldPardef: OldPardef  */
#line 834 "cparser.y"
                          { (yyval.listoldpardef_) = new acsl::ListOldPardef(); (yyval.listoldpardef_)->push_back((yyvsp[0].oldpardef_)); result->listoldpardef_ = (yyval.listoldpardef_); }
#line 4501 "Parser.C"
    break;

  case 308: /* ListOldPardef: OldPardef _SEMI ListOldPardef  */
#line 835 "cparser.y"
                                  { (yyvsp[0].listoldpardef_)->push_back((yyvsp[-2].oldpardef_)); (yyval.listoldpardef_) = (yyvsp[0].listoldpardef_); result->listoldpardef_ = (yyval.listoldpardef_); }
#line 4507 "Parser.C"
    break;

  case 309: /* PointerOpt: %empty  */
#line 837 "cparser.y"
                         { (yyval.pointeropt_) = new acsl::NoPointer(); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 4513 "Parser.C"
    break;

  case 310: /* PointerOpt: _STAR ListAttribute PointerOpt  */
#line 838 "cparser.y"
                                   { (yyval.pointeropt_) = new acsl::SomePointer((yyvsp[-1].listattribute_), (yyvsp[0].pointeropt_)); (yyval.pointeropt_)->line_number = (yyloc).first_line; (yyval.pointeropt_)->char_number = (yyloc).first_column; result->pointeropt_ = (yyval.pointeropt_); }
#line 4519 "Parser.C"
    break;

  case 311: /* TypeName: DeclSpecList AbstractDecl  */
#line 840 "cparser.y"
                                     { (yyval.typename_) = new acsl::TypeNameAbstractDecl((yyvsp[-1].declspeclist_), (yyvsp[0].abstractdecl_)); (yyval.typename_)->line_number = (yyloc).first_line; (yyval.typename_)->char_number = (yyloc).first_column; result->typename_ = (yyval.typename_); }
#line 4525 "Parser.C"
    break;

  case 312: /* TypeName: DeclSpecList  */
#line 841 "cparser.y"
                 { (yyval.typename_) = new acsl::TypeNameDeclSpecList((yyvsp[0].declspeclist_)); (yyval.typename_)->line_number = (yyloc).first_line; (yyval.typename_)->char_number = (yyloc).first_column; result->typename_ = (yyval.typename_); }
#line 4531 "Parser.C"
    break;

  case 313: /* AbstractDecl: PointerOpt AbsDirectDecl ListAttribute  */
#line 843 "cparser.y"
                                                      { (yyval.abstractdecl_) = new acsl::AbstractDeclAttr((yyvsp[-2].pointeropt_), (yyvsp[-1].absdirectdecl_), (yyvsp[0].listattribute_)); (yyval.abstractdecl_)->line_number = (yyloc).first_line; (yyval.abstractdecl_)->char_number = (yyloc).first_column; result->abstractdecl_ = (yyval.abstractdecl_); }
#line 4537 "Parser.C"
    break;

  case 314: /* AbstractDecl: _STAR ListAttribute PointerOpt  */
#line 844 "cparser.y"
                                   { (yyval.abstractdecl_) = new acsl::AbstractDeclPointer((yyvsp[-1].listattribute_), (yyvsp[0].pointeropt_)); (yyval.abstractdecl_)->line_number = (yyloc).first_line; (yyval.abstractdecl_)->char_number = (yyloc).first_column; result->abstractdecl_ = (yyval.abstractdecl_); }
#line 4543 "Parser.C"
    break;

  case 315: /* AbsDirectDecl: _LPAREN ListAttribute AbstractDecl _RPAREN  */
#line 846 "cparser.y"
                                                           { (yyval.absdirectdecl_) = new acsl::AbsDirectDeclPar((yyvsp[-2].listattribute_), (yyvsp[-1].abstractdecl_)); (yyval.absdirectdecl_)->line_number = (yyloc).first_line; (yyval.absdirectdecl_)->char_number = (yyloc).first_column; result->absdirectdecl_ = (yyval.absdirectdecl_); }
#line 4549 "Parser.C"
    break;

  case 316: /* AbsDirectDecl: AbsDirectDeclOpt T_LBRACKET CommaExpressionOpt T_RBRACKET  */
#line 847 "cparser.y"
                                                              { (yyval.absdirectdecl_) = new acsl::AbsDirectDeclBreckets((yyvsp[-3].absdirectdeclopt_), (yyvsp[-2]._string), (yyvsp[-1].commaexpressionopt_), (yyvsp[0]._string)); (yyval.absdirectdecl_)->line_number = (yyloc).first_line; (yyval.absdirectdecl_)->char_number = (yyloc).first_column; result->absdirectdecl_ = (yyval.absdirectdecl_); }
#line 4555 "Parser.C"
    break;

  case 317: /* AbsDirectDecl: AbsDirectDecl _LPAREN RestParList _RPAREN  */
#line 848 "cparser.y"
                                              { (yyval.absdirectdecl_) = new acsl::AbsDirectDeclRestPar((yyvsp[-3].absdirectdecl_), (yyvsp[-1].restparlist_)); (yyval.absdirectdecl_)->line_number = (yyloc).first_line; (yyval.absdirectdecl_)->char_number = (yyloc).first_column; result->absdirectdecl_ = (yyval.absdirectdecl_); }
#line 4561 "Parser.C"
    break;

  case 318: /* AbsDirectDecl: AbsDirectDecl _LPAREN _RPAREN  */
#line 849 "cparser.y"
                                  { (yyval.absdirectdecl_) = new acsl::AbsDirectDeclNoRestPar((yyvsp[-2].absdirectdecl_)); (yyval.absdirectdecl_)->line_number = (yyloc).first_line; (yyval.absdirectdecl_)->char_number = (yyloc).first_column; result->absdirectdecl_ = (yyval.absdirectdecl_); }
#line 4567 "Parser.C"
    break;

  case 319: /* AbsDirectDeclOpt: AbsDirectDecl  */
#line 851 "cparser.y"
                                 { (yyval.absdirectdeclopt_) = new acsl::SomeAbsDirectDecl((yyvsp[0].absdirectdecl_)); (yyval.absdirectdeclopt_)->line_number = (yyloc).first_line; (yyval.absdirectdeclopt_)->char_number = (yyloc).first_column; result->absdirectdeclopt_ = (yyval.absdirectdeclopt_); }
#line 4573 "Parser.C"
    break;

  case 320: /* AbsDirectDeclOpt: %empty  */
#line 852 "cparser.y"
                { (yyval.absdirectdeclopt_) = new acsl::NoAbsDirectDecl(); (yyval.absdirectdeclopt_)->line_number = (yyloc).first_line; (yyval.absdirectdeclopt_)->char_number = (yyloc).first_column; result->absdirectdeclopt_ = (yyval.absdirectdeclopt_); }
#line 4579 "Parser.C"
    break;

  case 321: /* FunctionDef: T_SPEC FunctionDefStart Block  */
#line 854 "cparser.y"
                                            { (yyval.functiondef_) = new acsl::FunctionDefSpec((yyvsp[-2]._string), (yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 4585 "Parser.C"
    break;

  case 322: /* FunctionDef: FunctionDefStart Block  */
#line 855 "cparser.y"
                           { (yyval.functiondef_) = new acsl::SimpleFunctionDef((yyvsp[-1].functiondefstart_), (yyvsp[0].block_)); (yyval.functiondef_)->line_number = (yyloc).first_line; (yyval.functiondef_)->char_number = (yyloc).first_column; result->functiondef_ = (yyval.functiondef_); }
#line 4591 "Parser.C"
    break;

  case 323: /* FunctionDefStart: DeclSpecList Declarator  */
#line 857 "cparser.y"
                                           { (yyval.functiondefstart_) = new acsl::FunctionDefStartDeclarator((yyvsp[-1].declspeclist_), (yyvsp[0].declarator_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 4597 "Parser.C"
    break;

  case 324: /* FunctionDefStart: DeclSpecList PointerOpt DirectOldProtoDecl  */
#line 858 "cparser.y"
                                               { (yyval.functiondefstart_) = new acsl::FunctionDefStartOldProtoDecl((yyvsp[-2].declspeclist_), (yyvsp[-1].pointeropt_), (yyvsp[0].directoldprotodecl_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 4603 "Parser.C"
    break;

  case 325: /* FunctionDefStart: _IDENT_ _LPAREN RestParList _RPAREN GhostParameterOpt  */
#line 859 "cparser.y"
                                                          { (yyval.functiondefstart_) = new acsl::FunctionDefStartReatParGhostParameter((yyvsp[-4]._string), (yyvsp[-2].restparlist_), (yyvsp[0].ghostparameteropt_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 4609 "Parser.C"
    break;

  case 326: /* FunctionDefStart: _IDENT_ _LPAREN ListIdent _RPAREN OldPardefList  */
#line 860 "cparser.y"
                                                    { std::reverse((yyvsp[-2].listident_)->begin(),(yyvsp[-2].listident_)->end()) ;(yyval.functiondefstart_) = new acsl::FunctionDefStartOldPardef((yyvsp[-4]._string), (yyvsp[-2].listident_), (yyvsp[0].oldpardeflist_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 4615 "Parser.C"
    break;

  case 327: /* FunctionDefStart: _IDENT_ _LPAREN _RPAREN GhostParameterOpt  */
#line 861 "cparser.y"
                                              { (yyval.functiondefstart_) = new acsl::FunctionDefStartGhostParameter((yyvsp[-3]._string), (yyvsp[0].ghostparameteropt_)); (yyval.functiondefstart_)->line_number = (yyloc).first_line; (yyval.functiondefstart_)->char_number = (yyloc).first_column; result->functiondefstart_ = (yyval.functiondefstart_); }
#line 4621 "Parser.C"
    break;

  case 328: /* CVSpec: T_CONST  */
#line 863 "cparser.y"
                 { (yyval.cvspec_) = new acsl::ConstKeyWord((yyvsp[0]._string)); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 4627 "Parser.C"
    break;

  case 329: /* CVSpec: T_VOLATILE  */
#line 864 "cparser.y"
               { (yyval.cvspec_) = new acsl::VolatileKeyWord((yyvsp[0]._string)); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 4633 "Parser.C"
    break;

  case 330: /* CVSpec: T_RESTRICT  */
#line 865 "cparser.y"
               { (yyval.cvspec_) = new acsl::RestrictKeyWord((yyvsp[0]._string)); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 4639 "Parser.C"
    break;

  case 331: /* CVSpec: _SYMB_55  */
#line 866 "cparser.y"
             { (yyval.cvspec_) = new acsl::GhostKeyWord(); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 4645 "Parser.C"
    break;

  case 332: /* CVSpec: T_ATTRIBUTE_ANNOT  */
#line 867 "cparser.y"
                      { (yyval.cvspec_) = new acsl::Attribute_annotKeyWord((yyvsp[0]._string)); (yyval.cvspec_)->line_number = (yyloc).first_line; (yyval.cvspec_)->char_number = (yyloc).first_column; result->cvspec_ = (yyval.cvspec_); }
#line 4651 "Parser.C"
    break;

  case 333: /* AttributesWithAsm: %empty  */
#line 869 "cparser.y"
                                { (yyval.attributeswithasm_) = new acsl::EmptyAttrWithASM(); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 4657 "Parser.C"
    break;

  case 334: /* AttributesWithAsm: Attribute ListAttribute  */
#line 870 "cparser.y"
                            { (yyval.attributeswithasm_) = new acsl::ListAttrWithASM((yyvsp[-1].attribute_), (yyvsp[0].listattribute_)); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 4663 "Parser.C"
    break;

  case 335: /* AttributesWithAsm: Attribute ListAttribute T_ASM _LPAREN StringConstant _RPAREN ListAttribute  */
#line 871 "cparser.y"
                                                                               { (yyval.attributeswithasm_) = new acsl::ListASMAttrWithASM((yyvsp[-6].attribute_), (yyvsp[-5].listattribute_), (yyvsp[-4]._string), (yyvsp[-2].stringconstant_), (yyvsp[0].listattribute_)); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 4669 "Parser.C"
    break;

  case 336: /* AttributesWithAsm: T_ASM _LPAREN StringConstant _RPAREN ListAttribute  */
#line 872 "cparser.y"
                                                       { (yyval.attributeswithasm_) = new acsl::ASMAttrWithASM((yyvsp[-4]._string), (yyvsp[-2].stringconstant_), (yyvsp[0].listattribute_)); (yyval.attributeswithasm_)->line_number = (yyloc).first_line; (yyval.attributeswithasm_)->char_number = (yyloc).first_column; result->attributeswithasm_ = (yyval.attributeswithasm_); }
#line 4675 "Parser.C"
    break;

  case 337: /* AttributeNocv: T_ATTRIBUTE _LPAREN _LPAREN AttrList _RPAREN _RPAREN  */
#line 874 "cparser.y"
                                                                     { (yyval.attributenocv_) = new acsl::AttributeAttrNocv((yyvsp[-5]._string), (yyvsp[-2].attrlist_)); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 4681 "Parser.C"
    break;

  case 338: /* AttributeNocv: _SYMB_56 _LPAREN ListAttr _RPAREN  */
#line 875 "cparser.y"
                                      { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.attributenocv_) = new acsl::DeclspecAttrNocv((yyvsp[-1].listattr_)); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 4687 "Parser.C"
    break;

  case 339: /* AttributeNocv: T_MSATTR  */
#line 876 "cparser.y"
             { (yyval.attributenocv_) = new acsl::MsattrAttrNocv((yyvsp[0]._string)); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 4693 "Parser.C"
    break;

  case 340: /* AttributeNocv: _SYMB_57  */
#line 877 "cparser.y"
             { (yyval.attributenocv_) = new acsl::ThreadAttrNocv(); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 4699 "Parser.C"
    break;

  case 341: /* AttributeNocv: _SYMB_58  */
#line 878 "cparser.y"
             { (yyval.attributenocv_) = new acsl::ThreadLocalAttrNocv(); (yyval.attributenocv_)->line_number = (yyloc).first_line; (yyval.attributenocv_)->char_number = (yyloc).first_column; result->attributenocv_ = (yyval.attributenocv_); }
#line 4705 "Parser.C"
    break;

  case 342: /* ListAttributeNocv: %empty  */
#line 880 "cparser.y"
                                { (yyval.listattributenocv_) = new acsl::ListAttributeNocv(); result->listattributenocv_ = (yyval.listattributenocv_); }
#line 4711 "Parser.C"
    break;

  case 343: /* ListAttributeNocv: ListAttributeNocv AttributeNocv  */
#line 881 "cparser.y"
                                    { (yyvsp[-1].listattributenocv_)->push_back((yyvsp[0].attributenocv_)); (yyval.listattributenocv_) = (yyvsp[-1].listattributenocv_); result->listattributenocv_ = (yyval.listattributenocv_); }
#line 4717 "Parser.C"
    break;

  case 344: /* Attribute: AttributeNocv  */
#line 883 "cparser.y"
                          { (yyval.attribute_) = new acsl::AttributeNoCV((yyvsp[0].attributenocv_)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 4723 "Parser.C"
    break;

  case 345: /* Attribute: T_CONST  */
#line 884 "cparser.y"
            { (yyval.attribute_) = new acsl::AttributeConst((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 4729 "Parser.C"
    break;

  case 346: /* Attribute: T_RESTRICT  */
#line 885 "cparser.y"
               { (yyval.attribute_) = new acsl::AttributeRestrict((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 4735 "Parser.C"
    break;

  case 347: /* Attribute: T_VOLATILE  */
#line 886 "cparser.y"
               { (yyval.attribute_) = new acsl::AttributeVolatile((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 4741 "Parser.C"
    break;

  case 348: /* Attribute: _SYMB_55  */
#line 887 "cparser.y"
             { (yyval.attribute_) = new acsl::AttributeGhost(); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 4747 "Parser.C"
    break;

  case 349: /* Attribute: T_ATTRIBUTE_ANNOT  */
#line 888 "cparser.y"
                      { (yyval.attribute_) = new acsl::AttributeAttributeAnnot((yyvsp[0]._string)); (yyval.attribute_)->line_number = (yyloc).first_line; (yyval.attribute_)->char_number = (yyloc).first_column; result->attribute_ = (yyval.attribute_); }
#line 4753 "Parser.C"
    break;

  case 350: /* ListAttribute: %empty  */
#line 890 "cparser.y"
                            { (yyval.listattribute_) = new acsl::ListAttribute(); result->listattribute_ = (yyval.listattribute_); }
#line 4759 "Parser.C"
    break;

  case 351: /* ListAttribute: ListAttribute Attribute  */
#line 891 "cparser.y"
                            { (yyvsp[-1].listattribute_)->push_back((yyvsp[0].attribute_)); (yyval.listattribute_) = (yyvsp[-1].listattribute_); result->listattribute_ = (yyval.listattribute_); }
#line 4765 "Parser.C"
    break;

  case 352: /* JustAttribute: T_ATTRIBUTE _LPAREN _LPAREN AttrList _RPAREN _RPAREN  */
#line 893 "cparser.y"
                                                                     { (yyval.justattribute_) = new acsl::AttributeJustAttribute((yyvsp[-5]._string), (yyvsp[-2].attrlist_)); (yyval.justattribute_)->line_number = (yyloc).first_line; (yyval.justattribute_)->char_number = (yyloc).first_column; result->justattribute_ = (yyval.justattribute_); }
#line 4771 "Parser.C"
    break;

  case 353: /* JustAttribute: _SYMB_56 _LPAREN ListAttr _RPAREN  */
#line 894 "cparser.y"
                                      { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.justattribute_) = new acsl::DeclspecJustAttribute((yyvsp[-1].listattr_)); (yyval.justattribute_)->line_number = (yyloc).first_line; (yyval.justattribute_)->char_number = (yyloc).first_column; result->justattribute_ = (yyval.justattribute_); }
#line 4777 "Parser.C"
    break;

  case 354: /* ListJustAttribute: JustAttribute  */
#line 896 "cparser.y"
                                  { (yyval.listjustattribute_) = new acsl::ListJustAttribute(); (yyval.listjustattribute_)->push_back((yyvsp[0].justattribute_)); result->listjustattribute_ = (yyval.listjustattribute_); }
#line 4783 "Parser.C"
    break;

  case 355: /* ListJustAttribute: JustAttribute ListJustAttribute  */
#line 897 "cparser.y"
                                    { (yyvsp[0].listjustattribute_)->push_back((yyvsp[-1].justattribute_)); (yyval.listjustattribute_) = (yyvsp[0].listjustattribute_); result->listjustattribute_ = (yyval.listjustattribute_); }
#line 4789 "Parser.C"
    break;

  case 356: /* Pragma: _KW_pragma  */
#line 899 "cparser.y"
                    { (yyval.pragma_) = new acsl::SimplePragma(); (yyval.pragma_)->line_number = (yyloc).first_line; (yyval.pragma_)->char_number = (yyloc).first_column; result->pragma_ = (yyval.pragma_); }
#line 4795 "Parser.C"
    break;

  case 357: /* Pragma: _KW_pragma Attr  */
#line 900 "cparser.y"
                    { (yyval.pragma_) = new acsl::AttrPragma((yyvsp[0].attr_)); (yyval.pragma_)->line_number = (yyloc).first_line; (yyval.pragma_)->char_number = (yyloc).first_column; result->pragma_ = (yyval.pragma_); }
#line 4801 "Parser.C"
    break;

  case 358: /* Pragma: _KW_pragma Attr _SEMI  */
#line 901 "cparser.y"
                          { (yyval.pragma_) = new acsl::AttrPragmaSeparated((yyvsp[-1].attr_)); (yyval.pragma_)->line_number = (yyloc).first_line; (yyval.pragma_)->char_number = (yyloc).first_column; result->pragma_ = (yyval.pragma_); }
#line 4807 "Parser.C"
    break;

  case 359: /* Pragma: _KW_pragma  */
#line 902 "cparser.y"
               { (yyval.pragma_) = new acsl::PragmaKeyrod(); (yyval.pragma_)->line_number = (yyloc).first_line; (yyval.pragma_)->char_number = (yyloc).first_column; result->pragma_ = (yyval.pragma_); }
#line 4813 "Parser.C"
    break;

  case 360: /* VarAttr: _IDENT_  */
#line 904 "cparser.y"
                  { (yyval.varattr_) = new acsl::IdentifierVarAttr((yyvsp[0]._string)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 4819 "Parser.C"
    break;

  case 361: /* VarAttr: T_NAMEDTYPE  */
#line 905 "cparser.y"
                { (yyval.varattr_) = new acsl::NamedTypeVarAttr((yyvsp[0]._string)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 4825 "Parser.C"
    break;

  case 362: /* VarAttr: _KW_default _COLON _INTEGER_  */
#line 906 "cparser.y"
                                 { (yyval.varattr_) = new acsl::DefaultVarAttr((yyvsp[0]._int)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 4831 "Parser.C"
    break;

  case 363: /* VarAttr: T_CONST  */
#line 907 "cparser.y"
            { (yyval.varattr_) = new acsl::ConstVarAttr((yyvsp[0]._string)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 4837 "Parser.C"
    break;

  case 364: /* VarAttr: T_VOLATILE  */
#line 908 "cparser.y"
               { (yyval.varattr_) = new acsl::VolatileVarAttr((yyvsp[0]._string)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 4843 "Parser.C"
    break;

  case 365: /* VarAttr: _INTEGER_ _COLON _INTEGER_  */
#line 909 "cparser.y"
                               { (yyval.varattr_) = new acsl::ContIntVarAttr((yyvsp[-2]._int), (yyvsp[0]._int)); (yyval.varattr_)->line_number = (yyloc).first_line; (yyval.varattr_)->char_number = (yyloc).first_column; result->varattr_ = (yyval.varattr_); }
#line 4849 "Parser.C"
    break;

  case 366: /* BasicAttribute: _INTEGER_  */
#line 911 "cparser.y"
                           { (yyval.basicattribute_) = new acsl::BasicAttrConsInt((yyvsp[0]._int)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 4855 "Parser.C"
    break;

  case 367: /* BasicAttribute: _DOUBLE_  */
#line 912 "cparser.y"
             { (yyval.basicattribute_) = new acsl::BasicAttrConsFloat((yyvsp[0]._double)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 4861 "Parser.C"
    break;

  case 368: /* BasicAttribute: VarAttr  */
#line 913 "cparser.y"
            { (yyval.basicattribute_) = new acsl::BasicAttrVar((yyvsp[0].varattr_)); (yyval.basicattribute_)->line_number = (yyloc).first_line; (yyval.basicattribute_)->char_number = (yyloc).first_column; result->basicattribute_ = (yyval.basicattribute_); }
#line 4867 "Parser.C"
    break;

  case 369: /* ListBasicAttribute: BasicAttribute  */
#line 915 "cparser.y"
                                    { (yyval.listbasicattribute_) = new acsl::ListBasicAttribute(); (yyval.listbasicattribute_)->push_back((yyvsp[0].basicattribute_)); result->listbasicattribute_ = (yyval.listbasicattribute_); }
#line 4873 "Parser.C"
    break;

  case 370: /* ListBasicAttribute: BasicAttribute ListBasicAttribute  */
#line 916 "cparser.y"
                                      { (yyvsp[0].listbasicattribute_)->push_back((yyvsp[-1].basicattribute_)); (yyval.listbasicattribute_) = (yyvsp[0].listbasicattribute_); result->listbasicattribute_ = (yyval.listbasicattribute_); }
#line 4879 "Parser.C"
    break;

  case 371: /* ParameterAttrListNE: ListBasicAttribute  */
#line 918 "cparser.y"
                                         { std::reverse((yyvsp[0].listbasicattribute_)->begin(),(yyvsp[0].listbasicattribute_)->end()) ;(yyval.parameterattrlistne_) = new acsl::ParameterBasicAttr((yyvsp[0].listbasicattribute_)); (yyval.parameterattrlistne_)->line_number = (yyloc).first_line; (yyval.parameterattrlistne_)->char_number = (yyloc).first_column; result->parameterattrlistne_ = (yyval.parameterattrlistne_); }
#line 4885 "Parser.C"
    break;

  case 372: /* ParameterAttrListNE: ListBasicAttribute StringConstant  */
#line 919 "cparser.y"
                                      { std::reverse((yyvsp[-1].listbasicattribute_)->begin(),(yyvsp[-1].listbasicattribute_)->end()) ;(yyval.parameterattrlistne_) = new acsl::ParameterBasicAttrStringConst((yyvsp[-1].listbasicattribute_), (yyvsp[0].stringconstant_)); (yyval.parameterattrlistne_)->line_number = (yyloc).first_line; (yyval.parameterattrlistne_)->char_number = (yyloc).first_column; result->parameterattrlistne_ = (yyval.parameterattrlistne_); }
#line 4891 "Parser.C"
    break;

  case 373: /* ParameterAttrListNE: ListBasicAttribute StringConstant ParameterAttrListNE  */
#line 920 "cparser.y"
                                                          { std::reverse((yyvsp[-2].listbasicattribute_)->begin(),(yyvsp[-2].listbasicattribute_)->end()) ;(yyval.parameterattrlistne_) = new acsl::ParameterBasicAttrStringConstNext((yyvsp[-2].listbasicattribute_), (yyvsp[-1].stringconstant_), (yyvsp[0].parameterattrlistne_)); (yyval.parameterattrlistne_)->line_number = (yyloc).first_line; (yyval.parameterattrlistne_)->char_number = (yyloc).first_column; result->parameterattrlistne_ = (yyval.parameterattrlistne_); }
#line 4897 "Parser.C"
    break;

  case 374: /* ParamAttrListNE: ParameterAttrListNE  */
#line 922 "cparser.y"
                                      { (yyval.paramattrlistne_) = new acsl::ParamAttrList((yyvsp[0].parameterattrlistne_)); (yyval.paramattrlistne_)->line_number = (yyloc).first_line; (yyval.paramattrlistne_)->char_number = (yyloc).first_column; result->paramattrlistne_ = (yyval.paramattrlistne_); }
#line 4903 "Parser.C"
    break;

  case 375: /* ParamAttrListNE: StringConstant  */
#line 923 "cparser.y"
                   { (yyval.paramattrlistne_) = new acsl::ParamStringConstant((yyvsp[0].stringconstant_)); (yyval.paramattrlistne_)->line_number = (yyloc).first_line; (yyval.paramattrlistne_)->char_number = (yyloc).first_column; result->paramattrlistne_ = (yyval.paramattrlistne_); }
#line 4909 "Parser.C"
    break;

  case 376: /* Attr14: BasicAttribute  */
#line 925 "cparser.y"
                        { (yyval.attr_) = new acsl::BasicAttr((yyvsp[0].basicattribute_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4915 "Parser.C"
    break;

  case 377: /* Attr14: _LPAREN Attr _RPAREN  */
#line 926 "cparser.y"
                         { (yyval.attr_) = (yyvsp[-1].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4921 "Parser.C"
    break;

  case 378: /* Attr14: StringConstant  */
#line 927 "cparser.y"
                   { (yyval.attr_) = new acsl::AttrStringConstant((yyvsp[0].stringconstant_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4927 "Parser.C"
    break;

  case 379: /* Attr13: Attr14  */
#line 929 "cparser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4933 "Parser.C"
    break;

  case 380: /* Attr13: IdOrTypenameAsId _LPAREN ListAttr _RPAREN  */
#line 930 "cparser.y"
                                              { std::reverse((yyvsp[-1].listattr_)->begin(),(yyvsp[-1].listattr_)->end()) ;(yyval.attr_) = new acsl::FuncationCall((yyvsp[-3].idortypenameasid_), (yyvsp[-1].listattr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4939 "Parser.C"
    break;

  case 381: /* Attr13: IdOrTypenameAsId _LPAREN _RPAREN  */
#line 931 "cparser.y"
                                     { (yyval.attr_) = new acsl::ProcedureCall((yyvsp[-2].idortypenameasid_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4945 "Parser.C"
    break;

  case 382: /* Attr13: BasicAttribute ParamAttrListNE  */
#line 932 "cparser.y"
                                   { (yyval.attr_) = new acsl::BasicPostfix((yyvsp[-1].basicattribute_), (yyvsp[0].paramattrlistne_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4951 "Parser.C"
    break;

  case 383: /* Attr13: Attr13 _RARROW IdOrTypename  */
#line 933 "cparser.y"
                                { (yyval.attr_) = new acsl::ArrowAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4957 "Parser.C"
    break;

  case 384: /* Attr13: Attr13 _DOT IdOrTypename  */
#line 934 "cparser.y"
                             { (yyval.attr_) = new acsl::DotAttr((yyvsp[-2].attr_), (yyvsp[0].idortypename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4963 "Parser.C"
    break;

  case 385: /* Attr13: Attr13 T_LBRACKET Attr T_RBRACKET  */
#line 935 "cparser.y"
                                      { (yyval.attr_) = new acsl::ArrayAttr((yyvsp[-3].attr_), (yyvsp[-2]._string), (yyvsp[-1].attr_), (yyvsp[0]._string)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4969 "Parser.C"
    break;

  case 386: /* Attr12: Attr13  */
#line 937 "cparser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4975 "Parser.C"
    break;

  case 387: /* Attr12: _KW_sizeof AssignExpr13  */
#line 938 "cparser.y"
                            { (yyval.attr_) = new acsl::SizeOfAttrUnary((yyvsp[0].assignexpr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4981 "Parser.C"
    break;

  case 388: /* Attr12: _KW_sizeof _LPAREN TypeName _RPAREN  */
#line 939 "cparser.y"
                                        { (yyval.attr_) = new acsl::SizeOfAttrTypeName((yyvsp[-1].typename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4987 "Parser.C"
    break;

  case 389: /* Attr12: T_ALIGNOF AssignExpr13  */
#line 940 "cparser.y"
                           { (yyval.attr_) = new acsl::AlignOfAttrUnary((yyvsp[-1]._string), (yyvsp[0].assignexpr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4993 "Parser.C"
    break;

  case 390: /* Attr12: T_ALIGNOF _LPAREN TypeName _RPAREN  */
#line 941 "cparser.y"
                                       { (yyval.attr_) = new acsl::AlignOfAttrTypeName((yyvsp[-3]._string), (yyvsp[-1].typename_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 4999 "Parser.C"
    break;

  case 391: /* Attr12: _PLUS Attr12  */
#line 942 "cparser.y"
                 { (yyval.attr_) = new acsl::PlusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5005 "Parser.C"
    break;

  case 392: /* Attr12: _MINUS Attr12  */
#line 943 "cparser.y"
                  { (yyval.attr_) = new acsl::MinusUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5011 "Parser.C"
    break;

  case 393: /* Attr12: _STAR Attr12  */
#line 944 "cparser.y"
                 { (yyval.attr_) = new acsl::MultUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5017 "Parser.C"
    break;

  case 394: /* Attr12: _AMP Attr12  */
#line 945 "cparser.y"
                { (yyval.attr_) = new acsl::AmpUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5023 "Parser.C"
    break;

  case 395: /* Attr12: _BANG Attr12  */
#line 946 "cparser.y"
                 { (yyval.attr_) = new acsl::NotUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5029 "Parser.C"
    break;

  case 396: /* Attr12: _TILDE Attr12  */
#line 947 "cparser.y"
                  { (yyval.attr_) = new acsl::TildeUnaryAttr((yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5035 "Parser.C"
    break;

  case 397: /* Attr11: Attr12  */
#line 949 "cparser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5041 "Parser.C"
    break;

  case 398: /* Attr11: Attr11 _STAR Attr12  */
#line 950 "cparser.y"
                        { (yyval.attr_) = new acsl::MultOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5047 "Parser.C"
    break;

  case 399: /* Attr11: Attr11 _SLASH Attr12  */
#line 951 "cparser.y"
                         { (yyval.attr_) = new acsl::DivOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5053 "Parser.C"
    break;

  case 400: /* Attr11: Attr11 _PERCENT Attr12  */
#line 952 "cparser.y"
                           { (yyval.attr_) = new acsl::ModOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5059 "Parser.C"
    break;

  case 401: /* Attr10: Attr11  */
#line 954 "cparser.y"
                { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5065 "Parser.C"
    break;

  case 402: /* Attr10: Attr10 _PLUS Attr11  */
#line 955 "cparser.y"
                        { (yyval.attr_) = new acsl::AddOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5071 "Parser.C"
    break;

  case 403: /* Attr10: Attr10 _MINUS Attr11  */
#line 956 "cparser.y"
                         { (yyval.attr_) = new acsl::SubOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5077 "Parser.C"
    break;

  case 404: /* Attr9: Attr10  */
#line 958 "cparser.y"
               { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5083 "Parser.C"
    break;

  case 405: /* Attr9: Attr9 _DLT Attr10  */
#line 959 "cparser.y"
                      { (yyval.attr_) = new acsl::LeftShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5089 "Parser.C"
    break;

  case 406: /* Attr9: Attr9 _DGT Attr10  */
#line 960 "cparser.y"
                      { (yyval.attr_) = new acsl::RightShiftOp((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5095 "Parser.C"
    break;

  case 407: /* Attr8: Attr9  */
#line 962 "cparser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5101 "Parser.C"
    break;

  case 408: /* Attr8: Attr8 _LT Attr9  */
#line 963 "cparser.y"
                    { (yyval.attr_) = new acsl::Less((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5107 "Parser.C"
    break;

  case 409: /* Attr8: Attr8 _GT Attr9  */
#line 964 "cparser.y"
                    { (yyval.attr_) = new acsl::Greater((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5113 "Parser.C"
    break;

  case 410: /* Attr8: Attr8 _LDARROW Attr9  */
#line 965 "cparser.y"
                         { (yyval.attr_) = new acsl::LessEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5119 "Parser.C"
    break;

  case 411: /* Attr8: Attr8 _GTEQ Attr9  */
#line 966 "cparser.y"
                      { (yyval.attr_) = new acsl::GreaterEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5125 "Parser.C"
    break;

  case 412: /* Attr7: Attr8  */
#line 968 "cparser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5131 "Parser.C"
    break;

  case 413: /* Attr7: Attr7 _DEQ Attr8  */
#line 969 "cparser.y"
                     { (yyval.attr_) = new acsl::EqualEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5137 "Parser.C"
    break;

  case 414: /* Attr7: Attr7 _BANGEQ Attr8  */
#line 970 "cparser.y"
                        { (yyval.attr_) = new acsl::NotEqual((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5143 "Parser.C"
    break;

  case 415: /* Attr6: Attr7  */
#line 972 "cparser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5149 "Parser.C"
    break;

  case 416: /* Attr6: Attr6 _AMP Attr7  */
#line 973 "cparser.y"
                     { (yyval.attr_) = new acsl::BitAnd((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5155 "Parser.C"
    break;

  case 417: /* Attr5: Attr6  */
#line 975 "cparser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5161 "Parser.C"
    break;

  case 418: /* Attr5: Attr5 _CARET Attr6  */
#line 976 "cparser.y"
                       { (yyval.attr_) = new acsl::Xor((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5167 "Parser.C"
    break;

  case 419: /* Attr4: Attr5  */
#line 978 "cparser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5173 "Parser.C"
    break;

  case 420: /* Attr4: Attr4 _BAR Attr5  */
#line 979 "cparser.y"
                     { (yyval.attr_) = new acsl::BitOr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5179 "Parser.C"
    break;

  case 421: /* Attr3: Attr4  */
#line 981 "cparser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5185 "Parser.C"
    break;

  case 422: /* Attr3: Attr3 _DAMP Attr4  */
#line 982 "cparser.y"
                      { (yyval.attr_) = new acsl::And((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5191 "Parser.C"
    break;

  case 423: /* Attr2: Attr3  */
#line 984 "cparser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5197 "Parser.C"
    break;

  case 424: /* Attr2: Attr2 _DBAR Attr3  */
#line 985 "cparser.y"
                      { (yyval.attr_) = new acsl::Or((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5203 "Parser.C"
    break;

  case 425: /* Attr1: Attr2  */
#line 987 "cparser.y"
              { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5209 "Parser.C"
    break;

  case 426: /* Attr1: Attr2 _QUESTION AttrTest Attr1 _COLON Attr1  */
#line 988 "cparser.y"
                                                { (yyval.attr_) = new acsl::TernaryCond((yyvsp[-5].attr_), (yyvsp[-3].attrtest_), (yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5215 "Parser.C"
    break;

  case 427: /* Attr: Attr1  */
#line 990 "cparser.y"
             { (yyval.attr_) = (yyvsp[0].attr_); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5221 "Parser.C"
    break;

  case 428: /* Attr: Attr1 _EQ Attr1  */
#line 991 "cparser.y"
                    { (yyval.attr_) = new acsl::AnAttr((yyvsp[-2].attr_), (yyvsp[0].attr_)); (yyval.attr_)->line_number = (yyloc).first_line; (yyval.attr_)->char_number = (yyloc).first_column; result->attr_ = (yyval.attr_); }
#line 5227 "Parser.C"
    break;

  case 429: /* ListAttr: Attr  */
#line 993 "cparser.y"
                { (yyval.listattr_) = new acsl::ListAttr(); (yyval.listattr_)->push_back((yyvsp[0].attr_)); result->listattr_ = (yyval.listattr_); }
#line 5233 "Parser.C"
    break;

  case 430: /* ListAttr: Attr _COMMA ListAttr  */
#line 994 "cparser.y"
                         { (yyvsp[0].listattr_)->push_back((yyvsp[-2].attr_)); (yyval.listattr_) = (yyvsp[0].listattr_); result->listattr_ = (yyval.listattr_); }
#line 5239 "Parser.C"
    break;

  case 431: /* AttrTest: %empty  */
#line 996 "cparser.y"
                       { (yyval.attrtest_) = new acsl::AvoidShiftReduce(); (yyval.attrtest_)->line_number = (yyloc).first_line; (yyval.attrtest_)->char_number = (yyloc).first_column; result->attrtest_ = (yyval.attrtest_); }
#line 5245 "Parser.C"
    break;

  case 432: /* AttrList: %empty  */
#line 998 "cparser.y"
                       { (yyval.attrlist_) = new acsl::EmptyAtrList(); (yyval.attrlist_)->line_number = (yyloc).first_line; (yyval.attrlist_)->char_number = (yyloc).first_column; result->attrlist_ = (yyval.attrlist_); }
#line 5251 "Parser.C"
    break;

  case 433: /* AttrList: ListAttr  */
#line 999 "cparser.y"
             { std::reverse((yyvsp[0].listattr_)->begin(),(yyvsp[0].listattr_)->end()) ;(yyval.attrlist_) = new acsl::AtrList((yyvsp[0].listattr_)); (yyval.attrlist_)->line_number = (yyloc).first_line; (yyval.attrlist_)->char_number = (yyloc).first_column; result->attrlist_ = (yyval.attrlist_); }
#line 5257 "Parser.C"
    break;

  case 434: /* Asmattr: T_VOLATILE  */
#line 1001 "cparser.y"
                     { (yyval.asmattr_) = new acsl::VolatileKeyWrod((yyvsp[0]._string)); (yyval.asmattr_)->line_number = (yyloc).first_line; (yyval.asmattr_)->char_number = (yyloc).first_column; result->asmattr_ = (yyval.asmattr_); }
#line 5263 "Parser.C"
    break;

  case 435: /* Asmattr: T_CONST  */
#line 1002 "cparser.y"
            { (yyval.asmattr_) = new acsl::ConstKeyWrod((yyvsp[0]._string)); (yyval.asmattr_)->line_number = (yyloc).first_line; (yyval.asmattr_)->char_number = (yyloc).first_column; result->asmattr_ = (yyval.asmattr_); }
#line 5269 "Parser.C"
    break;

  case 436: /* ListAsmattr: %empty  */
#line 1004 "cparser.y"
                          { (yyval.listasmattr_) = new acsl::ListAsmattr(); result->listasmattr_ = (yyval.listasmattr_); }
#line 5275 "Parser.C"
    break;

  case 437: /* ListAsmattr: ListAsmattr Asmattr  */
#line 1005 "cparser.y"
                        { (yyvsp[-1].listasmattr_)->push_back((yyvsp[0].asmattr_)); (yyval.listasmattr_) = (yyvsp[-1].listasmattr_); result->listasmattr_ = (yyval.listasmattr_); }
#line 5281 "Parser.C"
    break;

  case 438: /* Asmoutputs: %empty  */
#line 1007 "cparser.y"
                         { (yyval.asmoutputs_) = new acsl::NoAsmoutputs(); (yyval.asmoutputs_)->line_number = (yyloc).first_line; (yyval.asmoutputs_)->char_number = (yyloc).first_column; result->asmoutputs_ = (yyval.asmoutputs_); }
#line 5287 "Parser.C"
    break;

  case 439: /* Asmoutputs: _COLON Asmoperands Asminputs  */
#line 1008 "cparser.y"
                                 { (yyval.asmoutputs_) = new acsl::SomeAsmoutputs((yyvsp[-1].asmoperands_), (yyvsp[0].asminputs_)); (yyval.asmoutputs_)->line_number = (yyloc).first_line; (yyval.asmoutputs_)->char_number = (yyloc).first_column; result->asmoutputs_ = (yyval.asmoutputs_); }
#line 5293 "Parser.C"
    break;

  case 440: /* Asmoperands: %empty  */
#line 1010 "cparser.y"
                          { (yyval.asmoperands_) = new acsl::NoAsmoperands(); (yyval.asmoperands_)->line_number = (yyloc).first_line; (yyval.asmoperands_)->char_number = (yyloc).first_column; result->asmoperands_ = (yyval.asmoperands_); }
#line 5299 "Parser.C"
    break;

  case 441: /* Asmoperands: ListAsmoperand  */
#line 1011 "cparser.y"
                   { std::reverse((yyvsp[0].listasmoperand_)->begin(),(yyvsp[0].listasmoperand_)->end()) ;(yyval.asmoperands_) = new acsl::SomeAsmoperands((yyvsp[0].listasmoperand_)); (yyval.asmoperands_)->line_number = (yyloc).first_line; (yyval.asmoperands_)->char_number = (yyloc).first_column; result->asmoperands_ = (yyval.asmoperands_); }
#line 5305 "Parser.C"
    break;

  case 442: /* Asmoperand: Asmopname StringConstant _LPAREN Expression _RPAREN  */
#line 1013 "cparser.y"
                                                                 { (yyval.asmoperand_) = new acsl::AsmOperand((yyvsp[-4].asmopname_), (yyvsp[-3].stringconstant_), (yyvsp[-1].expression_)); (yyval.asmoperand_)->line_number = (yyloc).first_line; (yyval.asmoperand_)->char_number = (yyloc).first_column; result->asmoperand_ = (yyval.asmoperand_); }
#line 5311 "Parser.C"
    break;

  case 443: /* ListAsmoperand: Asmoperand  */
#line 1015 "cparser.y"
                            { (yyval.listasmoperand_) = new acsl::ListAsmoperand(); (yyval.listasmoperand_)->push_back((yyvsp[0].asmoperand_)); result->listasmoperand_ = (yyval.listasmoperand_); }
#line 5317 "Parser.C"
    break;

  case 444: /* ListAsmoperand: Asmoperand _COMMA ListAsmoperand  */
#line 1016 "cparser.y"
                                     { (yyvsp[0].listasmoperand_)->push_back((yyvsp[-2].asmoperand_)); (yyval.listasmoperand_) = (yyvsp[0].listasmoperand_); result->listasmoperand_ = (yyval.listasmoperand_); }
#line 5323 "Parser.C"
    break;

  case 445: /* Asminputs: %empty  */
#line 1018 "cparser.y"
                        { (yyval.asminputs_) = new acsl::NoAsminputs(); (yyval.asminputs_)->line_number = (yyloc).first_line; (yyval.asminputs_)->char_number = (yyloc).first_column; result->asminputs_ = (yyval.asminputs_); }
#line 5329 "Parser.C"
    break;

  case 446: /* Asminputs: _COLON Asmoperands Asmclobber  */
#line 1019 "cparser.y"
                                  { (yyval.asminputs_) = new acsl::SomeAsminputs((yyvsp[-1].asmoperands_), (yyvsp[0].asmclobber_)); (yyval.asminputs_)->line_number = (yyloc).first_line; (yyval.asminputs_)->char_number = (yyloc).first_column; result->asminputs_ = (yyval.asminputs_); }
#line 5335 "Parser.C"
    break;

  case 447: /* Asmopname: %empty  */
#line 1021 "cparser.y"
                        { (yyval.asmopname_) = new acsl::NoAsmopname(); (yyval.asmopname_)->line_number = (yyloc).first_line; (yyval.asmopname_)->char_number = (yyloc).first_column; result->asmopname_ = (yyval.asmopname_); }
#line 5341 "Parser.C"
    break;

  case 448: /* Asmopname: T_LBRACKET _IDENT_ T_RBRACKET  */
#line 1022 "cparser.y"
                                  { (yyval.asmopname_) = new acsl::SomeAsmopname((yyvsp[-2]._string), (yyvsp[-1]._string), (yyvsp[0]._string)); (yyval.asmopname_)->line_number = (yyloc).first_line; (yyval.asmopname_)->char_number = (yyloc).first_column; result->asmopname_ = (yyval.asmopname_); }
#line 5347 "Parser.C"
    break;

  case 449: /* Asmclobber: %empty  */
#line 1024 "cparser.y"
                         { (yyval.asmclobber_) = new acsl::NoAsmclobber(); (yyval.asmclobber_)->line_number = (yyloc).first_line; (yyval.asmclobber_)->char_number = (yyloc).first_column; result->asmclobber_ = (yyval.asmclobber_); }
#line 5353 "Parser.C"
    break;

  case 450: /* Asmclobber: _COLON Asmlabels  */
#line 1025 "cparser.y"
                     { (yyval.asmclobber_) = new acsl::ColonAsmclobber((yyvsp[0].asmlabels_)); (yyval.asmclobber_)->line_number = (yyloc).first_line; (yyval.asmclobber_)->char_number = (yyloc).first_column; result->asmclobber_ = (yyval.asmclobber_); }
#line 5359 "Parser.C"
    break;

  case 451: /* Asmclobber: _COLON ListStringConstant Asmlabels  */
#line 1026 "cparser.y"
                                        { std::reverse((yyvsp[-1].liststringconstant_)->begin(),(yyvsp[-1].liststringconstant_)->end()) ;(yyval.asmclobber_) = new acsl::ColonStringAsmclobber((yyvsp[-1].liststringconstant_), (yyvsp[0].asmlabels_)); (yyval.asmclobber_)->line_number = (yyloc).first_line; (yyval.asmclobber_)->char_number = (yyloc).first_column; result->asmclobber_ = (yyval.asmclobber_); }
#line 5365 "Parser.C"
    break;

  case 452: /* ListStringConstant: StringConstant  */
#line 1028 "cparser.y"
                                    { (yyval.liststringconstant_) = new acsl::ListStringConstant(); (yyval.liststringconstant_)->push_back((yyvsp[0].stringconstant_)); result->liststringconstant_ = (yyval.liststringconstant_); }
#line 5371 "Parser.C"
    break;

  case 453: /* ListStringConstant: StringConstant _COMMA ListStringConstant  */
#line 1029 "cparser.y"
                                             { (yyvsp[0].liststringconstant_)->push_back((yyvsp[-2].stringconstant_)); (yyval.liststringconstant_) = (yyvsp[0].liststringconstant_); result->liststringconstant_ = (yyval.liststringconstant_); }
#line 5377 "Parser.C"
    break;

  case 454: /* Asmlabels: %empty  */
#line 1031 "cparser.y"
                        { (yyval.asmlabels_) = new acsl::NoAsmlabels(); (yyval.asmlabels_)->line_number = (yyloc).first_line; (yyval.asmlabels_)->char_number = (yyloc).first_column; result->asmlabels_ = (yyval.asmlabels_); }
#line 5383 "Parser.C"
    break;

  case 455: /* Asmlabels: _COLON ListLocalLabelName  */
#line 1032 "cparser.y"
                              { std::reverse((yyvsp[0].listlocallabelname_)->begin(),(yyvsp[0].listlocallabelname_)->end()) ;(yyval.asmlabels_) = new acsl::SomeAsmlabels((yyvsp[0].listlocallabelname_)); (yyval.asmlabels_)->line_number = (yyloc).first_line; (yyval.asmlabels_)->char_number = (yyloc).first_column; result->asmlabels_ = (yyval.asmlabels_); }
#line 5389 "Parser.C"
    break;


#line 5393 "Parser.C"

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

#line 1035 "cparser.y"


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


}
