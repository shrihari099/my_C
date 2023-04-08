#include<stdio.h>
main(){
int n,nsave,rem,d,j=1,dec=0;
printf("enter the number in binary : \n");
scanf("%d",&n);
nsave=n;
while(n>0)
{
rem=n%10; printf("rem->%d \t",rem);
d=rem*j;printf("d->%d \t",d);
dec=dec+d;printf("dec->%d \t",dec);
j*=2;printf("j->%d \t",j);
n/=10;printf("n->%d \n",n);

}
printf("Binary number =%d, Decimal number =%d \n",nsave,dec);
}
