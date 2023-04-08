#include<stdio.h>
void  main(){

int a,b;
printf("%d Enter the value of a \n");
scanf("%d",&a);
printf("%d Enter the value of b \n");
scanf("%d",&b);

int and_ot = a & b;
printf("AND  value is %d \n",and_ot);
int or_ot = a | b;
printf("OR the value is %d \n",or_ot);
int xor_ot = a ^ b;
printf(" XOR value is %d \n",xor_ot);
}

