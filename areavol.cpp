#include<Stdio.h>
void A_V(int l, int b, int h);

int main()
{
	int length, breadth, height;
	printf("Enter length breadth and height");
	scanf("%d %d %d", &length, &breadth, &height);
	A_V(length, breadth, height);
	return 0;
}

void A_V(int l, int b, int h)
{
	int A = 2*(l*b+b*h+l*h);
	int V = l*b*h;
	
	printf("Area is: %d \n", A);
	printf("Volume is %d \n", V);
}

