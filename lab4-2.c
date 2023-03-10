#include <stdio.h>
int main()
{
char char1, char2;
int answer;
printf("Enter the letters: ");
scanf("%c%c",&char1,&char2);
answer= char2 + char1;
printf("The answer is %d", answer);
}