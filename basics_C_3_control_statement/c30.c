#include<stdio.h>
main(){
int n,choice,notes;
printf("enter the total amount in Rs: ");
scanf("%d",&n);
printf("Enter the value of note from which you want to begin: \n");
scanf("%d",&choice);
switch(choice){
	case 100:
		notes=n/100;
		printf("Number of 100 rs notes =%d \n",notes);
		n=n%100;
		
	case 50:
		notes=n/50;
		printf("Number of 50 rs notes =%d \n",notes);
		n=n%50;


	case 20:
		notes=n/20;
		printf("Number of 100 rs notes =%d \n",notes);
		n=n%20;


	case 10:
		notes=n/10;
		printf("Number of 100 rs notes =%d \n",notes);
		n=n%10;


	case 5:
		notes=n/5;
		printf("Number of 100 rs notes =%d \n",notes);
		n=n%5;


	case 2:
		notes=n/2;
		printf("Number of 100 rs notes =%d \n",notes);
		n=n%2;
		
	case 1:
		notes=n/1;
		printf("Number of 100 rs notes =%d \n",notes);
		break;
	default :
		printf("Enter only valid values \n");
		break;

}
printf("\n");

}
