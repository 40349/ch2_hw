#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float sale,salary;
	printf("input sales in dollars (-1 to end): ");
	scanf_s("%f", &sale);
	while (sale != -1)
	{
		salary = 200 + sale * 0.09;
		printf("salary is :\t%.2f\n", salary);
		printf("input sales in dollars (-1 to end): ");
		scanf_s("%f", &sale);
	}
	
	system("pause");
	return 0;
}