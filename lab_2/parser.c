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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 2 "parser.y"

#include <stdbool.h>

#line 115 "parser.c"

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
    CASE = 271,
    DEFAULT = 272,
    IF = 273,
    ELSE = 274,
    RETURN = 275,
    STRUCT = 276,
    ATTRIBUTE = 277,
    CONST = 278,
    UNIFORM = 279,
    VARYING = 280,
    BUFFER = 281,
    SHARED = 282,
    COHERENT = 283,
    VOLATILE = 284,
    RESTRICT = 285,
    READONLY = 286,
    WRITEONLY = 287,
    LAYOUT = 288,
    CENTROID = 289,
    FLAT = 290,
    SMOOTH = 291,
    NOPERSPECTIVE = 292,
    PATCH = 293,
    SAMPLE = 294,
    SUBROUTINE = 295,
    IN = 296,
    OUT = 297,
    INOUT = 298,
    INVARIANT = 299,
    PRECISE = 300,
    DISCARD = 301,
    LOWP = 302,
    MEDIUMP = 303,
    HIGHP = 304,
    PRECISION = 305,
    CLASS = 306,
    ILLUMINANCE = 307,
    AMBIENT = 308,
    PUBLIC = 309,
    PRIVATE = 310,
    SCRATCH = 311,
    RT_PRIMITIVE = 312,
    RT_CAMERA = 313,
    RT_MATERIAL = 314,
    RT_TEXTURE = 315,
    RT_LIGHT = 316,
    LEFT_OP = 317,
    RIGHT_OP = 318,
    INC_OP = 319,
    DEC_OP = 320,
    LE_OP = 321,
    GE_OP = 322,
    EQ_OP = 323,
    NE_OP = 324,
    AND_OP = 325,
    OR_OP = 326,
    XOR_OP = 327,
    MUL_ASSIGN = 328,
    DIV_ASSIGN = 329,
    ADD_ASSIGN = 330,
    MOD_ASSIGN = 331,
    LEFT_ASSIGN = 332,
    RIGHT_ASSIGN = 333,
    AND_ASSIGN = 334,
    XOR_ASSIGN = 335,
    OR_ASSIGN = 336,
    SUB_ASSIGN = 337
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "parser.y"

    bool bval;
    int ival;
    double fval;
    char *str;

#line 216 "parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */


/* Unqualified %code blocks.  */
#line 7 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int line_number;
extern FILE *yyin;
extern int yylex();
static void yyerror(const char *s);
static const char *material_methods[];
static const char *texture_methods[];
static const char *light_methods[];
static const char *primitive_methods[];
static const char *camera_methods[];
static const char *material_states[];
static const char *texture_states[];
static const char *light_states[];
static const char *primitive_states[];
static const char *camera_states[];

#line 254 "parser.c"

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
#define YYLAST   1333

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  235
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  367

#define YYUNDEFTOK  2
#define YYMAXUTOK   337


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
       2,     2,     2,    91,     2,     2,     2,    95,    98,     2,
      83,    84,    93,    89,    88,    90,    87,    94,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   102,   104,
      96,   103,    97,   101,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,    99,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   105,   100,   106,    92,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    78,    78,    79,    81,    82,    83,    84,    85,    87,
      88,    89,    90,    91,    92,    94,    96,    98,   100,   101,
     103,   105,   106,   108,   110,   111,   113,   114,   115,   116,
     118,   119,   120,   121,   123,   124,   125,   126,   128,   129,
     130,   132,   133,   134,   136,   137,   138,   139,   140,   142,
     143,   144,   146,   147,   149,   150,   152,   153,   155,   156,
     158,   159,   161,   162,   164,   165,   167,   168,   171,   172,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   186,   187,   189,   192,   193,   195,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   207,   208,   211,   214,
     215,   218,   219,   222,   225,   226,   229,   230,   231,   232,
     234,   237,   238,   239,   240,   241,   244,   245,   247,   249,
     251,   254,   255,   257,   259,   260,   261,   263,   265,   266,
     268,   269,   271,   274,   275,   277,   278,   279,   280,   281,
     282,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   303,   304,
     307,   308,   311,   312,   313,   314,   316,   323,   324,   327,
     328,   331,   332,   335,   336,   339,   340,   341,   343,   344,
     346,   348,   349,   351,   352,   353,   354,   356,   357,   359,
     360,   362,   363,   365,   366,   368,   369,   371,   372,   374,
     376,   377,   379,   380,   383,   385,   386,   391,   393,   394,
     397,   398,   400,   401,   403,   404,   406,   407,   408,   409,
     410,   413,   415,   416,   418,   491,   494,   495,   497,   499,
     500,   503,   504,   505,   506,   507
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "INT", "FLOAT", "TYPE", "STATE",
  "IDENTIFIER", "ERROR", "BREAK", "CONTINUE", "DO", "FOR", "WHILE",
  "SWITCH", "CASE", "DEFAULT", "IF", "ELSE", "RETURN", "STRUCT",
  "ATTRIBUTE", "CONST", "UNIFORM", "VARYING", "BUFFER", "SHARED",
  "COHERENT", "VOLATILE", "RESTRICT", "READONLY", "WRITEONLY", "LAYOUT",
  "CENTROID", "FLAT", "SMOOTH", "NOPERSPECTIVE", "PATCH", "SAMPLE",
  "SUBROUTINE", "IN", "OUT", "INOUT", "INVARIANT", "PRECISE", "DISCARD",
  "LOWP", "MEDIUMP", "HIGHP", "PRECISION", "CLASS", "ILLUMINANCE",
  "AMBIENT", "PUBLIC", "PRIVATE", "SCRATCH", "RT_PRIMITIVE", "RT_CAMERA",
  "RT_MATERIAL", "RT_TEXTURE", "RT_LIGHT", "LEFT_OP", "RIGHT_OP", "INC_OP",
  "DEC_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "XOR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "SUB_ASSIGN", "'('", "')'", "'['", "']'", "'.'", "','", "'+'", "'-'",
  "'!'", "'~'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "variable_identifier", "primary_expression", "postfix_expression",
  "integer_expression", "function_call", "function_call_or_method",
  "function_call_generic", "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_expression_recursed",
  "assignment_operator", "expression", "constant_expression",
  "declaration", "scoped_declaration", "non_scoped_declaration",
  "identifier_list", "function_prototype", "function_declarator",
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
  "translation_unit", "scope", "external_declarations",
  "external_declaration", "function_definition", "shader_def",
  "inheritance", YY_NULLPTR
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
     335,   336,   337,    40,    41,    91,    93,    46,    44,    43,
      45,    33,   126,    42,    47,    37,    60,    62,    38,    94,
     124,    63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF (-248)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,    33,    54,  1203,   -70,  -248,    -1,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,    39,  -248,  -248,  -248,
    -248,  -248,  -248,    41,  -248,  -248,  -248,  -248,  -248,    57,
    -248,  -248,  -248,  -248,  -248,    25,    31,    58,  1243,   -19,
    -248,   119,  -248,  -248,  -248,  -248,  1085,  -248,  -248,  -248,
    -248,  1283,  1203,  -248,  -248,    78,   448,    70,    13,   155,
    -248,   185,  -248,   357,  -248,  -248,  1243,  -248,  -248,  -248,
    1243,   189,   190,  -248,   -59,     1,  -248,  -248,  -248,  -248,
      96,  -248,  -248,  -248,  -248,  -248,  -248,    98,  -248,  -248,
    -248,  -248,  -248,   656,   656,   656,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,   -28,  -248,  -248,  -248,   122,    -5,   656,
     133,  -248,   656,    72,    73,   106,   -44,   125,   110,   118,
     127,   152,   153,   -51,  -248,   142,  -248,   552,   222,  -248,
      32,  -248,  -248,    37,   129,   131,   132,   773,   156,   158,
     159,   161,   341,   134,  -248,   461,  -248,   252,  -248,  -248,
     -11,  -248,   162,  -248,  -248,  -248,  -248,   565,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,    -1,   -38,  -248,   207,
     -29,   238,  -248,  1243,     4,  -248,  -248,  -248,    56,  -248,
    -248,   656,   239,  -248,  -248,   656,  -248,  -248,  -248,   656,
     656,   656,   656,   656,   656,   656,   656,   656,   656,   656,
     656,   656,   656,   656,   656,   656,   656,   656,   656,  -248,
    -248,   166,   145,  -248,    13,  -248,   248,  -248,  -248,  -248,
     241,   966,  1133,   656,   656,  -248,    15,  -248,  -248,   669,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,   656,   656,  -248,  -248,  -248,    70,   207,   -23,   207,
    -248,  -248,   207,  -248,  1243,   249,  1045,  -248,   250,  -248,
    -248,   170,   171,  -248,  -248,  -248,  -248,  -248,    72,    72,
      73,    73,   106,   106,   106,   106,   -44,   -44,   125,   110,
     118,   127,   152,   153,   -57,  -248,   656,  -248,  -248,   178,
    -248,  -248,  1133,   171,   254,  1243,   179,    61,    63,  -248,
    -248,   252,  -248,  -248,  -248,  -248,   207,  -248,   -24,  -248,
     249,    -1,    22,  -248,     0,  -248,  -248,  -248,   656,  -248,
     656,  -248,   160,   182,   164,   876,   165,   773,   656,  -248,
       8,  -248,    24,    70,   249,  -248,   -58,  -248,  -248,    68,
     656,   876,   207,  -248,  -248,  -248,   773,   255,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,   -43,   169,   171,  -248,  -248,
     773,   172,   773,  -248,  -248,  -248,  -248
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   229,     1,   160,   141,   148,   149,
     150,   151,   152,   153,   154,   155,     0,   145,   125,   124,
     126,   146,   147,   156,   143,   144,   142,   123,   132,   166,
     222,   223,   227,    84,    85,     0,     0,   100,    99,     0,
     111,   116,   139,   138,   136,   140,     0,   133,   135,   121,
     137,     0,   221,   224,   226,     0,     0,   161,     0,     0,
     166,     0,    87,     0,   228,    98,     0,   107,   101,   109,
       0,   110,     0,    88,   117,     0,    93,   134,   122,    86,
       0,   225,   231,   232,   233,   234,   235,     0,     7,     5,
       6,     3,     2,     0,     0,     0,   162,    30,    31,    32,
      33,     4,     9,    26,    11,    16,    17,     0,     0,    20,
       0,    34,     0,    38,    41,    44,    49,    52,    54,    56,
      58,    60,    62,    64,    83,     0,    24,     0,     0,   131,
       0,   128,   158,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   197,     0,   193,    34,    66,    81,
       0,   180,   121,   183,   195,   182,   181,     0,   184,   185,
     186,   187,   188,   102,   106,   108,   104,   112,   103,     0,
     118,     0,    94,     0,     0,   230,    27,    28,     0,    13,
      14,     0,     0,    19,    18,     0,    21,    23,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,     0,     0,   127,     0,   157,     0,    89,   217,   216,
       0,     0,     0,     0,     0,   218,     0,   220,   189,     0,
      71,    72,    74,    73,    76,    77,    78,    79,    80,    75,
      70,     0,     0,   198,   194,   196,   105,     0,   113,     0,
     175,   120,     0,    96,     0,     0,     0,   167,     0,    95,
       8,     0,    15,    12,    22,    35,    36,    37,    39,    40,
      42,    43,    47,    48,    45,    46,    50,    51,    53,    55,
      57,    59,    61,    63,     0,   165,     0,   129,   159,     0,
     211,   210,   213,   202,     0,     0,     0,     0,     0,   219,
     190,    34,    68,    67,    82,   115,     0,   178,     0,   119,
       0,   173,     0,   171,     0,   168,    97,    10,     0,   130,
       0,   212,     0,     0,     0,     0,     0,     0,     0,   114,
       0,   176,     0,   174,     0,   169,     0,    90,    65,     0,
     214,     0,     0,   192,   207,   191,   205,   201,   199,    69,
     177,   179,   170,   172,    91,     0,     0,   215,   209,   203,
     206,     0,     0,    92,   208,   204,   200
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,   -18,  -248,     3,    10,   -39,    20,    74,    77,
      71,    76,    79,    75,  -248,   -49,   -99,  -247,   -17,   -91,
    -122,    14,  -248,   226,  -248,    16,  -248,  -248,  -248,   213,
     220,   217,  -248,  -248,  -204,  -248,  -248,  -248,  -248,    80,
    -248,   -32,   -45,  -248,  -248,    -3,   -71,   259,  -248,    35,
     -15,   -41,  -219,  -248,    81,  -128,  -223,  -248,   -40,   268,
    -143,    83,  -248,  -248,    17,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,   253,  -248,  -248,  -248
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   101,   102,   103,   261,   104,   105,   106,   107,   108,
     109,   110,   147,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   148,   149,   303,   241,   150,
     125,   151,    33,    34,   174,    80,    36,    37,    38,    67,
      68,    69,    39,    40,    41,    42,    43,    44,   130,   131,
      45,    46,    47,    48,   133,   126,    57,    50,   256,   257,
     312,   313,   251,   308,   153,   154,   155,   156,   344,   345,
     157,   158,   159,   348,   296,   160,   361,   161,   292,   322,
     323,   162,     2,    51,    52,    53,    54,     3,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    77,   229,   170,   178,   211,    70,   124,   336,   220,
     186,    88,    89,    90,     6,    91,    92,    32,   294,    35,
     207,   128,   196,   197,   168,    77,    56,    56,   305,   245,
     307,   242,    55,   309,    70,    71,   179,   180,   111,     1,
     129,     4,   127,    78,   169,   318,   354,    56,    49,    49,
     208,   226,   198,   199,     5,   -25,   127,   181,   134,   182,
     152,   363,   127,    71,   330,   247,    32,    71,    35,    72,
     250,   338,    93,    94,   252,   176,   177,   242,   124,   184,
     306,   349,   331,   185,    56,    73,   264,   329,   294,   171,
     262,    95,   258,   243,   188,   246,   248,    97,    98,    99,
     100,   245,   343,   242,   337,   172,   173,    60,   259,   111,
     334,   351,   334,   249,   350,    65,   213,   284,   343,   299,
     214,   215,    58,   359,    59,   216,   335,    74,   352,    62,
      63,   293,   297,   298,   152,    82,    83,    84,    85,    86,
     260,   254,   152,   304,   242,   326,    66,   327,   250,   242,
     250,   242,   356,   250,   152,   127,   242,   272,   273,   274,
     275,   132,   192,   193,   319,   189,   190,   191,   194,   195,
     255,   265,   266,   267,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     295,     6,   302,   200,   201,   268,   269,   166,   167,   347,
      62,   293,   175,   360,   270,   271,   183,   250,   202,    77,
      88,    89,    90,     6,    91,    92,   187,   203,   152,   152,
     276,   277,   205,   301,   254,   206,   152,   204,   209,   339,
     212,   250,   245,   217,   366,   218,   219,   124,   227,   221,
     333,   222,   223,   250,   224,   -24,   253,   263,   286,   357,
      77,   310,   285,   255,   288,   289,   317,   311,   316,   242,
     295,   320,   324,   325,   340,   355,   341,   342,   111,   302,
     346,    93,    94,   364,   362,   280,   278,    79,   365,   302,
     279,   281,   283,   164,   328,   282,   163,   165,    61,   152,
      95,   315,    78,   353,   287,   332,    97,    98,    99,   100,
     301,   358,   290,    64,   291,    81,     0,     0,     0,   321,
     301,     0,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,     0,   152,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,     0,     0,     0,   152,     0,
       0,     0,     0,   152,    88,    89,    90,     6,    91,    92,
       0,     0,     0,     0,     0,   240,     0,   152,     0,   152,
      88,    89,    90,     6,    91,    92,     0,   135,   136,   137,
     138,   139,   140,     0,     0,   141,     0,   142,     0,     0,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   143,     0,    93,    94,    29,     0,     0,
       0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,     0,    95,     0,     0,     0,     0,     0,
      97,    98,    99,   100,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,   225,    97,    98,    99,   100,
       0,    88,    89,    90,     6,    91,    92,     0,     0,     0,
       0,   144,   145,   146,    88,    89,    90,     6,    91,    92,
       0,   135,   136,   137,   138,   139,   140,     0,     0,   141,
       0,   142,     0,     0,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,   143,     0,     0,
       0,    29,    93,    94,     0,    30,    31,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    94,     0,     0,     0,
       0,    95,     0,     0,    96,     0,     0,    97,    98,    99,
     100,     0,     0,     0,    95,     0,     0,     0,     0,     0,
      97,    98,    99,   100,     0,    88,    89,    90,     6,    91,
      92,     0,     0,     0,     0,   144,   145,   228,    88,    89,
      90,     6,    91,    92,     0,   135,   136,   137,   138,   139,
     140,     0,     0,   141,     0,   142,     0,     0,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   143,     0,     0,     0,    29,    93,    94,     0,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,    93,
      94,     0,     0,     0,     0,    95,     0,     0,   210,     0,
       0,    97,    98,    99,   100,     0,     0,     0,    95,     0,
       0,     0,     0,     0,    97,    98,    99,   100,     0,    88,
      89,    90,     6,    91,    92,     0,     0,     0,     0,   144,
     145,   244,    88,    89,    90,     6,    91,    92,     0,   135,
     136,   137,   138,   139,   140,     0,     0,   141,     0,   142,
       0,     0,     7,     8,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   143,     0,     0,     0,    29,
      93,    94,     0,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,    93,    94,     0,     0,     0,     0,    95,
       0,     0,     0,     0,     0,    97,    98,    99,   100,     0,
       0,     0,    95,     0,     0,     0,     0,     0,    97,    98,
      99,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   300,    88,    89,    90,     6,
      91,    92,     0,   135,   136,   137,   138,   139,   140,     0,
       0,   141,     0,   142,     0,     0,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,   143,
       0,     0,     0,    29,     0,     0,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
       0,     0,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   145,    88,
      89,    90,     6,    91,    92,     0,   135,   136,   137,   138,
     139,   140,     0,     0,   141,     0,   142,     0,     0,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   143,     0,     0,     0,    29,     0,     0,     0,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     0,     0,     0,     0,    97,    98,    99,   100,    88,
      89,    90,     6,    91,    92,     0,     0,     0,     0,     0,
     144,    63,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    29,     0,     0,     0,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,     6,     0,     0,     0,    97,    98,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
     144,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     6,     0,    75,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    60,    88,    89,    90,     6,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   314,     0,     0,     0,     0,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    60,     0,     0,     0,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,    93,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
       0,     0,    97,    98,    99,   100,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     6,
       0,     0,     0,    29,     0,     0,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     6,
       0,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    29
};

static const yytype_int16 yycheck[] =
{
       3,    46,   145,    74,    95,   127,    38,    56,     8,   137,
     109,     3,     4,     5,     6,     7,     8,     3,   222,     3,
      71,     8,    66,    67,    83,    70,    85,    85,   247,   157,
     249,    88,   102,   252,    66,    38,    64,    65,    56,    51,
      27,     8,    85,    46,   103,   102,   104,    85,    51,    52,
     101,   142,    96,    97,     0,    83,    85,    85,    61,    87,
      63,   104,    85,    66,    88,   103,    52,    70,    52,    88,
     169,   318,    64,    65,   103,    93,    94,    88,   127,    84,
     103,   328,   106,    88,    85,   104,   185,   306,   292,    88,
     181,    83,    88,   104,   112,   166,   167,    89,    90,    91,
      92,   229,   325,    88,   104,   104,   105,    50,   104,   127,
      88,   330,    88,   105,   106,    84,    84,   208,   341,   104,
      88,    84,    83,   342,    83,    88,   104,     8,   104,   104,
     105,   222,   223,   224,   137,    57,    58,    59,    60,    61,
      84,   173,   145,   242,    88,    84,    88,    84,   247,    88,
     249,    88,    84,   252,   157,    85,    88,   196,   197,   198,
     199,     6,    89,    90,   286,    93,    94,    95,    62,    63,
     173,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     222,     6,   241,    68,    69,   192,   193,     8,     8,   327,
     104,   292,   104,   346,   194,   195,    84,   306,    98,   254,
       3,     4,     5,     6,     7,     8,    83,    99,   221,   222,
     200,   201,    70,   241,   256,    72,   229,   100,    86,   320,
       8,   330,   360,   104,   362,   104,   104,   286,   104,    83,
     311,    83,    83,   342,    83,    83,     8,     8,   103,   340,
     295,   254,    86,   256,     6,    14,    86,     8,     8,    88,
     292,    83,     8,    84,   104,   336,    84,   103,   286,   318,
     105,    64,    65,   104,    19,   204,   202,    51,   106,   328,
     203,   205,   207,    70,   301,   206,    66,    70,    29,   292,
      83,   256,   295,   334,   214,   310,    89,    90,    91,    92,
     318,   341,   221,    35,   221,    52,    -1,    -1,    -1,   292,
     328,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,    -1,   327,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,   341,    -1,
      -1,    -1,    -1,   346,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,   103,    -1,   360,    -1,   362,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    64,    65,    50,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,   104,    89,    90,    91,    92,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,   104,   105,   106,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      -1,    20,    -1,    -1,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    50,    64,    65,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    86,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      89,    90,    91,    92,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,   104,   105,   106,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    -1,    20,    -1,    -1,    23,    24,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    50,    64,    65,    -1,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    89,    90,    91,    92,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,   104,
     105,   106,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    -1,    -1,    18,    -1,    20,
      -1,    -1,    23,    24,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    50,
      64,    65,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    -1,
      -1,    18,    -1,    20,    -1,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    -1,    20,    -1,    -1,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
     104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,     6,    -1,    -1,    -1,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
     104,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,     6,    -1,     8,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    50,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     6,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     6,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,   189,   194,     8,     0,     6,    23,    24,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    50,
      54,    55,   138,   139,   140,   142,   143,   144,   145,   149,
     150,   151,   152,   153,   154,   157,   158,   159,   160,   162,
     164,   190,   191,   192,   193,   102,    85,   163,    83,    83,
      50,   164,   104,   105,   176,    84,    88,   146,   147,   148,
     158,   162,    88,   104,     8,     8,   104,   159,   162,   140,
     142,   192,    57,    58,    59,    60,    61,   195,     3,     4,
       5,     7,     8,    64,    65,    83,    86,    89,    90,    91,
      92,   108,   109,   110,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   137,   162,    85,     8,    27,
     155,   156,     6,   161,   162,    10,    11,    12,    13,    14,
      15,    18,    20,    46,   104,   105,   106,   119,   132,   133,
     136,   138,   162,   171,   172,   173,   174,   177,   178,   179,
     182,   184,   188,   147,   146,   148,     8,     8,    83,   103,
     163,    88,   104,   105,   141,   104,   119,   119,   136,    64,
      65,    85,    87,    84,    84,    88,   133,    83,   119,    93,
      94,    95,    89,    90,    62,    63,    66,    67,    96,    97,
      68,    69,    98,    99,   100,    70,    72,    71,   101,    86,
      86,   137,     8,    84,    88,    84,    88,   104,   104,   104,
     172,    83,    83,    83,    83,   104,   136,   104,   106,   177,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
     103,   135,    88,   104,   106,   172,   163,   103,   163,   105,
     133,   169,   103,     8,   158,   162,   165,   166,    88,   104,
      84,   111,   136,     8,   133,   119,   119,   119,   121,   121,
     122,   122,   123,   123,   123,   123,   124,   124,   125,   126,
     127,   128,   129,   130,   136,    86,   103,   156,     6,    14,
     171,   178,   185,   136,   151,   158,   181,   136,   136,   104,
     106,   119,   132,   134,   133,   169,   103,   169,   170,   169,
     162,     8,   167,   168,   106,   166,     8,    86,   102,   137,
      83,   181,   186,   187,     8,    84,    84,    84,   135,   169,
      88,   106,   167,   163,    88,   104,     8,   104,   134,   136,
     104,    84,   103,   173,   175,   176,   105,   172,   180,   134,
     106,   169,   104,   168,   104,   163,    84,   136,   175,   169,
     177,   183,    19,   104,   104,   106,   172
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   109,   109,   109,   110,
     110,   110,   110,   110,   110,   111,   112,   113,   114,   114,
     115,   116,   116,   117,   118,   118,   119,   119,   119,   119,
     120,   120,   120,   120,   121,   121,   121,   121,   122,   122,
     122,   123,   123,   123,   124,   124,   124,   124,   124,   125,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   136,   136,   137,   138,   138,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   141,   141,   142,   143,
     143,   144,   144,   145,   146,   146,   147,   147,   147,   147,
     148,   149,   149,   149,   149,   149,   150,   150,   150,   150,
     150,   151,   151,   152,   153,   153,   153,   154,   155,   155,
     156,   156,   157,   158,   158,   159,   159,   159,   159,   159,
     159,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   161,   161,
     162,   162,   163,   163,   163,   163,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   169,   170,   170,
     171,   172,   172,   173,   173,   173,   173,   173,   173,   174,
     174,   175,   175,   176,   176,   177,   177,   178,   178,   179,
     180,   180,   181,   181,   182,   183,   183,   184,   184,   184,
     185,   185,   186,   186,   187,   187,   188,   188,   188,   188,
     188,   189,   190,   190,   191,   191,   192,   192,   193,   194,
     194,   195,   195,   195,   195,   195
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     1,     3,     2,     2,     1,     1,     1,     2,     2,
       1,     2,     3,     2,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     2,     2,     2,     4,
       6,     7,     8,     2,     3,     4,     2,     3,     2,     1,
       1,     2,     3,     3,     2,     3,     2,     1,     2,     1,
       1,     1,     3,     4,     6,     5,     1,     2,     3,     5,
       4,     1,     2,     1,     1,     1,     1,     4,     1,     3,
       4,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       1,     2,     2,     3,     3,     4,     1,     1,     2,     3,
       4,     1,     3,     1,     2,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     1,     2,     3,     1,     2,     1,     2,     5,
       3,     1,     1,     4,     7,     0,     1,     5,     7,     6,
       1,     1,     1,     0,     2,     3,     2,     2,     2,     3,
       2,     2,     1,     1,     1,     2,     1,     1,     2,     2,
       5,     1,     1,     1,     1,     1
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
  case 67:
#line 169 "parser.y"
        { printf("EXPRESSION_STATEMENT\n");}
#line 1925 "parser.c"
    break;

  case 98:
#line 211 "parser.y"
                                            {(yyval.str)=(yyvsp[-1].str);}
#line 1931 "parser.c"
    break;

  case 99:
#line 214 "parser.y"
                                     {printf("FUNCTION_DEFINITION [%s]\n", (yyvsp[0].str)); (yyval.str)=(yyvsp[0].str);}
#line 1937 "parser.c"
    break;

  case 100:
#line 215 "parser.y"
                                      {printf("FUNCTION_DEFINITION [%s]\n", (yyvsp[0].str));(yyval.str)=(yyvsp[0].str);}
#line 1943 "parser.c"
    break;

  case 101:
#line 218 "parser.y"
                                                                       { (yyval.str) = (yyvsp[-1].str);}
#line 1949 "parser.c"
    break;

  case 102:
#line 219 "parser.y"
                                                                { (yyval.str) = (yyvsp[-2].str);}
#line 1955 "parser.c"
    break;

  case 103:
#line 222 "parser.y"
                                                     { (yyval.str) = (yyvsp[-1].str);}
#line 1961 "parser.c"
    break;

  case 117:
#line 246 "parser.y"
        { printf("DECLARATION [%s] , Type: %s\n", (yyvsp[0].str), (yyvsp[-1].str));}
#line 1967 "parser.c"
    break;

  case 118:
#line 248 "parser.y"
        { printf("DECLARATION [%s] , Type: %s\n", (yyvsp[-1].str), (yyvsp[-2].str));}
#line 1973 "parser.c"
    break;

  case 119:
#line 250 "parser.y"
        { printf("DECLARATION [%s] , Type: %s , Initialized\n", (yyvsp[-3].str), (yyvsp[-4].str));}
#line 1979 "parser.c"
    break;

  case 120:
#line 252 "parser.y"
        { printf("DECLARATION [%s] , Type: %s , Initialized\n", (yyvsp[-2].str), (yyvsp[-3].str));}
#line 1985 "parser.c"
    break;

  case 121:
#line 254 "parser.y"
                                     { (yyval.str) = (yyvsp[0].str);}
#line 1991 "parser.c"
    break;

  case 122:
#line 255 "parser.y"
                                    { (yyval.str) = (yyvsp[0].str);}
#line 1997 "parser.c"
    break;

  case 189:
#line 359 "parser.y"
                            {printf("COMPOUND_STATEMENT\n");}
#line 2003 "parser.c"
    break;

  case 190:
#line 360 "parser.y"
                             {printf("COMPOUND_STATEMENT\n");}
#line 2009 "parser.c"
    break;

  case 191:
#line 362 "parser.y"
                                                         {printf("COMPOUND_STATEMENT\n");}
#line 2015 "parser.c"
    break;

  case 200:
#line 376 "parser.y"
                                                   {printf("IF_ELSE_STATEMENT\n");}
#line 2021 "parser.c"
    break;

  case 201:
#line 377 "parser.y"
                {printf("IF_STATEMENT\n");}
#line 2027 "parser.c"
    break;

  case 207:
#line 392 "parser.y"
        {printf("WHILE_STATEMENT\n");}
#line 2033 "parser.c"
    break;

  case 209:
#line 395 "parser.y"
        {printf("FOR_STATEMENT\n");}
#line 2039 "parser.c"
    break;

  case 218:
#line 408 "parser.y"
                 {printf("RETURN_STATEMENT\n");}
#line 2045 "parser.c"
    break;

  case 219:
#line 409 "parser.y"
                            {printf("RETURN_STATEMENT\n");}
#line 2051 "parser.c"
    break;

  case 225:
#line 492 "parser.y"
        {(yyval.str) = (yyvsp[-2].str); /*haal shader type naar hier*/}
#line 2057 "parser.c"
    break;

  case 226:
#line 494 "parser.y"
                                          {(yyval.str)=(yyvsp[0].str);}
#line 2063 "parser.c"
    break;

  case 227:
#line 495 "parser.y"
                  {(yyval.str) = "";}
#line 2069 "parser.c"
    break;

  case 228:
#line 497 "parser.y"
                                                                        {(yyval.str)=(yyvsp[-1].str);}
#line 2075 "parser.c"
    break;

  case 229:
#line 499 "parser.y"
                             {printf("CLASS [%s]\n", (yyvsp[0].str));}
#line 2081 "parser.c"
    break;

  case 230:
#line 501 "parser.y"
    { printf("CLASS [%s], Type: %s\n", (yyvsp[-3].str), (yyvsp[-1].str));  (yyval.str)=(yyvsp[-1].str);}
#line 2087 "parser.c"
    break;

  case 231:
#line 503 "parser.y"
                          { (yyval.str) = "rt_primitive";}
#line 2093 "parser.c"
    break;

  case 232:
#line 504 "parser.y"
               { (yyval.str) = "rt_camera";}
#line 2099 "parser.c"
    break;

  case 233:
#line 505 "parser.y"
                 { (yyval.str) = "rt_material";}
#line 2105 "parser.c"
    break;

  case 234:
#line 506 "parser.y"
                { (yyval.str) = "rt_texture";}
#line 2111 "parser.c"
    break;

  case 235:
#line 507 "parser.y"
              { (yyval.str) = "rt_light";}
#line 2117 "parser.c"
    break;


#line 2121 "parser.c"

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
#line 508 "parser.y"

 
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
