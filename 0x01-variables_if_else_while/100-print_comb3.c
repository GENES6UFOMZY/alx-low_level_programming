#include <stdio.h>
/**
 * main - printing all 2 digits numbers
 * Return: 0-(Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar ('0' + i);
			putchar('0' + j);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
