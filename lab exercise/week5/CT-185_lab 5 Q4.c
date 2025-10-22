#include <stdio.h>
#include <ctype.h> ''

int main() 
{
    int variety, quantity, total = 0;
    char item;

    printf("***** Menu *****\n");
    printf("B = Burger (Rs. 200)\n");
    printf("F = French Fries (Rs. 50)\n");
    printf("P = Pizza (Rs. 500)\n");
    printf("S = Sandwiches (Rs. 150)\n");

    printf("\nHow many types of snacks would you like to order (2, 3, or 4)? ");
    scanf("%d", &variety);

    if (variety >= 2 && variety <= 4) {
        for (int i = 1; i <= variety; i++) {
            printf("\nEnter item code #%d (B/F/P/S): ", i);
            scanf(" %c", &item);
            item = toupper(item); // Convert to uppercase to handle lower-case input

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            switch (item) {
                case 'B':
                    total += 200 * quantity;
                    break;
                case 'F':
                    total += 50 * quantity;
                    break;
                case 'P':
                    total += 500 * quantity;
                    break;
                case 'S':
                    total += 150 * quantity;
                    break;
                default:
                    printf("Invalid item code entered. Skipping...\n");
            }
        }

        printf("\nTotal bill = Rs. %d\n", total);
    } else {
        printf("Invalid number of types. Please enter 2, 3, or 4.\n");
    }

    return 0;
}
