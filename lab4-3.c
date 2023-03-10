#include <stdio.h>
#include <math.h>
int main()
{
float x, ans, n;
printf("Enter the value of x: ");
scanf("%f", &x);
printf("Enter the value of n: ");
scanf("%f", &n);
ans= pow(x, n);
printf("The value of x^n = %f", ans);
}