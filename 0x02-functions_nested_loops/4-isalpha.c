#include "main.h"
/**
 * _isalpha - checks for any character
 *c: -ascii value for character
 *@c: The character to print ascii
 * Return: 1-for lowercase and 1 - for anyhting else
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
