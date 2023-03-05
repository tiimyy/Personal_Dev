#include <stdio.h>
/**
 *Write a recursive function in C to find sum of all even numbers in a given range.
 */
int sum_even(int low, int high);

int main (void)
{
	int output;
	output = sum_even(1, 100);
	printf("%d", output);

	return (0);
}
int sum_even(int low, int high)
{
	if (low <= high)
	{
		if (low % 2 == 0)
		{
			return low + sum_even(low + 1, high);
		}
		else
			sum_even(low + 1, high);
	}
	else 
		return 0;
}
