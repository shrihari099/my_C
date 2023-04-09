#include <stdio.h>

int main(){
    // Initializing variables of different data types
    int var1;
    float var2;
    double var3;
    char c;

    // Reading input from the user
    printf("Enter a character value: \n");
    scanf("%c", &c);

    printf("Enter an integer value: \n");
    scanf("%d", &var1);

    printf("Enter a float value: \n");
    scanf("%f", &var2);

    printf("Enter a double value: \n");
    scanf("%lf", &var3);

    // Printing the values of the variables
    printf("The integer value is %d \n", var1);
    printf("The float value is %f \n", var2);
    printf("The double value is %lf \n", var3);
    printf("The character value is %c\n", c);

    return 0;
}

/* 
This program prompts the user to enter values of different data types, 
and then reads and prints those values. 
A good file name for this program could be "input_output_variables.c" or 
"data_type_input_output.c" to indicate that the program takes input, 
processes it with variables of different data types, and outputs the results.
*/

