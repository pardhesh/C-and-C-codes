#include<stdio.h>
int main (){
	int n=5,a[n]={5,4,3,2,1};

	int i,j,temp,k;

for (i=0;i<n-1;i++)
{
	for (j=0;j<n-1-i;j++)
{
	if(a[j]>a[j+1])
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		
}
}
for(k=0;k<n;k++)
printf("%d",a[k]);
return 0;
}

