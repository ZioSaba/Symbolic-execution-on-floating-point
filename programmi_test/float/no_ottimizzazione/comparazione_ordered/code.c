#include <stdio.h>
#include <stdlib.h>

int comparazione (float x, float y){
    if (x > y)
        return 1;
    if (x == y)
        return 0;
    if (x < y)
        return -1;
}


void main (){
    float a = 10.000;
    float b = 20.000;
    printf("%d\n", comparazione(a, b));
    return;    
}