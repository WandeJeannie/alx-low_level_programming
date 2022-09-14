#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints the alphabet, in lowercase\n
 * Return: is 0.
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		 putchar(x);
		 x++;
	}
	return (0);
}

