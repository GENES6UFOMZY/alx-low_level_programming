#include "main.h"
/**
 * print_last_digit - to print the lat digt of number
 * @a: then input number
 * Return: x
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
