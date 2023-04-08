#include<stdio.h>
main(){

int num;
printf("enter a number \n");
scanf("%d",&num);
if(num<0){
printf("Number entered is negative \n");
num=-num;
printf("Value of num is %d\n",num);
}
}
