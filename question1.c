/* Question 1: Rectangle area and perimeter */

#include <stdio.h>

int main(void) {
    double length, width, area, perimeter;

    printf("Enter length: ");
    scanf("%lf", &length);
    printf("Enter width: ");
    scanf("%lf", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\nArea = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
