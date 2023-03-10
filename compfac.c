#include <stdio.h>
int main(){
float csold, salary, cprice, bonus, base, ctotal, commission;
printf("Enter the price of each computer:\n ");
scanf("%f", &cprice);
printf("Enter the number of computers sold:\n ");
scanf("%f", &csold);
printf("Enter the total sales:\n ");
scanf("%f", &ctotal);
commission= ctotal*cprice*0.02;
printf("The commission earned is %f\n", commission);
bonus=200.00;
printf("The bonus earned is %f\n", bonus*csold);
base=1500.00;
salary= csold*bonus + base + commission;
printf("The employee's  gross salary is %f\n", salary);
return 0;
}