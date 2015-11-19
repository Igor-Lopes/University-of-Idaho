%{

/*
 * CS210 - Programming Languages
 * Dr. Jeffery
 * Homework #5
 * November 18th, 2015
 * Igor Lopes
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Importing variables from main.
extern int yylex();
extern int yylineno;
extern char *yyfilename;

//Changing memory limit for bison. It will avoid the memory stressed error for long files.
#define YYERROR_VERBOSE

#ifndef YYINITDEPTH
#define YYINITDEPTH 100000
#endif

//Prints error message
void yyerror(const char *msg){
      printf("ERROR in FILE: %s\n", yyfilename);
      printf("Line: %d\n", yylineno);
      printf("%s\n", msg);
      exit(-1); 
}

%}

//Union function
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
%type  <nValue> OpImpl
%type  <nValue> OpInvocable
%%

statementlist : statement statementlist
              | statement
              ;

//Processes all tokens before Proc line, starting with version.
statement : Op_Version VERSIONSTAMP { }
	  | Op_Uid  UCODESTAMP { }
	  | Op_Impl OpImpl { }
	  | Op_Global DECCONST { }
	  | Op_Record KEYS COMMA DECCONST {  } 
	  | DECCONST COMMA OCTCONST COMMA KEYS COMMA DECCONST {  } 
	  | DECCONST COMMA KEYS { }
	  | Op_Link FILENAME {  }
	  | Op_Invocable OpInvocable {  } 
	  | Control_L
	  | Proc
          ;

//Possible values for Op_Local.
OpImpl : Op_Local {  }
       | Op_Filen {  }
       ;

//Possible values for Op_Invocable.
OpInvocable : IDENTIFIER {  }
	    | DECCONST {  }
	    ;

Control_L : CONTROL_L { }
	  ;

//It will process all tokens starting from Proc line.
Proc :     Op_Proc KEYS { } 
	  | Op_Local DECCONST COMMA OCTCONST COMMA  KEYS {  }
	  | Op_Con CON	{  }
	  | Op_Declend { }
	  | Op_Filen FILENAME {  }
	  | Op_Line DECCONST {  }
	  | Op_Colm DECCONST {  }
	  | Op_Synt KEYS {  }
	  | Op_Mark LABEL {  }
	  | Op_Pnull {  }
	  | Op_Var DECCONST {  }
	  | Op_Invoke DECCONST {  }
	  | Op_Asgn {  }
	  | Op_Unmark {  }
	  | Op_Lab LABEL {  } 
	  | Op_Llist DECCONST {  } 
	  | Op_Int DECCONST {  } 
	  | Op_Mark0 {  } 
	  | Op_Size {  }
	  | Op_Push1 {  }
	  | Op_Toby {  }
	  | Op_Pop {  }
	  | Op_Subsc {  }
	  | Op_Dup {  }
	  | Op_Plus {  }
          | Op_Goto LABEL {  }
	  | Op_Str DECCONST {  }
	  | Op_Lexeq {  }
	  | Op_Efail {  }
	  | Op_Pret {  }
	  | Op_Pfail {  }
	  | Op_End {  }
	  | Op_Numlt {  }
	  | Op_Esusp {  }
	  | Op_Minus {  }
	  | Op_Numeq {  }
	  | Op_Keywd KEYS {  }
	  | Op_Unions {  }
          | Op_Bscan {  }
	  | Op_Escan {  }
	  | Op_Field KEYS {  }
	  | Op_Pushn1 {  } 
	  | Op_Nonnull {  }
	  | Op_Cat {  }  
	  | Op_Cset DECCONST {  } 
	  | Op_Init LABEL {  }
	  | Op_Tabmat {  }  
	  | Op_EInit LABEL {  }
	  | Op_Sdup {  }
	  | Op_Numgt {  }
	  | Op_Neg {  }
	  | Op_Coact {  }
	  | Op_Refresh {  }
	  | Op_Psusp {  }
	  | Op_Bang {  }
	  | Op_Null {  }
	  | Op_Eret {  }
	  | Op_Ccase {  }
	  | Op_Eqv {  }
	  | Op_Diff {  }
	  | Op_Numne {  }
	  | Op_Real DECCONST {  }
	  | Op_Mult {  }
	  | Op_Div {  }
	  | Op_Mod {  }
	  | Op_Sect {  }
	  | Op_Numge {  }
	  | Op_Numle {  }
	  | Op_Neqv {  }
	  | Op_Lexne {  }
	  | Op_Swap {  }
	  | Op_Lconcat {  }
	  | Op_Power {  }
	  | Op_Lexge {  }
	  | Op_Number {  }
	  | Op_Rasgn {  }
	  | Op_Random {  }
	  | Op_Coret {  }
	  | Op_Cofail {  }
	  | Op_Create LABEL {  }
	  | Op_Limit {  }
	  | Op_Lsusp {  }
	  | Op_Compl {  }
	  | Op_Lexle { }
	  | Op_Inter {  }
	  | Op_Chfail LABEL {  }
	  | Op_Value {  }
	  | Op_Lexlt {  }
	  | Op_Lexgt {  }
	  ;

//Recursive function for CON.
CON:    {  }
	| CON DECCONST {  }
	| CON OCTCONST {  }
	| CON COMMA	 {  }
	| CON REALCONST {  }
        ;

//Identifiers and other tokens.
KEYS:   VERSIONSTAMP {  }
	|  UCODESTAMP {  }
	|  IDENTIFIER {  }
	|  CONTROL_L {  }
	|  FILENAME {  }
	|  LABEL {  }
	|  ANY {  }
	|  Op_Asgn {  }
	|  Op_Bang {  }
	|  Op_Cat {  }
	|  Op_Compl {  }
	|  Op_Diff {  }
	|  Op_Div {  }
	|  Op_Eqv {  }
	|  Op_Inter {  }
	|  Op_Lconcat {  }
	|  Op_Lexeq {  }
	|  Op_Lexge {  }
	|  Op_Lexgt {  }
	|  Op_Lexle {  }
	|  Op_Lexlt {  }
	|  Op_Lexne {  }
	|  Op_Minus {  }
	|  Op_Mod {  }
	|  Op_Mult {  }
	|  Op_Neg {  }
	|  Op_Neqv {  }
	|  Op_Nonnull {  }
	|  Op_Null {  }
	|  Op_Number {  }
	|  Op_Numeq {  }
	|  Op_Numge {  }
	|  Op_Numgt {  }
	|  Op_Numle {  }
	|  Op_Numlt {  }
	|  Op_Numne {  }
	|  Op_Plus {  }
	|  Op_Power {  }
	|  Op_Random { ; }
	|  Op_Rasgn {  }
	|  Op_Rcv {  }
	|  Op_RcvBk {  }
	|  Op_Refresh {  }
	|  Op_Rswap {  }
	|  Op_Sect {  }
	|  Op_Snd {  }
	|  Op_SndBk {  }
	|  Op_Size {  }
	|  Op_Subsc {  }
	|  Op_Swap {  }
	|  Op_Tabmat {  }
	|  Op_Toby {  }
	|  Op_Unions {  }
	|  Op_Value {  }
	|  Op_Bscan {  }
	|  Op_Ccase {  }
	|  Op_Chfail {  }
	|  Op_Coact {  }
	|  Op_Cofail {  }
	|  Op_Coret {  }
	|  Op_Create {  }
	|  Op_Cset {  }
	|  Op_Dup {  }
	|  Op_Efail {  }
	|  Op_EInit {  }
	|  Op_Eret {  }
	|  Op_Escan  {  }
	|  Op_Esusp {  }
	|  Op_Field {  }
	|  Op_Goto {  }
	|  Op_Init {  }
	|  Op_Int {  }
	|  Op_Invoke {  }
	|  Op_Keywd {  }
	|  Op_Limit {  }
	|  Op_Line {  }
	|  Op_Llist {  }
	|  Op_Lsusp {  }
	|  Op_Mark {  }
	|  Op_Pfail {  }
	|  Op_Pnull {  }
	|  Op_Pop {  }
	|  Op_Pret {  }
	|  Op_Psusp {  }
	|  Op_Push1 {  }
	|  Op_Pushn1 {  }
	|  Op_Real {  }
	|  Op_Sdup {  }
	|  Op_Str {  }
	|  Op_Unmark {  }
	|  Op_Var {  }
	|  Op_Arg {  }
	|  Op_Static {  }
	|  Op_Local {  }
	|  Op_Global {  }
	|  Op_Mark0 {  }
	|  Op_Quit {  }
	|  Op_FQuit {  }
	|  Op_Tally {  }
	|  Op_Apply {  }
	|  Op_Acset {  }
	|  Op_Areal {  }
	|  Op_Astr {  }
	|  Op_Aglobal { }
	|  Op_Astatic {  }
	|  Op_Agoto {  }
	|  Op_Amark {  }
	|  Op_Noop {  }
	|  Op_Colm {  }
	|  Op_Proc {  }
	|  Op_Declend {  }
	|  Op_End {  }
	|  Op_Link {  }
	|  Op_Version {  }
	|  Op_Con {  }
	|  Op_Filen {  } 
	|  Op_Record {  }
	|  Op_Impl {  }
	|  Op_Error {  }
	|  Op_Trace {  }
	|  Op_Lab {  }
	|  Op_Invocable {  }
	|  Op_Copyd {  }
	|  Op_Trapret {  }
	|  Op_Trapfail {  }
	|  Op_Synt {  }
	|  Op_Uid {  }
	;
%%
