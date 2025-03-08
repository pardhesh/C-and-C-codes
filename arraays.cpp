#include <stdio.h>
void display (int *,int);
int main()
{
	int a[]={67,68,79,78,56,57,76};
	display(&a[0],7);

return 0;
}
void display (int*j,int n)
{
	int i;
for (i=0;i<n;i++)
{
	printf("%d",*j);
j++;
}
}
























