#include<stdio.h>
main(){

int num=20;
int *ptr;
ptr=&num;

printf("value of num =%d \n",num);
printf("value of int pointer =%d \n",*ptr);
printf("address of int pointer =%u \n",ptr);


}
