
#include"libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	listsize = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c)
			|| (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char			*buffer;
	unsigned int	i;

	i = 0;
	if (ft_strlen(s) <= n)
		n = ft_strlen(s);
	buffer = malloc(sizeof(char) * (n + 1));
	if (buffer == NULL)
		return (NULL);
	while (i < n)
	{
		buffer[i] = s[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

static char	**ft_freeall(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strlist;
	size_t	wc;
	size_t	recos;
	size_t	save;

	wc = 0;
	recos = 0;
	strlist = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!strlist)
		return (NULL);
	while (wc < ft_wordcount(s, c) && s[recos] != '\0')
	{
		while (s[recos] == c)
			recos++;
		save = recos;
		while (s[recos] != c && s[recos] != '\0')
			recos++;
		strlist[wc] = ft_strndup(&s[save], recos - save);
		if (strlist[wc++] == 0)
			return (ft_freeall(strlist));
	}
	strlist[wc] = NULL;
	return (strlist);
}
