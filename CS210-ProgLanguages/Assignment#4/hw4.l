%{

// Igor Lopes - CS210 - HW#4

#include <stdio.h>
#include "hw4.h"

%}

%%

[\t \n]+		{ 	      }
\#[^\n]+		{	      }
U[0-9]+\.[0-9]+\.00	{ return 202; }
[a-zA-Z0-9\-\\\/\,\;]+\.u1\-[0-9\-]+	{ return 204; }
[0-9]+			{ return 208; }
","			{ return 209; }
0[0-7]			{ return 210; }
"^L"			{ return 212; }
[0-9]+\.\[0-9]+		{ return 215; }
[a-zA-Z0-9]+\.\[a-zA-Z0-9]+ { return 218; }
L[0-9]+			{ return 223; }
"any"			{ return 227; }

"asgn"	{ return 1; }

"bang"	{ return 2; }

"cat"	{ return 3; }

"compl"	{ return 4; }

"diff"	{ return 5; }

"div"	{ return 6; }

"eqv"	{ return 7; }

"inter"	{ return 8; }

"lconcat" { return 9; }

"lexeq"	{ return 10; }

"lexge"	{ return 11; }

"lexgt"	{ return 12; }

"lexle"	{ return 13; }

"lexlt"	{ return 14; }

"lexne"	{ return 15; }

"minus"	{ return 16; }

"mod"	{ return 17; }

"mult"	{ return 18; }

"neg"	{ return 19; }

"neqv"	{ return 20; }

"nonnull" { return 21; }

"null"	{ return 22; }

"number" { return 23; }

"numeq"	{ return 24; }

"numge"	{ return 25; }

"numgt"	{ return 26; }

"numle"	{ return 27; }

"numlt"	{ return 28; }

"numne"	{ return 29; }

"plus"	{ return 30; }

"power"	{ return 31; }

"random" { return 32; }

"rasgn"	{ return 33; }

"rcv"	{ return 34; }

"rcvbk"	{ return 35; }

"refresh" { return 36; }

"rswap"	{ return 37; }

"sect"	{ return 38; }

"snd"	{ return 39; }

"sndbk"	{ return 40; }

"size"	{ return 41; }

"subsc"	{ return 42; }

"swap"	{ return 43; }

"tabmat" { return 44; }

"toby"	{ return 45; }

"unions" { return 46; }

"value"	{ return 47; }

"bscan"	{ return 117; }

"ccase"	{ return 118; }

"chfail" { return 119; }

"coact"	{ return 120; }

"cofail" { return 48; }

"coret"	{ return 49; }

"create" { return 50; }

"cset"	{ return 51; }

"dup"	{ return 52; }

"efail"	{ return 53; }

"einit"	{ return 116; }

"eret"	{ return 54; }

"escan"	{ return 55; }

"esusp"	{ return 56; }

"field"	{ return 57; }

"goto"	{ return 58; }

"init"	{ return 59; }

"int"	{ return 60; }

"invoke" { return 61; }

"keywd"	{ return 62; }

"limit"	{ return 63; }

"line"	{ return 64; }

"llist"	{ return 65; }

"lsusp"	{ return 66; }

"mark"	{ return 67; }

"pfail"	{ return 68; }

"pnull"	{ return 69; }

"pop"	{ return 70; }

"pret"	{ return 71; }

"psusp"	{ return 72; }

"push"	{ return 73; }

"pushn"	{ return 74; }

"real"	{ return 75; }

"sdup"	{ return 76; }

"str"	{ return 77; }

"unmark" { return 78; }

"var"	{ return 80; }

"arg"	{ return 81; }

"static" { return 82; }

"local"	{ return 83; }

"global" { return 84; }

"mark"	{ return 85; }

"quit"	{ return 86; }

"fquit"	{ return 87; }

"tally"	{ return 88; }

"apply"	{ return 89; }

"acset"	{ return 90; }

"areal"	{ return 91; }

"astr"	{ return 92; }

"aglobal" { return 93; }

"astatic" { return 94; }

"agoto"	{ return 95; }

"amark"	{ return 96; }

"proc"	{ return 101; }

"declend" { return 102; }

"end"	{ return 103; }

"link"	{ return 104; }

"version" { return 105; }

"con"	{ return 106; }

"filen"	{ return 107; }

"record" { return 105; }

"impl"	{ return 106; }

"error"	{ return 107; }

"trace"	{ return 108; }

"lab"	{ return 109; }

"invocable" { return 110; }

"copyd"	{ return 111; }

"trapret" { return 112; }

"trapfail" { return 113; }

"synt"	{ return 114; }

"uid"	{ return 115; }

[a-zA-Z0-9\_]+		{ return 211; }

%%
