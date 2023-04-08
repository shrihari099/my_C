#include<stdio.h>
int main(){

	char op;
	   int  a,b;
	printf("Enter your operator choice \n");
	scanf("%c",&op);

	printf("Enter value of a and b \n");
	scanf("%d",&a);
	scanf("%d",&b);


	switch(op){
		case '+':
			printf("sum is =%d \n",a+b);
			break;
		case '-':
			printf("sub is =%d \n",a-b);
			break;
		case '*':
			printf("mul is =%d \n",a*b);
			break;
		case '/':
			printf("div is =%d \n",a/b);
			break;

		default:
			printf("wrong input \n");

	}
}
