// INPUT - AAA  A  AA A AA AAAA    A
// OUTPUT- AAA A AA A AA AAAA A

#include <stdio.h>

int main() {

    int current, previous;
    previous = 0;

    while( (current = getchar()) != EOF ) {
        if(current == ' ' && previous == ' '){
            continue;
        }
        previous = current;
        printf("%c", current);

    }

    return 0;
}