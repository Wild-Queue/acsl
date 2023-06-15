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
    _DOLLAR = 261,                 /* _DOLLAR  */
    _PERCENT = 262,                /* _PERCENT  */
    _PERCENTEQ = 263,              /* _PERCENTEQ  */
    _AMP = 264,                    /* _AMP  */
    _DAMP = 265,                   /* _DAMP  */
    _AMPEQ = 266,                  /* _AMPEQ  */
    _LPAREN = 267,                 /* _LPAREN  */
    _RPAREN = 268,                 /* _RPAREN  */
    _STAR = 269,                   /* _STAR  */
    _STAREQ = 270,                 /* _STAREQ  */
    _SYMB_92 = 271,                /* _SYMB_92  */
    _PLUS = 272,                   /* _PLUS  */
    _DPLUS = 273,                  /* _DPLUS  */
    _PLUSEQ = 274,                 /* _PLUSEQ  */
    _COMMA = 275,                  /* _COMMA  */
    _MINUS = 276,                  /* _MINUS  */
    _DMINUS = 277,                 /* _DMINUS  */
    _SYMB_62 = 278,                /* _SYMB_62  */
    _MINUSEQ = 279,                /* _MINUSEQ  */
    _RARROW = 280,                 /* _RARROW  */
    _DOT = 281,                    /* _DOT  */
    _DDOT = 282,                   /* _DDOT  */
    _ELLIPSIS = 283,               /* _ELLIPSIS  */
    _SLASH = 284,                  /* _SLASH  */
    _SLASHEQ = 285,                /* _SLASHEQ  */
    _COLON = 286,                  /* _COLON  */
    _DCOLON = 287,                 /* _DCOLON  */
    _SEMI = 288,                   /* _SEMI  */
    _LT = 289,                     /* _LT  */
    _SYMB_63 = 290,                /* _SYMB_63  */
    _DLT = 291,                    /* _DLT  */
    _DLTEQ = 292,                  /* _DLTEQ  */
    _LDARROW = 293,                /* _LDARROW  */
    _SYMB_60 = 294,                /* _SYMB_60  */
    _EQ = 295,                     /* _EQ  */
    _DEQ = 296,                    /* _DEQ  */
    _SYMB_59 = 297,                /* _SYMB_59  */
    _GT = 298,                     /* _GT  */
    _GTEQ = 299,                   /* _GTEQ  */
    _DGT = 300,                    /* _DGT  */
    _DGTEQ = 301,                  /* _DGTEQ  */
    _QUESTION = 302,               /* _QUESTION  */
    _KW_Assigns = 303,             /* _KW_Assigns  */
    _KW_Assumes = 304,             /* _KW_Assumes  */
    _KW_Behaviors = 305,           /* _KW_Behaviors  */
    _KW_Contract = 306,            /* _KW_Contract  */
    _KW_Decreases = 307,           /* _KW_Decreases  */
    _KW_Requires = 308,            /* _KW_Requires  */
    _KW_Terminates = 309,          /* _KW_Terminates  */
    _KW_Variant = 310,             /* _KW_Variant  */
    _LBRACK = 311,                 /* _LBRACK  */
    _SYMB_95 = 312,                /* _SYMB_95  */
    _SYMB_85 = 313,                /* _SYMB_85  */
    _SYMB_83 = 314,                /* _SYMB_83  */
    _SYMB_98 = 315,                /* _SYMB_98  */
    _SYMB_86 = 316,                /* _SYMB_86  */
    _SYMB_80 = 317,                /* _SYMB_80  */
    _SYMB_81 = 318,                /* _SYMB_81  */
    _SYMB_78 = 319,                /* _SYMB_78  */
    _SYMB_87 = 320,                /* _SYMB_87  */
    _SYMB_106 = 321,               /* _SYMB_106  */
    _SYMB_67 = 322,                /* _SYMB_67  */
    _SYMB_70 = 323,                /* _SYMB_70  */
    _SYMB_66 = 324,                /* _SYMB_66  */
    _SYMB_84 = 325,                /* _SYMB_84  */
    _SYMB_79 = 326,                /* _SYMB_79  */
    _SYMB_111 = 327,               /* _SYMB_111  */
    _SYMB_55 = 328,                /* _SYMB_55  */
    _SYMB_64 = 329,                /* _SYMB_64  */
    _SYMB_77 = 330,                /* _SYMB_77  */
    _SYMB_108 = 331,               /* _SYMB_108  */
    _SYMB_68 = 332,                /* _SYMB_68  */
    _SYMB_65 = 333,                /* _SYMB_65  */
    _SYMB_112 = 334,               /* _SYMB_112  */
    _SYMB_91 = 335,                /* _SYMB_91  */
    _SYMB_71 = 336,                /* _SYMB_71  */
    _SYMB_82 = 337,                /* _SYMB_82  */
    _SYMB_97 = 338,                /* _SYMB_97  */
    _SYMB_103 = 339,               /* _SYMB_103  */
    _SYMB_88 = 340,                /* _SYMB_88  */
    _SYMB_99 = 341,                /* _SYMB_99  */
    _SYMB_100 = 342,               /* _SYMB_100  */
    _SYMB_89 = 343,                /* _SYMB_89  */
    _SYMB_69 = 344,                /* _SYMB_69  */
    _SYMB_105 = 345,               /* _SYMB_105  */
    _SYMB_104 = 346,               /* _SYMB_104  */
    _SYMB_90 = 347,                /* _SYMB_90  */
    _SYMB_107 = 348,               /* _SYMB_107  */
    _SYMB_72 = 349,                /* _SYMB_72  */
    _SYMB_74 = 350,                /* _SYMB_74  */
    _SYMB_75 = 351,                /* _SYMB_75  */
    _SYMB_76 = 352,                /* _SYMB_76  */
    _SYMB_73 = 353,                /* _SYMB_73  */
    _SYMB_109 = 354,               /* _SYMB_109  */
    _RBRACK = 355,                 /* _RBRACK  */
    _CARET = 356,                  /* _CARET  */
    _CARETEQ = 357,                /* _CARETEQ  */
    _DCARET = 358,                 /* _DCARET  */
    _SYMB_53 = 359,                /* _SYMB_53  */
    _SYMB_4 = 360,                 /* _SYMB_4  */
    _SYMB_52 = 361,                /* _SYMB_52  */
    _SYMB_51 = 362,                /* _SYMB_51  */
    _SYMB_58 = 363,                /* _SYMB_58  */
    _SYMB_45 = 364,                /* _SYMB_45  */
    _SYMB_7 = 365,                 /* _SYMB_7  */
    _SYMB_6 = 366,                 /* _SYMB_6  */
    _SYMB_5 = 367,                 /* _SYMB_5  */
    _SYMB_56 = 368,                /* _SYMB_56  */
    _SYMB_49 = 369,                /* _SYMB_49  */
    _SYMB_50 = 370,                /* _SYMB_50  */
    _SYMB_54 = 371,                /* _SYMB_54  */
    _SYMB_47 = 372,                /* _SYMB_47  */
    _SYMB_57 = 373,                /* _SYMB_57  */
    _SYMB_48 = 374,                /* _SYMB_48  */
    _KW_admit = 375,               /* _KW_admit  */
    _KW_allocates = 376,           /* _KW_allocates  */
    _KW_assert = 377,              /* _KW_assert  */
    _KW_at = 378,                  /* _KW_at  */
    _KW_auto = 379,                /* _KW_auto  */
    _KW_axiom = 380,               /* _KW_axiom  */
    _KW_axiomatic = 381,           /* _KW_axiomatic  */
    _KW_behavior = 382,            /* _KW_behavior  */
    _KW_boolean = 383,             /* _KW_boolean  */
    _KW_break = 384,               /* _KW_break  */
    _KW_breaks = 385,              /* _KW_breaks  */
    _KW_case = 386,                /* _KW_case  */
    _KW_char = 387,                /* _KW_char  */
    _KW_check = 388,               /* _KW_check  */
    _KW_complete = 389,            /* _KW_complete  */
    _KW_const = 390,               /* _KW_const  */
    _KW_continue = 391,            /* _KW_continue  */
    _KW_continues = 392,           /* _KW_continues  */
    _KW_default = 393,             /* _KW_default  */
    _KW_disjoint = 394,            /* _KW_disjoint  */
    _KW_do = 395,                  /* _KW_do  */
    _KW_double = 396,              /* _KW_double  */
    _KW_else = 397,                /* _KW_else  */
    _KW_ensures = 398,             /* _KW_ensures  */
    _KW_enum = 399,                /* _KW_enum  */
    _KW_exits = 400,               /* _KW_exits  */
    _KW_extern = 401,              /* _KW_extern  */
    _KW_float = 402,               /* _KW_float  */
    _KW_for = 403,                 /* _KW_for  */
    _KW_frees = 404,               /* _KW_frees  */
    _KW_function = 405,            /* _KW_function  */
    _KW_ghost = 406,               /* _KW_ghost  */
    _KW_global = 407,              /* _KW_global  */
    _KW_goto = 408,                /* _KW_goto  */
    _KW_if = 409,                  /* _KW_if  */
    _KW_impact = 410,              /* _KW_impact  */
    _KW_include = 411,             /* _KW_include  */
    _KW_inductive = 412,           /* _KW_inductive  */
    _KW_int = 413,                 /* _KW_int  */
    _KW_integer = 414,             /* _KW_integer  */
    _KW_invariant = 415,           /* _KW_invariant  */
    _KW_label = 416,               /* _KW_label  */
    _KW_lemma = 417,               /* _KW_lemma  */
    _KW_let = 418,                 /* _KW_let  */
    _KW_logic = 419,               /* _KW_logic  */
    _KW_long = 420,                /* _KW_long  */
    _KW_loop = 421,                /* _KW_loop  */
    _KW_model = 422,               /* _KW_model  */
    _KW_module = 423,              /* _KW_module  */
    _KW_pragma = 424,              /* _KW_pragma  */
    _KW_predicate = 425,           /* _KW_predicate  */
    _KW_reads = 426,               /* _KW_reads  */
    _KW_real = 427,                /* _KW_real  */
    _KW_register = 428,            /* _KW_register  */
    _KW_requires = 429,            /* _KW_requires  */
    _KW_return = 430,              /* _KW_return  */
    _KW_returns = 431,             /* _KW_returns  */
    _KW_short = 432,               /* _KW_short  */
    _KW_signed = 433,              /* _KW_signed  */
    _KW_sizeof = 434,              /* _KW_sizeof  */
    _KW_slice = 435,               /* _KW_slice  */
    _KW_static = 436,              /* _KW_static  */
    _KW_struct = 437,              /* _KW_struct  */
    _KW_switch = 438,              /* _KW_switch  */
    _KW_type = 439,                /* _KW_type  */
    _KW_typedef = 440,             /* _KW_typedef  */
    _KW_union = 441,               /* _KW_union  */
    _KW_unsigned = 442,            /* _KW_unsigned  */
    _KW_void = 443,                /* _KW_void  */
    _KW_volatile = 444,            /* _KW_volatile  */
    _KW_while = 445,               /* _KW_while  */
    _KW_writes = 446,              /* _KW_writes  */
    _LBRACE = 447,                 /* _LBRACE  */
    _BAR = 448,                    /* _BAR  */
    _BAREQ = 449,                  /* _BAREQ  */
    _SYMB_96 = 450,                /* _SYMB_96  */
    _DBAR = 451,                   /* _DBAR  */
    _RBRACE = 452,                 /* _RBRACE  */
    _TILDE = 453,                  /* _TILDE  */
    T_ALIGNOF = 454,               /* T_ALIGNOF  */
    T_ASM = 455,                   /* T_ASM  */
    T_ATTRIBUTE = 456,             /* T_ATTRIBUTE  */
    T_ATTRIBUTE_ANNOT = 457,       /* T_ATTRIBUTE_ANNOT  */
    T_BLOCKATTRIBUTE = 458,        /* T_BLOCKATTRIBUTE  */
    T_CONST = 459,                 /* T_CONST  */
    T_CST_WCHAR = 460,             /* T_CST_WCHAR  */
    T_CST_WSTRING = 461,           /* T_CST_WSTRING  */
    T_EXT_CODE_ANNOT = 462,        /* T_EXT_CODE_ANNOT  */
    T_EXT_CONTRACT = 463,          /* T_EXT_CONTRACT  */
    T_EXT_GLOBAL = 464,            /* T_EXT_GLOBAL  */
    T_EXT_GLOBAL_BLOCK = 465,      /* T_EXT_GLOBAL_BLOCK  */
    T_FUNCTION__ = 466,            /* T_FUNCTION__  */
    T_INLINE = 467,                /* T_INLINE  */
    T_INT = 468,                   /* T_INT  */
    T_LBRACE = 469,                /* T_LBRACE  */
    T_LBRACKET = 470,              /* T_LBRACKET  */
    T_MSATTR = 471,                /* T_MSATTR  */
    T_NAMEDTYPE = 472,             /* T_NAMEDTYPE  */
    T_RBRACE = 473,                /* T_RBRACE  */
    T_RBRACKET = 474,              /* T_RBRACKET  */
    T_RESTRICT = 475,              /* T_RESTRICT  */
    T_RGHOST = 476,                /* T_RGHOST  */
    T_SIGNED = 477,                /* T_SIGNED  */
    T_STRING_LITERAL = 478,        /* T_STRING_LITERAL  */
    T_TYPENAME = 479,              /* T_TYPENAME  */
    T_TYPEOF = 480,                /* T_TYPEOF  */
    T_VOLATILE = 481,              /* T_VOLATILE  */
    T_WSTRING_CONSTANT = 482,      /* T_WSTRING_CONSTANT  */
    _STRING_ = 483,                /* _STRING_  */
    _CHAR_ = 484,                  /* _CHAR_  */
    _INTEGER_ = 485,               /* _INTEGER_  */
    _DOUBLE_ = 486,                /* _DOUBLE_  */
    _IDENT_ = 487                  /* _IDENT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "combined_parser.y"

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
  acsl::LexprEOF* lexpreof_;
  acsl::LexprList* lexprlist_;
  acsl::ListLexpr* listlexpr_;
  acsl::LexprOption* lexproption_;
  acsl::Lexpr* lexpr_;
  acsl::LexprBinder* lexprbinder_;
  acsl::LexprRelInner* lexprrelinner_;
  acsl::ListLexprRelInner* listlexprrelinner_;
  acsl::Relation* relation_;
  acsl::ListSTRING_LITERAL* liststring_literal_;
  acsl::Range* range_;
  acsl::FieldInitElt* fieldinitelt_;
  acsl::ListFieldInitElt* listfieldinitelt_;
  acsl::ArrayInitElt* arrayinitelt_;
  acsl::ListArrayInitElt* listarrayinitelt_;
  acsl::UpdateElt* updateelt_;
  acsl::ListUpdateElt* listupdateelt_;
  acsl::PathElt* pathelt_;
  acsl::ListPathElt* listpathelt_;
  acsl::Binders* binders_;
  acsl::BindersReentrance* bindersreentrance_;
  acsl::ListBindersReentrance* listbindersreentrance_;
  acsl::VarSpec* varspec_;
  acsl::ArraySize* arraysize_;
  acsl::AbsParamTypeList* absparamtypelist_;
  acsl::AbsParam* absparam_;
  acsl::ListAbsParam* listabsparam_;
  acsl::Parameter* parameter_;
  acsl::ListParameter* listparameter_;
  acsl::LogicTypeGenOFTYPENAME* logictypegenoftypename_;
  acsl::ListLogicTypeGenOFTYPENAME* listlogictypegenoftypename_;
  acsl::LogicTypeGenOFIdentifierOrTypename* logictypegenofidentifierortypename_;
  acsl::ListLogicTypeGenOFIdentifierOrTypename* listlogictypegenofidentifierortypename_;
  acsl::CV* cv_;
  acsl::ListCV* listcv_;
  acsl::TypeSpecCVOFTYPENAME* typespeccvoftypename_;
  acsl::CastLogicType* castlogictype_;
  acsl::LogicRtType* logicrttype_;
  acsl::AbsSpecOption* absspecoption_;
  acsl::AbsSpecCVOption* absspeccvoption_;
  acsl::AbsSpec* absspec_;
  acsl::AbsSpecCV* absspeccv_;
  acsl::Stars* stars_;
  acsl::ListStars* liststars_;
  acsl::StarsCV* starscv_;
  acsl::ListStarsCV* liststarscv_;
  acsl::Tabs* tabs_;
  acsl::ListTabs* listtabs_;
  acsl::TypeSpecSimple* typespecsimple_;
  acsl::TypeSpecOFTYPENAME* typespecoftypename_;
  acsl::TypeSpecOFIdentifierOrTypename* typespecofidentifierortypename_;
  acsl::FullIdentifier* fullidentifier_;
  acsl::ListFullIdentifier* listfullidentifier_;
  acsl::ExtSpec* extspec_;
  acsl::ExtGlobalClausesOpt* extglobalclausesopt_;
  acsl::ExtGlobalClause* extglobalclause_;
  acsl::ListExtGlobalClause* listextglobalclause_;
  acsl::ExtGlobalSpecsOpt* extglobalspecsopt_;
  acsl::ExtGlobalSpec* extglobalspec_;
  acsl::ListExtGlobalSpec* listextglobalspec_;
  acsl::ExtModuleSpecsOpt* extmodulespecsopt_;
  acsl::ExtModuleSpec* extmodulespec_;
  acsl::ListExtModuleSpec* listextmodulespec_;
  acsl::ExtFunctionSpecsOpt* extfunctionspecsopt_;
  acsl::ExtFunctionSpecs* extfunctionspecs_;
  acsl::ExtFunctionSpec* extfunctionspec_;
  acsl::ListExtFunctionSpec* listextfunctionspec_;
  acsl::ExtFunSpec* extfunspec_;
  acsl::ListExtFunSpec* listextfunspec_;
  acsl::ExtIdentifierOpt* extidentifieropt_;
  acsl::StmtMarkup* stmtmarkup_;
  acsl::ListStmtMarkup* liststmtmarkup_;
  acsl::Spec* spec_;
  acsl::Contract* contract_;
  acsl::ClauseKW* clausekw_;
  acsl::Requires* requires_;
  acsl::NERequires* nerequires_;
  acsl::Terminates* terminates_;
  acsl::NETerminates* neterminates_;
  acsl::Decreases* decreases_;
  acsl::NEDecreases* nedecreases_;
  acsl::Variant* variant_;
  acsl::SimpleClauses* simpleclauses_;
  acsl::Allocation* allocation_;
  acsl::NESimpleClauses* nesimpleclauses_;
  acsl::ExtensionContent* extensioncontent_;
  acsl::Behaviors* behaviors_;
  acsl::NEBehaviors* nebehaviors_;
  acsl::BehaviorBody* behaviorbody_;
  acsl::Assumes* assumes_;
  acsl::CompleteOrDisjoint* completeordisjoint_;
  acsl::NECompleteOrDisjoint* necompleteordisjoint_;
  acsl::Assigns* assigns_;
  acsl::Zones* zones_;
  acsl::LogicPTreeAnnot* logicptreeannot_;
  acsl::ListLogicPTreeAnnot* listlogicptreeannot_;
  acsl::Annotation* annotation_;
  acsl::LoopAnnotStack* loopannotstack_;
  acsl::LoopAnnotOpt* loopannotopt_;
  acsl::LoopEffects* loopeffects_;
  acsl::LoopAllocation* loopallocation_;
  acsl::LoopInvariant* loopinvariant_;
  acsl::LoopVariant* loopvariant_;
  acsl::LoopGrammarExtension* loopgrammarextension_;
  acsl::LoopPragma* looppragma_;
  acsl::BegPragmaOrCodeAnnotation* begpragmaorcodeannotation_;
  acsl::PragmaOrCodeAnnotation* pragmaorcodeannotation_;
  acsl::CodeAnnotation* codeannotation_;
  acsl::SlicePragma* slicepragma_;
  acsl::ImpactPragma* impactpragma_;
  acsl::Decl* decl_;
  acsl::ListDecl* listdecl_;
  acsl::ExtDecl* extdecl_;
  acsl::ListExtDecl* listextdecl_;
  acsl::VolatileOpt* volatileopt_;
  acsl::ListVolatileOpt* listvolatileopt_;
  acsl::TypeAnnot* typeannot_;
  acsl::OptSemicolon* optsemicolon_;
  acsl::ModelAnnot* modelannot_;
  acsl::PolyIdType* polyidtype_;
  acsl::PolyId* polyid_;
  acsl::OptParameters* optparameters_;
  acsl::Parameters* parameters_;
  acsl::LogicDef* logicdef_;
  acsl::DeprecatedLogicDecl* deprecatedlogicdecl_;
  acsl::LogicDecl* logicdecl_;
  acsl::ListLogicDecl* listlogicdecl_;
  acsl::ReadsClause* readsclause_;
  acsl::Typedef* typedef_;
  acsl::DataconsWithSeparator* dataconswithseparator_;
  acsl::ListDataconsWithSeparator* listdataconswithseparator_;
  acsl::Datacons* datacons_;
  acsl::Indcase* indcase_;
  acsl::ListIndcase* listindcase_;
  acsl::OptLabel* optlabel_;
  acsl::OptLabelList* optlabellist_;
  acsl::LabelName* labelname_;
  acsl::ListLabelName* listlabelname_;
  acsl::BehaviorNameList* behaviornamelist_;
  acsl::BehaviorName* behaviorname_;
  acsl::ListBehaviorName* listbehaviorname_;
  acsl::AnyIdentifier* anyidentifier_;
  acsl::IdentifierOrTypename* identifierortypename_;
  acsl::IdentifierOrTypenameFull* identifierortypenamefull_;
  acsl::ListIdentifierOrTypenameFull* listidentifierortypenamefull_;
  acsl::Identifier* identifier_;
  acsl::BoundedVar* boundedvar_;
  acsl::CKeyword* ckeyword_;
  acsl::ACSLCKeyword* acslckeyword_;
  acsl::PostCond* postcond_;
  acsl::IsACSLSpec* isacslspec_;
  acsl::IsACSLDeclOrCodeAnnot* isacsldeclorcodeannot_;
  acsl::IsACSLTypename* isacsltypename_;
  acsl::IsExtSpec* isextspec_;
  acsl::Keyword* keyword_;
  acsl::BSKeyword* bskeyword_;
  acsl::Wildcard* wildcard_;
  acsl::ListWildcard* listwildcard_;

#line 569 "Bison.H"

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
