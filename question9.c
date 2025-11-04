/* Question 9: Show integer vs float division with casting */

#include <stdio.h>

int main(void) {
    int x = 10, y = 3;
    
    printf("Integer division: %d\n", x / y);           // 3
    printf("Float explicit: %.2f\n", (float)x / y);    // 3.33
    printf("Float implicit: %.2f\n", x / 3.0);         // 3.33
    
    return 0;
}
