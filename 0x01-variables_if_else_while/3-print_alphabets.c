#include <stdio.h>
/**
 * main - Entry point
 * Return: 0-(success
 */
int main(void)
{
	char Uppr_alphabt = 'A';
	char Lowwr_alphabt = 'a';

	while (Lowwr_alphabt <= 'z')
	{
		putchar(Lowwr_alphabt);
		Lowwr_alphabt++;
	}
	while (Uppr_alphabt <= 'Z')
	{
		putchar(Uppr_alphabt);
		Uppr_alphabt++;
	}
	putchar('\n');
	return (0);
}
