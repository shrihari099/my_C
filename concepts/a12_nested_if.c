#include<stdio.h>
void main(){
	int a,b,c;
	a=10;b=11;c=12;
	if(a>b){
		if(a>c){
			printf("a is greater than c \n");
		}
		printf("a is greater than b \n");
	}
	else if(b>c){
		if(b>a){
			printf("b is greater than a \n");
		}
		printf("b is greater than c \n");
	}
	else
	{
		if(c>a){
			printf("c is greater than a \n");
		}

		printf("c is greater than b \n");

	}
}
