#include "main.h"
#include <unisdt.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, !));
}
