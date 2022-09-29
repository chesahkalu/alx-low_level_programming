#include "main.h"

/**
 * test - tests if wildcard matches
 * @s5: string to compare
 * @s6: wildcard match to compare
 * @t5: first place check
 * @t6: first place compare to wild card
 *
 * Return: spot that matches or NULL
 */
char *test(char *s5, char *s6, char *t5, char *t6)
{
	if (*s6 == '*' || (*s5 == '\0' && *s6 == '\0'))
		return (t5);
	else if (*s5 != *s6)
		return (wildcard(s5, t6));
	else
		return (test(s5 + 1, s6 + 1, t5, t6));
}
/**
 * wildcard - checks for wildcards
 * @s3: string to compare
 * @s4: string to check
 *
 * Return: pointer to spot in s3 that matches s4
 */
char *wildcard(char *s3, char *s4)
{
	if (*s3 != *s4)
	{
		if (*s3 == '\0')
			return (0);
		return (wildcard(s3 + 1, s4));
	}
	return (test(s3 + 1, s4 + 1, s3, s4));
}

/**
 * wildcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string, possible wildcard
 *
 * Return: 1 if match, else 0
 */
int wildcmp(char *s1, char *s2)
{
	char *p;

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	else if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s2 == '*')
	{
		p = wildcard(s1, s2 + 1);
		if (p == 0)
			return (0);
		return (wildcmp(p + 1, s2 + 2));
	}
	else if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
