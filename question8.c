/* Question 8: Show global and local variable scope */

#include <stdio.h>

int global_count = 100;  // visible everywhere

int main(void) {
    int local_count = 5;  // only inside main
    
    printf("Global count: %d\n", global_count);
    printf("Local count: %d\n", local_count);
    
    return 0;
}
