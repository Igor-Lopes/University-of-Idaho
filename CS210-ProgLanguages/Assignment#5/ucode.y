
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();

#define YYERROR_VERBOSE

void yyerror(const char *msg)
{
      printf("ERROR(PARSER): %s\n", msg);
}

%}

%union {
  int nValue;
}

%token VERSIONSTAMP
%token UCODESTAMP
%token DECCONST
%token COMMA
%token OCTCONST
%token IDENTIFIER
%token CONTROL_L
%token REALCONST
%token FILENAME
%token LABEL
%token ANY
%token Op_Asgn
%token Op_Bang
%token Op_Cat
%token Op_Compl
%token Op_Diff
%token Op_Div
%token Op_Eqv
%token Op_Inter
%token Op_Lconcat
%token Op_Lexeq
%token Op_Lexge
%token Op_Lexgt
%token Op_Lexle
%token Op_Lexlt
%token Op_Lexne
%token Op_Minus
%token Op_Mod
%token Op_Mult
%token Op_Neg
%token Op_Neqv
%token Op_Nonnull
%token Op_Null
%token Op_Number
%token Op_Numeq
%token Op_Numge
%token Op_Numgt
%token Op_Numle
%token Op_Numlt
%token Op_Numne
%token Op_Plus
%token Op_Power
%token Op_Random
%token Op_Rasgn
%token Op_Rcv
%token Op_RcvBk
%token Op_Refresh
%token Op_Rswap
%token Op_Sect
%token Op_Snd
%token Op_SndBk
%token Op_Size
%token Op_Subsc
%token Op_Swap
%token Op_Tabmat
%token Op_Toby
%token Op_Unions
%token Op_Value
%token Op_Bscan
%token Op_Ccase
%token Op_Chfail
%token Op_Coact
%token Op_Cofail
%token Op_Coret
%token Op_Create
%token Op_Cset
%token Op_Dup
%token Op_Efail
%token Op_EInit
%token Op_Eret
%token Op_Escan
%token Op_Esusp
%token Op_Field
%token Op_Goto
%token Op_Init
%token Op_Int
%token Op_Invoke
%token Op_Keywd
%token Op_Limit
%token Op_Line
%token Op_Llist
%token Op_Lsusp
%token Op_Mark
%token Op_Pfail
%token Op_Pnull
%token Op_Pop
%token Op_Pret
%token Op_Psusp
%token Op_Push1
%token Op_Pushn1
%token Op_Real
%token Op_Sdup
%token Op_Str
%token Op_Unmark
%token Op_Var
%token Op_Arg
%token Op_Static
%token Op_Local
%token Op_Global
%token Op_Mark0
%token Op_Quit
%token Op_FQuit
%token Op_Tally
%token Op_Apply
%token Op_Acset
%token Op_Areal
%token Op_Astr
%token Op_Aglobal
%token Op_Astatic
%token Op_Agoto
%token Op_Amark
%token Op_Noop
%token Op_Colm
%token Op_Proc
%token Op_Declend
%token Op_End
%token Op_Link
%token Op_Version
%token Op_Con
%token Op_Filen
%token Op_Record
%token Op_Impl
%token Op_Error
%token Op_Trace
%token Op_Lab
%token Op_Invocable
%token Op_Copyd
%token Op_Trapret
%token Op_Trapfail
%token Op_Synt
%token Op_Uid

%%

statementlist : statement statementlist
              | statement
              ;

statement : Op_Version
          ;

%%
