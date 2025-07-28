
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*pnt;

	pnt = malloc(nitems * size);
	if (pnt == 0)
		return (pnt);
	ft_bzero(pnt, nitems * size);
	return (pnt);
}
