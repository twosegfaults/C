#include <stdio.h>
#include <stdlib.h>
typedef struct employee EMP;
struct employee{
    int ID;
    float salary;
    char division[25];
};
void makeroll(struct employee * roll, int n){
    for(int i=0; i<n; i++){
        printf("enter the employee ID: ");
        scanf("%d", &roll[i].ID);
        printf("enter the employee's salary: ");
        scanf("%f", &roll[i].salary);
        printf("enter the employee's division:\n");
        scanf("%s", &roll[i].division);
    }
}
void sorter(struct employee * bunchoptrs[], int n){
    for(int i=0; i<n-1; i++){
        int low=i;
        for(int j=i+1; j<n; j++){
            if(((bunchoptrs[j])->salary)<((bunchoptrs[low]->salary))){
                low =j;
            }
            EMP temp=*(bunchoptrs[low]);
            *(bunchoptrs[low])=*(bunchoptrs[i]);
            *(bunchoptrs[i])=temp;
        }
    }
}
void printsortroll(struct employee * bunchoptrs[], int n){
    for(int i=0; i<n; i++){
        printf("The employee's ID is %d.", (bunchoptrs[i])->ID);
        printf("The employee's salary is %f.", (bunchoptrs[i])->salary);
        printf("The employee's division is %s.\n", (bunchoptrs[i])->division);
    }
}
void main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct employee * empdata=(struct employee *)malloc(n*sizeof(struct employee));
    makeroll(empdata, n);
    struct employee ** emptr=(struct employee **)malloc(n*sizeof(struct employee *));
    for(int i=0; i<n; i++){
        emptr[i]= &empdata[i];
    }
    sorter(emptr, n);
    printf("The sorted employee roll is:\n");
    printsortroll(emptr, n);
}