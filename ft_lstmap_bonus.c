
#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newl;
	t_list	*newn;
	void	*content;

	newl = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{	
			ft_lstclear(&newl, del);
			return (NULL);
		}
		newn = ft_lstnew(content);
		if (!newn)
		{
			del(content);
			ft_lstclear(&newl, del);
			return (NULL);
		}
		ft_lstadd_back(&newl, newn);
		lst = lst->next;
	}
	return (newl);
}
