#include<stdio.h>
main(){

int i,n,sum=0,term=1;
printf("Enter number of terms: \n");
scanf("%d",&n);
for(i=0;i<=n;i++){
sum+=term;
term=term+i;
}
printf("the sum of series upto %d terms is %d \n",n,sum);
}
