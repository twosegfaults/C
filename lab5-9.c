#include <stdio.h>
int main(){
int n, sum;
printf("Enter an integer value: ");
scanf("%d", &n);
if(n>=0){
    sum=(((2*n)*(2*n +1))/2)-((n*(n+1))/2)+n;
    printf("The entered number is non-negative.");
    printf("The sum from n to 2n is %d.", sum);
}
else if(n<0){
    sum=(((3*n)*(3*n +1))/2)-(((2*n)*(2*n +1))/2)+(2*n);
    printf("The entered number is negative.");
    printf("The sum from 2n to 3n is -%d.", sum);
}
}