#include<stdio.h>

void main(){

	int arr[5]={1,200,33,43,55}; //array declaration
	int *p=arr; 	//int pointer assigned to array_name arr

	printf("1D array \n");
	printf("addr:w=%u ->prints starting address for 1d\n",p);	
	printf("addr:w=%u --> prints value inside array for 1d\n",*p);

	//////////////////////////////////////////
	// ---to print value 1d----------------///

	printf("to print value of 1D \n");
	for(int i=0;i<5;i++){
		printf("value of arr[%d] = %d ->prints value of 1d \n",i,*(p+i));	
	} 

	////////////////////////////////////////////////
	//-----------2d---------------------------------/

	int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	int (*p1)[3]=arr1;
	printf("\n");
	printf("2D dimension array \n");
	printf("addr:w=%u --> prints starting address of 2d \n",p1);
	printf("addr:w=%u --> prints starting address of 2d,major diff between 1d and 2d pointer \n",*p1);

	printf("\n");
	printf("prints value of 2d *(*(p1+i))) all starting rows values  \n");

	for(int i=0;i<3;i++){
		printf("value of %d st row = %d \n",i,*(*(p1+i)));
	}
	printf("\n");
	printf("prints value of 2d *(*(p1+i)+j)) all values  \n");

	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			printf("value of %d st row = %d \n",i,*(*(p1+i)+j));
		}
		printf("\n");
	}
}
