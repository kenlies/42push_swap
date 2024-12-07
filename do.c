#include "push_swap.h"

void	do_rots(t_info *info)
{
	if (info->a_rot < info->b_rot)
	{
		info->ab_rotate = info->a_rot;
		info->b_rotate = abs(info->a_rot - info->b_rot);
		info->a_rotate = 0;
	}
	else if (info->a_rot > info->b_rot)
	{
		info->ab_rotate = info->b_rot;
		info->a_rotate = abs(info->a_rot - info->b_rot);
		info->b_rotate = 0;
	}
	else if (info->a_rot == info->b_rot)
	{
		info->ab_rotate = info->a_rot;
		info->a_rotate = 0;
		info->b_rotate = 0;
	}
}

void	do_rev_rots(t_info *info)
{
	if (info->a_rev_rot < info->b_rev_rot)
	{
		info->ab_rev_rotate = info->a_rev_rot;
		info->b_rev_rotate = abs(info->a_rev_rot - info->b_rev_rot);
		info->a_rev_rotate = 0;
	}
	else if (info->a_rev_rot > info->b_rev_rot)
	{
		info->ab_rev_rotate = info->b_rev_rot;
		info->a_rev_rotate = abs(info->a_rev_rot - info->b_rev_rot);
		info->b_rev_rotate = 0;
	}
	else if (info->a_rev_rot == info->b_rev_rot)
	{
		info->ab_rev_rotate = info->a_rev_rot;
		info->a_rev_rotate = 0;
		info->b_rev_rotate = 0;
	}
}

void	do_double_moves(t_info *info)
{
	if (info->a_rot && info->b_rot)
		do_rots(info);
	else if (info->a_rev_rot && info->b_rev_rot)
		do_rev_rots(info);
}
