#include<stdio.h>
#define n1 5



int sum(int a[], int n){

	int tot=0;
	for(int i=0;i<n;i++){
		 tot=tot+a[i];
}
return tot;	
}


void main(){

int a[n1]={10,20,30,40,50};

int c=sum(a,n1);
printf("sum is =%d \n",c);


}

