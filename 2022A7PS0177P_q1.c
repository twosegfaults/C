#include<stdio.h>

int main()
{
int temp, sum=0, i;
for(i=1;i<=10;i++)
{
    printf("Enter the number to be added: ");
    scanf("%d", &temp);
    sum=sum+temp;
}
printf("The sum of the given ten numbers is %d.", sum);
    return 0;
}