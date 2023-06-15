/* -*- c++ -*- File generated by the BNF Converter (bnfc 2.9.4.1). */

/* Lexer definition for use with FLex */

%option noyywrap noinput nounput
%option reentrant bison-bridge bison-locations

%option prefix="acsl"
%{
#include "Absyn.H"
#include "Bison.H"

#define initialize_lexer acsl_initialize_lexer

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
%START CHAR CHARESC CHAREND STRING ESCAPED COMMENT

%%  /* Rules. */

<INITIAL>","      	 return _COMMA;
<INITIAL>"%"      	 return _PERCENT;
<INITIAL>";"      	 return _SEMI;
<INITIAL>":"      	 return _COLON;
<INITIAL>"$"      	 return _DOLLAR;
<INITIAL>"{"      	 return _LBRACE;
<INITIAL>"}"      	 return _RBRACE;
<INITIAL>"->"      	 return _RARROW;
<INITIAL>"|"      	 return _BAR;
<INITIAL>"["      	 return _LBRACK;
<INITIAL>"]"      	 return _RBRACK;
<INITIAL>"("      	 return _LPAREN;
<INITIAL>")"      	 return _RPAREN;
<INITIAL>"::"      	 return _DCOLON;
<INITIAL>"{{"      	 return _SYMB_14;
<INITIAL>"}}"      	 return _SYMB_15;
<INITIAL>"+"      	 return _PLUS;
<INITIAL>"*"      	 return _STAR;
<INITIAL>"?"      	 return _QUESTION;
<INITIAL>"||"      	 return _DBAR;
<INITIAL>"&&"      	 return _DAMP;
<INITIAL>"!"      	 return _BANG;
<INITIAL>"=="      	 return _DEQ;
<INITIAL>"<"      	 return _LT;
<INITIAL>">"      	 return _GT;
<INITIAL>"<="      	 return _LDARROW;
<INITIAL>">="      	 return _GTEQ;
<INITIAL>"!="      	 return _BANGEQ;
<INITIAL>"-"      	 return _MINUS;
<INITIAL>"/"      	 return _SLASH;
<INITIAL>"&"      	 return _AMP;
<INITIAL>"^"      	 return _CARET;
<INITIAL>"."      	 return _DOT;
<INITIAL>":="      	 return _COLONEQ;
<INITIAL>"CALL"      	 return _KW_CALL;
<INITIAL>"COR"      	 return _KW_COR;
<INITIAL>"RETURN"      	 return _KW_RETURN;
<INITIAL>"false"      	 return _KW_false;
<INITIAL>"other"      	 return _KW_other;
<INITIAL>"true"      	 return _KW_true;

<INITIAL>"//"[^\n]* /* skip */; /* BNFC: comment "//" */
<INITIAL>"/*" BEGIN COMMENT;
<COMMENT>"*/" BEGIN INITIAL;
<COMMENT>.    /* skip */;
<COMMENT>[\n] /* skip */;

<INITIAL>{LETTER}(\_|({DIGIT}|{LETTER}))*    	 yylval->_string = strdup(yytext); return T_Ident;
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
