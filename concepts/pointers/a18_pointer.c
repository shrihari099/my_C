#include<stdio.h>
main(){

int num=20;
char ch='a';
void *ptr;

ptr=&num;
printf("value of num =%ld \n",*(int *)ptr);

ptr=&ch;
printf("value of ch =%c \n",*(char *)ptr);


}
