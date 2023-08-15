//pointers with array
#include<stdio.h>
int main()
{
	char *p;
	char a[] = "Bishwa";
	p=a;
	while(*p!='\0')
	{
	 printf("\n Address = %d value = %d", p, *p);
	printf("\t Address = %d value = %c", p, *p);
	*p++;
	}
	return 0;
}
	
