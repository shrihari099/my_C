#include<stdio.h>

int sum(int a,int b){

	return a+b;

}

main(){

	int (*ptr)(int,int)=sum;
	int c=(*ptr)(10,20);
	printf("%d \n",c);
}
