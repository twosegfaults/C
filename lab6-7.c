#include <stdio.h>
#include <math.h>
int prime(int man){
    float sqt=sqrt(man);
    int sq=(int)sqt;
    int i;
    for(i=2;i<=sq;i++){
        if(man%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n, j, f=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(j=2; j<=n/2; j++){
        if(prime(j)==1){
            if(prime(n-j)==1){
                printf("%d = %d + %d", n, j, n-j);
                f=1;
            }
        }
    }
    if(f==0){
        printf("The given number cannot be represented as a sum of two prime numbers.");
    }
}