#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			{
				if (num1 < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
