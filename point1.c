#include <stdio.h>
int * rev(int * arr, int n){
    int m= n-1;
        for(int i=0; i<n/2; i++){
            int temp=*(arr+i);
            *(arr+i)=*(arr+(m-i));
            *(arr+(m-i))=temp;
        }
    return arr;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int * revar= rev(arr, 5);
    for(int i=0; i<5; i++){
        printf("%d ", *(revar+i));
    }
}