#include <stdio.h>
/**
 * main - hexadecimal
 * Return: 0-(success)
 */
int main(void)
{
	int num = 0;
	char alph = 'a';

		while (num < 10)
		{
			putchar('0' + num);
			num++;
		}
		while (num >= 10 && num < 16)
		{
			putchar(alph);
			alph++;
			num++;
		}
		putchar('\n');
		return (0);
}
