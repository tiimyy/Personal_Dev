#include <stdio.h>

/**
 * Write a C program to copy one string to another string using loop. C program to copy one string to another without using inbuilt library function strcpy(). How to copy one string to another without using inbuilt string library function in C programming. Effective logic to copy strings in C programming. How to copy one string to another string using strcpy() function in C program.
 */

int main(void)
{
	char str[] = "I love Codeforwin!";
	char cpy[100];
	int i;
	int j;

	//finding the length of the string
	
	while (str[i] != '\0')
	{
		i++;
	}
	int str_length = i;

	for (j = 0; j<= str_length; j++)
	{
		cpy[j] =str[j];
	}
	printf("%s", cpy);

	return (0);
}

