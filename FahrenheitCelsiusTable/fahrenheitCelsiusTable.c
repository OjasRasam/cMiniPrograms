// #include <stdio.h>

// int main(){
//     int fahr, celsius;
//     int lower, upper, step;

//     lower = 0;
//     upper = 300;
//     step = 20;

//     fahr = lower;

//     while(fahr <= upper){
//         celsius = 5/9 * (fahr-32);
//         printf("%d\t%d\n", fahr, celsius);
//         fahr = fahr + step;
//     }
// }

#include <stdio.h>

int main(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while(fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%10d %10d\n", fahr, celsius);
        fahr = fahr + step;
    }
}