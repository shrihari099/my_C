#include<stdio.h>
int main(){

int var1;
float var2;
double var3;
char c;

printf("enter char val \n");
scanf("%c", &c);

printf("enter int val \n");
scanf("%d",&var1);

printf("enter float val \n");
scanf("%f",&var2);

printf("enter double val \n");
scanf("%lf",&var3);

printf("the int val is %d \n",var1);
printf("the float val is  %f \n",var2);
printf("the double val is %lf \n",var3);
printf("the char val is %c\n",c);

return 0;

}
