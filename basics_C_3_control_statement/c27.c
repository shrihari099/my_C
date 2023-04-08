#include<stdio.h>
main(){

	char ch;
	printf("Enter an alpha: \n");
	scanf("%c",&ch);
	switch(ch){

		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': printf("it is an vowel \n");
			  break;
		default : printf("it is an consonent \n");
	}

}

