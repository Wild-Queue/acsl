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

#ifndef YY_PARTIAN_ACSL_BISON_H_INCLUDED
# define YY_PARTIAN_ACSL_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int partian_acsldebug;
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
    _LPAREN = 259,                 /* _LPAREN  */
    _RPAREN = 260,                 /* _RPAREN  */
    _STAR = 261,                   /* _STAR  */
    _COMMA = 262,                  /* _COMMA  */
    _SEMI = 263,                   /* _SEMI  */
    _SYMB_1 = 264,                 /* _SYMB_1  */
    _SYMB_2 = 265,                 /* _SYMB_2  */
    _SYMB_3 = 266,                 /* _SYMB_3  */
    _KW_char = 267,                /* _KW_char  */
    _KW_double = 268,              /* _KW_double  */
    _KW_float = 269,               /* _KW_float  */
    _KW_int = 270,                 /* _KW_int  */
    _KW_long = 271,                /* _KW_long  */
    _KW_short = 272,               /* _KW_short  */
    _KW_unsigned = 273,            /* _KW_unsigned  */
    _KW_void = 274,                /* _KW_void  */
    T_LBRACE = 275,                /* T_LBRACE  */
    T_RBRACE = 276,                /* T_RBRACE  */
    T_SIGNED = 277,                /* T_SIGNED  */
    _IDENT_ = 278                  /* _IDENT_  */
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
  partian_acsl::Program* program_;
  partian_acsl::Globals* globals_;
  partian_acsl::Global* global_;
  partian_acsl::FunctionDef* functiondef_;
  partian_acsl::Block* block_;
  partian_acsl::FunctionDefStart* functiondefstart_;
  partian_acsl::DeclSpecList* declspeclist_;
  partian_acsl::DeclSpecListNoNamed* declspeclistnonamed_;
  partian_acsl::TypeSpec* typespec_;
  partian_acsl::Declarator* declarator_;
  partian_acsl::ListDeclarator* listdeclarator_;
  partian_acsl::PointerOpt* pointeropt_;
  partian_acsl::DirectDecl* directdecl_;
  partian_acsl::AttributesWithAsm* attributeswithasm_;
  partian_acsl::RestParList* restparlist_;
  partian_acsl::ParameterDecl* parameterdecl_;
  partian_acsl::ListParameterDecl* listparameterdecl_;
  partian_acsl::GhostParameterOpt* ghostparameteropt_;
  partian_acsl::IdOrTypename* idortypename_;
  partian_acsl::IdOrTypenameAsId* idortypenameasid_;
  partian_acsl::Declaration* declaration_;
  partian_acsl::DeclAndInitDeclAttrList* declandinitdeclattrlist_;
  partian_acsl::InitDeclaratorAttr* initdeclaratorattr_;
  partian_acsl::ListInitDeclaratorAttr* listinitdeclaratorattr_;
  partian_acsl::InitDeclarator* initdeclarator_;

#line 119 "Bison.H"

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




int partian_acslparse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_PARTIAN_ACSL_BISON_H_INCLUDED  */
