#include <stdio.h>

/**
 * main - program entry point
 * description - prints the sum of numbers
 *
 * Return: void
 */

int main(void)
{
	int x, j, result;
	
	printf("Enter a number: -->");
	scanf("%i\n", x);
	printf("Enter a number: --> %i\n", j);
	scanf("%i\n", j);
	
	result = sum_of_integers(x, j);

	printf("The sum of provided numbers is \%d:", result);

	return (0);
}
	
