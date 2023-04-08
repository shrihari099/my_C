#include<stdio.h>
main(){
int n,sum=0,rem;
printf("enter a number :");
scanf("%d",&n);
while(n>0){

rem=n%10;
sum+=rem;
n/=10;
}
printf("sm of digits =%d \n",sum);
}
