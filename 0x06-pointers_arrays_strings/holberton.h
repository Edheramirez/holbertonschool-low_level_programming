#ifndef HEADER_H
#define HEADER_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/* *_strcat - concatenates two strings */
char *_strcat(char *dest, char *src);

/* *_strncat - concatenates two strings whitout limit*/
char *_strncat(char *dest, char *src, int n);

/* *strncpy - copies a string */
char *_strncpy(char *dest, char *src, int n);

/* _strcmp - compares two strings */
int _strcmp(char *s1, char *s2);

/* reverse_array - reverses the content of an array of integers */
void reverse_array(int *a, int n);

#endif
