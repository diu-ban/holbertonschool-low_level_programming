#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i);
		} else
		{
			putchar(i - 10 + 'a');
		}
	}

	putchar('\n');

	return (0);
}