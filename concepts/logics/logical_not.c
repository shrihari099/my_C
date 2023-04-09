#include <stdio.h>

// The main function, which is the entry point of the program
int main() {

    // Declare and initialize three integer variables
    int a = 10;
    int b = -9;
    int c = 0;

    // Print the values of a, b, and c
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    // Use the logical NOT operator to invert the values of a, b, and c
    printf("value of a = %d\nvalue of b = %d\nvalue of c = %d\n", !a, !b, !c);

    // Exit the program with a success status code
    return 0;
}

