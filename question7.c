/* Question 7: Circle area and circumference using #define and const */

#include <stdio.h>

#define PI 3.14159
const double PI_CONST = 3.14159;

int main(void) {
    double radius, area, circ;
    
    printf("Enter radius: ");
    scanf("%lf", &radius);
    
    area = PI * radius * radius;
    circ = 2 * PI_CONST * radius;
    
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circ);
    
    return 0;
}
