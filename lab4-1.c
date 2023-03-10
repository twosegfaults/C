# include <stdio.h>
int main()
{
float f;
printf("Size of (char)= %lu bytes\n", sizeof(char));
printf("Size of (short)= %lu bytes\n", sizeof(short));
printf("Size of (int)= %lu bytes\n", sizeof(int));
printf("Size of (long)= %lu bytes\n", sizeof(long));
printf("Size of (float)= %lu bytes\n", sizeof(f));
printf("Size of (double)= %lu bytes\n", sizeof(double));
printf("Size of (1.55)= %lu bytes\n", sizeof(1.55));
printf("Size of (1.55L)= %lu bytes\n", sizeof(1.55L));
printf("Size of (string)= %lu bytes\n", sizeof("Hello"));
return 0;
}