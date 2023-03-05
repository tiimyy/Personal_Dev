#include <stdio.h>
/**
 *Write a recursive function in C programming to print all natural numbers between 1 to n. 
    *How to print all natural numbers from 1 to n using recursion in C program.
     *Logic to print all natural numbers in given range using recursion in C programming.
 */
int natural_numbers(int low, int high);

int main(void)
{

	natural_numbers(1, 10);

	return (0);
}
	
int natural_numbers(int low, int high)
{
	if (low <= high)
	{
		printf("%d, ", low);
		natural_numbers(low + 1, high);
	}
	else
	{
		return 1;
	}
}

