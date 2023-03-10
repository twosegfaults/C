#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct node * NODE;
struct node{
    NODE prev;
    int ID;
    char name[25];
    float price;
    int quantity;
    NODE next;
};
typedef struct list  * LIST;
struct list{
    NODE head;
    int count;
};
LIST createnewlist(){
    LIST L=(struct list *)malloc(sizeof(struct list));
    L->head=NULL;
    L->count=0;
    return L;
}
void makelist(LIST L, int count){
    NODE temp;
    for(int i=0; i<count; i++){
        int ID;
        printf("Enter the ID of the item: ");
        scanf("%d", &ID);
        char name[25];
        printf("Enter the name of the item: ");
        fgets(name , 25, stdin);
        float price;
        printf("enter the price of the item:");
        scanf("%f", &price);
        int quantity;
        printf("Enter the quantity of the item: ");
        scanf("%d", &quantity);
        NODE temp=createnewnode(ID, name, price, quantity);
        insertnewnodeatstart(L, temp);
    }
}
NODE createnewnode(int ID, char name[25], float price, int quantity){
    NODE N=(NODE)malloc(sizeof(struct node));
    N->prev= NULL;
    N->next=NULL;
    N->ID=ID;
    strcpy(N->name, name);
    N->price=price;
    N->quantity=quantity;
}
void insertnewnodeatstart(LIST L, NODE N){
    N->prev=NULL;
    N->next=L->head;
    L->head=N;
    L->count++;
}
void insertnewnodeatend(LIST L, NODE N){
    NODE temp=L->head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    N->prev=temp;
    temp->next=N;
    N->next=NULL;
    L->count++;
}
void insertnodeafter(LIST L, NODE N, int ID){
    NODE temp= L->head;
    while(temp->ID!=ID){
        temp=temp->next;
    }
    N->next=temp->next;
    N->prev=temp;
    (temp->next)->prev=N;
    temp->next=N;
    L->count++;
}
void printitem(NODE N){
    printf("The item's ID is %d.", N->ID);
    printf("The name of the item is %s.", N->name);
    printf("The price of the item is %f.", N->price);
    printf("The item's quantity is %d.", N->quantity);
}
void printlist(LIST L){
    NODE temp;
    while(temp->next!=NULL){
        printitem(temp);
        temp=temp->next;
    }
    printitem(temp);
}
NODE findmaxpriceitem(LIST L){
    NODE temp=L->head;
    NODE max=L->head;
    while(temp->next!=NULL){
        if(temp->price>max->price){
            max=temp;
        }
        temp=temp->next;
    }
    if(temp->price>max->price){
        max=temp;
    }
    return max;
}
NODE findqitem(LIST L, int quantity){
    NODE temp=L->head;
    while(temp->next!=NULL){
        if(temp->quantity==quantity){
            return temp;
        }
    }
    if(temp->quantity==quantity){
        return temp;
    }
    return NULL;
}