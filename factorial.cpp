//factorial
#include<Stdio.h>

int main()
{
	int num, fact =1;
	printf("Enter the number");
	scanf("%d", &num);
	if (num == 0)
		{
		fact =1;
		printf("%d is the factorial of %d", fact, num);
		}
	else
		{
			for(int i=num; i >0; i--)
			{
				
				fact = fact * i;
			}
			printf("factorial is %d", fact);
		}
	
	return 0;
	
}
