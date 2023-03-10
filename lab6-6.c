#include <stdio.h>
#include <math.h>
int fd(int num){
    int d1, r1, temp, i=1, k, ans;
    temp=num;
while(temp>0){
    d1=(temp/(pow(10, i)));
    r1=((temp)%((int)pow(10, i)));
    temp=temp-r1;
    i=i+1;
}
k=i-2;
ans=num/(pow(10, k));
printf("The answer is %d.", ans);
return 0;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    fd(n);
    return 0;
}