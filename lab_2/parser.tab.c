/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 2 "parser.y"

#include <stdbool.h>

#line 112 "parser.tab.c"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOL = 258,
    INT = 259,
    FLOAT = 260,
    TYPE = 261,
    STATE = 262,
    IDENTIFIER = 263,
    ERROR = 264,
    BREAK = 265,
    CONTINUE = 266,
    DO = 267,
    FOR = 268,
    WHILE = 269,
    SWITCH = 270,
    DEFAULT = 271,
    IF = 272,
    ELSE = 273,
    RETURN = 274,
    STRUCT = 275,
    ATTRIBUTE = 276,
    CONST = 277,
    UNIFORM = 278,
    VARYING = 279,
    BUFFER = 280,
    SHARED = 281,
    COHERENT = 282,
    VOLATILE = 283,
    RESTRICT = 284,
    READONLY = 285,
    WRITEONLY = 286,
    LAYOUT = 287,
    CENTROID = 288,
    FLAT = 289,
    SMOOTH = 290,
    NOPERSPECTIVE = 291,
    PATCH = 292,
    SAMPLE = 293,
    SUBROUTINE = 294,
    IN = 295,
    OUT = 296,
    INOUT = 297,
    INVARIANT = 298,
    PRECISE = 299,
    DISCARD = 300,
    LOWP = 301,
    MEDIUMP = 302,
    HIGHP = 303,
    PRECISION = 304,
    CLASS = 305,
    ILLUMINANCE = 306,
    AMBIENT = 307,
    PUBLIC = 308,
    PRIVATE = 309,
    SCRATCH = 310,
    RT_PRIMITIVE = 311,
    RT_CAMERA = 312,
    RT_MATERIAL = 313,
    RT_TEXTURE = 314,
    RT_LIGHT = 315,
    LEFT_OP = 316,
    RIGHT_OP = 317,
    INC_OP = 318,
    DEC_OP = 319,
    LE_OP = 320,
    GE_OP = 321,
    EQ_OP = 322,
    NE_OP = 323,
    AND_OP = 324,
    OR_OP = 325,
    XOR_OP = 326,
    MUL_ASSIGN = 327,
    DIV_ASSIGN = 328,
    ADD_ASSIGN = 329,
    MOD_ASSIGN = 330,
    LEFT_ASSIGN = 331,
    RIGHT_ASSIGN = 332,
    AND_ASSIGN = 333,
    XOR_ASSIGN = 334,
    OR_ASSIGN = 335,
    SUB_ASSIGN = 336
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "parser.y"

    bool bval;
    int ival;
    double fval;
    char *str;

#line 212 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);




/* Unqualified %code blocks.  */
#line 7 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int line_number;
extern FILE *yyin;
extern int yylex();
static void yyerror(const char *s);

#line 240 "parser.tab.c"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  227
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

#define YYUNDEFTOK  2
#define YYMAXUTOK   336


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    94,    97,     2,
      82,    83,    92,    88,    87,    89,    86,    93,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   101,   103,
      95,   102,    96,   100,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    98,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   104,    99,   105,    91,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    64,    64,    66,    67,    68,    69,    70,    72,    73,
      74,    75,    76,    77,    79,    81,    83,    85,    86,    88,
      90,    91,    93,    95,    96,    98,    99,   100,   101,   103,
     104,   105,   106,   108,   109,   110,   111,   113,   114,   115,
     117,   118,   119,   121,   122,   123,   124,   125,   127,   128,
     129,   131,   132,   134,   135,   137,   138,   140,   141,   143,
     144,   146,   147,   149,   150,   152,   153,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   167,   168,
     170,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     183,   184,   187,   190,   191,   194,   195,   198,   201,   202,
     205,   206,   207,   208,   210,   213,   214,   215,   216,   217,
     220,   221,   222,   223,   224,   226,   227,   229,   231,   232,
     233,   235,   237,   238,   240,   241,   243,   246,   247,   249,
     250,   251,   252,   253,   254,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   275,   276,   279,   280,   283,   284,   285,   286,
     288,   295,   296,   299,   300,   303,   304,   307,   308,   311,
     312,   313,   315,   316,   318,   320,   321,   323,   324,   325,
     326,   328,   329,   331,   332,   334,   335,   337,   338,   340,
     341,   343,   344,   346,   348,   349,   351,   352,   355,   357,
     358,   363,   364,   365,   367,   368,   370,   371,   373,   374,
     376,   377,   378,   379,   380,   383,   385,   386,   388,   389,
     391,   393,   394,   396,   397,   398,   399,   400
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "INT", "FLOAT", "TYPE", "STATE",
  "IDENTIFIER", "ERROR", "BREAK", "CONTINUE", "DO", "FOR", "WHILE",
  "SWITCH", "DEFAULT", "IF", "ELSE", "RETURN", "STRUCT", "ATTRIBUTE",
  "CONST", "UNIFORM", "VARYING", "BUFFER", "SHARED", "COHERENT",
  "VOLATILE", "RESTRICT", "READONLY", "WRITEONLY", "LAYOUT", "CENTROID",
  "FLAT", "SMOOTH", "NOPERSPECTIVE", "PATCH", "SAMPLE", "SUBROUTINE", "IN",
  "OUT", "INOUT", "INVARIANT", "PRECISE", "DISCARD", "LOWP", "MEDIUMP",
  "HIGHP", "PRECISION", "CLASS", "ILLUMINANCE", "AMBIENT", "PUBLIC",
  "PRIVATE", "SCRATCH", "RT_PRIMITIVE", "RT_CAMERA", "RT_MATERIAL",
  "RT_TEXTURE", "RT_LIGHT", "LEFT_OP", "RIGHT_OP", "INC_OP", "DEC_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "XOR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN",
  "'('", "')'", "'['", "']'", "'.'", "','", "'+'", "'-'", "'!'", "'~'",
  "'*'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "'{'", "'}'", "$accept", "variable_identifier",
  "primary_expression", "postfix_expression", "integer_expression",
  "function_call", "function_call_or_method", "function_call_generic",
  "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "identifier_list",
  "function_prototype", "function_declarator",
  "function_header_with_parameters", "function_header",
  "parameter_declarator", "parameter_declaration",
  "parameter_type_specifier", "init_declarator_list", "single_declaration",
  "fully_specified_type", "invariant_qualifier", "interpolation_qualifier",
  "layout_qualifier", "layout_qualifier_id_list", "layout_qualifier_id",
  "precise_qualifier", "type_qualifier", "single_type_qualifier",
  "storage_qualifier", "type_name_list", "type_specifier",
  "array_specifier", "precision_qualifier", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "initializer", "initializer_list", "declaration_statement", "statement",
  "simple_statement", "compound_statement", "statement_no_new_scope",
  "compound_statement_no_new_scope", "statement_list",
  "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "switch_statement",
  "switch_statement_list", "iteration_statement", "for_init_statement",
  "conditionopt", "for_rest_statement", "jump_statement",
  "translation_unit", "interface_methods", "external_declaration",
  "function_definition", "shader_def", "inheritance", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    40,    41,    91,    93,    46,    44,    43,    45,
      33,   126,    42,    47,    37,    60,    62,    38,    94,   124,
      63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF (-281)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-25)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    24,    86,  1095,   -71,  -281,    10,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,    40,  -281,  -281,  -281,
    -281,  -281,  -281,    64,  -281,  -281,  -281,  -281,  -281,    51,
    -281,    59,    46,    26,  1134,    12,  -281,    98,  -281,  -281,
    -281,  -281,   983,  -281,  -281,  -281,  -281,  1173,  -281,  -281,
    -281,    95,   455,    52,    19,   143,  -281,   154,  -281,   262,
    -281,  -281,  1134,  -281,  -281,  -281,  1134,   176,   178,  -281,
     -62,    16,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,    85,  -281,  -281,  -281,  -281,   661,   661,   661,  -281,
    -281,  -281,  -281,  -281,  -281,  -281,    -6,  -281,  -281,  -281,
     117,   -21,   661,   123,  -281,   661,    50,   105,   134,   -47,
     131,   110,   113,   116,   155,   151,   -49,  -281,   138,  -281,
     558,   218,  -281,   -10,  -281,  -281,    -8,   126,   128,   130,
     674,   156,   157,   158,   166,   153,   133,  -281,   365,  -281,
     346,  -281,  -281,    18,  -281,   147,   169,  -281,  -281,  -281,
    -281,   468,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
      10,   -56,  -281,   353,   -37,   244,  -281,  1134,    20,  -281,
    -281,  -281,    -2,  -281,  -281,   661,   245,  -281,  -281,   661,
    -281,  -281,  -281,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   661,  -281,  -281,   170,   152,  -281,    19,  -281,
     253,  -281,  -281,  -281,   246,   865,  1025,   661,   661,  -281,
      21,  -281,  -281,   571,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,  -281,  -281,  -281,   661,   661,  -281,  -281,  -281,
      52,   353,   -20,   353,  -281,  -281,   353,  -281,  1134,   255,
     944,  -281,   256,  -281,  -281,   184,   174,  -281,  -281,  -281,
    -281,  -281,    50,    50,   105,   105,   134,   134,   134,   134,
     -47,   -47,   131,   110,   113,   116,   155,   151,   -13,  -281,
     661,  -281,  -281,   189,  -281,  -281,  1025,   174,   270,  1134,
     197,    31,    47,  -281,  -281,  -281,  -281,  -281,   353,  -281,
     -52,  -281,   255,    10,    22,  -281,     1,  -281,  -281,  -281,
     661,  -281,   661,  -281,   179,   225,   207,   776,   206,   674,
    -281,     7,  -281,    23,    52,   255,  -281,   -61,  -281,  -281,
      54,   661,   776,   353,  -281,  -281,  -281,   674,   294,  -281,
    -281,  -281,  -281,  -281,  -281,   -60,   210,   174,  -281,  -281,
     674,   212,   674,  -281,  -281,  -281,  -281
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   221,     1,   154,   135,   142,   143,
     144,   145,   146,   147,   148,   149,     0,   139,   119,   118,
     120,   140,   141,   150,   137,   138,   136,   117,   126,   160,
     219,     0,     0,    94,    93,     0,   105,   110,   133,   132,
     130,   134,     0,   127,   129,   115,   131,     0,   215,   216,
     218,     0,     0,   155,     0,     0,   160,     0,    81,     0,
     220,    92,     0,   101,    95,   103,     0,   104,     0,    82,
     111,     0,    87,   128,   116,   217,   223,   224,   225,   226,
     227,     0,     6,     4,     5,     2,     0,     0,     0,   156,
      29,    30,    31,    32,     3,     8,    25,    10,    15,    16,
       0,     0,    19,     0,    33,     0,    37,    40,    43,    48,
      51,    53,    55,    57,    59,    61,    63,    80,     0,    23,
       0,     0,   125,     0,   122,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,     0,   187,
      33,    65,    78,     0,   174,     0,   115,   177,   189,   176,
     175,     0,   178,   179,   180,   181,   182,    96,   100,   102,
      98,   106,    97,     0,   112,     0,    88,     0,     0,   222,
      26,    27,     0,    12,    13,     0,     0,    18,    17,     0,
      20,    22,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,   158,     0,     0,   121,     0,   151,
       0,    83,   211,   210,     0,     0,     0,     0,     0,   212,
       0,   214,   183,     0,    68,    69,    71,    70,    73,    74,
      75,    76,    77,    72,    67,     0,     0,   192,   188,   190,
      99,     0,   107,     0,   169,   114,     0,    90,     0,     0,
       0,   161,     0,    89,     7,     0,    14,    11,    21,    34,
      35,    36,    38,    39,    41,    42,    46,    47,    44,    45,
      49,    50,    52,    54,    56,    58,    60,    62,     0,   159,
       0,   123,   153,     0,   205,   204,   207,   196,     0,     0,
       0,     0,     0,   213,   184,    66,    79,   109,     0,   172,
       0,   113,     0,   167,     0,   165,     0,   162,    91,     9,
       0,   124,     0,   206,     0,     0,     0,     0,     0,     0,
     108,     0,   170,     0,   168,     0,   163,     0,    84,    64,
       0,   208,     0,     0,   186,   201,   185,   199,   195,   193,
     171,   173,   164,   166,    85,     0,     0,   209,   203,   197,
     200,     0,     0,    86,   202,   198,   194
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,  -281,   -18,  -281,    17,    30,    -1,    15,   119,   121,
     122,   120,   124,   127,  -281,   -48,   -96,  -281,   -85,   -95,
      13,  -281,    14,  -281,  -281,  -281,   257,   259,   261,  -281,
    -281,  -202,  -281,  -281,  -281,  -281,   114,  -281,   -29,   -40,
    -281,  -281,    -3,   -69,   301,  -281,    81,    33,     8,  -205,
    -281,   125,  -122,  -280,  -281,     0,   305,  -131,   139,  -281,
    -281,    53,  -281,  -281,  -281,  -281,  -281,  -281,  -281,   334,
    -281,   291,  -281,  -281,  -281
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    94,    95,    96,   255,    97,    98,    99,   100,   101,
     102,   103,   140,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   141,   142,   235,   143,   118,
     144,   168,   145,    32,    33,    34,    63,    64,    65,    35,
      36,    37,    38,    39,    40,   123,   124,    41,    42,    43,
      44,   126,   119,    53,    46,   250,   251,   304,   305,   245,
     300,   147,   148,   149,   150,   335,   336,   151,   152,   153,
     339,   290,   154,   351,   155,   286,   314,   315,   156,     2,
      48,    49,    50,     3,    81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   164,    73,   172,   117,    66,   180,   223,   214,   327,
      82,    83,    84,     6,   288,    85,    30,    31,   190,   191,
     162,   201,    52,    52,   120,   205,    73,   121,    52,   239,
      51,    67,     4,    66,   104,   321,   297,   334,   299,    74,
     163,   301,   344,   353,    45,   122,   241,   120,   192,   193,
     220,   202,   334,   322,   127,     1,   146,   173,   174,    67,
      30,    31,   178,    67,   120,   246,   179,   244,   170,   171,
      86,    87,   117,   207,   236,   209,   -24,   208,   175,   210,
     176,   254,   298,   258,   288,   236,     5,   182,   310,    88,
     256,   240,   242,   320,    52,    90,    91,    92,    93,    68,
      56,   239,   104,   165,   328,   236,    70,   252,   236,   325,
     325,   243,   340,    62,   318,    69,   341,   278,   236,   166,
     167,   237,    54,   253,   293,   326,   342,   146,   349,    61,
     319,   287,   291,   292,   236,   146,   120,   346,   248,   295,
     296,   236,   183,   184,   185,   244,    55,   244,   146,   125,
     244,    76,    77,    78,    79,    80,    82,    83,    84,     6,
       6,    85,    58,    59,   249,   259,   260,   261,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   160,   311,   161,   289,   169,   266,
     267,   268,   269,   186,   187,   188,   189,   338,   194,   195,
     177,   287,   244,   262,   263,   181,   350,   196,    73,   270,
     271,   197,   146,   146,   329,   198,    86,    87,   264,   265,
     146,   248,   200,   203,   199,   244,   206,   330,   239,   211,
     356,   212,   117,   213,   324,    88,   221,   244,   215,   216,
     217,    90,    91,    92,    93,   302,   347,   249,   218,    73,
      58,   -23,   247,   257,   280,   279,   219,   289,   345,   282,
     283,   236,   104,   303,   308,    82,    83,    84,     6,   309,
      85,   312,   128,   129,   130,   131,   132,   133,   316,   134,
     317,   135,   331,   146,     7,     8,    74,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,   136,   332,   333,
     337,    29,   352,   354,   146,   272,   146,   355,   273,   275,
     274,   157,   281,   158,   276,    86,    87,   159,   277,   146,
      57,   307,   348,   343,   146,   323,    60,    47,    75,   313,
     284,     0,     0,     0,    88,     0,     0,   146,     0,   146,
      90,    91,    92,    93,   285,     0,    82,    83,    84,     6,
       0,    85,     0,     0,     0,   137,   138,   139,    82,    83,
      84,     6,     0,    85,     0,   128,   129,   130,   131,   132,
     133,     0,   134,     0,   135,     0,     0,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     136,     0,     0,     0,    29,     0,    86,    87,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,    86,    87,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,    90,    91,    92,    93,     0,     0,    88,   234,     0,
       0,     0,     0,    90,    91,    92,    93,   243,    82,    83,
      84,     6,     0,    85,     0,     0,     0,     0,   137,   138,
     222,    82,    83,    84,     6,     0,    85,     0,   128,   129,
     130,   131,   132,   133,     0,   134,     0,   135,     0,     0,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   136,     0,     0,     0,    29,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,     0,     0,     0,     0,    88,     0,     0,
      89,     0,     0,    90,    91,    92,    93,     0,     0,     0,
      88,     0,     0,     0,     0,     0,    90,    91,    92,    93,
       0,    82,    83,    84,     6,     0,    85,     0,     0,     0,
       0,   137,   138,   238,    82,    83,    84,     6,     0,    85,
       0,   128,   129,   130,   131,   132,   133,     0,   134,     0,
     135,     0,     0,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   136,     0,     0,     0,
      29,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,     0,     0,     0,
      88,     0,     0,   204,     0,     0,    90,    91,    92,    93,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    90,
      91,    92,    93,     0,    82,    83,    84,     6,     0,    85,
       0,     0,     0,     0,   137,   138,   294,    82,    83,    84,
       6,     0,    85,     0,   128,   129,   130,   131,   132,   133,
       0,   134,     0,   135,     0,     0,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,   136,
       0,     0,     0,    29,    86,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    90,
      91,    92,    93,     0,     0,     0,    88,     0,     0,     0,
       0,     0,    90,    91,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   138,    82,
      83,    84,     6,     0,    85,     0,   128,   129,   130,   131,
     132,   133,     0,   134,     0,   135,     0,     0,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   136,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    82,    83,
      84,     6,     0,    85,     0,     0,     0,     0,     0,   137,
      59,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       6,     0,     0,    90,    91,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,   137,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     6,
       0,    71,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    82,    83,
      84,     6,    56,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,   306,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,     0,    86,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,    90,    91,    92,    93,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       6,     0,     0,     0,    29,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     6,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    29
};

static const yytype_int16 yycheck[] =
{
       3,    70,    42,    88,    52,    34,   102,   138,   130,     8,
       3,     4,     5,     6,   216,     8,     3,     3,    65,    66,
      82,    70,    84,    84,    84,   120,    66,     8,    84,   151,
     101,    34,     8,    62,    52,    87,   241,   317,   243,    42,
     102,   246,   103,   103,    47,    26,   102,    84,    95,    96,
     135,   100,   332,   105,    57,    50,    59,    63,    64,    62,
      47,    47,    83,    66,    84,   102,    87,   163,    86,    87,
      63,    64,   120,    83,    87,    83,    82,    87,    84,    87,
      86,    83,   102,   179,   286,    87,     0,   105,   101,    82,
     175,   160,   161,   298,    84,    88,    89,    90,    91,    87,
      49,   223,   120,    87,   103,    87,     8,    87,    87,    87,
      87,   104,   105,    87,    83,   103,   321,   202,    87,   103,
     104,   103,    82,   103,   103,   103,   103,   130,   333,    83,
      83,   216,   217,   218,    87,   138,    84,    83,   167,   235,
     236,    87,    92,    93,    94,   241,    82,   243,   151,     6,
     246,    56,    57,    58,    59,    60,     3,     4,     5,     6,
       6,     8,   103,   104,   167,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,     8,   280,     8,   216,   103,   190,
     191,   192,   193,    88,    89,    61,    62,   319,    67,    68,
      83,   286,   298,   186,   187,    82,   337,    97,   248,   194,
     195,    98,   215,   216,   310,    99,    63,    64,   188,   189,
     223,   250,    71,    85,    69,   321,     8,   312,   350,   103,
     352,   103,   280,   103,   303,    82,   103,   333,    82,    82,
      82,    88,    89,    90,    91,   248,   331,   250,    82,   289,
     103,    82,     8,     8,   102,    85,   103,   286,   327,     6,
      14,    87,   280,     8,     8,     3,     4,     5,     6,    85,
       8,    82,    10,    11,    12,    13,    14,    15,     8,    17,
      83,    19,   103,   286,    22,    23,   289,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    83,   102,
     104,    49,    18,   103,   317,   196,   319,   105,   197,   199,
     198,    62,   208,    66,   200,    63,    64,    66,   201,   332,
      29,   250,   332,   325,   337,   302,    31,     3,    47,   286,
     215,    -1,    -1,    -1,    82,    -1,    -1,   350,    -1,   352,
      88,    89,    90,    91,   215,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    -1,    -1,   103,   104,   105,     3,     4,
       5,     6,    -1,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    49,    -1,    63,    64,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    63,    64,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    -1,    -1,    82,   102,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,   104,     3,     4,
       5,     6,    -1,     8,    -1,    -1,    -1,    -1,   103,   104,
     105,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    49,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      85,    -1,    -1,    88,    89,    90,    91,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    -1,    -1,
      -1,   103,   104,   105,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      49,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    -1,    -1,    -1,   103,   104,   105,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    49,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,     3,
       4,     5,     6,    -1,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,     3,     4,
       5,     6,    -1,     8,    -1,    -1,    -1,    -1,    -1,   103,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
       6,    -1,    -1,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,   103,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     6,
      -1,     8,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     3,     4,
       5,     6,    49,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,   105,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       6,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     6,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,   185,   189,     8,     0,     6,    22,    23,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    49,
     136,   138,   139,   140,   141,   145,   146,   147,   148,   149,
     150,   153,   154,   155,   156,   158,   160,   185,   186,   187,
     188,   101,    84,   159,    82,    82,    49,   160,   103,   104,
     172,    83,    87,   142,   143,   144,   154,   158,    87,   103,
       8,     8,   103,   155,   158,   187,    56,    57,    58,    59,
      60,   190,     3,     4,     5,     8,    63,    64,    82,    85,
      88,    89,    90,    91,   107,   108,   109,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   135,   158,
      84,     8,    26,   151,   152,     6,   157,   158,    10,    11,
      12,    13,    14,    15,    17,    19,    45,   103,   104,   105,
     118,   131,   132,   134,   136,   138,   158,   167,   168,   169,
     170,   173,   174,   175,   178,   180,   184,   143,   142,   144,
       8,     8,    82,   102,   159,    87,   103,   104,   137,   103,
     118,   118,   134,    63,    64,    84,    86,    83,    83,    87,
     132,    82,   118,    92,    93,    94,    88,    89,    61,    62,
      65,    66,    95,    96,    67,    68,    97,    98,    99,    69,
      71,    70,   100,    85,    85,   135,     8,    83,    87,    83,
      87,   103,   103,   103,   168,    82,    82,    82,    82,   103,
     134,   103,   105,   173,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,   102,   133,    87,   103,   105,   168,
     159,   102,   159,   104,   132,   165,   102,     8,   154,   158,
     161,   162,    87,   103,    83,   110,   134,     8,   132,   118,
     118,   118,   120,   120,   121,   121,   122,   122,   122,   122,
     123,   123,   124,   125,   126,   127,   128,   129,   134,    85,
     102,   152,     6,    14,   167,   174,   181,   134,   147,   154,
     177,   134,   134,   103,   105,   132,   132,   165,   102,   165,
     166,   165,   158,     8,   163,   164,   105,   162,     8,    85,
     101,   135,    82,   177,   182,   183,     8,    83,    83,    83,
     165,    87,   105,   163,   159,    87,   103,     8,   103,   132,
     134,   103,    83,   102,   169,   171,   172,   104,   168,   176,
     105,   165,   103,   164,   103,   159,    83,   134,   171,   165,
     173,   179,    18,   103,   103,   105,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   108,   108,   108,   108,   108,   109,   109,
     109,   109,   109,   109,   110,   111,   112,   113,   113,   114,
     115,   115,   116,   117,   117,   118,   118,   118,   118,   119,
     119,   119,   119,   120,   120,   120,   120,   121,   121,   121,
     122,   122,   122,   123,   123,   123,   123,   123,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   134,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   138,   139,   139,   140,   140,   141,   142,   142,
     143,   143,   143,   143,   144,   145,   145,   145,   145,   145,
     146,   146,   146,   146,   146,   147,   147,   148,   149,   149,
     149,   150,   151,   151,   152,   152,   153,   154,   154,   155,
     155,   155,   155,   155,   155,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   157,   157,   158,   158,   159,   159,   159,   159,
     160,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   165,   166,   166,   167,   168,   168,   169,   169,   169,
     169,   169,   169,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   175,   176,   176,   177,   177,   178,   179,
     179,   180,   180,   180,   181,   181,   182,   182,   183,   183,
     184,   184,   184,   184,   184,   185,   186,   186,   187,   187,
     188,   189,   189,   190,   190,   190,   190,   190
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       1,     3,     2,     2,     1,     1,     1,     2,     2,     1,
       2,     3,     2,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     2,     4,     6,     7,     8,     2,     3,     4,
       2,     3,     2,     1,     1,     2,     3,     3,     2,     3,
       2,     1,     2,     1,     1,     1,     3,     4,     6,     5,
       1,     2,     3,     5,     4,     1,     2,     1,     1,     1,
       1,     4,     1,     3,     4,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     1,     2,     2,     3,     3,     4,
       1,     1,     2,     3,     4,     1,     3,     1,     2,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     1,     2,     3,     1,
       2,     1,     2,     5,     3,     1,     1,     4,     7,     0,
       1,     5,     7,     6,     1,     1,     1,     0,     2,     3,
       2,     2,     2,     3,     2,     2,     1,     2,     1,     1,
       2,     2,     5,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

#line 1879 "parser.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 402 "parser.y"

 
/* Data tables for interface methods and states, so you don't have to extract them yourself.
 * Note: The paper contains a number of errors regarding the allowed state variables. These
 * errors are already corrected here and marked with a comment. */

static const char *camera_methods[] = {
    "constructor",
    "generateRay",
    NULL
};

static const char *primitive_methods[] = {
    "constructor",
    "intersect",
    "computeBounds",
    "computeNormal",
    "computeTextureCoordinates",
    "computeDerivatives",
    "generateSample",
    "samplePDF",
    NULL
};

static const char *texture_methods[] = {
    "constructor",
    "lookup",
    NULL
};

static const char *material_methods[] = {
    "constructor",
    "shade",
    "BSDF",
    "sampleBSDF",
    "evaluatePDF",
    "emission",
    NULL
};

static const char *light_methods[] = {
    "constructor",
    "illumination",
    NULL
};

static const char **interface_methods[] = {
    primitive_methods, camera_methods, material_methods, texture_methods, light_methods, NULL
};

static const char *camera_states[] = {
    "RayOrigin",
    "RayDirection",
    "InverseRayDirection",
    "Epsilon",
    "HitDistance",
    "ScreenCoord",
    "LensCoord",
    "du",
    "dv",
    "TimeSeed",
    NULL
};

static const char *primitive_states[] = {
    "RayOrigin",
    "RayDirection",
    "InverseRayDirection",
    "Epsilon",
    "HitDistance",
    "BoundMin",
    "BoundMax",
    "GeometricNormal",
    "dPdu",
    "dPdv",
    "ShadingNormal",
    "TextureUV",
    "TextureUVW",
    "dsdu",
    "dsdv",
    "PDF",
    "TimeSeed",
    "HitPoint", // missing in paper
    NULL
};

static const char *texture_states[] = {
    "TextureUV",
    "TextureUVW",
    "TextureColor",
    "FloatTextureValue",
    "du",
    "dv",
    "dsdu",
    "dtdu",
    "dsdv",
    "dtdv",
    "dPdu",
    "dPdv",
    "TimeSeed",
    NULL
};

static const char *material_states[] = {
    "RayOrigin",
    "RayDirection",
    "InverseRayDirection",
    "HitPoint",
    "dPdu",
    "dPdv",
    "LightDirection",
    "LightDistance",
    "LightColor",
    "EmissionColor",
    "BSDFSeed",
    "TimeSeed",
    "PDF",
    "SampleColor",
    "BSDFValue",
    "du",
    "dv",
    "ShadingNormal", // missing in paper
    "HitDistance", // missing in paper
    NULL
};

static const char *light_states[] = {
    "HitPoint",
    "GeometricNormal",
    "ShadingNormal",
    "LightDirection",
    "TimeSeed",
    NULL
};

static const char **interface_states[] = {
    primitive_states, camera_states, material_states, texture_states, light_states
};

/* TODO You'll probably want to add some additional functions to implement the
 * semantic checks here. */
 
static void yyerror(const char *s) {
    fprintf(stderr, "%s on line %d\n", s, line_number);
    exit(-1);
}

int main(int argc, char **argv) {
    #ifdef YYDEBUG	
    	yydebug = 1;
    #endif
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            printf("File %s not found.\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
    }
    
    do {
        yyparse();
    } while (!feof(yyin));
    return 1;
}
