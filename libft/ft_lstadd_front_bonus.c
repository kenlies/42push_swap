#include "libft.h"

void	ft_lstadd_front(t_list **head, t_list *new)
{
	if (!new)
		return ;
	if (!head)
	{
		*head = new;
		return ;
	}
	new->nxt = *head;
	*head = new;
}
