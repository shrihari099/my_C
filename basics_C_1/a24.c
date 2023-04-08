#include<stdio.h>
main(){
int x,y;
printf("enter two number \n");
scanf("%d\n %d",&x,&y);
x>y ? printf("%d\n",x,y) : printf("%d\n",x+y);
}
