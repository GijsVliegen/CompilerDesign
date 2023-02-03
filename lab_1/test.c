#include <stdio.h>

char * keyWordNames[] = {"break","continue","do","for","while",
"switch","case","default","if","else","return","struct","attribute",
"const","uniform","varying","buffer","shared","coherent","volatile",
"restrict","readonly","writeonly","layout","centroid","flat","smooth",
"noperspective","patch","sample","subroutine","in","out","inout",
"invariant","precise","discard","lowp","mediump","highp","precision",
"class","illuminance","ambient","public","private","scratch",
"rt_Primitive","rt_Camera","rt_Material","rt_Texture","rt_Light"};

int main(){
    char * colour = "rt_Ma\nter\nial";
    int counter = 0;
    printf("size of colour = %d\n", strlen(colour));
    int i;
    for(i = 0; i < strlen(colour); i++){
        if (colour[i] == '\n'){
            counter++;
        }  
    }
    printf("result = %d\n", counter);
    return 0;
}