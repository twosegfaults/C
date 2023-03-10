#include <stdio.h>
#include <math.h>

int IsArmstrong(int num)
{
    int sum = 0, i = 1, count, numi, j;
    numi=num;
    while (num > 0) {
        int temp = num % (int)pow(10, i);
        num -= temp;
        count=(temp/(pow(10, i-1)));
        i=i+1;
    }
    if(sum=numi){
        printf("The number is an Armstrong number.");
    }
}

void main()
{
    IsArmstrong(153);
}