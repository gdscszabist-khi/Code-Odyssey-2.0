#include <stdio.h>
#include <string.h>

int main(){

    //Examples of a variable declaration:
    int age; 
    float price; 
    char grade; 

    //Examples of variable initialization:
    int age = 25; 
    float price = 10.5; 
    char grade = 'A'; 

    //Examples of variable assignment:
    age = 30; 
    price = 15.75; 
    grade = 'B'; 

    //Arrays for Strings
    char name[20] = "John Doe"; // Initializing the array with a string
    char address[50]; // Declaring an array without initializing it

    //Assigning a string to the array
    strcpy(address, "123 Main Street"); // Assigning a string to the array

    //Printing the variables
    printf("Age: %d\n", age);
    printf("Price: %.2f\n", price);
    printf("Grade: %c\n", grade);

    //Printing the arrays
    printf("Name: %s\n", name);
    printf("Address: %s\n", address);

    //scanf() function to read input from the user
    printf("Enter your age: ");
    scanf("%d", &age); // Reading an integer input from the user

    printf("Enter the price: ");
    scanf("%f", &price); // Reading a float input from the user

    printf("Enter your grade: ");
    scanf(" %c", &grade); // Reading a character input from the user

    printf("Enter your name: ");
    scanf("%s", name); // Reading a string input from the user

    printf("Enter your address: ");
    scanf(" %[^\n]", address); // Reading a string with spaces from the user

    //Printing the updated variables
    printf("Age: %d\n", age);
    printf("Price: %.2f\n", price);
    printf("Grade: %c\n", grade);

    //Printing the updated arrays
    printf("Name: %s\n", name);
    printf("Address: %s\n", address);

    return 0;
}