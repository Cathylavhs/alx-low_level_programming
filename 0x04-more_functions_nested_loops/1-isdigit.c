#include "main.h"

/**
 *_isdigit - function that check for uppercase
 *
 *@c: an input character to be checked
 *
 * Return: 1 if the paramwter is a digit
 *      0 if otherwise
 *
 */

int _isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}
