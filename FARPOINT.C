#include<stdio.h>
#include<conio.h>
int main()
{
int  x=10;
int near*ptr;
clrscr();
ptr = & x;
printf("%d",sizeof(ptr));
getch();
return 0;
}