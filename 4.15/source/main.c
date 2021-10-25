#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	float i,sum;
	for (i = 10 ; i <= 12; i+=0.5) 
	{
		sum = 5000 * pow((1 + i/100), 15);
		printf("rate: %.1f%s \n", i,"%");
		printf("sum(after 15 years): %.2f\n", sum);
		
	}
}