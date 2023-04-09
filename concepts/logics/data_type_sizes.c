#include <stdio.h>

int main(){
    // Initializing variables of different data types
    char a;
    int b;
    float c;
    double d;

    // Printing the size of each data type using variables
    printf("Size of int is %d bytes\n", sizeof(b));
    printf("Size of float is %d bytes\n", sizeof(c));
    printf("Size of double is %d bytes\n", sizeof(d));
    printf("Size of char is %d bytes\n", sizeof(a));

    // Printing the size of each data type using operators
    printf("Size of int operator is %d bytes\n", sizeof(int));
    printf("Size of float operator is %d bytes\n", sizeof(float));
    printf("Size of double operator is %d bytes\n", sizeof(double));
    printf("Size of char operator is %d bytes\n", sizeof(char));

    return 0;
}

/* 
This program prints the size of each data type using both variables and operators. 
A good file name for this program could be "data_type_sizes.c" to indicate that the 
program determines and prints the size of different data types.
*/

