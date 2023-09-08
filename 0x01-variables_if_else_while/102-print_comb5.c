#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			// Print num1 with leading zeros if needed
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');

			// Print num2 with leading zeros if needed
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			// If not the last combination, print a comma and space
			if (num1 != 98 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
