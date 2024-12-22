#include <stdio.h>

int main() {
    
    // For loop example
    printf("For loop example:\n");
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    // While loop example
    printf("\nWhile loop example:\n");
    int j = 0;
    while (j < 5) {
        printf("j = %d\n", j);
        j++;
    }

    // Do-while loop example
    printf("\nDo-while loop example:\n");
    int k = 0;
    do {
        printf("k = %d\n", k);
        k++;
    } while (k < 5);

    return 0;
}