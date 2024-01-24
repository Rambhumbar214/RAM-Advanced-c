//find maximum of two numbers
#include<stdio.h>
#include<conio.h>
#define A 30
#define B 20
int main()
{
clrscr();
#if (A>B)
printf("A is Maximum %d",A);
#else
printf("B is Maximum %d",B);
#endif
getch();
return 0;
}