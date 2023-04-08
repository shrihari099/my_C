#include<stdio.h>

int sum(int a,int b){
	int s=a+b;
	return s;
}

void main(){

	int a=10,b=20;
	int k=sum(a,b);
	printf("%d -->sum \n",k);
	k=sum(4,5);
	printf("%d -->sum \n",k);
	k=sum(a+b,b*2);
	printf("%d -->sum \n",k);



}
