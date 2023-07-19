#include <stdio.h>
#define MAX 100
int count=0;
typedef struct employee{
    int ID;
    float salary;
    char division[25];
} EMP;
EMP makerec(EMP e, EMP ea[MAX]){
    ea[count]=e;
    count++;    
}
void sorter(struct employee* edp[]){
    struct employee* hold;
    for(int i=0; i<count-1; i++){
        for(int j=i+1; j<count; j++){
            if(((edp[i])->salary)>((edp[j])->salary)){
                hold= edp[j];
                edp[j]=edp[i];
                edp[i]=hold;
            }
        }
    }
}
void printer(EMP * ep[MAX]){
    for(int i=0; i<count; i++){
        printf("\nThe employee ID is %d.", ep[i]->ID);
        printf("\nThe employee salary is %f.", ep[i]->salary);
        printf("\nThe employee division is %s.", ep[i]->division);
    }
} 
void main(){
    int n;
    struct employee empdata[MAX];
    struct employee* empdataptrs[MAX];
    for(int i=0; i<MAX; i++){
        empdataptrs[i]= (empdata+i);
    }
    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);
    if(n>0){
        for(int i=0; i<n; i++){
        EMP E;
        printf("Enter the employee ID: ");
        scanf("%d", &E.ID);
        printf("\nEnter the employee salary: ");
        scanf("%f", &E.salary);
        printf("\nEnter the employee division: ");
        scanf("%s", &E.division);
        makerec(E, empdata);
        }
        sorter(empdataptrs);
        printf("The sorted list of employees is: ");
        printer(empdataptrs);
    }
    else printf("Bye.");
}