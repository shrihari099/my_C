#include<stdio.h>

int add(int a,int b){
	return a+b;
}

void sub(int a,int b){
	int c=a-b;
	printf("sub = %d \n",c);
}

main(){

	int a=40,b=20;
	int (*point)(int ,int);
	int ch=1;
	switch(ch){
		case 1: 
			point=add;
		//	(*point)(a,b);
			break;
		case 2: 
			point=sub;
		//	(*point)(a,b);
			break;
	}
int c=(*point)(a,b);
printf("sum is =%d \n",c);
}
