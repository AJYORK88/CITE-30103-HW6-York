/* Question 13: Check if number is divisible by 2 and 3 but not 7 */

#include <stdio.h>

int main(void) {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0 && num % 3 == 0 && num % 7 != 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
