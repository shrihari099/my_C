#include<stdio.h>

void selection(int age,float ht){
	if(age<25)
	{
		printf("age should be less than 25 \n");
		return;
	}
	if(ht<5){
		printf("height should be more than 5 \n");
	}
	printf("Selected \n");
}

void main(){

	int age=10;
	float ht=5.9;
	selection(age,ht);
}
