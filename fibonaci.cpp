//fibonaci

#include<stdio.h>

int main()
{
	int number, ft = 0, st = 1, nt;
	printf("Enter the nth term \n");
	scanf("%d", &number);
	
	for(int i = 0; i < number; i++)
	{
		printf("%d th term is = %d\n", i+1, ft);
		nt = ft+st;
		ft = st;
		st = nt;
	}
	return 0;
}
