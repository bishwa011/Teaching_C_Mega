// program to calculate area and circumference
#include<stdio.h>
#define pi 3.14

void area(int radius);
void circumference(int radius);

int main()
{
	int r;
	printf("Enter the number: \n");
	scanf("%d", &r);
	
	area(r);
	circumference(r);
	return 0;
}

void area(int radius)
{
	float A;
	A = pi*radius*radius; 
	printf("Area of circle: %f \n", A);
}

void circumference(int radius)
{
	float C;
	C = 2*pi*radius; 
	printf("Circumference of circle: %f", C);
}
