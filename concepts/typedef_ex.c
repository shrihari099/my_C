#include <stdio.h>

// Define a new data type using typedef
typedef struct{
	char firstName[20];
	char lastName[20];
	int age;
} Person;
int main() {

	// Declare variables of the new data type
	Person person1 = {"John", "Doe", 30};
	Person person2 = {"Jane", "Smith", 25};

	// Print the values of the variables
	printf("Person 1: %s %s, age %d\n", person1.firstName, person1.lastName, person1.age);
	printf("Person 2: %s %s, age %d\n", person2.firstName, person2.lastName, person2.age);

	return 0;
}

