/* -*- c++ -*- File generated by the BNF Converter (bnfc 2.9.4.1). */

/* Lexer definition for use with FLex */

%option noyywrap noinput nounput
%option reentrant bison-bridge bison-locations

/* Additional data for the lexer: a buffer for lexing string literals. */
%option extra-type="Buffer"

%option prefix="acsl"
%{
#include "Absyn.H"
#include "Bison.H"

#define initialize_lexer acsl_initialize_lexer

/* BEGIN extensible string buffer */

#include "Buffer.H"

/* The initial size of the buffer to lex string literals. */
#define LITERAL_BUFFER_INITIAL_SIZE 1024

/* The pointer to the literal buffer. */
#define literal_buffer yyextra

/* Initialize the literal buffer. */
#define LITERAL_BUFFER_CREATE() literal_buffer = newBuffer(LITERAL_BUFFER_INITIAL_SIZE)

/* Append characters at the end of the buffer. */
#define LITERAL_BUFFER_APPEND(s) bufferAppendString(literal_buffer, s)

/* Append a character at the end of the buffer. */
#define LITERAL_BUFFER_APPEND_CHAR(c) bufferAppendChar(literal_buffer, c)

/* Release the buffer, returning a pointer to its content. */
#define LITERAL_BUFFER_HARVEST() releaseBuffer(literal_buffer)

/* In exceptional cases, e.g. when reaching EOF, we have to free the buffer. */
#define LITERAL_BUFFER_FREE() freeBuffer(literal_buffer)

/* END extensible string buffer */

static void update_loc(YYLTYPE* loc, char* text)
{
  loc->first_line = loc->last_line;
  loc->first_column = loc->last_column;
  int i = 0;
  for (; text[i] != '\0'; ++i) {
      if (text[i] == '\n') {
          ++loc->last_line;
          loc->last_column = 0;
      } else {
          ++loc->last_column;
      }
  }
}
#define YY_USER_ACTION update_loc(yylloc, yytext);

%}

LETTER [a-zA-Z]
CAPITAL [A-Z]
SMALL [a-z]
DIGIT [0-9]
IDENT [a-zA-Z0-9'_]
%START CHAR CHARESC CHAREND STRING ESCAPED

%%  /* Rules. */

<INITIAL>","      	 return _COMMA;
<INITIAL>"==>"      	 return _SYMB_1;
<INITIAL>"<==>"      	 return _SYMB_2;
<INITIAL>"||"      	 return _DBAR;
<INITIAL>"&&"      	 return _DAMP;
<INITIAL>"^^"      	 return _DCARET;
<INITIAL>"&"      	 return _AMP;
<INITIAL>"|"      	 return _BAR;
<INITIAL>"^"      	 return _CARET;
<INITIAL>"-->"      	 return _SYMB_9;
<INITIAL>"<-->"      	 return _SYMB_10;
<INITIAL>"\\in"      	 return _SYMB_11;
<INITIAL>"?"      	 return _QUESTION;
<INITIAL>":"      	 return _COLON;
<INITIAL>"!"      	 return _BANG;
<INITIAL>"\\let"      	 return _SYMB_15;
<INITIAL>"="      	 return _EQ;
<INITIAL>";"      	 return _SEMI;
<INITIAL>"\\forall"      	 return _SYMB_18;
<INITIAL>"\\exists"      	 return _SYMB_19;
<INITIAL>"\\lambda"      	 return _SYMB_20;
<INITIAL>"<"      	 return _LT;
<INITIAL>">"      	 return _GT;
<INITIAL>"<="      	 return _LDARROW;
<INITIAL>">="      	 return _GTEQ;
<INITIAL>"=="      	 return _DEQ;
<INITIAL>"!="      	 return _BANGEQ;
<INITIAL>"\\true"      	 return _SYMB_27;
<INITIAL>"\\false"      	 return _SYMB_28;
<INITIAL>"\\object_pointer"      	 return _SYMB_29;
<INITIAL>"("      	 return _LPAREN;
<INITIAL>")"      	 return _RPAREN;
<INITIAL>"\\valid"      	 return _SYMB_32;
<INITIAL>"\\valid_read"      	 return _SYMB_33;
<INITIAL>"\\valid_function"      	 return _SYMB_34;
<INITIAL>"\\valid_index"      	 return _SYMB_35;
<INITIAL>"\\valid_range"      	 return _SYMB_36;
<INITIAL>"\\initialized"      	 return _SYMB_37;
<INITIAL>"\\dangling"      	 return _SYMB_38;
<INITIAL>"\\fresh"      	 return _SYMB_39;
<INITIAL>"\\base_addr"      	 return _SYMB_40;
<INITIAL>"\\block_length"      	 return _SYMB_41;
<INITIAL>"\\offset"      	 return _SYMB_42;
<INITIAL>"\\allocable"      	 return _SYMB_43;
<INITIAL>"\\freeable"      	 return _SYMB_44;
<INITIAL>"\\Allocation"      	 return _SYMB_45;
<INITIAL>"\\automatic"      	 return _SYMB_46;
<INITIAL>"\\dynamic"      	 return _SYMB_47;
<INITIAL>"\\register"      	 return _SYMB_48;
<INITIAL>"\\static"      	 return _SYMB_49;
<INITIAL>"\\unallocated"      	 return _SYMB_50;
<INITIAL>"\\null"      	 return _SYMB_51;
<INITIAL>"+"      	 return _PLUS;
<INITIAL>"-"      	 return _MINUS;
<INITIAL>"*"      	 return _STAR;
<INITIAL>"/"      	 return _SLASH;
<INITIAL>"%"      	 return _PERCENT;
<INITIAL>"*^"      	 return _SYMB_57;
<INITIAL>"->"      	 return _RARROW;
<INITIAL>"."      	 return _DOT;
<INITIAL>"["      	 return _LBRACK;
<INITIAL>"]"      	 return _RBRACK;
<INITIAL>"[|"      	 return _SYMB_62;
<INITIAL>"|]"      	 return _SYMB_63;
<INITIAL>"~"      	 return _TILDE;
<INITIAL>"\\old"      	 return _SYMB_65;
<INITIAL>"\\at"      	 return _SYMB_66;
<INITIAL>"\\result"      	 return _SYMB_67;
<INITIAL>"\\separated"      	 return _SYMB_68;
<INITIAL>"{"      	 return _LBRACE;
<INITIAL>"}"      	 return _RBRACE;
<INITIAL>"\\pi"      	 return _SYMB_71;
<INITIAL>">>"      	 return _DGT;
<INITIAL>"<<"      	 return _DLT;
<INITIAL>"\\typeof"      	 return _SYMB_74;
<INITIAL>"\\type"      	 return _SYMB_75;
<INITIAL>"\\empty"      	 return _SYMB_76;
<INITIAL>"\\union"      	 return _SYMB_77;
<INITIAL>"\\inter"      	 return _SYMB_78;
<INITIAL>"\\with"      	 return _SYMB_79;
<INITIAL>".."      	 return _DDOT;
<INITIAL>"..."      	 return _ELLIPSIS;
<INITIAL>"\\ghost"      	 return _SYMB_82;
<INITIAL>"_Bool"      	 return _SYMB_83;
<INITIAL>"\\from"      	 return _SYMB_84;
<INITIAL>"\\nothing"      	 return _SYMB_85;
<INITIAL>"::"      	 return _DCOLON;
<INITIAL>"$"      	 return _DOLLAR;
<INITIAL>"Assigns"      	 return _KW_Assigns;
<INITIAL>"Assumes"      	 return _KW_Assumes;
<INITIAL>"Behaviors"      	 return _KW_Behaviors;
<INITIAL>"Contract"      	 return _KW_Contract;
<INITIAL>"Decreases"      	 return _KW_Decreases;
<INITIAL>"Requires"      	 return _KW_Requires;
<INITIAL>"Terminates"      	 return _KW_Terminates;
<INITIAL>"Variant"      	 return _KW_Variant;
<INITIAL>"admit"      	 return _KW_admit;
<INITIAL>"allocates"      	 return _KW_allocates;
<INITIAL>"assert"      	 return _KW_assert;
<INITIAL>"at"      	 return _KW_at;
<INITIAL>"axiom"      	 return _KW_axiom;
<INITIAL>"axiomatic"      	 return _KW_axiomatic;
<INITIAL>"behavior"      	 return _KW_behavior;
<INITIAL>"boolean"      	 return _KW_boolean;
<INITIAL>"breaks"      	 return _KW_breaks;
<INITIAL>"case"      	 return _KW_case;
<INITIAL>"char"      	 return _KW_char;
<INITIAL>"check"      	 return _KW_check;
<INITIAL>"complete"      	 return _KW_complete;
<INITIAL>"const"      	 return _KW_const;
<INITIAL>"continues"      	 return _KW_continues;
<INITIAL>"disjoint"      	 return _KW_disjoint;
<INITIAL>"double"      	 return _KW_double;
<INITIAL>"else"      	 return _KW_else;
<INITIAL>"ensures"      	 return _KW_ensures;
<INITIAL>"enum"      	 return _KW_enum;
<INITIAL>"exits"      	 return _KW_exits;
<INITIAL>"float"      	 return _KW_float;
<INITIAL>"for"      	 return _KW_for;
<INITIAL>"frees"      	 return _KW_frees;
<INITIAL>"function"      	 return _KW_function;
<INITIAL>"global"      	 return _KW_global;
<INITIAL>"if"      	 return _KW_if;
<INITIAL>"impact"      	 return _KW_impact;
<INITIAL>"include"      	 return _KW_include;
<INITIAL>"inductive"      	 return _KW_inductive;
<INITIAL>"int"      	 return _KW_int;
<INITIAL>"integer"      	 return _KW_integer;
<INITIAL>"invariant"      	 return _KW_invariant;
<INITIAL>"label"      	 return _KW_label;
<INITIAL>"lemma"      	 return _KW_lemma;
<INITIAL>"let"      	 return _KW_let;
<INITIAL>"logic"      	 return _KW_logic;
<INITIAL>"long"      	 return _KW_long;
<INITIAL>"loop"      	 return _KW_loop;
<INITIAL>"model"      	 return _KW_model;
<INITIAL>"module"      	 return _KW_module;
<INITIAL>"pragma"      	 return _KW_pragma;
<INITIAL>"predicate"      	 return _KW_predicate;
<INITIAL>"reads"      	 return _KW_reads;
<INITIAL>"real"      	 return _KW_real;
<INITIAL>"requires"      	 return _KW_requires;
<INITIAL>"returns"      	 return _KW_returns;
<INITIAL>"short"      	 return _KW_short;
<INITIAL>"signed"      	 return _KW_signed;
<INITIAL>"sizeof"      	 return _KW_sizeof;
<INITIAL>"slice"      	 return _KW_slice;
<INITIAL>"struct"      	 return _KW_struct;
<INITIAL>"type"      	 return _KW_type;
<INITIAL>"union"      	 return _KW_union;
<INITIAL>"unsigned"      	 return _KW_unsigned;
<INITIAL>"void"      	 return _KW_void;
<INITIAL>"volatile"      	 return _KW_volatile;
<INITIAL>"writes"      	 return _KW_writes;



<INITIAL>EXT\_GLOBAL{LETTER}*    	 yylval->_string = strdup(yytext); return T_EXT_GLOBAL;
<INITIAL>EXT\_GLOBAL\_BLOCK{LETTER}*    	 yylval->_string = strdup(yytext); return T_EXT_GLOBAL_BLOCK;
<INITIAL>EXT\_CODE\_ANNOT{LETTER}*    	 yylval->_string = strdup(yytext); return T_EXT_CODE_ANNOT;
<INITIAL>EXT\_CONTRACT{LETTER}*    	 yylval->_string = strdup(yytext); return T_EXT_CONTRACT;
<INITIAL>{LETTER}    	 yylval->_string = strdup(yytext); return T_STRING_LITERAL;
<INITIAL>`{LETTER}*`    	 yylval->_string = strdup(yytext); return T_WSTRING_CONSTANT;
<INITIAL>{LETTER}(\_|({DIGIT}|{LETTER}))*    	 yylval->_string = strdup(yytext); return T_TYPENAME;
<INITIAL>"\""        	 LITERAL_BUFFER_CREATE(); BEGIN STRING;
<STRING>\\             	 BEGIN ESCAPED;
<STRING>\"             	 yylval->_string = LITERAL_BUFFER_HARVEST(); BEGIN INITIAL; return _STRING_;
<STRING>.              	 LITERAL_BUFFER_APPEND_CHAR(yytext[0]);
<ESCAPED>f             	 LITERAL_BUFFER_APPEND_CHAR('\f'); BEGIN STRING;
<ESCAPED>n             	 LITERAL_BUFFER_APPEND_CHAR('\n'); BEGIN STRING;
<ESCAPED>r             	 LITERAL_BUFFER_APPEND_CHAR('\r'); BEGIN STRING;
<ESCAPED>t             	 LITERAL_BUFFER_APPEND_CHAR('\t'); BEGIN STRING;
<ESCAPED>\"            	 LITERAL_BUFFER_APPEND_CHAR('"');  BEGIN STRING;
<ESCAPED>\\            	 LITERAL_BUFFER_APPEND_CHAR('\\'); BEGIN STRING;
<ESCAPED>.             	 LITERAL_BUFFER_APPEND(yytext);    BEGIN STRING;
<STRING,ESCAPED><<EOF>>	 LITERAL_BUFFER_FREE(); return _ERROR_;
<INITIAL>{DIGIT}+"."{DIGIT}+("e"(\-)?{DIGIT}+)?      	 yylval->_double = atof(yytext); return _DOUBLE_;
<INITIAL>{DIGIT}+      	 yylval->_int = atoi(yytext); return _INTEGER_;
<INITIAL>{LETTER}{IDENT}*      	 yylval->_string = strdup(yytext); return _IDENT_;
<INITIAL>[ \t\r\n\f]      	 /* ignore white space. */;
<INITIAL>.      	 return _ERROR_;

%%  /* Initialization code. */

yyscan_t initialize_lexer(FILE *inp)
{
  yyscan_t scanner;
  if (yylex_init_extra(NULL, &scanner)) return 0;
  if (inp) yyrestart(inp, scanner);
  return scanner;
}
