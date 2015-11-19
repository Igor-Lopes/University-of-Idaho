/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ucode.y" /* yacc.c:339  */


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


#line 102 "ucode.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ucode.tab.h".  */
#ifndef YY_YY_UCODE_TAB_H_INCLUDED
# define YY_YY_UCODE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VERSIONSTAMP = 258,
    UCODESTAMP = 259,
    DECCONST = 260,
    COMMA = 261,
    OCTCONST = 262,
    IDENTIFIER = 263,
    CONTROL_L = 264,
    REALCONST = 265,
    FILENAME = 266,
    LABEL = 267,
    ANY = 268,
    Op_Asgn = 269,
    Op_Bang = 270,
    Op_Cat = 271,
    Op_Compl = 272,
    Op_Diff = 273,
    Op_Div = 274,
    Op_Eqv = 275,
    Op_Inter = 276,
    Op_Lconcat = 277,
    Op_Lexeq = 278,
    Op_Lexge = 279,
    Op_Lexgt = 280,
    Op_Lexle = 281,
    Op_Lexlt = 282,
    Op_Lexne = 283,
    Op_Minus = 284,
    Op_Mod = 285,
    Op_Mult = 286,
    Op_Neg = 287,
    Op_Neqv = 288,
    Op_Nonnull = 289,
    Op_Null = 290,
    Op_Number = 291,
    Op_Numeq = 292,
    Op_Numge = 293,
    Op_Numgt = 294,
    Op_Numle = 295,
    Op_Numlt = 296,
    Op_Numne = 297,
    Op_Plus = 298,
    Op_Power = 299,
    Op_Random = 300,
    Op_Rasgn = 301,
    Op_Rcv = 302,
    Op_RcvBk = 303,
    Op_Refresh = 304,
    Op_Rswap = 305,
    Op_Sect = 306,
    Op_Snd = 307,
    Op_SndBk = 308,
    Op_Size = 309,
    Op_Subsc = 310,
    Op_Swap = 311,
    Op_Tabmat = 312,
    Op_Toby = 313,
    Op_Unions = 314,
    Op_Value = 315,
    Op_Bscan = 316,
    Op_Ccase = 317,
    Op_Chfail = 318,
    Op_Coact = 319,
    Op_Cofail = 320,
    Op_Coret = 321,
    Op_Create = 322,
    Op_Cset = 323,
    Op_Dup = 324,
    Op_Efail = 325,
    Op_EInit = 326,
    Op_Eret = 327,
    Op_Escan = 328,
    Op_Esusp = 329,
    Op_Field = 330,
    Op_Goto = 331,
    Op_Init = 332,
    Op_Int = 333,
    Op_Invoke = 334,
    Op_Keywd = 335,
    Op_Limit = 336,
    Op_Line = 337,
    Op_Llist = 338,
    Op_Lsusp = 339,
    Op_Mark = 340,
    Op_Pfail = 341,
    Op_Pnull = 342,
    Op_Pop = 343,
    Op_Pret = 344,
    Op_Psusp = 345,
    Op_Push1 = 346,
    Op_Pushn1 = 347,
    Op_Real = 348,
    Op_Sdup = 349,
    Op_Str = 350,
    Op_Unmark = 351,
    Op_Var = 352,
    Op_Arg = 353,
    Op_Static = 354,
    Op_Local = 355,
    Op_Global = 356,
    Op_Mark0 = 357,
    Op_Quit = 358,
    Op_FQuit = 359,
    Op_Tally = 360,
    Op_Apply = 361,
    Op_Acset = 362,
    Op_Areal = 363,
    Op_Astr = 364,
    Op_Aglobal = 365,
    Op_Astatic = 366,
    Op_Agoto = 367,
    Op_Amark = 368,
    Op_Noop = 369,
    Op_Colm = 370,
    Op_Proc = 371,
    Op_Declend = 372,
    Op_End = 373,
    Op_Link = 374,
    Op_Version = 375,
    Op_Con = 376,
    Op_Filen = 377,
    Op_Record = 378,
    Op_Impl = 379,
    Op_Error = 380,
    Op_Trace = 381,
    Op_Lab = 382,
    Op_Invocable = 383,
    Op_Copyd = 384,
    Op_Trapret = 385,
    Op_Trapfail = 386,
    Op_Synt = 387,
    Op_Uid = 388
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 38 "ucode.y" /* yacc.c:355  */

  int nValue;

#line 280 "ucode.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_UCODE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 295 "ucode.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  265
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  240
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  283

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   388

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   182,   182,   183,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   201,   202,   206,   207,   210,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   306,
     306,   307,   308,   309,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VERSIONSTAMP", "UCODESTAMP", "DECCONST",
  "COMMA", "OCTCONST", "IDENTIFIER", "CONTROL_L", "REALCONST", "FILENAME",
  "LABEL", "ANY", "Op_Asgn", "Op_Bang", "Op_Cat", "Op_Compl", "Op_Diff",
  "Op_Div", "Op_Eqv", "Op_Inter", "Op_Lconcat", "Op_Lexeq", "Op_Lexge",
  "Op_Lexgt", "Op_Lexle", "Op_Lexlt", "Op_Lexne", "Op_Minus", "Op_Mod",
  "Op_Mult", "Op_Neg", "Op_Neqv", "Op_Nonnull", "Op_Null", "Op_Number",
  "Op_Numeq", "Op_Numge", "Op_Numgt", "Op_Numle", "Op_Numlt", "Op_Numne",
  "Op_Plus", "Op_Power", "Op_Random", "Op_Rasgn", "Op_Rcv", "Op_RcvBk",
  "Op_Refresh", "Op_Rswap", "Op_Sect", "Op_Snd", "Op_SndBk", "Op_Size",
  "Op_Subsc", "Op_Swap", "Op_Tabmat", "Op_Toby", "Op_Unions", "Op_Value",
  "Op_Bscan", "Op_Ccase", "Op_Chfail", "Op_Coact", "Op_Cofail", "Op_Coret",
  "Op_Create", "Op_Cset", "Op_Dup", "Op_Efail", "Op_EInit", "Op_Eret",
  "Op_Escan", "Op_Esusp", "Op_Field", "Op_Goto", "Op_Init", "Op_Int",
  "Op_Invoke", "Op_Keywd", "Op_Limit", "Op_Line", "Op_Llist", "Op_Lsusp",
  "Op_Mark", "Op_Pfail", "Op_Pnull", "Op_Pop", "Op_Pret", "Op_Psusp",
  "Op_Push1", "Op_Pushn1", "Op_Real", "Op_Sdup", "Op_Str", "Op_Unmark",
  "Op_Var", "Op_Arg", "Op_Static", "Op_Local", "Op_Global", "Op_Mark0",
  "Op_Quit", "Op_FQuit", "Op_Tally", "Op_Apply", "Op_Acset", "Op_Areal",
  "Op_Astr", "Op_Aglobal", "Op_Astatic", "Op_Agoto", "Op_Amark", "Op_Noop",
  "Op_Colm", "Op_Proc", "Op_Declend", "Op_End", "Op_Link", "Op_Version",
  "Op_Con", "Op_Filen", "Op_Record", "Op_Impl", "Op_Error", "Op_Trace",
  "Op_Lab", "Op_Invocable", "Op_Copyd", "Op_Trapret", "Op_Trapfail",
  "Op_Synt", "Op_Uid", "$accept", "statementlist", "statement", "OpImpl",
  "OpInvocable", "Control_L", "Proc", "CON", "KEYS", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388
};
# endif

#define YYPACT_NINF -100

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-100)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     334,     3,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,    -6,  -100,  -100,
    -100,    -2,     6,  -100,  -100,     1,  -100,  -100,  -100,   205,
       2,     4,     7,    10,   205,  -100,    12,    13,  -100,     8,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,    14,  -100,    16,
    -100,    19,    20,    21,  -100,    22,   205,  -100,  -100,    17,
      27,  -100,    23,   205,   -99,    26,     0,   205,    28,    31,
     334,  -100,  -100,    33,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,    29,  -100,  -100,
    -100,  -100,  -100,    -3,  -100,    37,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,   161,  -100,   162,
    -100,  -100,  -100,  -100,   163,   205,   164,  -100,   165,   205,
     167,  -100,  -100
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    19,    32,    74,    63,   102,    79,    83,    78,
     104,    91,    47,    93,   108,   103,   107,    89,    54,    84,
      82,    70,    88,    62,    75,    94,    55,    86,    69,    87,
      52,    80,    44,    92,    96,    95,    72,    85,    38,    42,
      90,    66,    40,    57,   106,    58,    77,     0,    71,    98,
      97,     0,     0,    43,    48,     0,    76,    59,    53,     0,
       0,     0,     0,     0,     0,   100,     0,     0,   101,     0,
      50,    29,    41,    49,    73,    39,    61,     0,    68,     0,
      33,     0,     0,     0,    37,     0,     0,    23,    51,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       3,    13,    14,     0,   105,    99,    64,    67,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,    60,    45,    65,    36,    31,
      56,    25,    35,    28,    81,    46,    30,     0,     7,    26,
      20,    11,     4,    22,    24,     0,    15,    16,     6,    34,
      18,    17,    12,    27,     5,     1,     2,     0,    10,     0,
     110,   112,   111,   113,     0,     0,     0,     8,     0,     0,
       0,    21,     9
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,    73,  -100,  -100,  -100,  -100,  -100,  -100,   -64
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    99,   100,   258,   262,   101,   102,   253,   235
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     240,   256,   270,   271,   272,   260,   104,   273,   261,   103,
     105,   106,   238,   107,   236,   239,   237,   241,   242,   244,
     243,   245,   250,   257,   246,   247,   248,   249,   251,   255,
     252,   265,   264,   263,   254,   269,   108,   109,   259,   268,
     267,   110,   111,   274,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   275,   277,   276,
     279,   280,   282,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,   109,
       0,   278,     0,   110,   111,   281,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,     1,
       0,     0,     0,     2,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,     0,    36,     0,    37,     0,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,     0,    82,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     0,
       0,    95,    96,     0,     0,     0,    97,    98
};

static const yytype_int16 yycheck[] =
{
      64,   100,     5,     6,     7,     5,    12,    10,     8,     6,
      12,     5,     5,    12,    12,     5,    12,     5,     5,     5,
      12,     5,    86,   122,     5,     5,     5,     5,    11,    93,
       3,     0,     4,    97,    11,     6,     3,     4,    12,   103,
       7,     8,     9,     6,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,     6,     5,     7,
       6,     6,     5,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,   275,    -1,     8,     9,   279,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,     5,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    49,    -1,    51,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,   133
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    49,    51,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   100,   101,   102,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   127,   128,   132,   133,   135,
     136,   139,   140,     6,    12,    12,     5,    12,     3,     4,
       8,     9,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   142,    12,    12,     5,     5,
     142,     5,     5,    12,     5,     5,     5,     5,     5,     5,
     142,    11,     3,   141,    11,   142,   100,   122,   137,    12,
       5,     8,   138,   142,     4,     0,   135,     7,   142,     6,
       5,     6,     7,    10,     6,     6,     7,     5,   142,     6,
       6,   142,     5
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   137,   138,   138,   139,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     2,     4,     7,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     6,     2,     1,     2,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     0,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 187 "ucode.y" /* yacc.c:1646  */
    { }
#line 1656 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 188 "ucode.y" /* yacc.c:1646  */
    { }
#line 1662 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 189 "ucode.y" /* yacc.c:1646  */
    { }
#line 1668 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 190 "ucode.y" /* yacc.c:1646  */
    { }
#line 1674 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 191 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1680 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 192 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1686 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 193 "ucode.y" /* yacc.c:1646  */
    { }
#line 1692 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 194 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1698 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 195 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1704 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 201 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1710 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 202 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1716 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 206 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1722 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 207 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1728 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 210 "ucode.y" /* yacc.c:1646  */
    { }
#line 1734 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 214 "ucode.y" /* yacc.c:1646  */
    { }
#line 1740 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 215 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1746 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 216 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1752 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 217 "ucode.y" /* yacc.c:1646  */
    { }
#line 1758 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 218 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1764 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 219 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1770 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 220 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1776 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 221 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1782 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 222 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1788 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 223 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1794 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 224 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1800 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 225 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1806 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 226 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1812 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 227 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1818 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 228 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1824 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 229 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1830 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 230 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1836 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 231 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1842 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 232 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1848 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 233 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1854 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 234 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1860 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 235 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1866 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 236 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1872 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 237 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1878 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 238 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1884 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 239 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1890 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 240 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1896 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 241 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1902 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 242 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1908 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 243 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1914 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 244 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1920 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 245 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1926 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 246 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1932 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 247 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1938 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 248 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1944 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 249 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1950 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 250 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1956 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 251 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1962 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 252 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1968 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 253 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1974 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 254 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1980 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 255 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1986 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 256 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1992 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 257 "ucode.y" /* yacc.c:1646  */
    {  }
#line 1998 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 258 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2004 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 259 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2010 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 260 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2016 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 261 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2022 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 262 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2028 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 263 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2034 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 264 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2040 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 265 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2046 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 266 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2052 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 267 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2058 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 268 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2064 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 269 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2070 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 270 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2076 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 271 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2082 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 272 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2088 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 273 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2094 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 274 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2100 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 275 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2106 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 276 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2112 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 277 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2118 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 278 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2124 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 279 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2130 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 280 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2136 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 281 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2142 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 282 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2148 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 283 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2154 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 284 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2160 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 285 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2166 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 286 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2172 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 287 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2178 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 288 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2184 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 289 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2190 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 290 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2196 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 291 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2202 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 292 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2208 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 293 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2214 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 294 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2220 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 295 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2226 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 296 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2232 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 297 "ucode.y" /* yacc.c:1646  */
    { }
#line 2238 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 298 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2244 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 299 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2250 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 300 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2256 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 301 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2262 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 302 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2268 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 306 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2274 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 307 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2280 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 308 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2286 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 309 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2292 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 313 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2298 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 314 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2304 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 315 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2310 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 316 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2316 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 317 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2322 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 318 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2328 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 319 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2334 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 320 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2340 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 321 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2346 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 322 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2352 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 323 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2358 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 324 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2364 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 325 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2370 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 326 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2376 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 327 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2382 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 328 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2388 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 329 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2394 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 330 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2400 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 331 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2406 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 332 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2412 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 333 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2418 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 334 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2424 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 335 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2430 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 336 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2436 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 337 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2442 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 338 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2448 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 339 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2454 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 340 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2460 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 341 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2466 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 342 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2472 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 343 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2478 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 344 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2484 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 345 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2490 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 346 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2496 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 347 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2502 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 348 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2508 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 349 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2514 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 350 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2520 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 351 "ucode.y" /* yacc.c:1646  */
    { ; }
#line 2526 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 352 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2532 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 353 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2538 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 354 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2544 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 355 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2550 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 356 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2556 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 357 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2562 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 358 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2568 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 359 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2574 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 360 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2580 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 361 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2586 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 362 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2592 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 363 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2598 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 364 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2604 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 365 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2610 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 366 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2616 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 367 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2622 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 368 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2628 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 369 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2634 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 370 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2640 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 371 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2646 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 372 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2652 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 373 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2658 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 374 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2664 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 375 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2670 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 376 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2676 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 377 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2682 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 378 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2688 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 379 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2694 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 380 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2700 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 381 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2706 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 382 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2712 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 383 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2718 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 384 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2724 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 385 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2730 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 386 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2736 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 387 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2742 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 388 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2748 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 389 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2754 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 390 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2760 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 391 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2766 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 392 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2772 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 393 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2778 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 394 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2784 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 395 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2790 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 396 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2796 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 397 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2802 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 398 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2808 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 399 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2814 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 400 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2820 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 401 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2826 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 402 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2832 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 403 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2838 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 404 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2844 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 405 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2850 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 406 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2856 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 407 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2862 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 408 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2868 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 409 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2874 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 410 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2880 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 411 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2886 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 412 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2892 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 413 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2898 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 414 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2904 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 415 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2910 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 416 "ucode.y" /* yacc.c:1646  */
    { }
#line 2916 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 417 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2922 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 418 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2928 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 419 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2934 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 420 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2940 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 421 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2946 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 422 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2952 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 423 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2958 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 424 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2964 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 425 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2970 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 426 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2976 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 427 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2982 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 428 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2988 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 429 "ucode.y" /* yacc.c:1646  */
    {  }
#line 2994 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 430 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3000 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 431 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3006 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 432 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3012 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 433 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3018 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 434 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3024 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 435 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3030 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 436 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3036 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 437 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3042 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 438 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3048 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 439 "ucode.y" /* yacc.c:1646  */
    {  }
#line 3054 "ucode.tab.c" /* yacc.c:1646  */
    break;


#line 3058 "ucode.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 441 "ucode.y" /* yacc.c:1906  */

