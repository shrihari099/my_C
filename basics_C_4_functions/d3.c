#include<stdio.h>

int min(int a,int b){
	return a<b? a : b;
}

int max(int a,int b){
	return a>b? a : b;	
}


void main(){
	int a=2,b=8,c=3;
	printf("%d \n",min(a,b));
	printf("%d \n",max(a,max(b,c)));
}
