#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,a;
	printf("input a:");
	scanf_s("%d", &a);
	for (i = 0; i < a*4; i++)
	{
		printf("*");
	}
	printf("\n");
	for (i = 0; i < a - 2; i++)
	{
		printf("*");
		for (j = 0; j < a * 4 - 2; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (i = 0; i < a * 4; i++)
	{
		printf("*");
	}
	printf("\n");
	system("pause");
	return 0;
}