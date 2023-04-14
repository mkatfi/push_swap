/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:26:50 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/12 14:56:54 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort2(t_list **a)
{
	if ((*a)->content > (*a)->next->content)
		sa_swap_a(*a, 1);
}

void	sort33(t_list **a)
{
	if ((*a)->next->content > (*a)->content
		&& (*a)->next->content > (*a)->next->next->content)
	{
		if ((*a)->content > (*a)->next->next->content)
			ft_rra_a(a, 1);
	}
	else if ((*a)->content > (*a)->next->content
		&& (*a)->next->content < (*a)->next->next->content)
	{
		sa_swap_a(*a, 1);
	}
}

void	sort3(t_list **a)
{
	if (ft_lstsize(*a) == 3)
	{
		if ((*a)->content > (*a)->next->content
			&& (*a)->content > (*a)->next->next->content)
		{
			ft_ra_a(a, 1);
			if ((*a)->content > (*a)->next->content)
				sa_swap_a(*a, 1);
		}
		else if ((*a)->content < (*a)->next->content
			&& (*a)->content < (*a)->next->next->content)
		{
			if ((*a)->next->content > (*a)->next->next->content)
			{
				ft_rra_a(a, 1);
				sa_swap_a(*a, 1);
			}
		}
		else
			sort33(a);
	}
}

int	chech_sort(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp && tmp->next)
	{
		if (tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			return (0);
	}
	return (1);
}

void	sort5(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->content != get_min(*a))
		{
			if ((min_index(*a, get_min(*a)) <= ft_lstsize(*a) / 2))
				ft_ra_a(a, 1);
			else
				ft_rra_a(a, 1);
		}
		else
			ft_pb_b(a, b);
	}
	sort3(a);
	while (*b)
		ft_pa_a(a, b);
}
