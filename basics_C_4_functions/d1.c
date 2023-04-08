#include<stdio.h>

int func(int a ,int b){
return a+b;
}

void main(){

int a=10,b=20;
printf("sum is %d \n",func(a,b));
// or
int k=func(a,b);
printf("sum is %d \n",k);

}
