#include<stdio.h>
main(){

int n,num;
long fact=1;
printf("enter num \n");
scanf("%d",&n);
num=n;
if(n<0)
printf("No factorial of negative number \n");
else
{
while(n>1)
{
fact*=n;
n--;
}
printf("factorial of %d =%ld\n",num,fact);
}

}
