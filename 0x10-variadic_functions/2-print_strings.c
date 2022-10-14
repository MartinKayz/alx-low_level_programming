# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

/**
  * print_strings - prints strings followed by a new line
  * @separator: the string to be printed between strings
  * @n: the number of strings to be passed to the function
  * i: the counter
  * p: holds the arguments
  * Description - This is what we do
  */

void print_strings(char *separator, unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ag;
	char *p;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		p = va_arg(ag, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);

	}
	printf("\n");
	va_end(ag);
}
