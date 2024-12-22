#include <stdio.h>
#include <string.h>

int main(){

    //Conditional Statements in C

    //Examples of if Statement
    int num = 10;

    if (num > 0) {
        printf("%d is a positive number.\n", num);
    }

    //Examples of if-else Statement
    int number = -5;

    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else {
        printf("%d is a negative number.\n", number);
    }

    //Examples of if-else-if Statement
    int value = 0;

    if (value > 0) {
        printf("%d is a positive number.\n", value);
    } else if (value < 0) {
        printf("%d is a negative number.\n", value);
    } else {
        printf("%d is zero.\n", value);
    }


    //Examples of Nested if Statement
    int x = 10, y = 20;

    if (x == 10) {
        if (y == 20) {
            printf("x is 10 and y is 20.\n");
        }
    }


    //Examples of switch Statement
    int choice;

    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("You chose option 1.\n");
            break;
        case 2:
            printf("You chose option 2.\n");
            break;
        case 3:
            printf("You chose option 3.\n");
            break;
        default:
            printf("Invalid choice! Please choose a valid option.\n");
    }

    return 0;
}