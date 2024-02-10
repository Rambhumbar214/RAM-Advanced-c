//swap two numbers using pointer
#include<stdio.h>
#include<conio.h>
int main ()
{
int a,b;
int *ptr1,*ptr2;
clrscr();
printf("enter two numbers\n");
scanf("%d %d",&a,&b);
ptr1=&a;
ptr2=&b;
printf("before swapping %d and %d\n",a,b);

*ptr1=*ptr1 + *ptr2;
*ptr2=*ptr1 - *ptr2;
*ptr1=*ptr1 - *ptr2;
printf("after swapping %d and %d",a,b);
getch();
return 0;
}