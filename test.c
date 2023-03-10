#include <stdio.h>
int main(){
    int arr[4];
    for(int i=0; i<4; i++){
        printf("Enter a digit: ");
        scanf("%d", (arr+i));
    }
    if((*(arr)==*(arr+3))&&(*(arr+1)==*(arr+2))){
        printf("The number is palindrome.");
    }
    else printf("The number is not palindrome.");
}