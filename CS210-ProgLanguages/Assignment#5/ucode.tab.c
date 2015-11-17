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
#line 2 "ucode.y" /* yacc.c:339  */

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


#line 85 "ucode.tab.c" /* yacc.c:339  */

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
#line 21 "ucode.y" /* yacc.c:355  */

  int nValue;

#line 263 "ucode.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_UCODE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 278 "ucode.tab.c" /* yacc.c:358  */

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
#define YYFINAL  243
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

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
       0,   165,   165,   166,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   182,   183,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   257,   258,   259,
     260,   261,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395
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
  "Op_Synt", "Op_Uid", "$accept", "statementlist", "statement",
  "Control_L", "Proc", "CON", "KEYS", YY_NULLPTR
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

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     139,     2,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     4,   -67,   -67,   131,   -67,   -67,
     -67,   137,   134,   135,   144,   145,     9,   146,   147,   148,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   151,   -67,   156,
     -67,   158,   159,   160,   -67,   161,     9,   -67,   -67,   164,
     180,   -67,   173,     9,    67,   174,     9,     9,   181,   189,
     139,   -67,   -67,    -3,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   186,
     -67,   -67,   -67,   -67,   -67,    -4,   -67,   193,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   196,   -67,   188,   -67,   -67,
     -67,   -67,   199,     9,   200,   -67,   214,     9,   218,   -67,
     -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      15,     0,    16,    29,    71,    60,    76,    80,    75,    44,
      51,    81,    79,    67,    86,    59,    72,    52,    83,    66,
      84,    49,    77,    41,    69,    82,    35,    39,    63,    37,
      54,    55,    74,    68,     0,    40,    45,     0,    73,    56,
      50,     0,     0,     0,     0,     0,    92,     0,     0,     0,
      47,    26,    38,    46,    70,    36,    58,     0,    65,     0,
      30,     0,     0,     0,    34,     0,    92,    20,    48,     0,
       0,    87,     0,     0,     0,     0,    92,    92,     0,     0,
       3,    13,    14,     0,    61,    64,    57,    42,    62,    33,
      28,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    53,    22,    32,    25,    78,    43,    27,     0,
       7,    23,    17,    11,     4,    19,    21,     0,     6,    31,
      12,    24,     5,     1,     2,     0,    10,     0,    88,    90,
      89,    91,     0,     0,     0,     9,     0,    92,     0,    18,
       8
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   125,   -67,   -67,   -67,   -67,   -66
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    79,    80,    81,    82,   235,   222
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     232,   248,   249,   250,   245,   246,   251,   237,    83,    84,
     240,   241,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    85,     1,    86,    87,    88,     2,    89,
      90,   223,   224,     3,     4,     5,   226,     6,     7,     8,
     225,   227,     9,   228,   229,   230,   231,   238,    10,    11,
      12,    13,    14,    15,    16,   233,    17,    18,    19,    20,
      21,    22,    23,   234,   236,   242,   239,   256,    24,   243,
      25,   259,   247,    26,    27,   254,    28,    29,    30,   252,
      31,    32,   253,    33,   255,   244,   257,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
     258,    47,    48,   260,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,    62,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     0,     0,    75,    76,     0,     0,
       0,    77,    78
};

static const yytype_int16 yycheck[] =
{
      66,     5,     6,     7,     7,     8,    10,    73,     6,     5,
      76,    77,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,    12,     5,     8,    12,    12,     9,     5,
       5,     5,     5,    14,    15,    16,     5,    18,    19,    20,
      12,     5,    23,     5,     5,     5,     5,   100,    29,    30,
      31,    32,    33,    34,    35,    11,    37,    38,    39,    40,
      41,    42,    43,     3,    11,     4,    12,   253,    49,     0,
      51,   257,     6,    54,    55,     7,    57,    58,    59,     6,
      61,    62,     6,    64,     5,    80,     6,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       6,    82,    83,     5,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,   100,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,   127,   128,    -1,    -1,
      -1,   132,   133
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    14,    15,    16,    18,    19,    20,    23,
      29,    30,    31,    32,    33,    34,    35,    37,    38,    39,
      40,    41,    42,    43,    49,    51,    54,    55,    57,    58,
      59,    61,    62,    64,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    82,    83,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   100,   101,   102,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   127,   128,   132,   133,   135,
     136,   137,   138,     6,     5,    12,     8,    12,    12,     5,
       5,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   140,     5,     5,    12,     5,     5,     5,     5,
       5,     5,   140,    11,     3,   139,    11,   140,   100,    12,
     140,   140,     4,     0,   135,     7,     8,     6,     5,     6,
       7,    10,     6,     6,     7,     5,   140,     6,     6,   140,
       5
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     2,     2,     7,     4,
       3,     2,     2,     1,     1,     0,     1,     2,     6,     2,
       1,     2,     2,     2,     2,     2,     1,     2,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     2,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1
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
#line 169 "ucode.y" /* yacc.c:1646  */
    { printf("OpVersion\n");}
#line 1589 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 170 "ucode.y" /* yacc.c:1646  */
    { printf("Filename\n"); }
#line 1595 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 171 "ucode.y" /* yacc.c:1646  */
    { printf ("Opimpl\n"); }
#line 1601 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 172 "ucode.y" /* yacc.c:1646  */
    { printf ("OPGlobal\n"); }
#line 1607 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 173 "ucode.y" /* yacc.c:1646  */
    { printf("OpLocal\n"); }
#line 1613 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 174 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Record\n"); }
#line 1619 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 175 "ucode.y" /* yacc.c:1646  */
    { printf("DEC COMMA IDENTF\n"); }
#line 1625 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 176 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Link\n"); }
#line 1631 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 177 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Invocable\n"); }
#line 1637 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 183 "ucode.y" /* yacc.c:1646  */
    { printf("Control L"); }
#line 1643 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 186 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Proc\n"); }
#line 1649 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 187 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Local\n"); }
#line 1655 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 188 "ucode.y" /* yacc.c:1646  */
    { printf("Op_con\n"); }
#line 1661 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 189 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Declend\n");}
#line 1667 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 190 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Filen\n"); }
#line 1673 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 191 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Line\n"); }
#line 1679 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 192 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Colm\n"); }
#line 1685 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 193 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Synt\n"); }
#line 1691 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 194 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Mark\n"); }
#line 1697 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 195 "ucode.y" /* yacc.c:1646  */
    { printf("Op_PNull\n"); }
#line 1703 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 196 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Var\n"); }
#line 1709 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 197 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Invoke\n"); }
#line 1715 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 198 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Asgn\n"); }
#line 1721 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 199 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Unmark\n"); }
#line 1727 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 200 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Lab\n"); }
#line 1733 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 201 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Llist\n"); }
#line 1739 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 202 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Int\n"); }
#line 1745 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 203 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Mark0\n"); }
#line 1751 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 204 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Size\n"); }
#line 1757 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 205 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Push1\n"); }
#line 1763 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 206 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Toby\n"); }
#line 1769 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 207 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Pop\n"); }
#line 1775 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 208 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Subsc\n"); }
#line 1781 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 209 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Dup\n"); }
#line 1787 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 210 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Plus\n"); }
#line 1793 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 211 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Goto\n"); }
#line 1799 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 212 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Str\n"); }
#line 1805 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 213 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Lexeq\n"); }
#line 1811 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 214 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Efail\n"); }
#line 1817 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 215 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Pret\n"); }
#line 1823 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 216 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Pfail\n"); }
#line 1829 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 217 "ucode.y" /* yacc.c:1646  */
    { printf("Op_End\n"); }
#line 1835 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 218 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Numlt\n"); }
#line 1841 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 219 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Esusp\n"); }
#line 1847 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 220 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Minus\n"); }
#line 1853 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 221 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Numeq\n"); }
#line 1859 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Keywd\n"); }
#line 1865 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 223 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Unions\n"); }
#line 1871 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 224 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Bscan\n"); }
#line 1877 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 225 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Escan\n"); }
#line 1883 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 226 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Field\n"); }
#line 1889 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 227 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Pushn1\n"); }
#line 1895 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 228 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Nonnull\n"); }
#line 1901 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 229 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Cat\n"); }
#line 1907 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 230 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Cset\n"); }
#line 1913 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 231 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Init\n"); }
#line 1919 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 232 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Tabmat\n"); }
#line 1925 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 233 "ucode.y" /* yacc.c:1646  */
    { printf("Op_EInit\n"); }
#line 1931 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 234 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Sdup\n"); }
#line 1937 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 235 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Numgt\n"); }
#line 1943 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 236 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Neg\n"); }
#line 1949 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 237 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Coact\n"); }
#line 1955 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 238 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Refresh\n"); }
#line 1961 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 239 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Psusp\n"); }
#line 1967 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 240 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Bang\n"); }
#line 1973 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 241 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Null\n"); }
#line 1979 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 242 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Eret\n"); }
#line 1985 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 243 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Ccase\n"); }
#line 1991 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 244 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Eqv\n"); }
#line 1997 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 245 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Diff\n"); }
#line 2003 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 246 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Numne\n"); }
#line 2009 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 247 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Real\n"); }
#line 2015 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 248 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Mult\n"); }
#line 2021 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 249 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Div\n"); }
#line 2027 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 250 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Mod\n"); }
#line 2033 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 251 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Sect\n"); }
#line 2039 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 252 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Numge\n"); }
#line 2045 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 253 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Numle\n"); }
#line 2051 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 254 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Numle\n"); }
#line 2057 "ucode.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 255 "ucode.y" /* yacc.c:1646  */
    { printf("Op_Neqv\n"); }
#line 2063 "ucode.tab.c" /* yacc.c:1646  */
    break;


#line 2067 "ucode.tab.c" /* yacc.c:1646  */
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
#line 397 "ucode.y" /* yacc.c:1906  */

