#include <stdio.h>
int main(){
    int rows, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    char c='A';
    for(k=0; k<rows; k++){
        printf("%c", c+k);
    }
    printf("\n");
    for(i=1;i<rows;i++){
        for(j=1;j<rows;j++){
            if(j==1 || i+j==rows){
                printf("%c", c+(j-1));
            }
            else printf(" ");
        }
        printf("\n");
    }
}