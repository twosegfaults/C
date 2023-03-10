#include <stdio.h>
int main()
{
int job;
float temp;
printf("1-Celsius to Fahreheit; 2-Fahrenheit to Celsius; 3-Quit\n");
printf("Enter the job number of the desired task: ");
scanf("%d", &job);
switch(job){
    case 1: {
        printf("Enter the value to be converted: ");
        scanf("%f", &temp);
        while(temp<-273.15){
            printf("Invalid value. Enter a value above -273.15: ");
            scanf("%f", &temp);
        }
        printf("The given temperature is %f degrees Fahrenheit.", ((((float)9/(float)5)*temp)+32));
        break;
    }
    case 2: {
        printf("Enter the value to be converted: ");
        scanf("%f", &temp);
        while(temp<-459.67){
            printf("Invalid value. Enter a value above -459.67: ");
            scanf("%f", &temp);
        }
        printf("The given temperature is %f degrees Celsius.", (((float)5/(float)9)*(temp-32)));
        break;
    }
    case 3: {break;}
}
return 0;
}