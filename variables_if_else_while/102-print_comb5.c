#include <stdio.h>

/**
 * main - Print all possible combinations of two two digits numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = num1; num3 < 10; num3++)
			{
				for (num4 = (num1 == num3) ? num2 + 1 : 0; num4 < 10; num4++)
				{
					putchar((num1 % 10) + '0');
					putchar((num2 % 10) + '0');
					putchar(' ');
					putchar((num3 % 10) + '0');
					putchar((num4 % 10) + '0');
					if (num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
