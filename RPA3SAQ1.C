#include<stdio.h>
#include<conio.h>
int mult(int a,int b)
{
return a * b;
}
int main()
{
int x,y;
int *a,*b;
clrscr();
printf("enter a two number\n");
scanf("%d %d",&x,&y);
printf("the number is x %d and %d y\n",x,y);
*a=&x;
*b=&y;
mult(*a,*b);
printf("mul is %d",mult);
getch();
return 0;
}