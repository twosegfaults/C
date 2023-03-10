#include <stdio.h>
int main(){
int i,arr[4];
for(i=1; i<=4; i++){
    printf("Enter the digit: ");
    scanf("%d", &arr[i]);
}
((arr[1]==arr[4])&&(arr[2]==arr[3]))?printf("The number is palindrome."):printf("The number is not palindrome."); 
}