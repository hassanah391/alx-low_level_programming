#ifndef MAIN_H
#define MAIN_H

int _strlen(char *s);
int _strlen_imple(char *s, int n);
int _strlen_recursion(char *s);
int _putchar(char c);
void _putstring(char *str);
int _putint(int n);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
