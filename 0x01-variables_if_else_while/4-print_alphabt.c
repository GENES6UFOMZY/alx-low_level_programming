#include <stdio.h>
/**
 * main - Entry point
 * Return: 0-(success
 */
int main(void)
{
	char alphabt = 'a';

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'e' && alphabt != 'q')
		{
			putchar(alphabt);
		}
	}

	putchar('\n');
	return (0);
}
