#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int tho;
	int hun;
	int ten;
	int bas;

	for (tho = 0 ; tho < 10 ; tho++)
	{

		for (hun = 0 ; hun <= 10 ; hun++)
		{

			for (ten = 0 ; ten < 10 ; ten++)
			{
				for (bas = 0 ; bas < 10 ; bas++)
				{
					putchar('o' + tho);
					putchar('o' + hun);
					putchar(32);
					putchar('0' + ten);
					putchar('0' + bas);
					if (!(tho == 9 && hun == 8))
					{
						putchar(',');
						putchar(32);
					}
					bas++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

