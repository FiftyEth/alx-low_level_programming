#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
