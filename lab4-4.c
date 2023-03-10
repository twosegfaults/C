#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, root1, root2;
printf("Enter the value of a: ");
scanf("%f", &a);
printf("Enter the value of b: ");
scanf("%f", &b);
printf("Enter the value of c: ");
scanf("%f", &c);
root1= (-b + sqrt(pow(b, 2)-(4*a*c)))/(2*a);
root2= (-b - sqrt(pow(b, 2)-(4*a*c)))/(2*a);
printf("The roots of ax^2 + bx + c are %f and %f", root1, root2);
return 0;
}