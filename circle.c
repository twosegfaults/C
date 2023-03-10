#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void circledata(float * area, float * peri){
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    *area=3.1416*pow(r, 2);
    *peri=2*3.1416*r;
}
void main(){
    float * area=(float *)malloc(sizeof(float));
    float * peri=(float *)malloc(sizeof(float));
    circledata(area, peri); 
    printf("%f", *area);
    printf("%f", *peri);
}