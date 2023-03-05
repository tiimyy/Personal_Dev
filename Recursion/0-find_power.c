#include <stdio.h>
/**Write a C program to input a number from user and
 * find power of given number using recursion.
 * How to find power of a number using recursive function in C programming.
 * Logic to find power of a number using recursion in C programming
 */
int function( int power, int n);
int main(void)
{
	int output = function(5,2);

	printf("%d", output);

	return (0);
}
int function(int power, int n)
{
	int result;

	if (n == 0)
	return 1;
	else if (n > 0)
	return power * function(power, n-1);
	else
	return 1 / function(power, -n);
}

		
	

