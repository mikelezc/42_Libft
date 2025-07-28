
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	count1;
	size_t	count2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
	if (!res)
		return (NULL);
	count1 = 0;
	while (s1[count1])
	{
		res[count1] = s1[count1];
		count1++;
	}
	count2 = 0;
	while (s2[count2])
	{
		res[count1] = s2[count2];
		count1++;
		count2++;
	}
	res[count1] = '\0';
	return (res);
}
