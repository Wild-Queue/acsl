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
    _SYMB_55 = 295,                /* _SYMB_55  */
    _CARET = 296,                  /* _CARET  */
    _CARETEQ = 297,                /* _CARETEQ  */
    _SYMB_53 = 298,                /* _SYMB_53  */
    _SYMB_4 = 299,                 /* _SYMB_4  */
    _SYMB_52 = 300,                /* _SYMB_52  */
    _SYMB_51 = 301,                /* _SYMB_51  */
    _SYMB_58 = 302,                /* _SYMB_58  */
    _SYMB_45 = 303,                /* _SYMB_45  */
    _SYMB_7 = 304,                 /* _SYMB_7  */
    _SYMB_6 = 305,                 /* _SYMB_6  */
    _SYMB_5 = 306,                 /* _SYMB_5  */
    _SYMB_56 = 307,                /* _SYMB_56  */
    _SYMB_49 = 308,                /* _SYMB_49  */
    _SYMB_50 = 309,                /* _SYMB_50  */
    _SYMB_54 = 310,                /* _SYMB_54  */
    _SYMB_47 = 311,                /* _SYMB_47  */
    _SYMB_57 = 312,                /* _SYMB_57  */
    _SYMB_48 = 313,                /* _SYMB_48  */
    _KW_auto = 314,                /* _KW_auto  */
    _KW_break = 315,               /* _KW_break  */
    _KW_case = 316,                /* _KW_case  */
    _KW_char = 317,                /* _KW_char  */
    _KW_continue = 318,            /* _KW_continue  */
    _KW_default = 319,             /* _KW_default  */
    _KW_do = 320,                  /* _KW_do  */
    _KW_double = 321,              /* _KW_double  */
    _KW_else = 322,                /* _KW_else  */
    _KW_enum = 323,                /* _KW_enum  */
    _KW_extern = 324,              /* _KW_extern  */
    _KW_float = 325,               /* _KW_float  */
    _KW_for = 326,                 /* _KW_for  */
    _KW_ghost = 327,               /* _KW_ghost  */
    _KW_goto = 328,                /* _KW_goto  */
    _KW_if = 329,                  /* _KW_if  */
    _KW_long = 330,                /* _KW_long  */
    _KW_pragma = 331,              /* _KW_pragma  */
    _KW_register = 332,            /* _KW_register  */
    _KW_return = 333,              /* _KW_return  */
    _KW_short = 334,               /* _KW_short  */
    _KW_sizeof = 335,              /* _KW_sizeof  */
    _KW_static = 336,              /* _KW_static  */
    _KW_struct = 337,              /* _KW_struct  */
    _KW_switch = 338,              /* _KW_switch  */
    _KW_typedef = 339,             /* _KW_typedef  */
    _KW_union = 340,               /* _KW_union  */
    _KW_unsigned = 341,            /* _KW_unsigned  */
    _KW_void = 342,                /* _KW_void  */
    _KW_while = 343,               /* _KW_while  */
    _BAR = 344,                    /* _BAR  */
    _BAREQ = 345,                  /* _BAREQ  */
    _DBAR = 346,                   /* _DBAR  */
    _TILDE = 347,                  /* _TILDE  */
    T_ALIGNOF = 348,               /* T_ALIGNOF  */
    T_ASM = 349,                   /* T_ASM  */
    T_ATTRIBUTE = 350,             /* T_ATTRIBUTE  */
    T_ATTRIBUTE_ANNOT = 351,       /* T_ATTRIBUTE_ANNOT  */
    T_BLOCKATTRIBUTE = 352,        /* T_BLOCKATTRIBUTE  */
    T_CODE_ANNOT = 353,            /* T_CODE_ANNOT  */
    T_CONST = 354,                 /* T_CONST  */
    T_CST_WCHAR = 355,             /* T_CST_WCHAR  */
    T_CST_WSTRING = 356,           /* T_CST_WSTRING  */
    T_DECL = 357,                  /* T_DECL  */
    T_FUNCTION__ = 358,            /* T_FUNCTION__  */
    T_INLINE = 359,                /* T_INLINE  */
    T_INT = 360,                   /* T_INT  */
    T_LBRACE = 361,                /* T_LBRACE  */
    T_LBRACKET = 362,              /* T_LBRACKET  */
    T_LOOP_ANNOT = 363,            /* T_LOOP_ANNOT  */
    T_MSATTR = 364,                /* T_MSATTR  */
    T_NAMEDTYPE = 365,             /* T_NAMEDTYPE  */
    T_RBRACE = 366,                /* T_RBRACE  */
    T_RBRACKET = 367,              /* T_RBRACKET  */
    T_RESTRICT = 368,              /* T_RESTRICT  */
    T_RGHOST = 369,                /* T_RGHOST  */
    T_SIGNED = 370,                /* T_SIGNED  */
    T_SPEC = 371,                  /* T_SPEC  */
    T_TYPEOF = 372,                /* T_TYPEOF  */
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
#line 52 "cparser.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  acsl::Program* program_;
  acsl::Globals* globals_;
  acsl::GhostGlobals* ghostglobals_;
  acsl::Global* global_;
  acsl::IdOrTypenameAsId* idortypenameasid_;
  acsl::IdOrTypename* idortypename_;
  acsl::MaybeComma* maybecomma_;
  acsl::AssignExpr* assignexpr_;
  acsl::OffsetofMemberDesignator* offsetofmemberdesignator_;
  acsl::Expression* expression_;
  acsl::Constant* constant_;
  acsl::StringConstant* stringconstant_;
  acsl::WStringList* wstringlist_;
  acsl::OneString* onestring_;
  acsl::ListOneString* listonestring_;
  acsl::InitExpression* initexpression_;
  acsl::InitializerListOpt* initializerlistopt_;
  acsl::InitializerSingle* initializersingle_;
  acsl::ListInitializerSingle* listinitializersingle_;
  acsl::EqOpt* eqopt_;
  acsl::InitDesignators* initdesignators_;
  acsl::InitDesignatorsOpt* initdesignatorsopt_;
  acsl::GhostArgumentsOpt* ghostargumentsopt_;
  acsl::Arguments* arguments_;
  acsl::OptExpression* optexpression_;
  acsl::ListExpression* listexpression_;
  acsl::CommaExpressionOpt* commaexpressionopt_;
  acsl::Block* block_;
  acsl::BlockAttrs* blockattrs_;
  acsl::BlockElement* blockelement_;
  acsl::ListBlockElement* listblockelement_;
  acsl::Annot* annot_;
  acsl::ListAnnot* listannot_;
  acsl::LocalLabel* locallabel_;
  acsl::ListLocalLabel* listlocallabel_;
  acsl::LocalLabelName* locallabelname_;
  acsl::ListLocalLabelName* listlocallabelname_;
  acsl::AnnotatedStmt* annotatedstmt_;
  acsl::ElsePart* elsepart_;
  acsl::Statement* statement_;
  acsl::OptLoopAnnotations* optloopannotations_;
  acsl::ForClause* forclause_;
  acsl::GhostParameterOpt* ghostparameteropt_;
  acsl::Declaration* declaration_;
  acsl::GenericAssociation* genericassociation_;
  acsl::ListGenericAssociation* listgenericassociation_;
  acsl::DeclAndInitDeclAttrList* declandinitdeclattrlist_;
  acsl::InitDeclaratorAttr* initdeclaratorattr_;
  acsl::ListInitDeclaratorAttr* listinitdeclaratorattr_;
  acsl::InitDeclarator* initdeclarator_;
  acsl::DeclSpecWOType* declspecwotype_;
  acsl::DeclSpecList* declspeclist_;
  acsl::DeclSpecListNoNamed* declspeclistnonamed_;
  acsl::TypeSpec* typespec_;
  acsl::StructDeclList* structdecllist_;
  acsl::StaticAssertDeclaration* staticassertdeclaration_;
  acsl::FieldDecl* fielddecl_;
  acsl::ListFieldDecl* listfielddecl_;
  acsl::Enumerator* enumerator_;
  acsl::ListEnumerator* listenumerator_;
  acsl::Declarator* declarator_;
  acsl::ListDeclarator* listdeclarator_;
  acsl::AttributesOrStatic* attributesorstatic_;
  acsl::DirectDecl* directdecl_;
  acsl::RestParList* restparlist_;
  acsl::ParameterDecl* parameterdecl_;
  acsl::ListParameterDecl* listparameterdecl_;
  acsl::DirectOldProtoDecl* directoldprotodecl_;
  acsl::ListIdent* listident_;
  acsl::OldPardefList* oldpardeflist_;
  acsl::OldPardef* oldpardef_;
  acsl::ListOldPardef* listoldpardef_;
  acsl::PointerOpt* pointeropt_;
  acsl::TypeName* typename_;
  acsl::AbstractDecl* abstractdecl_;
  acsl::AbsDirectDecl* absdirectdecl_;
  acsl::AbsDirectDeclOpt* absdirectdeclopt_;
  acsl::FunctionDef* functiondef_;
  acsl::FunctionDefStart* functiondefstart_;
  acsl::CVSpec* cvspec_;
  acsl::AttributesWithAsm* attributeswithasm_;
  acsl::AttributeNocv* attributenocv_;
  acsl::ListAttributeNocv* listattributenocv_;
  acsl::Attribute* attribute_;
  acsl::ListAttribute* listattribute_;
  acsl::JustAttribute* justattribute_;
  acsl::ListJustAttribute* listjustattribute_;
  acsl::Pragma* pragma_;
  acsl::VarAttr* varattr_;
  acsl::BasicAttribute* basicattribute_;
  acsl::ListBasicAttribute* listbasicattribute_;
  acsl::ParameterAttrListNE* parameterattrlistne_;
  acsl::ParamAttrListNE* paramattrlistne_;
  acsl::Attr* attr_;
  acsl::ListAttr* listattr_;
  acsl::AttrTest* attrtest_;
  acsl::AttrList* attrlist_;
  acsl::Asmattr* asmattr_;
  acsl::ListAsmattr* listasmattr_;
  acsl::Asmoutputs* asmoutputs_;
  acsl::Asmoperands* asmoperands_;
  acsl::Asmoperand* asmoperand_;
  acsl::ListAsmoperand* listasmoperand_;
  acsl::Asminputs* asminputs_;
  acsl::Asmopname* asmopname_;
  acsl::Asmclobber* asmclobber_;
  acsl::ListStringConstant* liststringconstant_;
  acsl::Asmlabels* asmlabels_;

#line 302 "Bison.H"

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
