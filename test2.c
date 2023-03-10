#include <stdio.h>
int main(){
    int rows, i ,j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i=rows;i>0;i--){
        for(j=1;j<=rows;j++){
            if(i+j<=rows+1){
            printf("*");
            }
        }
        printf("\n");
    }
}