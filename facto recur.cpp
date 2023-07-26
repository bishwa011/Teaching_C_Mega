#include<Stdio.h>
int facto(int n);

int main()
{
	int number;
	printf("Enter the number");
	scanf("%d", &number);
	
	int factorial = facto(number);
	
	printf("Factorial of %d is %d", number, factorial);
	
	return 0;
}

int facto(int n)
{
	if (( n == 0) || (n == 1))
		return 1;
	else
		return n*facto(n-1);
}
