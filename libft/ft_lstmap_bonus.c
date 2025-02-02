#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst || !del)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->con));
		if (!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->nxt;
	}
	return (new);
}
