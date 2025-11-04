/* Question 4: Fix average of two integers */

#include <stdio.h>

int main(void) {
    int a = 5, b = 10;
    float avg = (a + b) / 2.0;  /* Fixed: use 2.0 for float division */
    printf("Average = %.2f\n", avg);
    return 0;
}

/* Bug was: (a + b) / 2 = 15 / 2 = 7 (integer division)
   Output was 7.00 instead of 7.50 */
