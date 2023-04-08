#include<stdio.h>
main(){
	int x=8,y,z;
	x = x++ ;
	y = ++x ;
	z = (x+y);
	printf("x=%d y=%d z=%d \n",x,y,z);
}
