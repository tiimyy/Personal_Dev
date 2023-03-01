#include <stdio.h>
/**
 * Write a C program to compare two strings using loop character by character. How to compare two strings without using inbuilt library function strcmp() in C programming. Comparing two strings lexicographically without using string library functions. How to compare two strings using strcmp() library function.
 */

int main (void){
	char string1[100] = "Learn at Codeforwin";
	char string2[100] = "Learn at Codeforwin";
	int i;
	int flag = 0;

	for (i = 0; string1[i] != '\0' || string2[i] != '\0'; i++)
	{
		if (string1[i] != string2[i])
		{
			flag++;
			break;
		}
	}
	 if ( flag == 1)
		 printf("Both strings are not lexographically equal");
	 else
		 printf("Both strings are lexographically equal");
}

