#include <stdio.h>
float max(float array[10]){
    float max1, max2, min1, min2;
    int a, b;
    max1=array[0];
    max2=array[1];
    min2=array[8];
    min1=array[9];

    for(a=0; a<10; a++){
        if(array[a]>max1){
            max2=max1;
            max1=array[a];
        }
        else if(array[a]<max1){
            if(array[a]>max2){
            max2=array[a];
        }
        }
    }
    
    for(b=0; b<10; b++){
        if(array[b]<min1){
            min2=min1;
            min1=array[b];
        }
        else if(array[b]>min1){
            if(array[b]<min2){
            min2=array[b];
        }
        }
    }

    printf("The largest value is %f.\n", max1);
    printf("The second largest value is %f.\n", max2);
    printf("The smallest value is %f.\n", min1);
    printf("The second smallest value is %f.\n", min2);
    printf("The average of the 4 values is %f.", (max1+max2+min1+min2)/((float)4));
    return 0;
}

int main()
{
float arr[10];
    int i;
    for(i=0; i<=9; i++){
        printf("Enter an array element: ");
        scanf("%f", &arr[i]);
    }
    max(arr);
    return 0;
}