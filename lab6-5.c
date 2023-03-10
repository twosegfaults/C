#include <stdio.h>
int show(int x) {
printf("%d %d\n", x, x*x);
printf("%d %d\n", x, x*x*x);
return x*x*x;
}
int main(){
    int l;
    show(4);
    l=show(4);
    printf("The value of l is %d.", &l);
}