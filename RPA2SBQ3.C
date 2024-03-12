#include<stdio.h>
#include<conio.h>
void sort(int n, int* ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++) {

	for (j = i + 1; j < n; j++) {

	    if (*(ptr + j) < *(ptr + i)) {

		t = *(ptr + i);
		*(ptr + i) = *(ptr + j);
		*(ptr + j) = t;
	    }
	}
    }


    for (i = 0; i < n; i++)
	printf("%d ", *(ptr + i));
}


int main()
{
   // int n = 5;
   // int arr[] = { 0, 23, 14, 12, 9 };
   int n,i;
   int arr[5];
   clrscr();
   printf("enter the size of the array");
   scanf("%d",&n);
   printf("enter the element of the array");
   for(i=0;i<n; i++)
   {
    scanf("%d",&arr[i]) ;
   }

    sort(n, arr);
    getch();
    return 0;
}