#include <stdio.h>
int main ()
{
	int n,a[n],i;
	  printf("enter the number of elements in the array");
      scanf("%d",&n);
		printf("enter the number in the array");
	for (i=0;i<n;i++)
      {
	     scanf("%d",&a[i]);
	    
      }
		for (i=0;i<n;i++)
		{
	       printf("\t%d",a[i]);
       }
      return 0;
}
