#include<stdio.h>
int main(){

	int a,b,sum=0,n=7;
	a=1;b=1;
	for(int i=1;i<n;i++){
	sum=a+b;
	b=a;
	a=sum;
	
	}
	printf("%d \n",sum);


}
