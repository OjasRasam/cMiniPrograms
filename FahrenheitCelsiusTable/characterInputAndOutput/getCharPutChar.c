// // #include <stdio.h>



// // /*Copy input to ouput; 1st version*/

// // // int main(){
// // //     int c;
    
// // //     c = getchar();
// // //     while (c != EOF) {
// // //         putchar(c);
// // //         c = getchar();
// // //     }
// // //     return 0;
// // // }


// // // Copy input to output; While loop version

// // int main() {
// //     int c;

// //     while((c = getchar()) != EOF){
// //         putchar(c);
        
// //     }
// //     printf("This is the EOF value : %d", EOF );
// //     return 0;
// // }


// #include <stdio.h>

// int main() {
//     int c;

//     while((c = getchar()) != EOF) {
//         putchar(c);
//         // Print the EOF value after the loop
//     }

//     // Print EOF value after exiting the loop
//     printf("This is the EOF value: %d\n", EOF);

//     return 0;
// }



#include <stdio.h>

int main() {
    printf("This is how EOF is represented %d", EOF);
    return 0;
}