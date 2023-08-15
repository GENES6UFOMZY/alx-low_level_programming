#include <stdio.h>
/**
 * main - printing all 2 digits numbers
 * Return: 0-(Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar ('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
