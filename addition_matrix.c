//addition of two matrix(2d array)
#include<stdio.h>
#define row 3//macros if you change here it changes everywhere 
#define col 3//macros
int main()
{
	int a[row][col],b[row][col],c[row][col];
	int i,j;
	printf("enter the matrix of a[3][3]:\n");
	for(i=0;i<row;i++)
	 for(j=0;j<col;j++)
	 {
	 	scanf("%d",&a[i][j]);
	 }
	 printf("enter the matrix of b[3][3]:\n");
	for(i=0;i<row;i++)
	 for(j=0;j<col;j++)
	 {
	 	scanf("%d",&b[i][j]);
	 }
	for(i=0;i<row;i++)
	 for(j=0;j<col;j++)
	 {
	 	c[i][j]=a[i][j]+b[i][j];
	 }
	 printf("addition of two matrix is:\n");
	 for(i=0;i<row;i++)
	 {
	  for(j=0;j<col;j++)
	   printf("%5d",c[i][j]);
	   printf("\n");
	  }
	  printf("\n");
}
