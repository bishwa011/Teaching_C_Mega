#include<Stdio.h>
void display(int *, int);

int main()
{
	int num[]= {45,55,23,32,343,54,2,5,65,67};
	printf("Test passing array to function");
	display(num, 5);
	display(num, 2);
	return 0;
	
}
void display(int *n, int j)
{
	int i;
	int g=*n;
	for(i=0;i<j;i++)
	{
		if (*n < g)
			{g=*n;}
		n++;
	}
	printf("\n Smallest number = %d", g);
}
