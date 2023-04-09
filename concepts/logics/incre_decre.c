#include<stdio.h>
void main(){

    int a=3;

    printf("the value of a is  %d \n",a);

    // pre-increment
    printf("the value before next line for pre-increment is %d \n",++a);
    printf("the value after next line after for pre-increment is %d \n",a);

    // post-increment
    printf("the value before next line for post-increment is %d \n",a++);
    printf("the value before next line for post-increment is %d \n",a);

}

