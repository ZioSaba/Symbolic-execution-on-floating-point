#include <stdio.h>
#include <stdlib.h>

int foo (float a){
    int x = a;
    return x;
}

void main (){
    float a = 10.514;
    int res = foo(a);
    printf("%d \n", res);
    return;    
}