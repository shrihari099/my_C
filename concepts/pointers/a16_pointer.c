#include<stdio.h>
main(){

int num=20;
int *ptr ;
int **ptr1 ;
int ***ptr2 ;
int ****ptr3 ;
ptr=&num;
ptr1=&ptr;
ptr2=&ptr1;
ptr3=&ptr2;
printf("value of k =%d \n",*ptr);
printf("value of k =%d \n",**ptr1);
printf("value of k =%d \n",***ptr2);
printf("value of k =%d \n",****ptr3);
}
