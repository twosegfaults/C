#include <stdio.h>
int main()
{
float r, si;
int p, n;
printf("Enter the values of principal, number of years, and rate of interest:\n");
scanf("%d", &p);
scanf("%d", &n);
scanf("%f", &r);
si= p*r*n/100;
printf("The simple interest is %f \n", si);
return 0;
}