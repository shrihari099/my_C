#include<stdio.h>
main(){


int a,b,c,big;
printf("enter three numbers : ");
scanf("%d%d%d",&a,&b,&c);
if(a>b){
if(a>c)
big = a;
else
big =c;
}
else
{
if(b>c)
big=a;
else
big=c;
}
printf("Biggest number is %d\n",big);
}
