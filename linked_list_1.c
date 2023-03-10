#include <stdio.h>
#include <stdlib.h>
typedef struct node * NODE;
struct node{
    int el;
    NODE next;
};
typedef struct list * LIST;
struct list{
    int count;
    NODE head;
};
LIST createnewlist(){
    LIST L;
    L=(LIST)malloc(sizeof(struct list));
    L->count=0;
    L->head=NULL;
    return L;
}
NODE createnewnode(int val){
    NODE n;
    n= (NODE)malloc(sizeof(struct node));
    n->el=val;
    n->next=NULL;
    return n;
}
void insertnode(NODE n, LIST L){
    n->next=L->head;
    L->head=n;
    L->count++;
}
void insertnodeatend(NODE n, LIST L){
    NODE temp;
    temp=L->head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
    L->count++;
}
void insertnodeafter(NODE n, LIST L, int key){
    NODE temp=L->head;
    while(temp->el!=key){
        temp=temp->next;
        if(temp->next==NULL){
            printf("Element not found.");
            break;
        }
    }
    n->next=temp->next;
    temp->next=n;
    L->count++;
}
void removefirstnode(LIST L){
    NODE temp=L->head;
    NODE prev=temp;
    temp=temp->next;
    L->head=temp;
    free(prev);
    L->count--;
}
void removelastnode(LIST L){
    NODE temp=L->head;
    NODE prev=temp;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
    L->count--;
}
NODE search(LIST L, int key){
    NODE temp=L->head;
    while(temp->el!=key){
        if(temp->next==NULL){
            printf("Element not found.");
            break;
        }
        temp=temp->next;
    }
    return temp;
}
void printlist(LIST L){
    NODE temp;
    printf("The elements of the given list are:\n");
    while(temp->next!=NULL){
        printf("%d ", temp->el);
        temp=temp->next;
    }
    printf("%d", temp->el);
}
void removedata(LIST L, int key){
    NODE temp=L->head;
    NODE prev=temp;
    while(temp->el!=key){
        prev=temp;
        if(temp->next==NULL){
            printf("Element not found.");
        }
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);
}
int isempty(LIST L){
    if(L->count==0){
        printf("The given list is empty.");
        return 0;
    }
    else return 1;
}
void main(){
    LIST l1=createnewlist();
    NODE n1=createnewnode(10);
    NODE n2=createnewnode(20);
    NODE n3=createnewnode(30);
    NODE n4=createnewnode(40);
    insertnode(n1, l1);
    insertnode(n2, l1);
    insertnodeatend(n3, l1);
    insertnodeafter(n4, l1, 10);
    removefirstnode(l1);
    removelastnode(l1);
    search(l1, 10);
    printlist(l1);
    removedata(l1, 10);
    isempty(l1);
    printf("a");
}