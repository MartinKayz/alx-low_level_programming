/**
 * A C program that prints exactly
 * "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error."
 *
 */

#include<stdio.h>
/**
 * main() - Entry Point
 *
 * Return: Always return 1 (Success)
 *
 */
int main(void)
{
	fprintf(stderr, "and that piece of art is useful",
			"- Dora Korpar, 2015-10-19\n");
	return (1);
}


