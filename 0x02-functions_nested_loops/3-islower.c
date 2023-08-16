#include "main.h"
/**
 * _islower - checks for lower case character
 * eturn: 1 -for  lowercase
 * Return: 0 - for anyhting else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);	
	}
	return (0);
}
