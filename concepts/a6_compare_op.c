#include<stdio.h>
int main(){

int a=4,b=4,c=3,d=4,x,y;

x= (a=5) && (b=7);
y= (c=5) || (d=8);

printf("the first output \n");
printf("the value of  a= %d \n the value of  b= %d \n the value of  c= %d \nthe value of  d= %d \n the value of  x= %d \nthe value of  y= %d \n",a,b,c,d,x,y);

   x= (a==6) && (b=9);
   y= (c==6) || (d=10);

printf("the second output \n");
 printf("the value of  a= %d \n the value of  b= %d \n the value of  c= %d \n    the value of  d= %d \n the value of  x= %d \nthe value of  y= %d \n",a,b,c,d    ,x,y);



}

