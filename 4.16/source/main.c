#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j;
	printf("(A)\n");
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
//=================================================
	printf("(B)\n");
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		for (j = (10-i); j > 0; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
//==================================================
	printf("(C)\n");
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", " ");
		}
		for (j = (10 - i); j > 0; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
//==================================================
	printf("(D)\n");
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		for (j = (9-i); j > 0; j--)
		{
			printf("%s", " ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
}