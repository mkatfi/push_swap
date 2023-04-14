/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:12:33 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/22 20:12:33 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	get_max(t_list *stack)
{
	t_list	*tmp;
	int		max;

	tmp = stack;
	max = tmp->index;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (max < tmp->index)
			max = tmp->index;
	}
	return (max);
}

int	get_min(t_list *stack)
{
	t_list	*tmp;
	int		min;

	tmp = stack;
	min = tmp->content;
	while (tmp)
	{
		if (min > tmp->content)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

int	min_index(t_list *a, int min)
{
	int		i;
	t_list	*temp;

	temp = a;
	i = 0;
	while (temp)
	{
		if (min == temp->content)
			return (i);
		temp = temp->next;
		i++;
	}
	return (-1);
}
