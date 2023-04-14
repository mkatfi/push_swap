/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:38:11 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/12 15:29:56 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker.h"

int	chech_sort(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp && tmp->next)
	{
		if (tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			return (0);
	}
	return (1);
}

void	ft_com_ter(t_list **a, t_list **b, char *rol)
{
	if (!ft_strcmp(rol, "ra\n"))
		ft_ra_a(a);
	else if (!ft_strcmp(rol, "rb\n"))
		ft_rb_b(b);
	else if (!ft_strcmp(rol, "rra\n"))
		ft_rra_a(a);
	else if (!ft_strcmp(rol, "rrb\n"))
		ft_rrb_b(b);
	else if (!ft_strcmp(rol, "pa\n"))
		ft_pa_a(a, b);
	else if (!ft_strcmp(rol, "pb\n"))
		ft_pb_b(a, b);
	else if (!ft_strcmp(rol, "sa\n"))
		sa_swap_a(*a);
	else if (!ft_strcmp(rol, "sb\n"))
		sb_swap_b(*b);
	else if (!ft_strcmp(rol, "rr\n"))
		ft_rr(a, b);
	else if (!ft_strcmp(rol, "rrr\n"))
		ft_rrr(a, b);
	else if (!ft_strcmp(rol, "ss\n"))
		ss_sa_sb(*a, *b);
	else
		ft_error("Error\n");
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*a;
	t_list	*b;
	char	**s;
	char	*rol;

	a = NULL;
	b = NULL;
	s = NULL;
	i = 1;
	if (ac < 2)
		return (0);
	put_to_stack(av, i, &a, s);
	while (1)
	{
		rol = get_next_line(0);
		if (!rol)
			break ;
		ft_com_ter(&a, &b, rol);
	}
	if (chech_sort(a) && b == NULL)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}
