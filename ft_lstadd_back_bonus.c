
#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*fwd_lst;

	if (new)
	{
		if (!*lst)
		{	
			*lst = new;
			return ;
		}
		fwd_lst = ft_lstlast(*lst);
		fwd_lst->next = new;
	}
}
