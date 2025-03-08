#include <stdio.h>
int main (){
	char alph;
printf("enter an alphabet");
scanf("%c",&alph);
printf("its ascii value is %d",alph);
char up = alph-32;
printf ("the required is %c",up);
return 0;
}
