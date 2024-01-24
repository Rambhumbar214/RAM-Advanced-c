//check number is postive negative or zero
#include<stdio.h>
#include<conio.h>
#define NUM -2
int main()
{
clrscr();
#if (NUM>0)
printf("%d is positive",NUM);
#elif (NUM<0)
printf("%d is negative",NUM);
#else
printf("%d is zero",NUM);
#endif
getch();
return 0;
}