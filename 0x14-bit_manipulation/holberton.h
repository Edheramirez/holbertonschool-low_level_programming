#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>

/* _putchar - print putchar */
int _putchar(char c);

/* binary_to_uint - converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* print_binary - prints the binary representation of a number */
void print_binary(unsigned long int n);

/* get_bit - returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* set_bit - sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);

/* clear_bit - sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);

/*flip_bits-returns the number of bits flip to get from one number to another*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);


#endif
