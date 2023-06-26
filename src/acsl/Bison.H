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

#ifndef YY_ACSL_BISON_H_INCLUDED
# define YY_ACSL_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int acsldebug;
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
    _DDOT = 279,                   /* _DDOT  */
    _ELLIPSIS = 280,               /* _ELLIPSIS  */
    _SLASH = 281,                  /* _SLASH  */
    _SLASHEQ = 282,                /* _SLASHEQ  */
    _COLON = 283,                  /* _COLON  */
    _SEMI = 284,                   /* _SEMI  */
    _LT = 285,                     /* _LT  */
    _DLT = 286,                    /* _DLT  */
    _DLTEQ = 287,                  /* _DLTEQ  */
    _LDARROW = 288,                /* _LDARROW  */
    _SYMB_52 = 289,                /* _SYMB_52  */
    _EQ = 290,                     /* _EQ  */
    _DEQ = 291,                    /* _DEQ  */
    _SYMB_51 = 292,                /* _SYMB_51  */
    _GT = 293,                     /* _GT  */
    _GTEQ = 294,                   /* _GTEQ  */
    _DGT = 295,                    /* _DGT  */
    _DGTEQ = 296,                  /* _DGTEQ  */
    _QUESTION = 297,               /* _QUESTION  */
    _KW_69 = 298,                  /* _KW_69  */
    _KW_70 = 299,                  /* _KW_70  */
    _LBRACK = 300,                 /* _LBRACK  */
    _SYMB_60 = 301,                /* _SYMB_60  */
    _SYMB_61 = 302,                /* _SYMB_61  */
    _SYMB_55 = 303,                /* _SYMB_55  */
    _SYMB_58 = 304,                /* _SYMB_58  */
    _SYMB_54 = 305,                /* _SYMB_54  */
    _SYMB_49 = 306,                /* _SYMB_49  */
    _SYMB_56 = 307,                /* _SYMB_56  */
    _SYMB_50 = 308,                /* _SYMB_50  */
    _SYMB_65 = 309,                /* _SYMB_65  */
    _SYMB_67 = 310,                /* _SYMB_67  */
    _SYMB_62 = 311,                /* _SYMB_62  */
    _SYMB_66 = 312,                /* _SYMB_66  */
    _SYMB_63 = 313,                /* _SYMB_63  */
    _SYMB_57 = 314,                /* _SYMB_57  */
    _SYMB_64 = 315,                /* _SYMB_64  */
    _SYMB_59 = 316,                /* _SYMB_59  */
    _RBRACK = 317,                 /* _RBRACK  */
    _CARET = 318,                  /* _CARET  */
    _CARETEQ = 319,                /* _CARETEQ  */
    _DCARET = 320,                 /* _DCARET  */
    _SYMB_1 = 321,                 /* _SYMB_1  */
    _SYMB_2 = 322,                 /* _SYMB_2  */
    _SYMB_3 = 323,                 /* _SYMB_3  */
    _KW_admit = 324,               /* _KW_admit  */
    _KW_assigns = 325,             /* _KW_assigns  */
    _KW_boolean = 326,             /* _KW_boolean  */
    _KW_break = 327,               /* _KW_break  */
    _KW_breaks = 328,              /* _KW_breaks  */
    _KW_case = 329,                /* _KW_case  */
    _KW_char = 330,                /* _KW_char  */
    _KW_check = 331,               /* _KW_check  */
    _KW_continue = 332,            /* _KW_continue  */
    _KW_continues = 333,           /* _KW_continues  */
    _KW_default = 334,             /* _KW_default  */
    _KW_double = 335,              /* _KW_double  */
    _KW_else = 336,                /* _KW_else  */
    _KW_ensures = 337,             /* _KW_ensures  */
    _KW_exits = 338,               /* _KW_exits  */
    _KW_float = 339,               /* _KW_float  */
    _KW_for = 340,                 /* _KW_for  */
    _KW_if = 341,                  /* _KW_if  */
    _KW_int = 342,                 /* _KW_int  */
    _KW_integer = 343,             /* _KW_integer  */
    _KW_invariant = 344,           /* _KW_invariant  */
    _KW_long = 345,                /* _KW_long  */
    _KW_loop = 346,                /* _KW_loop  */
    _KW_real = 347,                /* _KW_real  */
    _KW_requires = 348,            /* _KW_requires  */
    _KW_return = 349,              /* _KW_return  */
    _KW_returns = 350,             /* _KW_returns  */
    _KW_short = 351,               /* _KW_short  */
    _KW_99 = 352,                  /* _KW_99  */
    _KW_struct = 353,              /* _KW_struct  */
    _KW_switch = 354,              /* _KW_switch  */
    _KW_unsigned = 355,            /* _KW_unsigned  */
    _KW_variant = 356,             /* _KW_variant  */
    _KW_void = 357,                /* _KW_void  */
    _KW_while = 358,               /* _KW_while  */
    _LBRACE = 359,                 /* _LBRACE  */
    _BAR = 360,                    /* _BAR  */
    _BAREQ = 361,                  /* _BAREQ  */
    _DBAR = 362,                   /* _DBAR  */
    _RBRACE = 363,                 /* _RBRACE  */
    _TILDE = 364,                  /* _TILDE  */
    T_BLOCKATTRIBUTE = 365,        /* T_BLOCKATTRIBUTE  */
    T_CONST = 366,                 /* T_CONST  */
    T_LBRACE = 367,                /* T_LBRACE  */
    T_LBRACKET = 368,              /* T_LBRACKET  */
    T_RBRACE = 369,                /* T_RBRACE  */
    T_RBRACKET = 370,              /* T_RBRACKET  */
    T_RESTRICT = 371,              /* T_RESTRICT  */
    T_SIGNED = 372,                /* T_SIGNED  */
    T_VOLATILE = 373,              /* T_VOLATILE  */
    _STRING_ = 374,                /* _STRING_  */
    _CHAR_ = 375,                  /* _CHAR_  */
    _INTEGER_ = 376,               /* _INTEGER_  */
    _DOUBLE_ = 377,                /* _DOUBLE_  */
    _IDENT_ = 378                  /* _IDENT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "full_bnfc_parser.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  acsl::Program* program_;
  acsl::Globals* globals_;
  acsl::Global* global_;
  acsl::FunctionDef* functiondef_;
  acsl::FunctionDefStart* functiondefstart_;
  acsl::DeclSpecList* declspeclist_;
  acsl::DeclSpecListNoNamed* declspeclistnonamed_;
  acsl::TypeSpec* typespec_;
  acsl::Declarator* declarator_;
  acsl::PointerOpt* pointeropt_;
  acsl::DirectDecl* directdecl_;
  acsl::AttributesWithAsm* attributeswithasm_;
  acsl::RestParList* restparlist_;
  acsl::ParameterDecl* parameterdecl_;
  acsl::ListParameterDecl* listparameterdecl_;
  acsl::GhostParameterOpt* ghostparameteropt_;
  acsl::IdOrTypename* idortypename_;
  acsl::IdOrTypenameAsId* idortypenameasid_;
  acsl::Declaration* declaration_;
  acsl::DeclAndInitDeclAttrList* declandinitdeclattrlist_;
  acsl::InitDeclaratorAttr* initdeclaratorattr_;
  acsl::ListInitDeclaratorAttr* listinitdeclaratorattr_;
  acsl::InitDeclarator* initdeclarator_;
  acsl::StructDeclList* structdecllist_;
  acsl::FieldDecl* fielddecl_;
  acsl::ListFieldDecl* listfielddecl_;
  acsl::Attribute* attribute_;
  acsl::ListAttribute* listattribute_;
  acsl::Block* block_;
  acsl::BlockAttrs* blockattrs_;
  acsl::BlockElement* blockelement_;
  acsl::ListBlockElement* listblockelement_;
  acsl::Statement* statement_;
  acsl::ForClause* forclause_;
  acsl::Attr* attr_;
  acsl::ListAttr* listattr_;
  acsl::BasicAttribute* basicattribute_;
  acsl::AnnotatedStmt* annotatedstmt_;
  acsl::ElsePart* elsepart_;
  acsl::OptExpression* optexpression_;
  acsl::Expression* expression_;
  acsl::ListExpression* listexpression_;
  acsl::AssignExpr* assignexpr_;
  acsl::Constant* constant_;
  acsl::TypeName* typename_;
  acsl::ACSLProgram* acslprogram_;
  acsl::Annot* annot_;
  acsl::Code_Annot* code_annot_;
  acsl::Contract* contract_;
  acsl::Requires* requires_;
  acsl::NERequires* nerequires_;
  acsl::Terminates* terminates_;
  acsl::Decreases* decreases_;
  acsl::SimpleClauses* simpleclauses_;
  acsl::NESimpleClauses* nesimpleclauses_;
  acsl::Assigns* assigns_;
  acsl::Zones* zones_;
  acsl::Behaviors* behaviors_;
  acsl::CompleteOrDisjoint* completeordisjoint_;
  acsl::Lexpr* lexpr_;
  acsl::ListLexpr* listlexpr_;
  acsl::LexprRelInner* lexprrelinner_;
  acsl::ListLexprRelInner* listlexprrelinner_;
  acsl::Relation* relation_;
  acsl::LexprBinder* lexprbinder_;
  acsl::Binders* binders_;
  acsl::TypeSpecOFTYPENAME* typespecoftypename_;
  acsl::BindersReentrance* bindersreentrance_;
  acsl::ListBindersReentrance* listbindersreentrance_;
  acsl::VarSpec* varspec_;
  acsl::Stars* stars_;
  acsl::ListStars* liststars_;
  acsl::ArraySize* arraysize_;
  acsl::OptLabel* optlabel_;
  acsl::OptLabelList* optlabellist_;
  acsl::LabelName* labelname_;
  acsl::ListLabelName* listlabelname_;
  acsl::Range* range_;
  acsl::LexprOption* lexproption_;
  acsl::AnyIdentifier* anyidentifier_;
  acsl::PostCond* postcond_;
  acsl::FullIdentifier* fullidentifier_;
  acsl::ListFullIdentifier* listfullidentifier_;
  acsl::Identifier* identifier_;
  acsl::TypeSpecSimple* typespecsimple_;
  acsl::LogicPTreeAnnot* logicptreeannot_;
  acsl::Annotation* annotation_;
  acsl::LoopAnnotStack* loopannotstack_;
  acsl::LoopAnnotOpt* loopannotopt_;
  acsl::LoopInvariant* loopinvariant_;
  acsl::LoopVariant* loopvariant_;
  acsl::LoopEffects* loopeffects_;
  acsl::Variant* variant_;

#line 287 "Bison.H"

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




int acslparse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_ACSL_BISON_H_INCLUDED  */
