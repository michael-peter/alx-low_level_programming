#include <stdio.h>

/**
 * main - entry point of program
 * prints alphabets in lowercase
 * Return: returs 0 (success)
*/
int main(void)
{
	int letter = 97;

	do {
		putchar(letter);
		letter++;
	} while (letter <= 122);

	putchar(10);

	return (0);
}
