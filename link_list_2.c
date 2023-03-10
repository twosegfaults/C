#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct node * NODE;
struct node{
    NODE prev;
    float element;
    NODE next;
};
typedef struct list * LIST;
struct list{
    NODE head;
    int count;
};
LIST makelist(){}
void main(){

}