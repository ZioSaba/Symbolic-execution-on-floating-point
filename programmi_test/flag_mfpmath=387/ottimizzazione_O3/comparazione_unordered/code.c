#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main (){
    float a = 10.000;
    float b = NAN;
    printf("%d\n", isunordered(a, b));
    return;    
}