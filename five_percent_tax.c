#include <stdio.h>
int main(void)
{
	float original_amount;
	printf("Enter amount:\n");
	scanf("%f", &original_amount);
	printf("Total amount with taxes: %.2f\n", original_amount*1.05);
}