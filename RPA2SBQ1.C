
#include<stdio.h>
#include<conio.h>
int main()
{
int arr[30],size,i,num,flag=0;
clrscr();
printf("enter size of arry\n");
scanf("%d",&size);
printf("enter %d array element one by one\n",size);
for(i=0; i<size; i++)
{
scanf("%d",&arr[i]);
}
printf("enter the num you wish to look for\n");
scanf("%d",&num);
for(i=0;i<size;i++)
{
if(num==arr[i])
{
flag++;
}
}
if(flag>0){
printf("the %d is an array",num);
}
else
printf("the number %ed is not in array",num);
getch();
return 0;
}


