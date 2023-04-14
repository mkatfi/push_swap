/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action3_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 22:33:21 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/11 11:57:41 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rra_a(t_list	**a)
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
}

void	ft_rrb_b(t_list	**b)
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
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_rra_a(a);
	ft_rrb_b(b);
}
