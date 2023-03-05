#include <stdio.h>
/**
 * Write a recursive function in C programming to find reverse of a number. 
 */
int reverse(int num);

int main(void)
{
	reverse(12345);

	return (0);
}
	
int reverse(int num)
{
	if (num > 0)
	{
		printf("%d", num % 10);
		reverse(num / 10);
	}
}
