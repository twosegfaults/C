#include <stdio.h>
#include <math.h>
int main()
{
int n1, n2, i=1, j=1, d1, r1, d2, r2;
printf("Enter the value of the smaller number: ");
scanf("%d", &n1);
printf("Enter the value of the larger number: ");
scanf("%d", &n2);
while(n1>0){
    d1=(n1/pow(10, i));
    r1=((n1)%((int)pow(10, i)));
    n1=n1-r1;
    i=i+1;
}
while(n2>0){
    d2=(n2/pow(10, j));
    r2=((n2)%((int)pow(10, j)));
    n2=n2-r2;
    j=j+1;
}
for 
printf("The number of digits is %d.\n", i-1);
printf("The number of digits is %d.", j-1);
}