#include "main.h"

void print_to_98(int n)
{
	int i;
	int j;
	int k;

	for (i = n; i <= 98; i++)
	{
		if (i <= 9)
		{
			_putchar('0' + i);
		}
		else
		{
			j = i / 10;
			k = i % 10;
			_putchar('0' + j);
			_putchar('0' + k);
		}
		_putchar(44);
		_putchar(' ');
	}
}
