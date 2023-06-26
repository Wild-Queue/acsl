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

#ifndef YY_PARTIAL_BNFC_ACSL_BISON_H_INCLUDED
# define YY_PARTIAL_BNFC_ACSL_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int partial_bnfc_acsldebug;
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
    _DAMP = 261,                   /* _DAMP  */
    _LPAREN = 262,                 /* _LPAREN  */
    _RPAREN = 263,                 /* _RPAREN  */
    _STAR = 264,                   /* _STAR  */
    _PLUS = 265,                   /* _PLUS  */
    _COMMA = 266,                  /* _COMMA  */
    _MINUS = 267,                  /* _MINUS  */
    _DDOT = 268,                   /* _DDOT  */
    _SEMI = 269,                   /* _SEMI  */
    _LT = 270,                     /* _LT  */
    _LDARROW = 271,                /* _LDARROW  */
    _SYMB_4 = 272,                 /* _SYMB_4  */
    _DEQ = 273,                    /* _DEQ  */
    _SYMB_3 = 274,                 /* _SYMB_3  */
    _GT = 275,                     /* _GT  */
    _GTEQ = 276,                   /* _GTEQ  */
    _LBRACK = 277,                 /* _LBRACK  */
    _SYMB_27 = 278,                /* _SYMB_27  */
    _SYMB_28 = 279,                /* _SYMB_28  */
    _SYMB_17 = 280,                /* _SYMB_17  */
    _SYMB_25 = 281,                /* _SYMB_25  */
    _SYMB_16 = 282,                /* _SYMB_16  */
    _SYMB_1 = 283,                 /* _SYMB_1  */
    _SYMB_18 = 284,                /* _SYMB_18  */
    _SYMB_2 = 285,                 /* _SYMB_2  */
    _SYMB_32 = 286,                /* _SYMB_32  */
    _SYMB_36 = 287,                /* _SYMB_36  */
    _SYMB_29 = 288,                /* _SYMB_29  */
    _SYMB_35 = 289,                /* _SYMB_35  */
    _SYMB_30 = 290,                /* _SYMB_30  */
    _SYMB_24 = 291,                /* _SYMB_24  */
    _SYMB_31 = 292,                /* _SYMB_31  */
    _SYMB_26 = 293,                /* _SYMB_26  */
    _RBRACK = 294,                 /* _RBRACK  */
    _DCARET = 295,                 /* _DCARET  */
    _SYMB_40 = 296,                /* _SYMB_40  */
    _KW_admit = 297,               /* _KW_admit  */
    _KW_assigns = 298,             /* _KW_assigns  */
    _KW_boolean = 299,             /* _KW_boolean  */
    _KW_breaks = 300,              /* _KW_breaks  */
    _KW_char = 301,                /* _KW_char  */
    _KW_check = 302,               /* _KW_check  */
    _KW_continues = 303,           /* _KW_continues  */
    _KW_double = 304,              /* _KW_double  */
    _KW_ensures = 305,             /* _KW_ensures  */
    _KW_exits = 306,               /* _KW_exits  */
    _KW_for = 307,                 /* _KW_for  */
    _KW_int = 308,                 /* _KW_int  */
    _KW_integer = 309,             /* _KW_integer  */
    _KW_invariant = 310,           /* _KW_invariant  */
    _KW_long = 311,                /* _KW_long  */
    _KW_loop = 312,                /* _KW_loop  */
    _KW_real = 313,                /* _KW_real  */
    _KW_requires = 314,            /* _KW_requires  */
    _KW_returns = 315,             /* _KW_returns  */
    _KW_variant = 316,             /* _KW_variant  */
    _KW_void = 317,                /* _KW_void  */
    _LBRACE = 318,                 /* _LBRACE  */
    _DBAR = 319,                   /* _DBAR  */
    _RBRACE = 320,                 /* _RBRACE  */
    _STRING_ = 321,                /* _STRING_  */
    _INTEGER_ = 322,               /* _INTEGER_  */
    _DOUBLE_ = 323,                /* _DOUBLE_  */
    _IDENT_ = 324                  /* _IDENT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "partial_bnfc_acsl_parser.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  partial_bnfc_acsl::Program* program_;
  partial_bnfc_acsl::Annot* annot_;
  partial_bnfc_acsl::Code_Annot* code_annot_;
  partial_bnfc_acsl::Contract* contract_;
  partial_bnfc_acsl::Requires* requires_;
  partial_bnfc_acsl::NERequires* nerequires_;
  partial_bnfc_acsl::Terminates* terminates_;
  partial_bnfc_acsl::Decreases* decreases_;
  partial_bnfc_acsl::SimpleClauses* simpleclauses_;
  partial_bnfc_acsl::NESimpleClauses* nesimpleclauses_;
  partial_bnfc_acsl::Assigns* assigns_;
  partial_bnfc_acsl::Zones* zones_;
  partial_bnfc_acsl::Behaviors* behaviors_;
  partial_bnfc_acsl::CompleteOrDisjoint* completeordisjoint_;
  partial_bnfc_acsl::Lexpr* lexpr_;
  partial_bnfc_acsl::ListLexpr* listlexpr_;
  partial_bnfc_acsl::LexprRelInner* lexprrelinner_;
  partial_bnfc_acsl::ListLexprRelInner* listlexprrelinner_;
  partial_bnfc_acsl::Relation* relation_;
  partial_bnfc_acsl::LexprBinder* lexprbinder_;
  partial_bnfc_acsl::Binders* binders_;
  partial_bnfc_acsl::TypeSpecOFTYPENAME* typespecoftypename_;
  partial_bnfc_acsl::BindersReentrance* bindersreentrance_;
  partial_bnfc_acsl::ListBindersReentrance* listbindersreentrance_;
  partial_bnfc_acsl::VarSpec* varspec_;
  partial_bnfc_acsl::Stars* stars_;
  partial_bnfc_acsl::ListStars* liststars_;
  partial_bnfc_acsl::ArraySize* arraysize_;
  partial_bnfc_acsl::OptLabel* optlabel_;
  partial_bnfc_acsl::OptLabelList* optlabellist_;
  partial_bnfc_acsl::LabelName* labelname_;
  partial_bnfc_acsl::ListLabelName* listlabelname_;
  partial_bnfc_acsl::Range* range_;
  partial_bnfc_acsl::LexprOption* lexproption_;
  partial_bnfc_acsl::AnyIdentifier* anyidentifier_;
  partial_bnfc_acsl::PostCond* postcond_;
  partial_bnfc_acsl::FullIdentifier* fullidentifier_;
  partial_bnfc_acsl::ListFullIdentifier* listfullidentifier_;
  partial_bnfc_acsl::Identifier* identifier_;
  partial_bnfc_acsl::TypeSpecSimple* typespecsimple_;
  partial_bnfc_acsl::LogicPTreeAnnot* logicptreeannot_;
  partial_bnfc_acsl::Annotation* annotation_;
  partial_bnfc_acsl::LoopAnnotStack* loopannotstack_;
  partial_bnfc_acsl::LoopAnnotOpt* loopannotopt_;
  partial_bnfc_acsl::LoopInvariant* loopinvariant_;
  partial_bnfc_acsl::LoopVariant* loopvariant_;
  partial_bnfc_acsl::LoopEffects* loopeffects_;
  partial_bnfc_acsl::Variant* variant_;

#line 188 "Bison.H"

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




int partial_bnfc_acslparse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_PARTIAL_BNFC_ACSL_BISON_H_INCLUDED  */
