#include <stdio.h>

int main() {
    double num1, num2, result;
    char opt;

    // Prompt the user for input
    printf("Enter an operation (e.g., 5 + 3): ");
    scanf("%lf %c %lf", &num1, &opt, &num2);

    // Perform the operation based on the operator
    switch (opt) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Error: Unsupported operator '%c'.\n", opt);
    }

    return 0;
}