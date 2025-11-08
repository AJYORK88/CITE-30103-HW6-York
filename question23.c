/* Question 23: Count positives, negatives, evens, odds until 0 */

#include <stdio.h>

int main(void) {
    int num, pos = 0, neg = 0, even = 0, odd = 0;
    
    printf("Enter integers (0 to stop):\n");
    
    do {
        scanf("%d", &num);
        if (num == 0) break;
        
        if (num > 0) pos++;
        else neg++;
        
        if (num % 2 == 0) even++;
        else odd++;
    } while (1);
    
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    
    return 0;
}
