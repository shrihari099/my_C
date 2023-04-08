#include<stdio.h>
#include<stdlib.h>
main(){

	int ch;
	while(1){		
		printf("1.Create database \n");
		printf("2.insert new record \n");
		printf("3.modify a record \n");
		printf("4.delete record \n");
		printf("5.display all records \n");
		printf("6.exit \n\n");
		printf("Enter your choice \n");
		scanf("%d",&ch);
		switch(ch){

			case 1:
				printf("Database created.. \n \n");
				break;
			case 2:
				printf("Record inserted.. \n \n");
				break;

			case 3:
				printf("Record modified.. \n \n");
				break;

			case 4:
				printf("Record deleted.. \n \n");
				break;

			case 5:
				printf("Record displayed.. \n \n");
				break;
			case 6:
				exit(1);
			default :
				printf("wrong choice \n \n");
		}

	}
}

