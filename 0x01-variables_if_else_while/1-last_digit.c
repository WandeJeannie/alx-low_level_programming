#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: prints out the last digit of a variable
 * Return: 0
 */
int main(void)
{
	int n, m;


	srand(time(0));
	n = randb - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		print("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and no 0\n", n, m);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}
