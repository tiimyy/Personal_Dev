#include <stdio.h>
/**
 * Write a recursive function in C programming to print all even numbers between 1 to n.
 */
int even(int low, int high);

int main (void)
{
	even(1, 10);

	return (0);
}
int even(int low, int high)
{
	if (low <= high)
	{
		if (low % 2 == 0)
		{
			printf("%d, ", low);
		}
		even(low + 1, high);
	}
	else
		return 1;
}
