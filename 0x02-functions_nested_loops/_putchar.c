#include <unistd.h>

/**
 * _putchar - Write the caracter for out
 *
 * Return: 1
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
