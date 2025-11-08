/* Question 25: Print multiplication tables from L to R (1-10) */

#include <stdio.h>

int main(void) {
    int L, R, i, j;
    
    printf("Enter L and R: ");
    scanf("%d %d", &L, &R);
    
    for (i = L; i <= R; i++) {
        printf("\nTable of %d\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}
