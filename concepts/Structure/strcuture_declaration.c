#include<stdio.h>

struct student{
char name[20];
int id;
float fees;
int marks;
};

int main(){

struct student s1,s2;

printf("Enter details of student \n");

scanf("%s\n%d\n%f\n%d",s1.name,&s1.id,&s1.fees,&s1.marks);

printf("the name is ->> %s \n",s1.name);
printf("the name is ->> %d \n",s1.id);

printf("the name is ->> %f \n",s1.fees);

printf("the name is ->> %d \n",s1.marks);


}
