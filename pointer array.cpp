//pointers with array *p++
#include<stdio.h>
int main()
{
	int a[] = {2,3,4,1,10,12};
	int *p;
	p=&a[0];
	for (int i=0; i<5; i++)
	{
		printf("\n Address = %d Value = %d", p, *p);
		*p++;
	}
	return 0;
}
