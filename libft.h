#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
int ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t len);
int	ft_isalnum(int c);
//int	ft_isalnum(int c);
#endif