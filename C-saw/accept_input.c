#include "main.h"

/**
 * _accept_input - accepts input from user and returns the sum
 * description - a program that takes 2 numbers as input and returns their sum
 * 
 * Return: sum of two integers
 */

int _accept_input(void)
{
	int first;
	int second;
	int result;

	printf("Enter first number:\n ");
	scanf("%d", &first);
	printf("Enter second number:\n ");
	scanf("%d", &second);

	result = first + second;
}
