#include<stdio.h>
main(){

	char name[]={"saas"};
	char *ptr_name=name;


	//----to find length----------//
	int len_name=0;
	while(*ptr_name != '\0'){

		len_name++;
		ptr_name++;
	}
	//---to check palindrome ---//

	char *start=name;
	char *end=start+len_name-1;
	int flag=0;
	while(start<end){
		printf("start -> %c end -> %c \n",*start,*end);
		if(*start != *end){
			printf("is not a  palindrome \n");
			flag=1;
			break;
		}
		else{
			start++;
			end--;
		}

	}
	if(flag==0){
		printf("is a palindrome \n");
	}
}
