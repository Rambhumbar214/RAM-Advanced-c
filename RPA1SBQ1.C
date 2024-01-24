//minimum using nested macro
#include<stdio.h>
#include<conio.h>
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MIN3(a,b,c) MIN(MIN(a,b),c )
int main()
{
int num1=15, num2=12, num3=3;
int minimum=MIN3(num1,num2,num3);
clrscr();
printf("Minimum of %d, %d, and %d is %d\n",num1, num2, num3, minimum);
getch();
return 0;
}