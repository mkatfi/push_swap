/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actionpa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 01:14:46 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/11 11:03:28 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_pb_b(t_list **a, t_list **b)
{
	t_list	*first_a;
	t_list	*first_b;

	if (a == NULL || *a == NULL)
		return ;
	first_a = *a;
	first_b = *b;
	*a = (*a)->next;
	if (*b)
	{
		*b = first_a;
		first_a->next = first_b;
	}
	else
	{
		*b = first_a;
		first_a->next = NULL;
	}
	write(1, "pb\n", 3);
}

void	ft_pa_a(t_list **a, t_list **b)
{
	t_list	*first_a;
	t_list	*first_b;

	if (b == NULL || *b == NULL)
		return ;
	first_a = *a;
	first_b = *b;
	*b = (*b)->next;
	if (*a)
	{
		*a = first_b;
		first_b->next = first_a;
	}
	else
	{
		*a = first_b;
		first_b->next = NULL;
	}
	write(1, "pa\n", 3);
}
