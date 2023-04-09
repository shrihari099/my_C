#include <stdio.h>

void main() {
    // Initialize an integer variable
    int num = 5;

    // Perform a left shift operation on the integer
    // equivalent to multiplying by 2
    int left_shift = num << 1;

    // Perform a right shift operation on the integer
    // equivalent to dividing by 2
    int right_shift = num >> 1;

    // Print the results of the shift operations
    printf("The left shift is %d\n", left_shift);
    printf("The right shift is %d\n", right_shift);
}

