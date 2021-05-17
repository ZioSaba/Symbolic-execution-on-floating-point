#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>

#define MAX_BUF_SIZE 10

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
    

    return 1234564789;    
}

int main() {
  
    char* buf = malloc(sizeof(char)*10);
    
    if (fgets(buf, 10, stdin) == NULL){
        printf("Error, aborting...\n");
        return 1;
    }

    //printf("%ld\n", strlen(buf)-1);

    printf("%d\n", foo(buf));
    
    free(buf);
    
    return 0;
}