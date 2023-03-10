#include <stdio.h>
int main()
{
int sum, i, temp;
sum=0;
i=1;
while(i<=10){
    printf("Enter value: ");
    scanf("%d", &temp);
    sum=sum+temp;
    i=i+1;
}
printf("The final sum is %d.", sum);
return 0;
}