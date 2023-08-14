#include <stdio.h>
/**
 * main - Entry point
 * Return: 0-(success
 */
int main(void)
{
	char alphabt = 'z';

	while (alphabt >= 'a')

	{
		putchar(alphabt);
		alphabt--;
	}
	putchar('\n');
	return (0);
}
