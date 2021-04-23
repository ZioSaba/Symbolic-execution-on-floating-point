#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>

int foo(char* buf) {
    
    char* root = "root";
    char* user = "user";

    if (!memcmp(buf, root, strlen(root))){
        printf("Hello, superuser\n");
        return 0;
    }

    else if (!memcmp(buf, user, strlen(user))){
        printf("Hello, user\n");
        return 1;
    }

    else {
        printf("Hello, %s", buf);
        return 2;
    }
    
;
}

int main() {
    char* buf = malloc(sizeof(char)*10);
    
    if (fgets(buf, 10, stdin) == NULL){
        printf("Error, aborting...\n");
        return 1;
    }

    //printf("%s", buf);
    //printf("%ld\n", strlen(buf)-1);

    printf("%d\n", foo(buf));
    
    free(buf);
    return 0;
}