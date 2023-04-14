/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 22:33:21 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/04 13:59:05 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rra_a(t_list	**a, int k)
{
	t_list	*last;
	t_list	*ret;

	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	last = *a;
	ret = *a;
	while (last->next)
	{
		ret = last;
		last = last->next;
	}
	last->next = *a;
	*a = last;
	ret->next = NULL;
	if (k == 1)
		write(1, "rra\n", 4);
}

void	ft_rrb_b(t_list	**b, int k)
{
	t_list	*last;
	t_list	*ret;

	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	last = *b;
	ret = *b;
	while (last->next)
	{
		ret = last;
		last = last->next;
	}
	last->next = *b;
	*b = last;
	ret->next = NULL;
	if (k == 1)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_rra_a(a, 0);
	ft_rrb_b(b, 0);
	write(1, "rrr\n", 4);
}
