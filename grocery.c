#include <stdio.h>
#include <stdlib.h>

struct store{
int ID;
char name[30];
float price;
int quantity;
};

struct store * readGroceryList(int count){
    struct store *sarr=(struct store*)malloc(count*(sizeof(struct store)));
    for(int i=0;i<count;i++){
        printf("Enter the ID: ");
        scanf("%d", &sarr[i].ID);
        printf("Enter the name: ");
        scanf("%s", &sarr[i].name);
        printf("Enter the price: ");
        scanf("%f", &sarr[i].price);
        printf("Enter the quantity: ");
        scanf("%d", &sarr[i].quantity);
    }
    return sarr;
}

void printGroceryList(struct store *s1, int count){
    for(int i=0; i<count; i++){
        printf("The ID is %d.\n", s1[i].ID);
        printf("The name is %s.\n", s1[i].name);
        printf("The price is %f.\n", s1[i].price);
        printf("The quantity is %d.\n", s1[i].quantity);
    }
}

struct store findItem(struct store *s2,int qVal, int count){
    for(int i=0; i<count; i++){
        if((s2[i].quantity)==qVal){
            return s2[i];
        } 
    }
    printf("No such item found.\n");
}

struct store printFound(struct store s3){
    printf("The ID of the found element is %d.\n", s3.ID);
    printf("The name of the found item is %s.\n", s3.name);
    printf("The price of the found item  is %f.\n", s3.price);
}

struct store findMaxPriceItem(struct store *s4, int count){
    for(int i=0; i<count-1; i++){
        int max=i;
        for(int j=i+1; j<count; j++){
            if(s4[max].price<s4[j].price){
            max=j;
            }
        }
        int temp=s4[max].price;
        s4[max].price=s4[i].price;
        s4[i].price=temp;
    }
    return s4[0];
}

int main(){
    int ie, q;
    struct store *sp;
    printf("Enter the number of items to be entered: ");
    scanf("%d", &ie);
    sp=readGroceryList(ie);
    printGroceryList(sp, ie);
    printf("Enter the quantity to be searched:");
    scanf("%d", &q);
    struct store ss=findItem(sp, q, ie);
    if(ss.ID>0){
        printFound(ss);
    }
    struct store sm=findMaxPriceItem(sp, ie);
    printFound(sm);
    return 0;
}