#include <stdio.h>

int main() {
    int c;

    while((c = getchar()) != EOF) {
        putchar(c);
        // Print the EOF value after the loop
    }

    // Print EOF value after exiting the loop
    printf("This is the EOF value: %d\n", EOF);

    return 0;
}
