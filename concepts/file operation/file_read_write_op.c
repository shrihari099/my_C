#include<stdio.h>
#include<stdlib.h>

void file_write(){
	FILE *fp1, *fp2; // declare two file pointers
	char ch; // declare a character variable to read characters from file

	fp1 = fopen("naruto.txt", "r"); // open the input file in read mode
	if(fp1 == NULL){ // check if the file was opened successfully
		printf("file1 has not been successfully opened \n");
		exit(0); // exit the program with status code 0 (success)
	}

	fp2 = fopen("sasuke.txt", "w"); // open the output file in write mode
	if(fp2 == NULL){ // check if the file was opened successfully
		printf("file2 has not been successfully opened \n");
		fclose(fp1); // close the input file
		exit(0); // exit the program with status code 0 (success)
	}

	while((ch=fgetc(fp1))!=EOF){ // read characters from input file until end of file is reached
		fputc(ch, fp2); // write each character to output file
	}

	fclose(fp1); // close the input file
	fclose(fp2); // close the output file
}

int main(){
	file_write(); // call the file_write function
	return 0; // exit the program with status code 0 (success)
}

