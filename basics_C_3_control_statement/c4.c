#include<stdio.h>
main(){

int year;
printf("enter year :");
scanf("%d",&year);

if(year%100 !=0){
if(year%4 ==0)
printf("Leap year \n");
else
printf("Not leap \n");
}
else
{
if(year%400==0)
printf("Leap year \n");
else
printf("Not leap \n");
}
}
