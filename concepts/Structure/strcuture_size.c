#include<stdio.h>

struct student{
char name[20];
int id;
float fees;
int marks;
};

int main(){

struct student s1;

printf("the size of structure char is ->> %ld \n",sizeof(s1.name));
printf("the size of structure int is ->> %ld \n",sizeof(s1.id));
printf("the size of structure  float is ->> %ld \n",sizeof(s1.fees));
printf("the size of structure marks is ->> %ld \n",sizeof(s1.marks));

printf("the size of structure is ->> %ld \n",sizeof(s1));

printf("the size of structure is ->> %ld \n",sizeof(struct student));


}
