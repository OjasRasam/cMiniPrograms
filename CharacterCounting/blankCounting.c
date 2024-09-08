#include <stdio.h>

int main () {

    int c, blank;
    blank = 0;

    while( (c = getchar()) != EOF) {
        if ( c == ' '){
            ++blank;
            printf("There are %d blanks\n", blank);
        }
    }

    return 0;
}