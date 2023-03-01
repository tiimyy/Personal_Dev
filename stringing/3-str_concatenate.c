#include <stdio.h>

/**
 * Write a C program to concatenate two strings in single string. How to concatenate two strings to one without using strcat() library function. Adding two strings into one without using inbuilt library function. Logic to concatenate two strings in C programming. C program to concatenate two strings using strcat() library function.
 */

int main(void){
	char str1[100] = "i love";
	char str2[100] = "COdeforwin";
	int i = 0;
	int j = 0;
	int k = 0;
	int str1_lenght;
	int str2_lenght;

	while (str1[i] != '\0')
	{
		i++;
	}
	str1_lenght = i;
	printf("the lenght of the first string is %d\n",str1_lenght);

	while (str2[j] != '\0')
	{
		j++;
	}
	str2_lenght = j;
	printf("the lenght of the second string is %d\n", str2_lenght);

	for (k = 0; k <= str2_lenght; k++)
	{
		str1[str1_lenght + k] = str2[k];
	}

	printf("%s", str1);
	return 0;
}

