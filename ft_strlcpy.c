#include "libft.h"

void	ft_strlcpy(char *dst, const char *src, int size)
{
	int	i;

	i = 0;
	while(src[size])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
}
