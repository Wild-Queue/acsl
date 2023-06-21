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
    _PERCENT = 261,                /* _PERCENT  */
    _AMP = 262,                    /* _AMP  */
    _DAMP = 263,                   /* _DAMP  */
    _LPAREN = 264,                 /* _LPAREN  */
    _RPAREN = 265,                 /* _RPAREN  */
    _STAR = 266,                   /* _STAR  */
    _SYMB_35 = 267,                /* _SYMB_35  */
    _PLUS = 268,                   /* _PLUS  */
    _COMMA = 269,                  /* _COMMA  */
    _MINUS = 270,                  /* _MINUS  */
    _SYMB_9 = 271,                 /* _SYMB_9  */
    _SLASH = 272,                  /* _SLASH  */
    _COLON = 273,                  /* _COLON  */
    _SEMI = 274,                   /* _SEMI  */
    _LT = 275,                     /* _LT  */
    _SYMB_10 = 276,                /* _SYMB_10  */
    _DLT = 277,                    /* _DLT  */
    _LDARROW = 278,                /* _LDARROW  */
    _SYMB_2 = 279,                 /* _SYMB_2  */
    _DEQ = 280,                    /* _DEQ  */
    _SYMB_1 = 281,                 /* _SYMB_1  */
    _GT = 282,                     /* _GT  */
    _GTEQ = 283,                   /* _GTEQ  */
    _DGT = 284,                    /* _DGT  */
    _QUESTION = 285,               /* _QUESTION  */
    _LBRACK = 286,                 /* _LBRACK  */
    _SYMB_24 = 287,                /* _SYMB_24  */
    _SYMB_25 = 288,                /* _SYMB_25  */
    _SYMB_23 = 289,                /* _SYMB_23  */
    _SYMB_11 = 290,                /* _SYMB_11  */
    _SYMB_29 = 291,                /* _SYMB_29  */
    _SYMB_41 = 292,                /* _SYMB_41  */
    _SYMB_44 = 293,                /* _SYMB_44  */
    _SYMB_26 = 294,                /* _SYMB_26  */
    _SYMB_42 = 295,                /* _SYMB_42  */
    _SYMB_43 = 296,                /* _SYMB_43  */
    _SYMB_27 = 297,                /* _SYMB_27  */
    _SYMB_22 = 298,                /* _SYMB_22  */
    _SYMB_47 = 299,                /* _SYMB_47  */
    _SYMB_28 = 300,                /* _SYMB_28  */
    _RBRACK = 301,                 /* _RBRACK  */
    _CARET = 302,                  /* _CARET  */
    _DCARET = 303,                 /* _DCARET  */
    _KW_admit = 304,               /* _KW_admit  */
    _KW_allocates = 305,           /* _KW_allocates  */
    _KW_assigns = 306,             /* _KW_assigns  */
    _KW_assumes = 307,             /* _KW_assumes  */
    _KW_behavior = 308,            /* _KW_behavior  */
    _KW_breaks = 309,              /* _KW_breaks  */
    _KW_check = 310,               /* _KW_check  */
    _KW_complete = 311,            /* _KW_complete  */
    _KW_continues = 312,           /* _KW_continues  */
    _KW_decreases = 313,           /* _KW_decreases  */
    _KW_disjoint = 314,            /* _KW_disjoint  */
    _KW_ensures = 315,             /* _KW_ensures  */
    _KW_exits = 316,               /* _KW_exits  */
    _KW_frees = 317,               /* _KW_frees  */
    _KW_invariant = 318,           /* _KW_invariant  */
    _KW_lemma = 319,               /* _KW_lemma  */
    _KW_loop = 320,                /* _KW_loop  */
    _KW_requires = 321,            /* _KW_requires  */
    _KW_returns = 322,             /* _KW_returns  */
    _KW_sizeof = 323,              /* _KW_sizeof  */
    _BAR = 324,                    /* _BAR  */
    _DBAR = 325,                   /* _DBAR  */
    _TILDE = 326,                  /* _TILDE  */
    _STRING_ = 327,                /* _STRING_  */
    _INTEGER_ = 328,               /* _INTEGER_  */
    _DOUBLE_ = 329,                /* _DOUBLE_  */
    _IDENT_ = 330                  /* _IDENT_  */
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
  partial_bnfc_acsl::ListAnnot* listannot_;
  partial_bnfc_acsl::Code_Annot* code_annot_;
  partial_bnfc_acsl::Contract* contract_;
  partial_bnfc_acsl::Requires* requires_;
  partial_bnfc_acsl::NERequires* nerequires_;
  partial_bnfc_acsl::ClauseKW* clausekw_;
  partial_bnfc_acsl::Terminates* terminates_;
  partial_bnfc_acsl::Decreases* decreases_;
  partial_bnfc_acsl::SimpleClauses* simpleclauses_;
  partial_bnfc_acsl::NESimpleClauses* nesimpleclauses_;
  partial_bnfc_acsl::Behaviors* behaviors_;
  partial_bnfc_acsl::CompleteOrDisjoint* completeordisjoint_;
  partial_bnfc_acsl::Lexpr* lexpr_;
  partial_bnfc_acsl::ListLexpr* listlexpr_;
  partial_bnfc_acsl::LexprRelInner* lexprrelinner_;
  partial_bnfc_acsl::ListLexprRelInner* listlexprrelinner_;
  partial_bnfc_acsl::Relation* relation_;
  partial_bnfc_acsl::PostCond* postcond_;
  partial_bnfc_acsl::FullIdentifier* fullidentifier_;
  partial_bnfc_acsl::ListFullIdentifier* listfullidentifier_;
  partial_bnfc_acsl::Identifier* identifier_;

#line 169 "Bison.H"

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
