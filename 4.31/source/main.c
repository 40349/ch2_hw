#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j,k;
	for (i = 0; i < 5; i++)
	{
		for (j = 4 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	i = 0;
	j = 0;
	k = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (k = 8 - (2 * i + 1); k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}