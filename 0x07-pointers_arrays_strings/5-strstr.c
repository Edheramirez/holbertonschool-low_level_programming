# include "holberton.h"

/**
 * *_strstr -  locates a substring finds the first occurrence of the substring
 * @haystack: string destin
 * @needle: string src
 * Return: pointer to the beginning of the located substring or NULL if not fou
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
