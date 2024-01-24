//swap
#include<stdio.h>
#include<conio.h>
#define A 10
#define B 100
int main()
{
clrscr();
A=A-B;
B=B-A;
A=A-B;
printf("swaping Number is %d and %d",A,B);
getch();
return 0;
}