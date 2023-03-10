#include <stdio.h>
int main()
{
int a,b,c,d, l1, u , v, w, x, y, z;
printf("Enter the value of a: ");
scanf("%d", &a);
printf("Enter the value of b: ");
scanf("%d", &b);
printf("Enter the value of c: ");
scanf("%d", &c);
printf("enter the value of d: ");
scanf("%d", &d);
u=a+b;
v=a+c;
w=a+d;
x=b+c;
y=b+d;
z=c+d;
l1=u;
if(v>l1){
    l1=v;
}
if(w>l1){
    l1=w;
}
if(x>l1){
    l1=x;
}
if(y>l1){
    l1=y;
}
if(z>l1){
    l1=z;
}
printf("The largest sum from the numbers provided is %d.", l1);
return 0;
}