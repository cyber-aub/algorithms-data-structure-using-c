#include <stdio.h>

int main(void){
    int x, y;
    char operator;
    char continueCalculation = 'y';

    while (continueCalculation == 'y') {
        printf("Enter the first number: ");
        if (scanf("%i", &x) != 1 || x < 0) {
            printf("Invalid input\n");
            return 1;
        }

        printf("Enter the second number: ");
        if (scanf("%i", &y) != 1 || y < 0) {
            printf("Invalid input\n");
            return 1;
        }

        printf("Enter the operator: ");
        scanf(" %c", &operator);

        switch (operator) {
            case '+':
                printf("Result: %d\n", x + y);
                break;
            case '-':
                printf("Result: %d\n", x - y);
                break;
            case '*':
                printf("Result: %d\n", x * y);
                break;
            case '/':
                if (y != 0)
                    printf("Result: %d\n", x / y);
                else
                    printf("Error: Division by zero\n");
                break;
            default:
                printf("Invalid operator\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continueCalculation);
    }

    return 0;
}