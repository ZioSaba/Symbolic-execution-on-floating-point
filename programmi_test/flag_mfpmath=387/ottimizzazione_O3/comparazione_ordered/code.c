#include <stdio.h>
#include <stdlib.h>

int foo(float x, float y){
    if (x > y)
        return 1;
    if (x == y)
        return 0;
    if (x < y)
        return -1;  
}

int main (int argc, char* argv[]){
    float x = 10.000;
    float y = argc;
    int res = foo(x, y);
    return res;
}