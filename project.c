#include<stdio.h>

int main() {
    int choice, quantity;
    float price, total = 0;
    do {
        printf("Welcome to our Cafe!\nMenu :- \n");
        printf("1. Coffee - $5\n");
        printf("2. Tea - $3\n");
        printf("3. Sandwich - $7\n");
        printf("4. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                price = quantity * 5;
                printf("You ordered %d Coffee(s). Total = $%.2f\n", quantity, price);
                total += price;
                break;
            case 2:
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                price = quantity * 3;
                printf("You ordered %d Tea(s). Total = $%.2f\n", quantity, price);
                total += price;
                break;
            case 3:
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                price = quantity * 7;
                printf("You ordered %d Sandwich(es). Total = $%.2f\n", quantity, price);
                total += price;
                break;
            case 4:
                printf("Thank you for visiting our Cafe. Your total bill is $%.2f. Have a nice day!\n", total);
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 4);
    return 0;
}