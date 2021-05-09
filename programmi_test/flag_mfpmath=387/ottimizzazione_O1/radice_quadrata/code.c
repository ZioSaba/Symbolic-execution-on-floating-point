#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double foo (double a){
    double res = sqrt(a);
    return res;
}

void main (int argc, char* argv[]){
    double a = argc;
    printf("%lf\n", foo(a));
    return;    
}