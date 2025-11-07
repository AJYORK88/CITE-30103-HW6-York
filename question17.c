/* Question 17: Print grade A-F based on mark */

#include <stdio.h>

int main(void) {
    int mark;
    
    printf("Enter mark: ");
    scanf("%d", &mark);
    
    if (mark >= 90) {
        printf("A\n");
    } else if (mark >= 80) {
        printf("B\n");
    } else if (mark >= 70) {
        printf("C\n");
    } else if (mark >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }
    
    return 0;
}
