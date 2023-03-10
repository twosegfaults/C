#include <stdio.h>
int main(){
    int rows, cols, a, i, j;
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    cols=2*rows -1;
    for(a=0;a<cols;a++){
        printf("*");
    }
    printf("\n");
    for(i=1;i<rows;i++){
        for(j=1;j<cols;j++){
            if((j==i+1) || (cols==i+j)){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}