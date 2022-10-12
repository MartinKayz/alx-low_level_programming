#include <stdlib.h>
# include "function_pointers.h"
/**
* print_name - Returns something
* description: This is a desc
* @name: The name to be printed
* @f: function pointer
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}

