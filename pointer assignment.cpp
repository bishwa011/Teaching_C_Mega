#include<Stdio.h>
int main()
{
	int a = 100, b=5;
	int *p;
	p=&a;
	int *p1=&b;
	printf("\nBefore changing value of a = %d",*p);
	*p=*p+150;
	printf("\nAfter Adding value  = %d",*p);
	*p=*p-150;
	printf("\nAfter substracting value = %d",*p);
	*p=*p*150;
	printf("\nAfter multiplying value of a = %d",*p);
	*p=*p/150;
	printf("\nAfter Dividing value of a = %d",*p);
	int t = *p * *p1;
	printf("\n\nAfter multiplying 2 pointers = %d",t);
	return 0;
}
