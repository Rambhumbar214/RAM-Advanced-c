//find cube using nested macro
#include<stdio.h>
#include<conio.h>
#define SQU(x) ((x)*(x))
#define CUBE(x) (SQU(x)*(x))
int main()
{
int a;
clrscr();
a=CUBE(4);
printf("%d is CUBE",a);
getch();
return 0;
}