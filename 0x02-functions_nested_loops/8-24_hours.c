#include "main.h"
/**
 * jack_bauer - print time
 *
 * Return: void
 */
void jack_bauer(void)
{
int hourTens, hourOnes, minutesTens, minutesOnes;

hourTens = 0;
while (hourTens <= 2)
{
hourOnes = 0;
while (hourOnes <= 9)
{
if (hourOnes > 3 && hourTens == 2)
break;
minutesTens = 0;
while (minutesTens <= 5)
{
minutesOnes = 0;
while (minutesOnes <= 9)
{
_putchar(hourTens + '0');
_putchar(hourOnes + '0');
_putchar(':');
_putchar(minutesTens + '0');
_putchar(minutesOnes + '0');
_putchar('\n');
minutesOnes++;
}
minutesTens++;
}
hourOnes++;
}
hourTens++;
}
}
