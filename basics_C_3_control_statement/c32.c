#include<stdio.h>

void call_pyramid(int n,char ch){

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			printf("%2c ",ch);
		}
		printf("  \n");
	}
	printf("\n");
}


void call_pyramid_ij(int n){

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			printf("%2d ",i);
		}
		printf("  \n");
	}
	printf("\n");

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			printf("%2d ",i);
		}
		printf("  \n");
	}
	printf("\n");
}

void main(){
	int n=5;
	call_pyramid(n,'*');
	call_pyramid_ij(n);

}
