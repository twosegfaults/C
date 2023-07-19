#include <stdio.h>


void sort(int* array, int size){
    int i=0, hold;
    for(i; i<size-1 ; i++){
        for(int j=i+1; j<size; j++){
            if(array[j]< array[i]){
                hold=array[i];
                array[i]=array[j];
                array[j]=hold;
            }
        }
    }
}


int usize(int* array, int size){
    int us=1, i=0;
    while(i<size-1){
        for(int j=i+1; j<size; j++){
            if(array[i]!=array[j]){
                us+=1;
                i=j;
            }
            else i++;            
        }
    }
    return us;
}


void uarry(int * uarr, int size, int* arr){
    int i=0, x=0;
    uarr[0]=arr[0];
    while(i<size-1){
        for(int j=i+1; j<size; j++){
            if(arr[i]!=arr[j]){
                i=j;
                x+=1;
                uarr[x]=arr[j];
            }
            else i++;            
        }
    }
}


void freqy(int* uarr, int* arr, int s1, int s2, int * freq){
    int i=0;
    if(s1>1){
        for(int x=0; x<s1; x++){
            freq[x]=0;
        }
        while(i<s1){
            for(int j=0; j<s2; j++){
                if(arr[j]==uarr[i]){
                    freq[i]+=1;
                }
                else{
                    i+=1;
                    if(arr[j]==uarr[i]){
                        freq[i]+=1;
                    }
                }
            }
        }
    }
    else freq[0]=s2;
}


void main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter an element: ");
        scanf("%d", (arr+i));
    }
    sort(arr, n);
    printf("The sorted array is: ");
    for(int x=0; x<n;x++){
        printf("%d", arr[x]);
    }    
    int y= usize(arr, n);
    printf("\nThe number of unique elements is %d.\n", y);
    int uarr[y];
    int freq[y];
    uarry(uarr, n, arr);
    printf("The unique array is: ");
    for(int l=0; l<y; l++){
        printf("%d", uarr[l]);
    }
    freqy(uarr, arr, y, n, freq);
    printf("\nThe frequencies of the elements are: ");
    for(int k=0; k<y; k++){
        printf("%d", freq[k]);
    }
}