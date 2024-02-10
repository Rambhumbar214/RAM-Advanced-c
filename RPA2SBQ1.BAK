//accept an array and a number check number is present in the array
//print the index number of first occurrence of the number
#include<stdio.h>
#include<conio.h>
int main()
{
int n, number;
int arr[10],i;
int index;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter element of the array ");
for (i=0; i<n; i++)
{
printf("enter element %d",i+1);
scanf("%d",&arr[i]);
printf("enter the number to search");
scanf("%d",&number);
 for (i=0; i<n; i++)
 {
  if (arr[i]==number)
  {
   index=i;
    break;
   }
 }
  if(index != -1)
  {
  printf("number is %d present at index %d",number,index);
   }
 else{
printf("number %d is not present in the array",number);
   }
   }
getch();
return 0;
}

