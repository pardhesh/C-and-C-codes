#include <stdio.h>
int main()
{
	char s1[10],s2[10],s3[10];
	int i=0,j=0,k=0
;

	puts("enter string 1");
	gets(s1);

	puts("enter string 2");
	gets(s2);

	

	while(s1[i]!='\0')
	{
	    s3[k]=s1[i];
		k++;
		i++;
}
	while(s2[j]!='\0')
	{
	   s3[k]=s2[j];
	k++;
	j++;
}

printf("string1+string2 = %s",s3);

return 0;

}
