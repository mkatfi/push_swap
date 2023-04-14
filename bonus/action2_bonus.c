/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action2_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:25:28 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/07 18:31:16 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_ra_a(t_list **a)
{
	t_list	*first;
	t_list	*last;

	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	first = *a;
	*a = (*a)->next;
	last = *a;
	first->next = NULL;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	ft_rb_b(t_list **b)
{
	t_list	*first;
	t_list	*last;

	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	first = *b;
	*b = (*b)->next;
	last = *b;
	first->next = NULL;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	ft_rr(t_list **a, t_list **b)
{
	ft_ra_a(a);
	ft_rb_b(b);
}
