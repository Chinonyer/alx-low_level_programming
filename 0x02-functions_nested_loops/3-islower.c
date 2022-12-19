#include "main.h"

/**
 * islower - short description, single line
 * @C: contains value to be compared
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
