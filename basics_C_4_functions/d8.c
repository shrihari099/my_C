#include<stdio.h>

int func(int a,int b){
	a++;
	b--;
	printf("inside func a= %d , b=%d \n",a,b); 
}

void main(){
	int a=2,b=8;
	func(a,b);
	printf("inside main a=%d b=%d \n",a,b);

}
