#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

	char str[]={"shrihari"};
	char *ptr_str=str;


	printf("before reverse is --> %s \n",str);

	//---------------to find length---------------------------//
	int len =strlen(ptr_str);
	printf(" length of str --> %d \n",len);

	//---------------to reverse-----------------------------//
	char *start = str;
	char *end = str + len - 1;
	char temp;

	while(start<end){

		temp=*start;
		*start=*end;
		*end=temp;

		start++;
		end--;
	}
	printf("reversed str is -> %s \n",str);


	//---------------to covert lowercase to upper-----------//
	char *uppercase_str=str;

	while(*uppercase_str!='\0'){
		*uppercase_str = toupper(*uppercase_str);
		uppercase_str++;
	}
	printf("Caps-on reversed str is -> %s \n",str);


}
