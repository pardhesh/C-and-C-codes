#include<stdio.h>
#include<string.h>
struct book
{
	char name[20];
	int n;
	float np;
	struct block;
};

struct block
{
	char row[20];
	char column[20];
	int  type;

};


int main()
{
	struct book b;
	struct block a;
	strcpy(b.name,"hllen kiler");
	b.n=12;
	printf("enter the detailes price,row,column,type");
	scanf("%f%s%s%d",&b.np,&b.a.row,&a.column,&a.type);
	
}





