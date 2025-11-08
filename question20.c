/* Question 20: Count numbers entered until 0 (exclude 0) */

#include <stdio.h>

int main(void) {
    int num, count = 0;
    
    printf("Enter numbers (0 to stop):\n");
    
    do {
        scanf("%d", &num);
        if (num != 0) {
            count++;
        }
    } while (num != 0);
    
    printf("You entered %d numbers\n", count);
    
    return 0;
}
