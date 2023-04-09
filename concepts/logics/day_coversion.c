#include<stdio.h>

int main(){
    // Declare variables to hold input, and various time units
    int days,years,months,rem_days,weeks;

    // Ask for input from user
    printf("Enter the total number of days \n");
    scanf("%d",&days);

    // Calculate the number of years and remaining days
    years = days / 365;
    rem_days = days % 365;

    // Calculate the number of months and remaining days
    months = rem_days / 30;
    rem_days = days % 30;

    // Calculate the number of weeks and remaining days
    weeks = rem_days / 7;
    rem_days= weeks  % 7;

    // Print the result with proper formatting
    printf("%d year - %d month - %d weeks - %d days\n", years, months, weeks, rem_days);

    return 0;
}

