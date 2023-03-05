#include <stdio.h>
/**OWrite a recursive function in C programming to find sum of all natural numbers between 1 to n
 */
int sum(int low, int high);
int main(void)
{
	int output;

	output = sum(1, 10);
	printf("%d", output);

	return (0);
}
int sum(int low, int high)
{
	if (low <= high)
	return low + sum(low + 1, high);
	else
	return 0;
}
