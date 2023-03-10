#include <stdio.h>
void main(){
    char str[25];
    printf("Enter the desired string: ");
    scanf("%s", &str);
    int countv=0;
    int countc=0;
    for(int i=0; str[i]; i++){
        if((str[i]>='a' && str[i]<='z')){
        if(*(str+i)=='a' || *(str+i)=='e' || *(str+i)=='i' || *(str+i)=='o' || *(str+i)=='u'){
            countv++;
        }
        else if((str[i]>='A' && str[i]<='Z')){
        if(*(str+i)=='a' || *(str+i)=='e' || *(str+i)=='i' || *(str+i)=='o' || *(str+i)=='u'){
            countv++;
        }
        else countc++;
    }
    }
    printf("The number of vowels is %d.", countv);
    printf("The number of consonants is %d.", countc);
}
}