#include <stdio.h>
#include<stdlib.h>
int main() {

    int select, n, a, b, sum=0, x[100000],mul=1;
    float div;
    char choice;

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
    do{
        printf("Select option: ");
        scanf("%d", &select);
        switch (select) {
            case 1: // Addition
                printf("Enter number of subjects: ");
                scanf("%d", &n);

                for (a = 0; a < n; a++) {
                    scanf("%d", &x[a]);
                    sum += x[a];
                }
                printf("Adition is: %d\n", sum);
                break;

            case 2: // Subtraction
                printf("Enter two numbers: ");
                scanf("%d %d", &x[0], &x[1]);
                printf("Subtraction: %d\n", x[0] - x[1]);
                break;
            case 3: // Multiplication
                printf("Enter number of subjects: ");
                scanf("%d", &n);

                for (a = 0; a < n; a++) {
                    scanf("%d", &x[a]);
                    mul *= x[a];
                }
                printf("Multiplication: %d\n", mul);
                break;

            case 4: // Division
                printf("Enter two numbers: ");
                scanf("%d %d", &x[0], &x[1]);
                if (x[1] != 0){
                    div = (float)x[0] / x[1];
                    printf("Division: %.2f\n", div);
                }
                else
                    printf("Error: '0' is not divisible by any number\n");
                break;

            case 5: // Modulus
                printf("Enter two numbers: ");
                scanf("%d %d", &x[0], &x[1]);
                printf("Modulus: %d\n", x[0] % x[1]);
                break;

            case 6: // Exit
                exit(0);
                break;

            default:
                printf("Invalid selection\n");
                break;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice); // Note: Space before %c to consume any leading whitespace

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
