#include<stdio.h>
main(){
		int n,count=0,rem;
		printf("Enter a number : \n");
		scanf("%d",&n);
		do{
			n/=10;
			count++;
		}while(n>0);
		printf("Number of digits =%d\n",count);


	}
