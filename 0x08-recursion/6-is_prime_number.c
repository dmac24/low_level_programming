#include "main.h"

/**
 * prime_number_2 - find prime numbers.
 *
 * @n: number
 * @i: number (test)
 *
 * Return: 1 if n is a prime number, otherwise return 0.
 */

int prime_number_2(int n, int i)
{
if (i > (n / 2))
return (1);
else if (n % i == 0)
return (0);
return (prime_number_2(n, i + 1));
}

/**
 * is_prime_number - find if a number is prime
 *
 * @n: number
 *
 * Return: prime_number_2 if n>1, 0 if n is not prime number.
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_number_2(n, 2));
}
