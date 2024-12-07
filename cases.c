#include "push_swap.h"

int	case_one(t_list **head_a)
{
	if (*(int *)(*head_a)->nxt->nxt->con > *(int *)(*head_a)->con
		&& *(int *)(*head_a)->con > *(int *)(*head_a)->nxt->con)
	{
		swap(head_a);
		ft_printf("sa\n");
		return (1);
	}
	return (0);
}

int	case_two(t_list **head_a)
{
	if (*(int *)(*head_a)->con > *(int *)(*head_a)->nxt->con
		&& *(int *)(*head_a)->nxt->con > *(int *)(*head_a)->nxt->nxt->con)
	{
		swap(head_a);
		ft_printf("sa\n");
		rev_rotate(head_a);
		ft_printf("rra\n");
		return (1);
	}
	return (0);
}

int	case_three(t_list **head_a)
{
	if (*(int *)(*head_a)->con > *(int *)(*head_a)->nxt->nxt->con
		&& *(int *)(*head_a)->nxt->nxt->con > *(int *)(*head_a)->nxt->con)
	{
		rotate(head_a);
		ft_printf("ra\n");
		return (1);
	}
	return (0);
}

int	case_four(t_list **head_a)
{
	if (*(int *)(*head_a)->nxt->con > *(int *)(*head_a)->nxt->nxt->con
		&& *(int *)(*head_a)->nxt->nxt->con > *(int *)(*head_a)->con)
	{
		swap(head_a);
		ft_printf("sa\n");
		rotate(head_a);
		ft_printf("ra\n");
		return (1);
	}
	return (0);
}

int	case_five(t_list **head_a)
{
	if (*(int *)(*head_a)->nxt->con > *(int *)(*head_a)->con
		&& *(int *)(*head_a)->con > *(int *)(*head_a)->nxt->nxt->con)
	{
		rev_rotate(head_a);
		ft_printf("rra\n");
		return (1);
	}
	return (0);
}
