#include<stdio.h>
main(){

int num,rev=0;
printf("Enter number to reverse \n");
scanf("%d",&num);
while(num){
rev=rev*10 + num%10;
num=num/10;

}
printf("the reversed num is %d\n",rev);
}
