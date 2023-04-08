#include<stdio.h>
int main(){

	int ch;
	printf("Enter your choice \n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("first \n");
			break;

		case 2:
			printf("second \n");
			break;

		case 3:
			printf("third \n");
			break;

		case 4:
			printf("forth \n");
			break;
		default:
			printf("wrong input \n");

	}
}
