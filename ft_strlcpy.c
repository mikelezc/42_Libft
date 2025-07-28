
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t sizedst)
{
	size_t	sizesrc;
	size_t	i;

	sizesrc = ft_strlen(src);
	i = 0;
	if (sizedst != 0)
	{
		while (i < (sizedst - 1) && src[i] != 0)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (sizesrc);
}
