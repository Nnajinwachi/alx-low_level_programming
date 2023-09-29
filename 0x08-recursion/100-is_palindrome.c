#include "main.h"

/**
 * str_len - Entry point
 * @s: pointer
 * Return: Always 0
 */


int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * check_palindrome - Entry point
 * @s: pointer
 * @i: index
 * @len: string length
 * Return: Always 0
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - Entry point
 * @s: pointer
 * Return: Always 0
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = str_len(s);

	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
