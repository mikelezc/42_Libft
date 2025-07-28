
#include "libft.h"

char	*ft_strnstr(const char *string, const char *match, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (match[0] == '\0')
		return ((char *)string);
	while (string[h] != '\0')
	{
		n = 0;
		while (string[h + n] == match[n] && (h + n) < len)
		{
			if (string [h + n] == '\0' && match[n] == '\0')
				return ((char *)&string[h]);
			n++;
		}
		if (match[n] == '\0')
			return ((char *)string + h);
		h++;
	}
	return (0);
}
