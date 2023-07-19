#include<stdio.h>

float SI(int p, int t, int r);

int main()
{
	float amount;
	int p, t, r;
	printf("Enter principal , rate of interest and time");
	scanf("%d %d %d", &p, &t, &r);
	
	float simpint = SI(p,t,r);
	
	amount = simpint + p;
	printf("Amount = %f", amount);
	return 0;
}

float SI (int p, int t, int r)
{
	
	float I = (p*t*r)/100;
//	printf("Simple Interest = %f", I);
	return I;
}
