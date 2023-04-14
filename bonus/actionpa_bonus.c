/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actionpa_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 01:14:46 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/12 14:38:36 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
}
