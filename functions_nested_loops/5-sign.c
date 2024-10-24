#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check the sign of.
 *
 * Description: This function checks whether the input number is greater
 *              than, less than, or equal to zero and prints the corresponding
 *              sign (+, 0, or -).
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *         -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
