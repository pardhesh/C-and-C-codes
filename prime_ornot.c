#include <stdio.h>
int main () {
	int i,n,flag;
	flag =0;
printf("enter an number to find if the number is prime or not");
scanf("%d,&n");

for (i=2;i<=(n-1);i++)
	{if (n%i==0)
		flag = 1;	}
			if (flag = 1){printf ("the entered number is not a prime number");}
			else {printf("te entered number is a prime number");
}
return 0;
}

