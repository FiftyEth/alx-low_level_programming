#include <stdio.h>
#include "main.h"

/**
 * main - Prints the alphabet in lowercase follwed by a new line.
 *
 * Return: Always 0.
*/
int main(void)
{
	void print_alphabet_x10(void);
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
