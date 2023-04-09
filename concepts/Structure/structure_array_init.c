#include <stdio.h>

// Define a structure to represent a person
struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare an array of person structures
    struct person people[3];

    // Set values for each element of the array
    strcpy(people[0].name, "John");
    people[0].age = 25;
    people[0].height = 1.75;

    strcpy(people[1].name, "Jane");
    people[1].age = 30;
    people[1].height = 1.6;

    strcpy(people[2].name, "Bob");
    people[2].age = 45;
    people[2].height = 1.85;

    // Print out the values for each person
    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Height: %.2f\n", people[i].height);
    }

    return 0;
}

