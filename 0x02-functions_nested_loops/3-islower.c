#include "main.h"
/**
 * _islower - checks for lower case character
 * @c -ascii value for character
 * Return: 1-for lowercase and 1 - for anyhting else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
