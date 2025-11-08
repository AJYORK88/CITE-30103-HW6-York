/* Question 24: Print 1-50, skip multiples of 5, break at 40, count displayed */

#include <stdio.h>

int main(void) {
    int i, count = 0;
    
    for (i = 1; i <= 50; i++) {
        if (i == 40) break;        // check break first
        if (i % 5 == 0) continue;  // skip multiples of 5
        
        printf("%d ", i);
        count++;
    }
    
    printf("\nDisplayed: %d numbers\n", count);
    
    return 0;
}
