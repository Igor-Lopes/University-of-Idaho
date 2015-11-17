
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;

#define YYERROR_VERBOSE

void yyerror(const char *msg)
{
      printf("ERROR(PARSER): %s %d\n", msg, yylineno);
      
      exit(-1); 
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

%type <nValue> Control_L
%type <nValue> Proc
%type  <nValue> KEYS
%type  <nValue> CON
%%



statementlist : statement statementlist
              | statement
              ;

statement : Op_Version VERSIONSTAMP { printf("OpVersion\n");}
	  | Op_Uid   UCODESTAMP { printf("Filename\n"); }
	  | Op_Impl Op_Local { printf ("Opimpl\n"); }
	  | Op_Global DECCONST { printf ("OPGlobal\n"); }
	  | DECCONST COMMA OCTCONST COMMA KEYS COMMA DECCONST { printf("OpLocal\n"); } 
          | Op_Record KEYS COMMA DECCONST { printf("Op_Record\n"); }
	  | DECCONST COMMA IDENTIFIER { printf("DEC COMMA IDENTF\n"); }
	  | Op_Link FILENAME { printf("Op_Link\n"); }
	  | Op_Invocable KEYS { printf("Op_Invocable\n"); }
	  | Control_L
	  | Proc
          ;

Control_L : 
	  | CONTROL_L { printf("Control L"); }
	  ;

Proc :    Op_Proc KEYS { printf("Op_Proc\n"); }
	  | Op_Local DECCONST COMMA OCTCONST COMMA  KEYS { printf("Op_Local\n"); }
	  | Op_Con CON	{ printf("Op_con\n"); }
	  | Op_Declend { printf("Op_Declend\n");}
	  | Op_Filen FILENAME { printf("Op_Filen\n"); }
	  | Op_Line DECCONST { printf("Op_Line\n"); }
	  | Op_Colm DECCONST { printf("Op_Colm\n"); }
	  | Op_Synt KEYS { printf("Op_Synt\n"); }
	  | Op_Mark LABEL { printf("Op_Mark\n"); }
	  | Op_Pnull { printf("Op_PNull\n"); }
	  | Op_Var DECCONST { printf("Op_Var\n"); }
	  | Op_Invoke DECCONST { printf("Op_Invoke\n"); }
	  | Op_Asgn { printf("Op_Asgn\n"); }
	  | Op_Unmark { printf("Op_Unmark\n"); }
	  | Op_Lab LABEL { printf("Op_Lab\n"); } 
	  | Op_Llist DECCONST { printf("Op_Llist\n"); } 
	  | Op_Int DECCONST { printf("Op_Int\n"); } 
	  | Op_Mark0 { printf("Op_Mark0\n"); } 
	  | Op_Size { printf("Op_Size\n"); }
	  | Op_Push1 { printf("Op_Push1\n"); }
	  | Op_Toby { printf("Op_Toby\n"); }
	  | Op_Pop { printf("Op_Pop\n"); }
	  | Op_Subsc { printf("Op_Subsc\n"); }
	  | Op_Dup { printf("Op_Dup\n"); }
	  | Op_Plus { printf("Op_Plus\n"); }
          | Op_Goto LABEL { printf("Op_Goto\n"); }
	  | Op_Str DECCONST { printf("Op_Str\n"); }
	  | Op_Lexeq { printf("Op_Lexeq\n"); }
	  | Op_Efail { printf("Op_Efail\n"); }
	  | Op_Pret { printf("Op_Pret\n"); }
	  | Op_Pfail { printf("Op_Pfail\n"); }
	  | Op_End { printf("Op_End\n"); }
	  | Op_Numlt { printf("Op_Numlt\n"); }
	  | Op_Esusp { printf("Op_Esusp\n"); }
	  | Op_Minus { printf("Op_Minus\n"); }
	  | Op_Numeq { printf("Op_Numeq\n"); }
	  | Op_Keywd KEYS { printf("Op_Keywd\n"); }
	  | Op_Unions { printf("Op_Unions\n"); }
          | Op_Bscan { printf("Op_Bscan\n"); }
	  | Op_Escan { printf("Op_Escan\n"); }
	  | Op_Field IDENTIFIER { printf("Op_Field\n"); }
	  | Op_Pushn1 { printf("Op_Pushn1\n"); } 
	  | Op_Nonnull { printf("Op_Nonnull\n"); }
	  | Op_Cat { printf("Op_Cat\n"); }  
	  | Op_Cset DECCONST { printf("Op_Cset\n"); } 
	  | Op_Init LABEL { printf("Op_Init\n"); }
	  | Op_Tabmat { printf("Op_Tabmat\n"); }  
	  | Op_EInit LABEL { printf("Op_EInit\n"); }
	  | Op_Sdup { printf("Op_Sdup\n"); }
	  | Op_Numgt { printf("Op_Numgt\n"); }
	  | Op_Neg { printf("Op_Neg\n"); }
	  | Op_Coact { printf("Op_Coact\n"); }
	  | Op_Refresh { printf("Op_Refresh\n"); }
	  | Op_Psusp { printf("Op_Psusp\n"); }
	  | Op_Bang { printf("Op_Bang\n"); }
	  | Op_Null { printf("Op_Null\n"); }
	  | Op_Eret { printf("Op_Eret\n"); }
	  | Op_Ccase { printf("Op_Ccase\n"); }
	  | Op_Eqv { printf("Op_Eqv\n"); }
	  | Op_Diff { printf("Op_Diff\n"); }
	  | Op_Numne { printf("Op_Numne\n"); }
	  | Op_Real DECCONST { printf("Op_Real\n"); }
	  | Op_Mult { printf("Op_Mult\n"); }
	  | Op_Div { printf("Op_Div\n"); }
	  | Op_Mod { printf("Op_Mod\n"); }
	  | Op_Sect{ printf("Op_Sect\n"); }
	  | Op_Numge{ printf("Op_Numge\n"); }
	  | Op_Numle{ printf("Op_Numle\n"); }
	  | Op_Numle{ printf("Op_Numle\n"); }
	  | Op_Neqv{ printf("Op_Neqv\n"); }
	  ;
CON:
	| CON DECCONST
	| CON OCTCONST
	| CON COMMA	
	| CON REALCONST
        ;

KEYS:
	|  VERSIONSTAMP
	|  UCODESTAMP
	|  DECCONST
	|  COMMA
	|  OCTCONST
	|  IDENTIFIER
	|  CONTROL_L
	|  REALCONST
	|  FILENAME
	|  LABEL
	|  ANY
	|  Op_Asgn
	|  Op_Bang
	|  Op_Cat
	|  Op_Compl
	|  Op_Diff
	|  Op_Div
	|  Op_Eqv
	|  Op_Inter
	|  Op_Lconcat
	|  Op_Lexeq
	|  Op_Lexge
	|  Op_Lexgt
	|  Op_Lexle
	|  Op_Lexlt
	|  Op_Lexne
	|  Op_Minus
	|  Op_Mod
	|  Op_Mult
	|  Op_Neg
	|  Op_Neqv
	|  Op_Nonnull
	|  Op_Null
	|  Op_Number
	|  Op_Numeq
	|  Op_Numge
	|  Op_Numgt
	|  Op_Numle
	|  Op_Numlt
	|  Op_Numne
	|  Op_Plus
	|  Op_Power
	|  Op_Random
	|  Op_Rasgn
	|  Op_Rcv
	|  Op_RcvBk
	|  Op_Refresh
	|  Op_Rswap
	|  Op_Sect
	|  Op_Snd
	|  Op_SndBk
	|  Op_Size
	|  Op_Subsc
	|  Op_Swap
	|  Op_Tabmat
	|  Op_Toby
	|  Op_Unions
	|  Op_Value
	|  Op_Bscan
	|  Op_Ccase
	|  Op_Chfail
	|  Op_Coact
	|  Op_Cofail
	|  Op_Coret
	|  Op_Create
	|  Op_Cset
	|  Op_Dup
	|  Op_Efail
	|  Op_EInit
	|  Op_Eret
	|  Op_Escan
	|  Op_Esusp
	|  Op_Field
	|  Op_Goto
	|  Op_Init
	|  Op_Int
	|  Op_Invoke
	|  Op_Keywd
	|  Op_Limit
	|  Op_Line
	|  Op_Llist
	|  Op_Lsusp
	|  Op_Mark
	|  Op_Pfail
	|  Op_Pnull
	|  Op_Pop
	|  Op_Pret
	|  Op_Psusp
	|  Op_Push1
	|  Op_Pushn1
	|  Op_Real
	|  Op_Sdup
	|  Op_Str
	|  Op_Unmark
	|  Op_Var
	|  Op_Arg
	|  Op_Static
	|  Op_Local
	|  Op_Global
	|  Op_Mark0
	|  Op_Quit
	|  Op_FQuit
	|  Op_Tally
	|  Op_Apply
	|  Op_Acset
	|  Op_Areal
	|  Op_Astr
	|  Op_Aglobal
	|  Op_Astatic
	|  Op_Agoto
	|  Op_Amark
	|  Op_Noop
	|  Op_Colm
	|  Op_Proc
	|  Op_Declend
	|  Op_End
	|  Op_Link
	|  Op_Version
	|  Op_Con
	|  Op_Filen
	|  Op_Record
	|  Op_Impl
	|  Op_Error
	|  Op_Trace
	|  Op_Lab
	|  Op_Invocable
	|  Op_Copyd
	|  Op_Trapret
	|  Op_Trapfail
	|  Op_Synt
	|  Op_Uid
	;
%%
