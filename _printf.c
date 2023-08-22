#include "main.h"


void print_buffer(char buffer[], int *buff_ind);
/** 
 * _printf - Printf function * @format: format. * Return: Printed chars.
 * Authors: Ali Usman Mohammed from Nigeria and Hamisi from Kenya */


int _printf(const char *format, ...)
{
     va_list ap;

     va_start(ap, format);

     if (format == NULL)
         exit(1);

     while (*format != '\0')
     {
         if (*format == 'c')
         {
             printf("%c", va_arg(ap, int));
         }
         else if (*format == 'i')
         {
             printf("%i", va_arg(ap, int));
         }
         else if (*format == 'f')
         {
             printf("%lf", va_arg(ap, double));
         }
         else if (*format == 's')
         {
             char *str = va_arg(ap, char *);
             if (str == NULL)
             {
                 printf("(nil) ");
             }
             else
             {
                 printf("%s ", str);
             }
         }
         format++;
     }
     va_end(ap);
 }
