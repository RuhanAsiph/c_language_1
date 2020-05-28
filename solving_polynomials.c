#include<stdio.h>

int main(void)
{
	float x_val, solution;
	printf("Enter the value of x:\n");
	scanf("%f", &x_val);
	solution = (3 * (x_val * x_val * x_val * x_val * x_val)) + (2 * (x_val * x_val * x_val * x_val)) - (5 * (x_val * x_val * x_val)) - (x_val * x_val) + (7 * x_val) - 6;
	printf("%.2f", solution);

}