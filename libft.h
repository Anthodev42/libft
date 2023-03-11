#ifndef FT_H
# define FT_H

# include <unistd.h>
// ctype.h
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c); 
int	ft_tolower(int c);
int	ft_toupper(int c);
// string.h
int	ft_strlen(char *str);
void	ft_strlcpy(char *dst, const char *src, int size);
void	*ft_memcpy(void *dest, const void *src, int n);
#endif
