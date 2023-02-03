/* Gijs Vliegen 0484290 */
%option noyywrap noinput nounput
%x IN_COMMENT

%{

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Global variable for the line number
int line_number = 1;

char * keyWordNames[] = {"break","continue","do","for","while",
"switch","case","default","if","else","return","struct","attribute",
"const","uniform","varying","buffer","shared","coherent","volatile",
"restrict","readonly","writeonly","layout","centroid","flat","smooth",
"noperspective","patch","sample","subroutine","in","out","inout",
"invariant","precise","discard","lowp","mediump","highp","precision",
"class","illuminance","ambient","public","private","scratch",
"rt_Primitive","rt_Camera","rt_Material","rt_Texture","rt_Light"};

// If we're using bison (2nd assignment), include the generated header.
// Otherwise, manually define a couple of things that bison would usually
// handle for us.
#ifdef FOR_PARSER
# include "parser.h"
#else

// Declare type for semantic value
typedef union {
    bool bval;
    int ival;
    double fval;
    char *str;
} lex_val;
lex_val yylval;

// Declare tokens
#define TOKENS \
 X(BOOL) \
 X(INT) \
 X(FLOAT) \
 X(TYPE) \
 X(STATE) \
 X(IDENTIFIER) \
 X(ERROR) \
 X(BREAK) \
 X(CONTINUE) \
 X(DO) \
 X(FOR) \
 X(WHILE) \
 X(SWITCH) \
 X(CASE) \
 X(DEFAULT) \
 X(IF) \
 X(ELSE) \
 X(RETURN) \
 X(STRUCT) \
 X(ATTRIBUTE) \
 X(CONST) \
 X(UNIFORM) \
 X(VARYING) \
 X(BUFFER) \
 X(SHARED) \
 X(COHERENT) \
 X(VOLATILE) \
 X(RESTRICT) \
 X(READONLY) \
 X(WRITEONLY) \
 X(LAYOUT) \
 X(CENTROID) \
 X(FLAT) \
 X(SMOOTH) \
 X(NOPERSPECTIVE) \
 X(PATCH) \
 X(SAMPLE) \
 X(SUBROUTINE) \
 X(IN) \
 X(OUT) \
 X(INOUT) \
 X(INVARIANT) \
 X(PRECISE) \
 X(DISCARD) \
 X(LOWP) \
 X(MEDIUMP) \
 X(HIGHP) \
 X(PRECISION) \
 X(CLASS) \
 X(ILLUMINANCE) \
 X(AMBIENT) \
 X(PUBLIC) \
 X(PRIVATE) \
 X(SCRATCH) \
 X(RT_PRIMITIVE) \
 X(RT_CAMERA) \
 X(RT_MATERIAL) \
 X(RT_TEXTURE) \
 X(RT_LIGHT) \
 X(LEFT_OP) \
 X(RIGHT_OP) \
 X(INC_OP) \
 X(DEC_OP) \
 X(LE_OP) \
 X(GE_OP) \
 X(EQ_OP) \
 X(NE_OP) \
 X(AND_OP) \
 X(OR_OP) \
 X(XOR_OP) \
 X(MUL_ASSIGN) \
 X(DIV_ASSIGN) \
 X(ADD_ASSIGN) \
 X(MOD_ASSIGN) \
 X(LEFT_ASSIGN) \
 X(RIGHT_ASSIGN) \
 X(AND_ASSIGN) \
 X(XOR_ASSIGN) \
 X(OR_ASSIGN) \
 X(SUB_ASSIGN)

enum {
    _MAXCHAR = 255,
#define X(token) token,
    TOKENS
#undef X
} token;

#endif /* FOR_PARSER */

%}

 /* TODO Helper definitions here  */
 
NonNeg	[1-9]
Number	[0-9]
NonNegOctal [1-7]
Octal	[0-7]
HexLetter	(?i:[a-f])
Letter	(?i:[a-z])
N 	[2-4]
PowerNotation 	[eE][+-]?{NonNeg}{Number}*

Bool	"true"|"false"

Int		({NonNeg}{Number}+|{Number})u?
Hex		"0x"({Number}|{HexLetter})*u?
Oct		{Octal}*u?

FloatThree	"."{Number}+{PowerNotation}?
FloatTwo 	({NonNeg}{Number}+|{Number})"."{Number}*{PowerNotation}?
FloatOne	{NonNeg}{Number}*{PowerNotation}
Float		({FloatOne}|{FloatTwo}|{FloatThree})("f"|"lf")?

Identifier 	({Letter}|"_")({Letter}|{Number}|"_")*
Type	"void"|"bool"|"u"?"int"|"float"|"double"|([dbi]?"vec"{N})|(d?"mat"{N}("x"{N})?)|"color"
State		"rt_"{Identifier}

CKeyWord 	break|continue|do|for|while|switch|case|default|if|else|return|struct
GLSLKeyWord 	attribute|const|uniform|varying|buffer|shared|coherent|volatile|restrict|readonly|writeonly|layout|centroid|flat|smooth|noperspective|patch|sample|subroutine|in|out|inout|invariant|precise|discard|lowp|mediump|highp|precision
RTSLKeyWord 	class|illuminance|ambient|public|private|scratch
RTSLInterfaceType	rt_Primitive|rt_Camera|rt_Material|rt_Texture|rt_Light
KeyWord	{CKeyWord}|{GLSLKeyWord}|{RTSLKeyWord}|{RTSLInterfaceType}

SingleChar	 "("|")"|"["|"]"|"{"|"}"|"."|","|";"|"+"|"-"|"~"|"!"|"*"|"/"|"%"|"<"|">"|"&"|"^"|"|"|"?"|":"|"="

MultipleLineComment "/*"([\x00-\xFF]{-}["*/"])*"*/" 

%%

{MultipleLineComment}  {for(int i = 0; i < strlen(yytext); i++){
       			if (yytext[i] == '\n'){
            				line_number++;
        			}  
    			}}

"//".*	/*eat up one-line comments */

class                   return CLASS;

{Int}   	{ yylval.ival = atoi(yytext); return INT; }
{Oct}   	{ int oct = atoi(yytext);
		int dec = 0;
    		int yeet = 1;
    		while(oct > 0) {
        	    dec += (oct%10) * yeet;
        	    yeet *= 8;
        	    oct/=10;
    		}
		yylval.ival = dec; return INT; }
		
{Hex}   	{ char* hex = strdup(yytext);
		int dec = 0;
		int yeet = 1;
		int index = strlen(hex)-1;
		while(index >= 0) {
		    int val = 0;
		    switch (hex[index]){
			case 'a': 
			case 'A': val = 10; break;
			case 'b':
			case 'B': val = 11; break;
		 	case 'c':
			case 'C': val = 12; break;
			case 'd':
			case 'D': val = 13; break;
			case 'e':
			case 'E': val = 14; break;
			case 'f':
			case 'F': val = 15; break;
			default: val = atoi(hex + index * sizeof(char));
		    }
		    index--;
		    dec += val * yeet;
		    yeet *= 16;
		 }
		 yylval.ival = dec;return INT; }


{Bool}		{ yylval.bval = strcmp(yytext,"false"); return BOOL; }

{KeyWord}    {	int i;
    		for(i = 0; i < sizeof(keyWordNames); i++){
        		if (0 == strcmp(yytext, keyWordNames[i])){
            			break;
        		}  
    		}
    		return i + 265;}

{Type} 	{ yylval.str = strdup(yytext); return TYPE; }

{Float}        { yylval.fval = atof(yytext); return FLOAT; } //{printf( "A float: %s (%g)\n", yytext, atof(yytext));}

{State}	{ yylval.str = strdup(yytext); return STATE; }

{Identifier}        { yylval.str = strdup(yytext); return IDENTIFIER; }

{SingleChar}	{ return (int)(*yytext);}

[ \t]+          /* eat up whitespace */

\n		line_number++;		

.           printf( "Unrecognized character: %s\n", yytext );

"<<"	return LEFT_OP;
">>"	return RIGHT_OP;
"++"	return INC_OP;
"--" 	return DEC_OP;
"<="	return LE_OP;
">="	return GE_OP;
"=="	return EQ_OP;
"!="	return NE_OP;
"&&"	return AND_OP;
"||"	return OR_OP;
"^^"	return XOR_OP;
"*="	return MUL_ASSIGN;
"/="	return DIV_ASSIGN;
"+="	return ADD_ASSIGN;
"%="	return MOD_ASSIGN;
"<<="	return LEFT_ASSIGN;
">>="	return RIGHT_ASSIGN;
"&="	return AND_ASSIGN;
"^="	return XOR_ASSIGN;
"|="	return OR_ASSIGN;
"-="	return SUB_ASSIGN;


%%

// Generate main code only for standalone compilation,
// but not if we're using bison (2nd assignment)
#ifndef FOR_PARSER
static const char *token_name(int token) {
    switch (token) {
#define X(token) \
        case token: \
            return #token;
TOKENS
#undef X
    }
    return NULL;
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

    int token;
    while ((token = yylex())) {
		printf("Line%3d:    ", line_number);
        if (token < 256) {
            printf("\"%c\"\n", token);
        } else {
            const char *name = token_name(token);
            if (!name) {
                printf("???\n");
            } else {
                switch (token) {
                    default:
                        printf("%s\n", name);
                        break;
                    case BOOL:
                        printf("%s [%s]\n", name, yylval.bval ? "true" : "false");
                        break;
                    case INT:
                        printf("%s [%d]\n", name, yylval.ival);
                        break;
                    case FLOAT:
                        printf("%s [%f]\n", name, yylval.fval);
                        break;
                    case TYPE:
                    case STATE:
                    case IDENTIFIER:
                    case ERROR:
                        printf("%s [%s]\n", name, yylval.str);
                        free(yylval.str);
                        break;
                }
            }
        }
    }

    return 0;
}
#endif /* FOR_PARSER */

