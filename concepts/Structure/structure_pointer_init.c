#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float gpa;
};

int main() {
    struct Student students[3] = {{1, "Alice", 3.5},
                                  {2, "Bob", 3.2},
                                  {3, "Charlie", 3.9}};

    // Declare a pointer to a Student structure
    struct Student *ptr;

    // Initialize the pointer to point to the first element of the array
    ptr = &students[0];

    // Access the members of the first element of the array using the pointer
    printf("Student ID: %d\n", ptr->id);
    printf("Student name: %s\n", ptr->name);
    printf("Student GPA: %.2f\n", ptr->gpa);

    // Move the pointer to the second element of the array and access its members
    ptr++;
    printf("Student ID: %d\n", ptr->id);
    printf("Student name: %s\n", ptr->name);
    printf("Student GPA: %.2f\n", ptr->gpa);

    // Move the pointer to the third element of the array and access its members
    ptr++;
    printf("Student ID: %d\n", ptr->id);
    printf("Student name: %s\n", ptr->name);
    printf("Student GPA: %.2f\n", ptr->gpa);

    return 0;
}

