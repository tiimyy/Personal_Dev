#include <stdio.h>
/**
 *Write a C program to find length of a string using loop. How to find length of a string without using in-built library function strlen() in C programming. Effective way to find length of a string without using strlen() function. How to find length of a string using strlen() string function.
 */

int main (void)
{
	char str1[] = "I love programming. I love Codeforwin.";
	int i; //loop variable
	int count = 0;
	
	//I want to run the loop till i get to the null operator.
	for ( i = 0; str1[i] != '\0'; i++)
		count++;
	printf("%d", count);

	return (0);
}
