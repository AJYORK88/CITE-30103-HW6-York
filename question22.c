/* Question 22: Reverse digits of a positive integer */

#include <stdio.h>

int main(void) {
    int num, reversed = 0, original;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    original = num;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    printf("Original: %d\n", original);
    printf("Reversed: %d\n", reversed);
    
    return 0;
}
