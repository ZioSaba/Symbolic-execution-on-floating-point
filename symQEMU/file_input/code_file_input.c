#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#define MAX_BUF_SIZE 100

int foo(char* buf) {
    
    char* root = "root";
    char* user = "user";
    char* num = "10";

    if (!memcmp(buf, root, strlen(root))){
        printf("Hello, superuser\n");
        return 0;
    }

    else if (!memcmp(buf, user, strlen(user))){
        printf("Hello, user\n");
        return 1;
    }

    /*
    else if (!memcmp(buf, num, strlen(num))){
        printf("HAI INSERITO 10\n");
        return 10;
    }
    */
    
    int numero = *((int*) buf);
    if (numero == 10){
        printf("HAI INSERITO 10\n");
        return 10;
    }
    

    return 123456789;    
}

int main() {
    
    int desc = open("./input/input.dat", O_RDONLY);
    if (desc == -1){
        printf("Cannot open input file...");
        return -1;
    }

    char buf[MAX_BUF_SIZE]; //MAX_BUF_SIZE=100

    int num_bytes = 0;
    int count = 0;

    num_bytes = read(desc, buf, 5);
    printf("%d", foo(buf));

    if(close(desc) == -1){
        printf("Cannot close input file...");
        return -1;
    }
    
    return 0;
}