#ifndef HEADER_H
#define HEADER_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/* *_memset - fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* _strspn - gets the length of a prefix substring and find the coincidences */
unsigned int _strspn(char *s, char *accept);

/* *_strpbrk - searches a string for any of a set of bytes*/
char *_strpbrk(char *s, char *accept);

/* *_strstr - locates a substring finds the first occurrence of the substringE */
char *_strstr(char *haystack, char *needle);

/* print_chessboard - prints the chessboard */
void print_chessboard(char (*a)[8]);

/*print_diagsums - prints the sum of the two diagonals of square matrix of in*/
void print_diagsums(int *a, int size);

#endif
