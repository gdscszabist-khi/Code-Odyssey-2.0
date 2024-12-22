#include <stdio.h>
#include <string.h>

int main() {
    // Step 1: Variable Declaration
    char customer_name[50], pizza_type[20], pizza_size[10], topping_name[20];
    int pizza_choice, size_choice, topping_choice;
    float base_price = 0, size_price = 0, topping_price = 0, total_price;

    // Step 2: Input Customer Name
    printf("Enter your name: ");
    fgets(customer_name, sizeof(customer_name), stdin);
    customer_name[strcspn(customer_name, "\n")] = '\0'; // Remove trailing newline

    // Step 3: Pizza Type Selection Using Switch
    printf("\nSelect Pizza Type:\n");
    printf("1. Margherita ($10)\n");
    printf("2. Pepperoni ($12)\n");
    printf("3. BBQ Chicken ($15)\n");
    printf("Enter your choice: ");
    scanf("%d", &pizza_choice);

    switch (pizza_choice) {
        case 1:
            strcpy(pizza_type, "Margherita");
            base_price = 10;
            break;
        case 2:
            strcpy(pizza_type, "Pepperoni");
            base_price = 12;
            break;
        case 3:
            strcpy(pizza_type, "BBQ Chicken");
            base_price = 15;
            break;
        default:
            printf("Invalid choice! Exiting...\n");
            return 0;
    }

    // Step 4: Pizza Size Selection
    printf("\nSelect Pizza Size:\n");
    printf("1. Small (No additional cost)\n");
    printf("2. Medium (+$2)\n");
    printf("3. Large (+$4)\n");
    printf("Enter your choice: ");
    scanf("%d", &size_choice);

    switch (size_choice) {
        case 1:
            strcpy(pizza_size, "Small");
            size_price = 0;
            break;
        case 2:
            strcpy(pizza_size, "Medium");
            size_price = 2;
            break;
        case 3:
            strcpy(pizza_size, "Large");
            size_price = 4;
            break;
        default:
            printf("Invalid choice! Exiting...\n");
            return 0;
    }

    // Step 5: Additional Toppings Using Nested Conditions
    printf("\nDo you want additional toppings? (1 for Yes / 0 for No): ");
    int additional_topping;
    scanf("%d", &additional_topping);

    if (additional_topping == 1) {
        printf("\nSelect Topping:\n");
        printf("1. Beef (+$5)\n");
        printf("2. Extra Cheese (+$3)\n");
        printf("3. Extra Veggies (+$2)\n");
        printf("Enter your choice: ");
        scanf("%d", &topping_choice);

        if (topping_choice == 1) {
            strcpy(topping_name, "Beef");
            topping_price = 5;
        } else if (topping_choice == 2) {
            strcpy(topping_name, "Extra Cheese");
            topping_price = 3;
        } else if (topping_choice == 3) {
            strcpy(topping_name, "Extra Veggies");
            topping_price = 2;
        } else {
            printf("Invalid topping choice! No additional topping selected.\n");
            topping_price = 0;
            strcpy(topping_name, "None");
        }
    } else {
        topping_price = 0;
        strcpy(topping_name, "None");
    }

    // Step 6: Calculate Total Price
    total_price = base_price + size_price + topping_price;

    printf("\n");

    //loop for centered pyramid of asterisks 3 rows
    int i, j, n;
    n = 3; //number of rows
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n - i; ++j) {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // Step 7: Display Bill
    printf("\n--- Bill Details ---\n");
    printf("Customer Name: %s\n", customer_name);
    printf("Pizza Type: %s\n", pizza_type);
    printf("Pizza Size: %s\n", pizza_size);
    printf("Additional Topping: %s\n", topping_name);
    printf("Base Price: $%.2f\n", base_price);
    printf("Size Price: $%.2f\n", size_price);
    printf("Topping Price: $%.2f\n", topping_price);
    printf("Total Price: $%.2f\n", total_price);


    printf("\n");

    //loop for centered reverse pyramid of asterisks 3 rows
    n = 3; //number of rows
    for (i = n; i >= 1; --i) {
        for (j = 0; j < n - i; ++j) {
            printf("  ");
        }
        for (j = i; j <= 2 * i - 1; ++j) {
            printf("* ");
        }
        for (j = 0; j < i - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
