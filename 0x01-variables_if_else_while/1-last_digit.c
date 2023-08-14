#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Get different kind of number ending
 * Return: 0-(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;
	if (p > 5)
	{
		printf("thisnsis divisible by 5\n");
	}
	else if (p == 0)
	{
		printf("the digit ends with zero\n");
	}
	else(p < 6 && p != 0)
		printf("pis greater than 6 and not 0\n");
	return (0);
}
