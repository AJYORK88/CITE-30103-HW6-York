/* Question 19: Sum numbers from 1 to n using while loop */

#include <stdio.h>

int main(void) {
    int n, sum = 0, i = 1;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    while (i <= n) {
        sum += i;
        i++;
    }
    
    printf("Sum = %d\n", sum);
    
    return 0;
}
