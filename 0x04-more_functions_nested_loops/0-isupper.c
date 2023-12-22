#include "main.h"
/**
 * main - check the code.
 *
 * Return: (1) for true (0) false
 *
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
