#include <stdio.h>
void transpose(int a[3][3], int b[3][3]){
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            *(*(b+y)+x)=*(*(a+x)+y);
        }
    }
}
void printmatrix(int mat[3][3]){
    for(int n=0; n<3; n++){
        for(int m=0; m<3; m++){
            printf("%d ", *(*(mat+n)+m));
        }
        printf("\n");
    }
}
/*void multiply(int m1[3][3], int m2[3][3], int m3[3][3]){
    for(int i=0; i<3; i++){
        int k=0;
        int sum=0;
        for(int j; j<3; j++){
            sum+= (m1[i][j])*(m2[i][j]);
        }
        m3
    }
}*/
void main(){
    int m1[3][3];
    int m2[3][3];
    int m3[3][3];
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            printf("Enter the matrix element: ");
            scanf("%d", *(m1+i)+j);
        }
    }
    printf("Hence. the orignal matrix is:\n");
    printmatrix(m1);
    printf("The transpose of the given matrix is:\n");
    transpose(m1, m2);
    printmatrix(m2);
}