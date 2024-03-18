//find the length of string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int x;
char str[10];
clrscr();
puts("enter a string");
gets(str);
x=strlen(str);
printf("string length is %d",x);
getch();
return 0;
}