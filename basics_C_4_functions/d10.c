#include<stdio.h>
int a,b=6;

int func1(){
	printf("inside func1() : a=%d, b=%d \n",a,b);
}
int func2(){
	int a=8;
	printf("inside func2() : a=%d, b=%d \n",a,b);
}


int main(){
	printf("inside main(): a=%d,b=%d \n",a,b);
	func1();
	func2();
}
