#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int account=0;
	float balance_b, charge, credit, limit, balance_n;
	printf("input account number(-1 to end):");
	scanf_s("%d", &account);
	while (account != -1)
	{
		printf("input begining balance:");
		scanf_s("%f", &balance_b);
		printf("input total charges:");
		scanf_s("%f", &charge);
		printf("input total credits:");
		scanf_s("%f", &credit);
		printf("input credit limit:");
		scanf_s("%f", &limit);
		printf("account:\t%d\n", account);
		printf("credit limit:\t%.2f\n", limit);
		balance_n = balance_b + charge - credit;
		printf("balance:\t%.2f\n", balance_n);
		if (balance_n > limit)
		{
			printf("credit limit exceed\n");
		}
		printf("input account number(-1 to end):");
		scanf_s("%d", &account);
	}
	
	system("pause");
	return 0;
}