#include <stdlib.h>
# include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}

