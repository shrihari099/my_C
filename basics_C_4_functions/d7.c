#include<stdio.h>

int larger(int a,int b){
	return a>b? a : b;
}

void main(){
	int a=2,b=8,c=3;
printf("larger number is ->> %d \n",larger(a,b));
}	
