#include <stdio.h>
int bin(int num){
    int a, b, c, f;
    a=num;
    f=0;
    for(c=31;c>=0;c--){
        b=a>>c;
        if(b&1){
            f=1;
            printf("1");
        }
        else if(f!=0){
            if(b&1){
                printf("1");
            }
            else{
                printf("0");
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the number to be converted: ");
    scanf("%d", &n);
    bin(n);
}