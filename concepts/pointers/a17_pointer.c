#include<stdio.h>
main(){

int k, *ptr=&k;
char ch, *ptr1=&ch;
float f, *ptr2=&f;
double dl, *ptr3=&dl;

printf("value of int pointer  %ld \n",sizeof(ptr));
printf("value of char pointer  %ld \n",sizeof(ptr1));
printf("value of float pointer  %ld \n",sizeof(ptr2));
printf("value of double pointer  %ld \n",sizeof(ptr3));
printf("value of int k %ld \n",sizeof(k));
printf("value of char  %ld \n",sizeof(ch));
printf("value of float  %ld \n",sizeof(f));
printf("value of double  %ld \n",sizeof(dl));




}
