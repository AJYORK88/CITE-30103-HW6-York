/* Question 21: Print centered pyramid of stars */

#include <stdio.h>

int main(void) {
    int rows, i, j, space;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
