#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float interest, principal, rate;
	int day;
	printf("input loan principal:");
	scanf_s("%f", &principal);
	while (principal != -1)
	{
		printf("input interest rate:");
		scanf_s("%f", &rate);
		printf("input term of the loan in day:");
		scanf_s("%d", &day);
		interest = principal * rate*day / 365;
		printf("the interest charge is %.2f\n", interest);
		printf("input loan principal:");
		scanf_s("%f", &principal);
	}
	system("pause");
	return 0;
}