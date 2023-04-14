/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:56:07 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/13 18:09:20 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	check_half(t_list **b, int index)
{
	if (check_max_index_b(*b, index) >= ft_lstsize(*b) / 2)
		while ((*b)->index != index)
			ft_rrb_b(b, 1);
	else
		while ((*b)->index != index)
			ft_rb_b(b, 1);
}

void	ff_puch_a(t_list **a, t_list **b, t_list2 val)
{
	val.down = 0;
	val.index = ft_lstsize(*b) - 1;
	while (*b)
	{
		if (val.index == (*b)->index)
		{
			ft_pa_a(a, b);
			val.index--;
		}
		else if (val.index == t_list_a(*a)
			|| (val.down > 0 && t_list_a(*a) == val.index))
		{
			ft_rra_a(a, 1);
			val.down--;
			val.index--;
		}
		else if (val.down == 0 || (*b)->index > t_list_a(*a))
		{
			(ft_pa_a(a, b), ft_ra_a(a, 1));
			val.down++;
		}
		else
			check_half(b, val.index);
	}
}

void	ff_puch_b(t_list **a, t_list **b, t_list2 *val)
{
	if (val->i == 0 && val->offset + val->i / 2 <= val->mid)
	{
		val->i = 20;
		val->offset += val->i / 2;
	}
	else if (val->i == 0)
	{
		while (*a)
		{
			ft_pb_b(a, b);
			if ((*b)->index < val->mid)
				ft_rb_b(b, 1);
		}
	}
}

void	sort_num(t_list **a, t_list **b)
{
	t_list2	val;

	sort_nb(*a);
	val.i = 20;
	val.mid = ft_lstsize(*a) / 2;
	val.offset = val.i / 2;
	while (*a)
	{
		val.start = val.mid - val.offset;
		val.end = val.mid + val.offset;
		if (val.i != 0)
		{
			if ((*a)->index >= val.start && (*a)->index < val.end)
			{
				ft_pb_b(a, b);
				if ((*b)->index < val.mid)
					ft_rb_b(b, 1);
				val.i--;
			}
			else
				ft_ra_a(a, 1);
		}
		ff_puch_b(a, b, &val);
	}
	chaeck_c(a, b, val);
}

void	chaeck_c(t_list **a, t_list **b, t_list2 val)
{
	ff_puch_a(a, b, val);
	while (!chech_sort(*a))
		ft_rra_a(a, 1);
}
