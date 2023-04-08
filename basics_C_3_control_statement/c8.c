#include<stdio.h>
main(){

int n,prod=1,rem;
printf("Enter a number :");
scanf("%d",&n);
while(n)
{
rem=n%10;
prod*=rem;
n/=10;
}
printf("product of digits =%d\n",prod);
}
