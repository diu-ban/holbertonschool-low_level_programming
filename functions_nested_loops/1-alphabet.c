#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints the alphabet in lowercase
 *              from 'a' to 'z', followed by a new line.
 *              It uses the _putchar function to print each character.
 *
 * Return: Always return 0.
 */
void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
