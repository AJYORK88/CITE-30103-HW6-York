/* Question 5: Fix scanf to read an integer */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);  /* Fixed: &n to pass address */
    printf("You entered %d\n", n);
    return 0;
}

/* Bug was: scanf("%d", n) — passed value, not address
   Caused segfault or garbage input */
