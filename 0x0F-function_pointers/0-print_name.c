#include "function_pointers.h"
/**
* print_name - is fun
* @name: char
* @f: ptr
* Return: void
*/

void print_name(char *name, void (*f)(char *))
	{
		if (f && name)
		f(name);
	}
