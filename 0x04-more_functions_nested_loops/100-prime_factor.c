#include <stdio.h>
#include <math.h>
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
long long findLargestPrimeFactor(long long num) 
{
	long long largestFactor = -1;

	while (num % 2 == 0) 
	{
	largestFactor = 2;
	num /= 2;
	}

	for (long long i = 3; i <= sqrt(num); i += 2) 
	{
	while (num % i == 0) 
	{
	largestFactor = i;
	num /= i;
	}
	}

	if (num > 2)
	largestFactor = num;

	return largestFactor;
}

int main(void) 
{
	long long num = 612852475143;
	long long largestPrimeFactor = findLargestPrimeFactor(num);

	printf("%lld\n", largestPrimeFactor);

	return (0);
}

