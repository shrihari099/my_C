#include<stdio.h>

int main(){

        int n=123,sum=0,rem;
        for(;n>0;n/=10)
        {
                rem=n%10;
                sum+=rem;
        }
        printf("%d \n",sum);

}


