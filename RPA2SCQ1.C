#include<stdio.h>
#include<conio.h>
int main()
{
	int matrix[10][10];
	int i,j,r,c;
	clrscr();
	printf("\n How many rows and columns in the matrix:- ");
	scanf(" %d %d",&r,&c);
	printf("\n Enter the elements:- ");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
	scanf("%d",&matrix[i][j]);
	}
	printf("\n The transpose of matrix is:- \n");
	for(i=0;i<c;i++)
	{
	for(j=0;j<r;j++)
		printf("%5d",matrix[j][i]);
	printf("\n");
	}
	getch();
	return 0; 
}