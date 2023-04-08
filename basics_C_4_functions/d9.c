#include<stdio.h>

int sum_square(){
	int s=0;
	for(int i=1;i<=25;i++){

		if(i%2!=0){

			s=i*i;//sum of odd square

		}

	}
	return s;
}

void main(){

int s=sum_square();
printf("%d \n",s);

}
