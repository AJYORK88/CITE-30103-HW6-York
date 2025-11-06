/* Question 14: Use ?: to print positive, negative, or zero */

#include <stdio.h>

int main(void) {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("%s\n", 
        num > 0 ? "Positive" : 
        num < 0 ? "Negative" : 
        "Zero");
    
    return 0;
}
