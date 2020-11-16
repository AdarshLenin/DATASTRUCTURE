#include<stdio.h>
void matrix(int r , int c,int mat[50][50])
{
	printf("Enter the elements of the matrix\n");
	printf("_________________________________");
	
	//reading matrix
	for(int i=0;i<r;i++)
	{
	for(int j=0;i<c;j++)
	{
		scanf("%d",&mat[i][j]);
	}
	}
	printf("the matrix\n ")
	for(int i=0;i<r;i++)
	for(int j=0;i<c;j++)
	{
		printf("the matrix after addition\n");
		printf("%d",mat[i][j]);
	}
	
	
	
	
}
void main()
{
	int r,c,mat1[50][50],mat2[50][50],i,j;
	printf("Enter the no of rows and columns of the first matrix \n ");
	scanf("%d\n%d",&r,&c);
	matrix(r,c,mat1);
	printf("Enter the no of rows and columns of the second matrix \n ");
	scanf("%d\n%d",&r,&c);
	matrix(r,c,mat2);
	
}
