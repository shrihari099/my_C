#include<stdio.h>
// The standard C library header file which includes input/output functions
void main(){
    // main function, entry point of the program
    
    int a,b;
    // declaring integer variables a and b
    
    printf("Enter the value of a: "); // prompt message for user
    scanf("%d",&a); // reading integer input from user
    
    printf("Enter the value of b: "); // prompt message for user
    scanf("%d",&b); // reading integer input from user
    
    int and_ot = a & b; // bitwise AND operation on a and b
    printf("AND value is %d \n",and_ot); // printing the result of AND operation
    
    int or_ot = a | b; // bitwise OR operation on a and b
    printf("OR value is %d \n",or_ot); // printing the result of OR operation
    
    int xor_ot = a ^ b; // bitwise XOR operation on a and b
    printf("XOR value is %d \n",xor_ot); // printing the result of XOR operation
}
