#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of a randomly generated number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
<<<<<<< HEAD
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 
			last_digit);
=======
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
>>>>>>> e6f651f1dd352820bbcc45afc9b590462bff9f0d
	}

	return (0);
}
