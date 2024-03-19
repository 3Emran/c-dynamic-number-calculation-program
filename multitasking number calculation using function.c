#include<stdio.h>
#include<stdlib.h>

int n, a, sum=0, mul=1, x[100000];

int summation();
int subtraction();
int multiplication();
float division();
int modulus();

int main() {
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Modulus\n");
    printf("6.Exit\n");

    int select;
    char choice;

    do {
        printf("Select option: ");
        scanf("%d", &select);

        switch (select) {
            case 1:
                printf("%d\n", summation());
                break;
            case 2:
                printf("%d\n", subtraction());
                break;
            case 3:
                printf("%d\n", multiplication());
                break;
            case 4:
                printf("%.2f\n", division());
                break;
            case 5:
                printf("%d\n", modulus());
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid selection\n");
                break;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice); // Note: Space before %c to consume any leading whitespace

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

int summation() {
    sum = 0; // Reset sum
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    for (a = 0; a < n; a++) {
        scanf("%d", &x[a]);
        sum += x[a];
    }
    printf("Addition is: ");
    return sum;
}

int subtraction() {
    printf("Enter two numbers: ");
    scanf("%d %d", &x[0], &x[1]);
    printf("Subtraction is: ");
    return x[0] - x[1];
}

int multiplication() {
    mul = 1; // Reset mul
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for (a = 0; a < n; a++) {
        scanf("%d", &x[a]);
        mul *= x[a];
    }
    printf("Multiplication is: ");
    return mul;
}

float division() {
    float div;
    printf("Enter two numbers: ");
    scanf("%d %d", &x[0], &x[1]);
    if (x[1] != 0) {
        div = (float)x[0] / x[1];
        printf("Division is: ");
        return div;
    } else {
        printf("Error: '0' is not divisible by any number\n");
        return 0; // Return some error value
    }
}

int modulus() {
    printf("Enter two numbers: ");
    scanf("%d %d", &x[0], &x[1]);
    printf("Modulus is: ");
    return x[0] % x[1];
}
