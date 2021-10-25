#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int  a, b, c;
	for (a = 1; a <= 500; a++)
	{
		for (b = a; b <= 500; b++)
		{
			for (c = 1; c <= 500; c++)
			{
				if (a*a + b * b == c * c)
				{
					printf("%3d %3d %3d\n", a, b, c);
				}
			}
		}
	}
	system("pause");
	return 0;
}