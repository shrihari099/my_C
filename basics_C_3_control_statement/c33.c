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

void main(){
	int n=5;
	call_pyramid(5,'*');
	call_pyramid(6,'&');
	call_pyramid(7,'$');
	

}
