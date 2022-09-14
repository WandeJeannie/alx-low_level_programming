#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * Description: prints the alphabet, in lowercase\n
 * Return: is 0.
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
