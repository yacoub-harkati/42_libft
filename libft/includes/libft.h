#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <stdlib.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_isascii(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char *dest, const char *src, size_t n);
char *ft_strdup(const char *s);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2,  size_t n);
size_t	ft_strlen(const char *s);
int ft_atoi(const char *nptr);

#endif