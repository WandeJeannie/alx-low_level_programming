#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: o
 */
void print_alphabet_x10(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet += 10)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
