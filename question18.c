/* Question 18: Simple calculator using switch */

#include <stdio.h>

int main(void) {
    char op;
    double num1, num2, result;
    
    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
                return 0;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            return 0;
    }
    
    printf("Result: %.2f\n", result);
    
    return 0;
}
