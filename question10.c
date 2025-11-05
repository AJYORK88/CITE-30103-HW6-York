/* Question 10: Show size of variables in bytes */

#include <stdio.h>

int main(void) {
    char c = 'A';
    int i = 42;
    long int li = 100L;
    float f = 3.14f;
    double d = 2.718;

    printf("char size: %zu bytes\n", sizeof(c));
    printf("int size: %zu bytes\n", sizeof(i));
    printf("long int size: %zu bytes\n", sizeof(li));
    printf("float size: %zu bytes\n", sizeof(f));
    printf("double size: %zu bytes\n", sizeof(d));

    return 0;
}
