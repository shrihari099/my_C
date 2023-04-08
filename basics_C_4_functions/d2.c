#include<stdio.h>

int func()
{	printf("function \n");
}

void main(){

	int x=10;
	x=func();
	printf("%d\n",x);
}

