//even or odd
#include<stdio.h>
#include<conio.h>
#define NUM 3
int main()
{
clrscr();
#if (NUM%2==0)
printf("%d is even",NUM);
#else
printf("%d is odd",NUM);
#endif
getch();
return 0;
}