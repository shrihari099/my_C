#include<stdio.h>


int func(){
	int a=10;
	static int b=10;
	printf(" a= %d b= %d \n",a,b);
	a++;
	b++;
}
int main(){

	func();
	func();
	func();
	func();

}
