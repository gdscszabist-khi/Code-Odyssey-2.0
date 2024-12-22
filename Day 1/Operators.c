#include <stdio.h>
#include <string.h>

int main(){

    //Examples of Arithmetic Operators
    int a = 10, b = 20, c;
    c = a + b; // Addition
    printf("a + b = %d\n", c);

    c = a - b; // Subtraction
    printf("a - b = %d\n", c);

    c = a * b; // Multiplication
    printf("a * b = %d\n", c);

    c = b / a; // Division
    printf("b / a = %d\n", c);

    c = b % a; // Modulus
    printf("b %% a = %d\n", c);


    //****----****


    //Examples of Assignment Operators
    a = 10;
    c = 20;

    c = a; // Assigning the value of a to c
    printf("c = %d\n", c); // Output: c = 10

    c += a; // Equivalent to c = c + a
    printf("c += a: %d\n", c); // Output: c += a: ?

    c -= a; // Equivalent to c = c - a
    printf("c -= a: %d\n", c); // Output: c -= a: ?

    c *= a; // Equivalent to c = c * a
    printf("c *= a: %d\n", c); // Output: c *= a: ?

    c /= a; // Equivalent to c = c / a
    printf("c /= a: %d\n", c); // Output: c /= a: ?


    //****----****


    //Examples of Logical Operators
    int x = 5, y = 10, z = 15;

    // Logical AND
    if (x > y && x > z) {
        printf("x is the largest number.\n");
    }

    // Logical OR
    if (x > y || x > z) {
        printf("x is greater than at least one of the other numbers.\n");
    }

    // Logical NOT
    if (!(x > y)) {
        printf("x is not greater than y.\n");
    }


    //****----****


    //Examples of Comparison Operators
    int num1 = 10, num2 = 20;

    num1 == num2; // Equal to (False)
    num1 != num2; // Not equal to (True)
    num1 > num2; // Greater than (False)
    num1 < num2; // Less than (True)
    num1 >= num2; // Greater than or equal to (False)
    num1 <= num2; // Less than or equal to (True)


    return 0;
}