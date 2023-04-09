#include<stdio.h>
void main(){
int a=5,b=10;
printf("the value of a=%d b=%d \n",a,b);
int c = (a<b) ? a:b ;//a is less than b so if true it prints a
int d= (a>b) ? a:b ; // a is less than b so if false it prints b 
printf("value of c= %d \n value of d=%d \n",c,d);
}
