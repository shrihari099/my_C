#include<stdio.h>
int main(){

	char greet[]="hello";
	char name[]="hari";
	char all[10];
	char concat_name[10];

	char *ptr=greet;
	char *ptr2=name;
	char *ptr3=all;

	//---strlen---//
	int count_length=0;
	for(int i=0;*ptr!='\0';i++){
		*ptr++;	
		count_length++;
	}
	printf("the length of greet string array is ->> %d \n",count_length);

	//--strcpy---//
	while(*ptr2!='\0'){
		*ptr3=*ptr2;
		ptr2++;
		ptr3++;
	}
	*ptr3='\0';
	printf("the copied name from name to all array variable is  ---> %s \n",all);


	//---strcat---/

	char *ptr_greet=greet;
        char *ptr_name=name;
        char *ptr_concat_name=concat_name;



	while(*ptr_greet!='\0'){
		*ptr_concat_name=*ptr_greet;
		ptr_greet++;
		ptr_concat_name++;
	}

	while(*ptr_name!='\0'){
		*ptr_concat_name=*ptr_name;
		ptr_name++;
		ptr_concat_name++;
	}
	*ptr_concat_name='\0';
	printf("concatenated string is ---> %s \n",concat_name);


}
