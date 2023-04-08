#include<stdio.h>
main(){

int days,years,months,rem_days,weeks;
printf("Enter the total number of days \n");
scanf("%d",&days);

years = days / 365;
rem_days = days % 365;

 months = rem_days / 30;
 rem_days = days % 30;

weeks = rem_days / 7;
rem_days= weeks  % 7;

printf("%d year - %d month - %d -weeks %d-days \n",years,months,weeks,rem_days);

}
