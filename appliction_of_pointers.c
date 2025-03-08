#include <stdio.h>
int main ()
{
	int num = 10;
	 int *ptr=&num;
	int y =*ptr;
	printf("the number is %d",*ptr);
	printf("\n it's address is %p",&num);//location of the memory//
	printf("\n%d",y);

	return 0;
}
