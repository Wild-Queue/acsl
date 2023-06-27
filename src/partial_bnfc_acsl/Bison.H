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
    _PLUS = 267,                   /* _PLUS  */
    _COMMA = 268,                  /* _COMMA  */
    _MINUS = 269,                  /* _MINUS  */
    _SYMB_11 = 270,                /* _SYMB_11  */
    _DDOT = 271,                   /* _DDOT  */
    _SLASH = 272,                  /* _SLASH  */
    _COLON = 273,                  /* _COLON  */
    _SEMI = 274,                   /* _SEMI  */
    _LT = 275,                     /* _LT  */
    _SYMB_12 = 276,                /* _SYMB_12  */
    _LDARROW = 277,                /* _LDARROW  */
    _SYMB_4 = 278,                 /* _SYMB_4  */
    _DEQ = 279,                    /* _DEQ  */
    _SYMB_3 = 280,                 /* _SYMB_3  */
    _GT = 281,                     /* _GT  */
    _GTEQ = 282,                   /* _GTEQ  */
    _QUESTION = 283,               /* _QUESTION  */
    _LBRACK = 284,                 /* _LBRACK  */
    _SYMB_46 = 285,                /* _SYMB_46  */
    _SYMB_48 = 286,                /* _SYMB_48  */
    _SYMB_61 = 287,                /* _SYMB_61  */
    _SYMB_49 = 288,                /* _SYMB_49  */
    _SYMB_43 = 289,                /* _SYMB_43  */
    _SYMB_44 = 290,                /* _SYMB_44  */
    _SYMB_41 = 291,                /* _SYMB_41  */
    _SYMB_50 = 292,                /* _SYMB_50  */
    _SYMB_25 = 293,                /* _SYMB_25  */
    _SYMB_33 = 294,                /* _SYMB_33  */
    _SYMB_24 = 295,                /* _SYMB_24  */
    _SYMB_47 = 296,                /* _SYMB_47  */
    _SYMB_42 = 297,                /* _SYMB_42  */
    _SYMB_1 = 298,                 /* _SYMB_1  */
    _SYMB_13 = 299,                /* _SYMB_13  */
    _SYMB_40 = 300,                /* _SYMB_40  */
    _SYMB_26 = 301,                /* _SYMB_26  */
    _SYMB_2 = 302,                 /* _SYMB_2  */
    _SYMB_54 = 303,                /* _SYMB_54  */
    _SYMB_34 = 304,                /* _SYMB_34  */
    _SYMB_45 = 305,                /* _SYMB_45  */
    _SYMB_60 = 306,                /* _SYMB_60  */
    _SYMB_64 = 307,                /* _SYMB_64  */
    _SYMB_51 = 308,                /* _SYMB_51  */
    _SYMB_62 = 309,                /* _SYMB_62  */
    _SYMB_63 = 310,                /* _SYMB_63  */
    _SYMB_52 = 311,                /* _SYMB_52  */
    _SYMB_32 = 312,                /* _SYMB_32  */
    _SYMB_53 = 313,                /* _SYMB_53  */
    _SYMB_35 = 314,                /* _SYMB_35  */
    _SYMB_37 = 315,                /* _SYMB_37  */
    _SYMB_38 = 316,                /* _SYMB_38  */
    _SYMB_39 = 317,                /* _SYMB_39  */
    _SYMB_36 = 318,                /* _SYMB_36  */
    _RBRACK = 319,                 /* _RBRACK  */
    _CARET = 320,                  /* _CARET  */
    _DCARET = 321,                 /* _DCARET  */
    _SYMB_68 = 322,                /* _SYMB_68  */
    _KW_admit = 323,               /* _KW_admit  */
    _KW_allocates = 324,           /* _KW_allocates  */
    _KW_assert = 325,              /* _KW_assert  */
    _KW_assigns = 326,             /* _KW_assigns  */
    _KW_assumes = 327,             /* _KW_assumes  */
    _KW_at = 328,                  /* _KW_at  */
    _KW_axiom = 329,               /* _KW_axiom  */
    _KW_axiomatic = 330,           /* _KW_axiomatic  */
    _KW_behavior = 331,            /* _KW_behavior  */
    _KW_behaviors = 332,           /* _KW_behaviors  */
    _KW_boolean = 333,             /* _KW_boolean  */
    _KW_breaks = 334,              /* _KW_breaks  */
    _KW_char = 335,                /* _KW_char  */
    _KW_check = 336,               /* _KW_check  */
    _KW_complete = 337,            /* _KW_complete  */
    _KW_continues = 338,           /* _KW_continues  */
    _KW_contract = 339,            /* _KW_contract  */
    _KW_decreases = 340,           /* _KW_decreases  */
    _KW_disjoint = 341,            /* _KW_disjoint  */
    _KW_double = 342,              /* _KW_double  */
    _KW_ensures = 343,             /* _KW_ensures  */
    _KW_exits = 344,               /* _KW_exits  */
    _KW_float = 345,               /* _KW_float  */
    _KW_for = 346,                 /* _KW_for  */
    _KW_frees = 347,               /* _KW_frees  */
    _KW_function = 348,            /* _KW_function  */
    _KW_global = 349,              /* _KW_global  */
    _KW_impact = 350,              /* _KW_impact  */
    _KW_include = 351,             /* _KW_include  */
    _KW_inductive = 352,           /* _KW_inductive  */
    _KW_int = 353,                 /* _KW_int  */
    _KW_integer = 354,             /* _KW_integer  */
    _KW_invariant = 355,           /* _KW_invariant  */
    _KW_label = 356,               /* _KW_label  */
    _KW_lemma = 357,               /* _KW_lemma  */
    _KW_let = 358,                 /* _KW_let  */
    _KW_logic = 359,               /* _KW_logic  */
    _KW_long = 360,                /* _KW_long  */
    _KW_loop = 361,                /* _KW_loop  */
    _KW_model = 362,               /* _KW_model  */
    _KW_module = 363,              /* _KW_module  */
    _KW_pragma = 364,              /* _KW_pragma  */
    _KW_predicate = 365,           /* _KW_predicate  */
    _KW_reads = 366,               /* _KW_reads  */
    _KW_real = 367,                /* _KW_real  */
    _KW_requires = 368,            /* _KW_requires  */
    _KW_returns = 369,             /* _KW_returns  */
    _KW_short = 370,               /* _KW_short  */
    _KW_signed = 371,              /* _KW_signed  */
    _KW_sizeof = 372,              /* _KW_sizeof  */
    _KW_slice = 373,               /* _KW_slice  */
    _KW_terminates = 374,          /* _KW_terminates  */
    _KW_type = 375,                /* _KW_type  */
    _KW_unsigned = 376,            /* _KW_unsigned  */
    _KW_variant = 377,             /* _KW_variant  */
    _KW_void = 378,                /* _KW_void  */
    _KW_writes = 379,              /* _KW_writes  */
    _LBRACE = 380,                 /* _LBRACE  */
    _BAR = 381,                    /* _BAR  */
    _DBAR = 382,                   /* _DBAR  */
    _RBRACE = 383,                 /* _RBRACE  */
    _TILDE = 384,                  /* _TILDE  */
    _STRING_ = 385,                /* _STRING_  */
    _INTEGER_ = 386,               /* _INTEGER_  */
    _DOUBLE_ = 387,                /* _DOUBLE_  */
    _IDENT_ = 388                  /* _IDENT_  */
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
  partial_bnfc_acsl::LoopAllocation* loopallocation_;
  partial_bnfc_acsl::Allocation* allocation_;
  partial_bnfc_acsl::LoopVariant* loopvariant_;
  partial_bnfc_acsl::LoopEffects* loopeffects_;
  partial_bnfc_acsl::Variant* variant_;

#line 254 "Bison.H"

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
