/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uitil.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:56:37 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/06 16:03:04 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*aray(t_list *a)
{
	t_list	*tmp;
	t_list	*min;

	tmp = a;
	while (tmp->index != -1)
		tmp = tmp->next;
	min = tmp;
	tmp = a;
	while (tmp)
	{
		if (tmp->index == -1 && min->content > tmp->content)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	sort_nb(t_list *a)
{
	t_list	*min;
	int		x;
	int		i;

	x = 0;
	i = ft_lstsize(a);
	while (i > 0)
	{
		min = aray(a);
		min->index = x++;
		i--;
	}
}

int	t_list_a(t_list	*a)
{
	int		last;
	t_list	*tmp;

	last = 0;
	tmp = a;
	if (tmp != NULL)
	{
		while (tmp)
		{
			last = (tmp)->index;
			tmp = (tmp)->next;
		}
	}
	return (last);
}

int	check_max_index_b(t_list *a, int max)
{
	t_list	*tmp;
	int		i;

	i = 0;
	if (!a || !a)
		return (0);
	tmp = a;
	while (tmp)
	{
		i++;
		if (tmp->index == max)
			return (i);
		tmp = tmp->next;
	}
	return (0);
}
