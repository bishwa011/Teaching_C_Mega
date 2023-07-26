#include<stdio.h>
void swap(int &, int &);

int main()
{
	int a = 25, b = 30;
	
printf("Before calling function: ");
printf("Value of a : %d \n", a);
printf("Value of b : %d \n", b);

printf("After calling function: ");
swap(a,b);

printf("After returning from function: ");
printf("Value of a : %d \n", a);
printf("Value of b : %d \n", b);

return 0;
}

void swap(int &num1, int &num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Value of a : %d \n", num1);
	printf("Value of b : %d \n", num2);
}

