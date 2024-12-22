#include <stdio.h>

int main() {

    // Nested loop example: Print a 5x5 matrix of asterisks
    /*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    */

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("* ");
        }
        printf("\n");
    }

    
    printf("\n\n\n");

    // Nested loop example: Print a right-angled triangle of asterisks
    /*
    *
    * *
    * * *
    * * * *
    * * * * *
    */

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n\n");

    // Nested loop example: Print a centered pyramid of asterisks
    /*

        * 
      * * * 
    * * * * *


    */

    int n = 3; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}