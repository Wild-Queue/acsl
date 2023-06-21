/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_PARTIAL_ACSL_BISON_H_INCLUDED
# define YY_PARTIAL_ACSL_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int partial_acsldebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    _ERROR_ = 258,                 /* _ERROR_  */
    _BANG = 259,                   /* _BANG  */
    _BANGEQ = 260,                 /* _BANGEQ  */
    _PERCENT = 261,                /* _PERCENT  */
    _PERCENTEQ = 262,              /* _PERCENTEQ  */
    _AMP = 263,                    /* _AMP  */
    _DAMP = 264,                   /* _DAMP  */
    _AMPEQ = 265,                  /* _AMPEQ  */
    _LPAREN = 266,                 /* _LPAREN  */
    _RPAREN = 267,                 /* _RPAREN  */
    _STAR = 268,                   /* _STAR  */
    _STAREQ = 269,                 /* _STAREQ  */
    _PLUS = 270,                   /* _PLUS  */
    _DPLUS = 271,                  /* _DPLUS  */
    _PLUSEQ = 272,                 /* _PLUSEQ  */
    _COMMA = 273,                  /* _COMMA  */
    _MINUS = 274,                  /* _MINUS  */
    _DMINUS = 275,                 /* _DMINUS  */
    _MINUSEQ = 276,                /* _MINUSEQ  */
    _RARROW = 277,                 /* _RARROW  */
    _DOT = 278,                    /* _DOT  */
    _ELLIPSIS = 279,               /* _ELLIPSIS  */
    _SLASH = 280,                  /* _SLASH  */
    _SLASHEQ = 281,                /* _SLASHEQ  */
    _COLON = 282,                  /* _COLON  */
    _SEMI = 283,                   /* _SEMI  */
    _LT = 284,                     /* _LT  */
    _DLT = 285,                    /* _DLT  */
    _DLTEQ = 286,                  /* _DLTEQ  */
    _LDARROW = 287,                /* _LDARROW  */
    _EQ = 288,                     /* _EQ  */
    _DEQ = 289,                    /* _DEQ  */
    _GT = 290,                     /* _GT  */
    _GTEQ = 291,                   /* _GTEQ  */
    _DGT = 292,                    /* _DGT  */
    _DGTEQ = 293,                  /* _DGTEQ  */
    _QUESTION = 294,               /* _QUESTION  */
    _CARET = 295,                  /* _CARET  */
    _CARETEQ = 296,                /* _CARETEQ  */
    _SYMB_1 = 297,                 /* _SYMB_1  */
    _SYMB_2 = 298,                 /* _SYMB_2  */
    _SYMB_3 = 299,                 /* _SYMB_3  */
    _KW_break = 300,               /* _KW_break  */
    _KW_case = 301,                /* _KW_case  */
    _KW_char = 302,                /* _KW_char  */
    _KW_continue = 303,            /* _KW_continue  */
    _KW_default = 304,             /* _KW_default  */
    _KW_double = 305,              /* _KW_double  */
    _KW_else = 306,                /* _KW_else  */
    _KW_float = 307,               /* _KW_float  */
    _KW_if = 308,                  /* _KW_if  */
    _KW_int = 309,                 /* _KW_int  */
    _KW_long = 310,                /* _KW_long  */
    _KW_return = 311,              /* _KW_return  */
    _KW_short = 312,               /* _KW_short  */
    _KW_struct = 313,              /* _KW_struct  */
    _KW_switch = 314,              /* _KW_switch  */
    _KW_unsigned = 315,            /* _KW_unsigned  */
    _KW_void = 316,                /* _KW_void  */
    _KW_while = 317,               /* _KW_while  */
    _BAR = 318,                    /* _BAR  */
    _BAREQ = 319,                  /* _BAREQ  */
    _DBAR = 320,                   /* _DBAR  */
    _TILDE = 321,                  /* _TILDE  */
    T_BLOCKATTRIBUTE = 322,        /* T_BLOCKATTRIBUTE  */
    T_CONST = 323,                 /* T_CONST  */
    T_LBRACE = 324,                /* T_LBRACE  */
    T_LBRACKET = 325,              /* T_LBRACKET  */
    T_RBRACE = 326,                /* T_RBRACE  */
    T_RBRACKET = 327,              /* T_RBRACKET  */
    T_RESTRICT = 328,              /* T_RESTRICT  */
    T_SIGNED = 329,                /* T_SIGNED  */
    T_VOLATILE = 330,              /* T_VOLATILE  */
    _CHAR_ = 331,                  /* _CHAR_  */
    _INTEGER_ = 332,               /* _INTEGER_  */
    _DOUBLE_ = 333,                /* _DOUBLE_  */
    _IDENT_ = 334                  /* _IDENT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "partial_bnfc_parser.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  partial_acsl::Program* program_;
  partial_acsl::Globals* globals_;
  partial_acsl::Global* global_;
  partial_acsl::FunctionDef* functiondef_;
  partial_acsl::FunctionDefStart* functiondefstart_;
  partial_acsl::DeclSpecList* declspeclist_;
  partial_acsl::DeclSpecListNoNamed* declspeclistnonamed_;
  partial_acsl::TypeSpec* typespec_;
  partial_acsl::Declarator* declarator_;
  partial_acsl::PointerOpt* pointeropt_;
  partial_acsl::DirectDecl* directdecl_;
  partial_acsl::AttributesWithAsm* attributeswithasm_;
  partial_acsl::RestParList* restparlist_;
  partial_acsl::ParameterDecl* parameterdecl_;
  partial_acsl::ListParameterDecl* listparameterdecl_;
  partial_acsl::GhostParameterOpt* ghostparameteropt_;
  partial_acsl::IdOrTypename* idortypename_;
  partial_acsl::IdOrTypenameAsId* idortypenameasid_;
  partial_acsl::Declaration* declaration_;
  partial_acsl::DeclAndInitDeclAttrList* declandinitdeclattrlist_;
  partial_acsl::InitDeclaratorAttr* initdeclaratorattr_;
  partial_acsl::ListInitDeclaratorAttr* listinitdeclaratorattr_;
  partial_acsl::InitDeclarator* initdeclarator_;
  partial_acsl::StructDeclList* structdecllist_;
  partial_acsl::FieldDecl* fielddecl_;
  partial_acsl::ListFieldDecl* listfielddecl_;
  partial_acsl::Attribute* attribute_;
  partial_acsl::ListAttribute* listattribute_;
  partial_acsl::Block* block_;
  partial_acsl::BlockAttrs* blockattrs_;
  partial_acsl::BlockElement* blockelement_;
  partial_acsl::ListBlockElement* listblockelement_;
  partial_acsl::Statement* statement_;
  partial_acsl::Attr* attr_;
  partial_acsl::ListAttr* listattr_;
  partial_acsl::BasicAttribute* basicattribute_;
  partial_acsl::ListBasicAttribute* listbasicattribute_;
  partial_acsl::AnnotatedStmt* annotatedstmt_;
  partial_acsl::ElsePart* elsepart_;
  partial_acsl::OptExpression* optexpression_;
  partial_acsl::Expression* expression_;
  partial_acsl::ListExpression* listexpression_;
  partial_acsl::AssignExpr* assignexpr_;
  partial_acsl::Constant* constant_;
  partial_acsl::TypeName* typename_;

#line 195 "Bison.H"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int partial_acslparse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_PARTIAL_ACSL_BISON_H_INCLUDED  */
