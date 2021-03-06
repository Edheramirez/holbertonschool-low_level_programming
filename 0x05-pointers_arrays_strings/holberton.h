#ifndef HEADER_H
#define HEADER_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/* takes a pointer an int as parameter and update the value */
void reset_to_98(int *n);

/* swap_int - swaps the value of two integers */
void swap_int(int *a, int *b);

/* returns the length of a string */
int _strlen(char *s);

/* _puts - prints a string follow by new line */
void _puts(char *str);

/* print_rev - prints a string in reverse and new line */
void print_rev(char *s);

/* rev_string - reverses a string */
void rev_string(char *s);

/* puts_half - prints half of a string */
void puts_half(char *str);

/* puts2 - prints every other char of a str start with first char and new line */
void puts2(char *str);

/* prints half of a string and a new line */
void puts_half(char *str);

/* print_array - prints n elements of array of int new line */
void print_array(int *a, int n);

/* *_strcpy - copies the string pointed by src, including the null byte */
char *_strcpy(char *dest, char *src);

#endif
