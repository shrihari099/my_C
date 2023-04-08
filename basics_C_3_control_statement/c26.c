#include<stdio.h>
int main(){

	char op;
	   int  a,b;
	printf("Enter your choice like 2+3 \n");
	scanf("%d%c%d",&a,&op,&b);

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

