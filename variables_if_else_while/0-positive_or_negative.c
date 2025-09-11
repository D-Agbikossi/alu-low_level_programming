#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
This program will assign a random number to the variable n each time it is executed.
The output of the program should be:
- if the number is greater than 0: is positive
- if the number is 0: is zero
- if the number is less than 0: is negative
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;  
	
    /* Conditions*/
    if (n > 0) {
        printf("%d is positive\n", n);
    } else if (n == 0) {
        printf("%d is zero\n", n);
    } else {
        printf("%d is negative\n", n);    
    }
	return (0);
}
