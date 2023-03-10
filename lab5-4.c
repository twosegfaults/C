#include <stdio.h>
int main()
{
int N, i;
printf("Enter the value of the upper boundary: ");
scanf("%d", &N);
i=0;
while(i<=N){
    if((i%2)!=0){
        printf("%d\n", i);
    }
    i++;
}
printf("Done.");
return 0;
}