#include <stdio.h>

// function that takes a pointer to an integer
void increment(int *ptr) {
    (*ptr)++;  // increment the value at the memory location pointed to by ptr
}

// function pointer that points to a function that returns an integer
int (*add)(int, int);

// function that returns an integer
int sum(int x, int y) {
    return x + y;
}

int main() {
    int a = 5;
    int b = 7;

    int *ptr = &a;   // ptr points to the memory location of integer variable 'a'
    increment(ptr);  // increment the value at the memory location pointed to by ptr
    printf("Value of a after increment: %d\n", a);  // prints 6

    add = &sum;      // add points to the function 'sum'
    int result = (*add)(a, b);  // call function 'sum' using function pointer 'add'
    printf("Sum of a and b: %d\n", result);  // prints 13

    return 0;
}

