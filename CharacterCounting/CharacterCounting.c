#include <stdio.h>

int main() {

    long nc;
    nc = 0;
    char c;


    while ((c = getchar()) != EOF ){
        if(c != '\n'){
            nc = nc + 1;
            printf("Total characters = %ld\n", nc);
        }
    }

    return 0;
}