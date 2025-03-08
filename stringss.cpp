#include <stdio.h>
int main()
{
	char s[20],*c;
	int i=0;
	printf("\n Enter your name");
	scanf("%s",s);
	c=s;

	while(*c!='\0')
	{
		printf("%c",*c);

         c++;
}
return 0;
}
