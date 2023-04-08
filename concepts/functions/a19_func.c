#include<stdio.h>
int sum(int x,int y);

int sum(int x,int y){
int z;
z=x+y;
printf("%d + %d = %d \n",x,y,z);
}


main(){

int a=10,b=20;
sum(a,b);
}
