#include <stdio.h>

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
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
