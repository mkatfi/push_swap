/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:02:09 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/03 22:26:37 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb_swap_b(t_list *b, int k)
{
	int	tmp;

	if (!b)
		return ;
	tmp = b->content;
	b->content = b->next->content;
	b->next->content = tmp;
	if (k == 1)
		ft_putstr("sb\n");
}

void	sa_swap_a(t_list *a, int k)
{
	int	tmp;

	if (!a)
		return ;
	tmp = a->content;
	a->content = a->next->content;
	a->next->content = tmp;
	if (k == 1)
		ft_putstr("sa\n");
}

void	ss_sa_sb(t_list *a, t_list *b)
{
	sa_swap_a(a, 0);
	sb_swap_b(b, 0);
	ft_putstr("ss\n");
}
