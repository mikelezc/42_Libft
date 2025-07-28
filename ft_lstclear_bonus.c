
#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*advance;

	advance = NULL;
	while (*lst)
	{
		advance = (*lst)->next;
		(del)((*lst)->content);
		free(*lst);
		(*lst) = advance;
	}
}
