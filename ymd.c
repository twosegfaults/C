#include <stdio.h>
int main()
{
int principal, rate, time, simple_interest;
printf("enter the principal- \n");
scanf("%d", &principal);
printf("enter the rate- \n");
scanf("%d", &rate);
printf("enter the time- \n");
scanf("%d", &time);
simple_interest= (principal*rate*time)/100;
printf("the value of si is %d \n", simple_interest);
}