#include <stdio.h>

/*Copy input to ouput; 1st version*/

int main(){
    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}