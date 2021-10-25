#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num;
	float salary;
	double fixed_salary, time, sales, item;
	printf("1.managers\t2.hourly workers\t3.commission workers\t4.pieceworkers\n");
	printf("input number:");
	scanf_s("%d", &num);
	switch (num)
	{
		case 1:
			printf("input fixed weekly salary:");
			scanf_s("%lf", &fixed_salary);
			salary = fixed_salary;
			printf("salary:%.2f\n", salary);
			break;
		case 2:
			printf("input fixed hourly salary:");
			scanf_s("%lf", &fixed_salary);
			printf("input worked time:");
			scanf_s("%lf", &time);
			if (time > 40)
			{
				salary = (40+(time-40)*1.5)*fixed_salary;
			}
			else
			{
				salary = fixed_salary*time;
			}
			printf("salary:%.2f\n", salary);
			break;
		case 3:
			printf("input weekly sales:");
			scanf_s("%lf", &sales);
			salary = 250 + sales * 0.057;
			printf("salary:%.2f\n", salary);
			break;
		case 4:
			printf("input money for each item:");
			scanf_s("%lf", &fixed_salary);
			printf("input money of the item they produce:");
			scanf_s("%lf", &item);
			salary = fixed_salary * item;
			printf("salary:%.2f\n", salary);
			break;
	}
	system("pause");
	return 0;
}