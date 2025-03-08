#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
char ch;
fp=fopen("a.txt","r");

if(fp==NULL)
{
	printf("file cannot be opened");
exit(2);
}
while(1)
{ch = getc(fp);
if(ch==EOF)
{
break;
}
printf("%c",ch);}
fclose(fp);
return 0;
}
