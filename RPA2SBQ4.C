#include<stdio.h>
#include<conio.h>
void ma(int (*matrix)[3])
{
int i,j;
for(i=0; i<3; i++)
{
 for(j=0; j<3; j++)
  {
 printf("%d",*(*(matrix +i)+j));
  }
 printf("\n");
 }
}
int main()
{
int matrix[3][3];
int i,j;
clrscr();
printf("enter the element of the 3*3 matrix\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
  scanf("%d",&matrix[i][j]);
  }
}
printf("the enter matrix is\n");
ma(matrix);
getch();
return 0;
}