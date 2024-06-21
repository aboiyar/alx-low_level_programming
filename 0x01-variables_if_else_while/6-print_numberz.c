#include <stdio.h>

/**
 * main - using putchar, print all single digit numbers of base 10 starting from 0, then a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
