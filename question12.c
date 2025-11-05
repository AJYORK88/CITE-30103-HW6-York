/* Question 12: Fix operator precedence bug */

#include <stdio.h>

int main(void) {
    int a = 5, b = 3;
    int res1 = (a + b) << 1;  // parentheses fix → 16
    int res2 = a + b * 2;     // arithmetic fix → 11

    printf("With parentheses: %d\n", res1);
    printf("With multiplication: %d\n", res2);

    return 0;
}
