#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int foo(int a){
    if (a == 10)
        return 0;
    else if (a > 10)
        return 1;
    else
        return -1;

}


int main(int argc, char* argv[]){
    int x;
    if (read(STDIN_FILENO, &x, sizeof(x)) != sizeof(x)){
        printf("ERRORE\n");
        return -1;
    }
    printf("%d\n", foo(x));
    return 0;
}