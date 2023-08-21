#include <stdio>
#include "main.h"
#include <stdarg.h>

/*
 * Main: This is the printf function that is being developed by the following authors
 *
 * Authors: Ali Usman Mohammed from Nigeria and Mr Hamisi Mwadongo from Kenya
 *
 */

int _printf(const char *format, ...)
{
	va_list prt;
	va_start(prt, format);

	for (int i =0; i < format, i++)
	{
		sum+= va_arg(prt, int)
	}

}
