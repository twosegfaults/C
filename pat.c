#include <stdio.h>
void main(){
    int n,p=1;
    printf("Enter the size of triangle desired: ");
    scanf("%d", &n);
    char c='A';
    for(int i=0;i<n;i++){
        if(i<=(n/2)){
            printf("%c", c+i);
        }
        else{
            printf("%c", c+(n/2)-p);
            p++;
        }
    }
    printf("\n");
    for(int j=1; j<n; j++){
        int q=1;
        for(int k=0; k<n-j+1; k++){
            if(k>=j && k<=n-j-1){
                if(k<=(n/2)){
                    printf("%c", c+k);
                }
                else{
                    printf("%c", c+(n/2)-q);
                    q++;
                }
            }
            else printf(" ");
        }
        printf("\n");
    }
}