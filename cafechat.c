#include <stdio.h>
#include <string.h>

// Define a structure to represent menu items
typedef struct {
    char name[50];
    int price;
} MenuItem;

// Function to display the menu
void displayMenu(MenuItem menu[], int itemCount) {
    printf("\nMENU\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d. %s - $%d\n", i + 1, menu[i].name, menu[i].price);
    }
}

// Function to take orders
int takeOrder() {
    int quantity;
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    // Basic error handling for non-negative quantities
    if (quantity < 0) {
        printf("Invalid quantity. Please enter a non-negative value.\n");
        return -1;
    }

    return quantity;
}

// Function to calculate total
int calculateTotal(int quantity, int price) {
    return quantity * price;
}

int main() {
    // Define the menu
    MenuItem menu[] = {
        {"Honey Cake", 30},
        {"Carrot Cake", 35},
        {"Cinnamon Cake", 35},
        {"Chocolate Cake", 40},
        {"Vanilla Cake", 50},
    };

    int itemCount = sizeof(menu) / sizeof(menu[0]);

    // Display the welcome message and customer information input
    printf("\nWELCOME TO CUTM CAFE CORNER\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    int customer_id, customer_number;
    char customer_name[18];
    int i = 0;
    printf("\nEnter your Name : ");
    scanf("%s", customer_name);
    printf("Enter your Ph no. : ");
    scanf("%d", &customer_number);
    printf("Enter Customer ID : ");
    scanf("%d", &customer_id);

    // Main ordering loop
    int snacks_total = 0;
    int beverages_total = 0;
    int choice;

    do {
        printf(" \nChoose your Category\n");
        printf(" Click 1 :- SNACKS\n Click 2 :- BEVERAGES\n");
        printf(" Click 0 :- TO show Bill\n");

        scanf("%d", &choice);

        switch (choice) {
        case 1:
            displayMenu(menu, itemCount);
            int itemChoice;
            printf("Enter your Snack choice (0 to go back): ");
            scanf("%d", &itemChoice);

            if (itemChoice < 0 || itemChoice > itemCount) {
                printf("Invalid choice. Please enter a valid menu item number.\n");
                continue;
            }

            if (itemChoice != 0) {
                int quantity = takeOrder();
                if (quantity < 0) {
                    // Error handling in takeOrder function
                    continue;
                }

                int itemTotal = calculateTotal(quantity, menu[itemChoice - 1].price);
                printf("Total for %s x %d: $%d\n", menu[itemChoice - 1].name, quantity, itemTotal);

                snacks_total += itemTotal;
            }
            break;

        case 2:
            displayMenu(menu, itemCount);
            int beverageChoice;
            printf("Enter your Beverage choice (0 to go back): ");
            scanf("%d", &beverageChoice);

            if (beverageChoice < 0 || beverageChoice > itemCount) {
                printf("Invalid choice. Please enter a valid menu item number.\n");
                continue;
            }

            if (beverageChoice != 0) {
                int quantity = takeOrder();
                if (quantity < 0) {
                    // Error handling in takeOrder function
                    continue;
                }

                int itemTotal = calculateTotal(quantity, menu[beverageChoice - 1].price);
                printf("Total for %s x %d: $%d\n", menu[beverageChoice - 1].name, quantity, itemTotal);

                beverages_total += itemTotal;
            }
            break;

        case 0:
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
            break;
        }

    } while (choice != 0);

    // Display the final bill
    printf("\n****************////CUTM Cafe Corner\\\\****************\n\n");
    printf("                        FINAL BILL                      \n\n");
    printf("__________________________________________________________\n");
    printf("CUSTOMER NAME : %s\n", customer_name);
    printf("CUSTOMER NUMBER : %d\n", customer_number);
    printf("CUSTOMER ID : %d\n", customer_id);
    printf("**********************************************************\n");
    printf("**********************************************************\n");
    printf("     PRODUCT             Qtd   Rate   TOTAL      \n");
    printf("__________________________________________________________\n");

    if (snacks_total != 0)
        printf("Snacks TOTAL             = $%d\n", snacks_total);

    if (beverages_total != 0)
        printf("Beverages TOTAL          = $%d\n", beverages_total);

    int grand_total = snacks_total + beverages_total;
    printf("\nGRAND TOTAL              = $%d\n", grand_total);

    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("                         THANK YOU                       \n");
    printf("                        VISIT AGAIN                      \n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");

    return 0;
}
