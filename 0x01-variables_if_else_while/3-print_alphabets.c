#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Descriptive: prints the alphabet in uppercase then lowercase
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
