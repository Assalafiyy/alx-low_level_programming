#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	putchar('\n');
	return;
	}

	for (int i = 1; i <= n; i++)
	{
	for (int j = 1; j <= i - 1; j++)
	{
	putchar(' ');
	}
	putchar('\\');
	putchar('\n');
	}
}

int main(void)
{
	int n = 5;

	print_diagonal(n);

	return (0);
}

