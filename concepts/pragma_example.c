#include <stdio.h>

#pragma pack(2) // Set the structure packing to 2-byte alignment
		//#pragma pack(1) //to print 7 bytes
		// Define a structure to demonstrate structure packing
struct exampleStruct {
	char a;      // 1 byte
	int b;       // 4 bytes
	short c;     // 2 bytes
};

union exampleUnion {
	char a;      // 1 byte
	int b;       // 4 bytes
	short c;     // 2 bytes
};

void print_using_struct(){
	struct exampleStruct ex;
	printf("Size of structure: %ld bytes\n", sizeof(ex));
}

void print_using_union(){
	union exampleUnion ex;
	printf("Size of union: %ld bytes\n", sizeof(ex));
}

int main() {
	// Declare an instance of the structure and print its size
	// struct exampleStruct ex;
	// printf("Size of structure: %d bytes\n", sizeof(ex));
	print_using_struct();
	print_using_union(); 
	return 0;
}

/*
   This program demonstrates how to use #pragma pack(2) to set the alignment of a structure to 2 bytes. 
   By default, structures are aligned on 4-byte boundaries, but this can be adjusted using the #pragma pack directive.
 */ 

