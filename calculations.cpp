#include <stdio.h>

float add(float num1, float num2);
float sub(float num1, float num2);
float mul(float num1, float num2);
float div(float num1, float num2);
float mod(float num1, float num2);

int main() {
    float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("\n--- Results ---\n");
    printf("Addition: %.2f\n", add(num1, num2));
    printf("Subtraction: %.2f\n", sub(num1, num2));
    printf("Multiplication: %.2f\n", mul(num1, num2));
    printf("Division: %.2f\n", div(num1, num2));
    printf("Modulus: %.2f\n", mod(num1, num2));

    return 0;
}

float add(float num1, float num2) {
    return num1 + num2;
}

float sub(float num1, float num2) {
    return num1 - num2;
}

float mul(float num1, float num2) {
    return num1 * num2;
}

float div(float num1, float num2) {
    return num1 / num2;
}

float mod(float num1, float num2) {
    return (int)num1 % (int)num2;
}

