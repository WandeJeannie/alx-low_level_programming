#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: prints the alphabet, in lowercase\n
 * Return: is 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
