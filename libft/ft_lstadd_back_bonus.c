#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst)
		return;
	if (*lst == NULL) {
		*lst = new;
	}
	else
	{
		current = *lst;
		while (current->nxt) {
			current = current->nxt;
		}
		current->nxt = new;
	}
}
