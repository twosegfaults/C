#include <stdio.h>
#include <stdlib.h>
typedef struct stud STUD;
struct stud{
    int ID;
    char name[25];
    int marks[5];
    float avg;
};
float calcav(int marks[5]){
    int sum =0;
    for(int i=0; i<5;i++){
        sum+=marks[i];
    }
    float av=((float)sum)/((float)5);
    return av;
}
void printstudroll(STUD s){
    printf("The student ID is %d.\n", s.ID);
    printf("The student's name is %s.\n", s.name);
    printf("The student's marks are:\n");
    for(int i=0; i<5; i++){
        printf("%d ", s.marks[i]);
    }
    printf("\nThe student's average marks are %f.\n", s.avg);
}
void main(){
    int n;
    printf("enter the number of students: ");
    scanf("%d", &n);
    STUD sroll[n];
    for(int i=0; i<n; i++){
        printf("Enter the student ID: ");
        scanf("%d", &sroll[i].ID);
        printf("Enter the student's name: ");
        scanf("%s", &sroll[i].name);
        printf("Enter the student's marks:\n");
        for(int j=0; j<5; j++){
            scanf("%d", &(sroll[i].marks[j]));
        }
        sroll[i].avg=calcav(sroll[i].marks);
    }
    for(int x=0; x<n; x++){
        printstudroll(sroll[x]);
    }
}