#include <stdio.h>
int lsort(int arr[10], int x){
    int i;
    for(i=0;i<10;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}