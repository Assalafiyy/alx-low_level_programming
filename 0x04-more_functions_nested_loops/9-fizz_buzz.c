#include <stdio.h>
#include "main.h"

/**
 * main - print the numbers from 1-100, followed by \n
 * but for multiple of 3, print Fizz instead a number
 * and for the multiples of 5 print Buzz
 * Return: Always 0
 */

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (i % 3 == 0)

	{
	printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", i);
	}
	}

	printf("\n");

	return (0);
}

