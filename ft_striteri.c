
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	int		j;

	j = 0;
	if (s && f)
	{
		i = ft_strlen(s);
		while (j < i)
		{
			(f)(j, s);
			s++;
			j++;
		}
	}
}
