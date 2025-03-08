#include <stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100];
	int i,j,k,r1,r2,c1,c2;

//declaring the rows and columns//

printf("the nummber of rows in matrix a = ");
scanf("%d",&r1);
printf("the nummber of columns in matrix a = ");
scanf("%d",&c1);
printf("the nummber of rows in matrix b = ");
scanf("%d",&r2);
printf("the nummber of columns in matrix b = ");
scanf("%d",&c2);

//declaring the matrices//

printf("\nenter the matrix a:");
for (i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
			{  printf("\nenter the element of row %d and column %d :",i+1,j+1);
				scanf("%d",&a[i][j]);
				
}
}
printf("\nenter the matrix b :");
for (i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
{
	printf("\nenter the element of row %d and column %d :",i+1,j+1);
	scanf("%d",&b[i][j]);
}
}

//multiplication//

for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
{
	    c[i][j]=0;
		for(k=0;k<c1;k++)
{
	c[i][j]=c[i][j]+(a[k][j]*b[i][k]);
}
}
}

//matrix a//

printf("matrix a :");
printf("\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
{
	printf("%d ",a[i][j]);
}
printf("\n");
}

//matrix b//

printf("matrix b :");
printf("\n");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
{
	printf("%d ",b[i][j]);
}
printf("\n");
}

//result//

printf("\nthe resultant matrix after multiplication:");
printf("\n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
{
	printf("%d ",c[i][j]);
}
printf("\n");
}

	return 0;
}
