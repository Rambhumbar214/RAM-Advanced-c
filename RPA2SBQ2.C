#include<stdio.h>
#include<conio.h>
int countoccurrences(int *arr,int size,int target)
 {
   int count=0,i;
    for(i=0; i<size; i++)
    {
    if(*(arr+i) == target)
      {
     count++;
       }
    }
   return count;
  }
int main()
{
int arr[30];
int size=sizeof(arr)/sizeof(arr[0]);
int occurrences,i,num;
clrscr();

printf("enter size of arry\n");
scanf("%d",&size);

printf("enter %d array element one by one\n",size);
for(i=0; i<size; i++)
 {
  scanf("%d",&arr[i]);
 }

printf("enter number to search");
scanf("%d",&num);

occurrences=countoccurrences(arr,size,num);

if(occurrences>0)
 {
 printf("%d occurs %d times int the array\n",num,occurrences);
 }
else
printf("%d is not present in the array\n",num);

getch();
return 0;
}