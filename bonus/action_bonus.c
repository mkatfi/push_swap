/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 20:02:09 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/08 14:26:10 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sb_swap_b(t_list *b)
{
	int	tmp;

	if (!b || !b->next)
		return ;
	tmp = b->content;
	b->content = b->next->content;
	b->next->content = tmp;
}

void	sa_swap_a(t_list *a)
{
	int	tmp;

	if (!a || !a->next)
		return ;
	tmp = a->content;
	a->content = a->next->content;
	a->next->content = tmp;
}

void	ss_sa_sb(t_list *a, t_list *b)
{
	sa_swap_a(a);
	sb_swap_b(b);
}
