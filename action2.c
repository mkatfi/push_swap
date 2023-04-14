/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 22:25:28 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/04 13:52:57 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_ra_a(t_list **a, int k)
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
	if (k == 1)
		write(1, "ra\n", 3);
}

void	ft_rb_b(t_list **b, int k)
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
	if (k == 1)
		write(1, "rb\n", 3);
}

void	ft_rr(t_list **a, t_list **b)
{
	ft_ra_a(a, 0);
	ft_rb_b(b, 0);
	write(1, "rr\n", 3);
}
