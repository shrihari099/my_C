#include<stdio.h>
main(){

int x,y,quo,rem;
printf("Enter two numbers :");
scanf("%d%d",&x,&y);
if(y)
{
quo=x/y;
rem=x%y;
printf("Quotient=%d,remainder=%d\n",quo,rem);
}
else
printf("Divide by zero error \n");
}
