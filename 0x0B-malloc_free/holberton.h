#ifndef HOLBERTON_H
#define HOLBERTON_H

/* create_array - creates an array of chars and initializes whit special char */
char *create_array(unsigned int size, char c);

/* _strdup - returns a pointer to anew allocated space in memory  */
char *_strdup(char *str);

/* str_concat - concatenates two strings */
char *str_concat(char *s1, char *s2);

/* alloc_grid - returns a pointer to a 2 dimensional array of int */
int **alloc_grid(int width, int height);

/* free_grid - frees a 2 dimensional grid previously created by a function */
void free_grid(int **grid, int height);

#endif
