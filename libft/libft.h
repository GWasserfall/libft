#ifndef LIBFT__H_
#define LIBFT__H_
#define NULL ((void *)0)
#include <string.h>

// Memory man-nipps
//void	ft_bzero(void *s, size_t n);

// Is it?
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);

// String man-nipps


void*	ft_memccpy(void* dest, const void *src, int c, size_t n);
void*	ft_memset(void *dest, int val, size_t length);


int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_strlen(char* str);
char	*ft_strstr(char *haystack, char *needle);

#endif