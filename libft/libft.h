#ifndef LIBFT__H_
#define LIBFT__H_
#define NULL ((void *)0)
#include <string.h>

char *ft_strstr(char *haystack, char *needle);
int     ft_tolower(int c);
int     ft_toupper(int c);
int ft_atoi(char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strlen(char* str);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memchr(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *dest, int val, size_t length);
void ft_bzero(void *s, size_t n);

#endif