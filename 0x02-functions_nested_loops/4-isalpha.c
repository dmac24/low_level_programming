/**
 * _isalpha - checks if a char is alpha or not
 *
 * @c: character parameter to check
 *
 * Return: 1 and 0
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
return (0);
}
