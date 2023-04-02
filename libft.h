#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
int ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t len);
int	ft_isalnum(int c);
int	ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *dst, const char * src, size_t dstsize);
void *ft_memcpy(void *dst, const void *src, size_t n);
int ft_atoi(const char *str);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
void *ft_calloc(size_t nelem, size_t elemsize);
char *ft_strdup(const char *s);
void    *ft_memmove(void *dest, const void *src, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif