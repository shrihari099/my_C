#include<stdio.h>
void main(){

int a=9,b=15,c=16,d=12,e,f;
e=! (a<b || b<c );
f=(a>b) ? a-b : b-a;
printf("e=%d f=%d \n",e,f);
}
