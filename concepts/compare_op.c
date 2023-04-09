#include<stdio.h>
int main(){

    // Declare and initialize several integer variables
    int a = 4, b = 4, c = 3, d = 4, x, y;

    // Use the logical AND and assignment operators to set the values of a and b to 5 and 7, respectively, and to set x to 1
    x = (a = 5) && (b = 7);

    // Use the logical OR and assignment operators to set the value of c to 5 and to set y to 1
    y = (c = 5) || (d = 8);

    // Print the values of the variables after the first set of operations
    printf("the first output \n");
    printf("the value of a = %d\nthe value of b = %d\nthe value of c = %d\nthe value of d = %d\nthe value of x = %d\nthe value of y = %d\n", a, b, c, d, x, y);

    // Use the logical AND and assignment operators to set the value of b to 9 if a is equal to 6, and to set x to 0
    x = (a == 6) && (b = 9);

    // Use the logical OR and assignment operators to set the value of d to 10 if c is not equal to 6, and to set y to 1
    y = (c == 6) || (d = 10);

    // Print the values of the variables after the second set of operations
    printf("the second output \n");
    printf("the value of a = %d\nthe value of b = %d\nthe value of c = %d\nthe value of d = %d\nthe value of x = %d\nthe value of y = %d\n", a, b, c, d, x, y);

    // Exit the program with a success status code
    return 0;
}
