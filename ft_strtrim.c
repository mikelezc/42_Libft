
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	in;
	size_t	out;

	if (!s1 || !set)
		return (NULL);
	in = 0;
	out = ft_strlen(s1);
	while (s1[in] && ft_strchr(set, s1[in]))
		in++;
	while (ft_strchr(set, s1[out]) && out > in)
		out--;
	return (ft_substr(s1, in, (out - in +1)));
}
