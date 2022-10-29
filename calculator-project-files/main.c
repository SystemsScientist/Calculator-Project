// main.c -- calculates two numbers

#include <stdio.h>

int add(int, int);

int main(void) {

	float num1, num2;
	float sum_result;

	printf("Enter the first number: ");
	scanf("%f", &num1);

	printf("Enter the second number: ");
	scanf("%f", &num2);

	sum_result = add(num1, num2);

	printf("Sum of %.2f and %.2f is %.2f\n", num1, num2, sum_result);

	return 0;
}

int add(int x, int y) {

	return x + y;

}
