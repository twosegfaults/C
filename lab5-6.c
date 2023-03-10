#include <stdio.h>
int main()
{
int a, b;
char op;
printf("Enter the value of a: ");
scanf("%d", &a);
printf("Enter the value of b: ");
scanf("%d", &b);
printf("Enter the desired operation: ");
scanf("\n%c", &op);
if(op=='+' || op=='-' || op=='*' || op=='/' || op=='%'){
    if(op=='+'){
        printf("The sum is %d.", a+b);
    }
    else if(op=='-'){
        printf("The difference is %d.", a-b);
    }
    else if(op=='*'){
        printf("The product is %d.", a*b);
    }
    else if(op=='/'){
        if(b!=0){
        printf("The quotient is %d.", a/b);}
        else {printf("Division by zero not possible.");}
    }
    else if(op=='%'){
        if(b!=0){
        printf("The remainder is %d.", a%b);}
        else {printf("Division by zero not possible.");}
    }
}
else {printf("Invalid input.");}
}