#include <stdio.h>

void SI();

void add();
void sub();
void mul();
void div();
void mod();


int main()
 {
    int choice;
    printf("1. Addition \n");
    printf("2. Substraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Modulus \n");
    printf("6. Simple interest");
    printf("Choose which operation you want to perform ( press 1/2/3/4/5/6 )");
    scanf("%d", &choice);
    
    
    if (choice == 1)
    	add();
	else if (choice == 2)
		sub();
	else if (choice == 3)
		mul();
	else if (choice == 4)
		div();
	else if (choice == 5)
		mod();
	else if (choice == 6)
		SI();
	else
		printf("Enter a valid choice");
	
    return 0;
}

void SI ()
{
	int p, t, r;
	printf("Enter principal , rate of interest and time");
	scanf("%d %d %d", &p, &t, &r);
	
	float I = (p*t*r)/100;
	printf("Simple interest is: %f", I);
}

void add() {
	float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
	printf("Addtition: %f", num1 + num2);
}

void sub() {
    float num1, num2;
	printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
	printf("Substraction: %f", num1 - num2);
}

void mul() {
	float num1, num2;
	printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Multiplication: %f", num1 * num2);
}

void div() {
	float num1, num2;
	printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Division: %f", num1 / num2);
}

void mod() {
	float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
	printf("Reminder: %d", ((int)num1 % (int)num2));
}

