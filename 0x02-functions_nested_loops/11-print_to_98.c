/**
 * print_to_98 - prints n
 *
 * @n: number
 *
 * Return: void
 */
void print_to_98(int n)
{
while (n >= 98 || n < 98)
{
printf("%d", n);
if (n == 98)
break;
printf(", ");
(n > 98) ? n-- : n++;
}
putchar('\n');
}
