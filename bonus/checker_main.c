/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:16:56 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/12 15:01:10 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_doubal(t_list *a)
{
	int		i;
	int		c;
	t_list	*b;

	b = a;
	while (b)
	{
		c = b->content;
		a = b;
		i = 0;
		while (a)
		{
			if (c == a->content)
			{
				i++;
				if (i == 2)
					return (1);
			}
			a = a->next;
		}
		b = b->next;
	}
	return (0);
}

void	check_sign(char *s)
{
	int	j;

	j = 0;
	while (s[j])
	{
		if ((s[j] < '0' || s[j] > '9')
			&& s[j] != '+' && s[j] != '-' && s[j] != ' ')
			ft_error("Error\n");
		if ((s[j] == '+' || s[j] == '-')
			&& (s[j + 1] < '0' || s[j + 1] > '9'))
			ft_error("Error\n");
		if ((s[j] == '+' || s[j] == '-')
			&& (j != 0 && s[j - 1] != ' '))
			ft_error("Error\n");
		j++;
	}
}

void	put_to_stack(char **av, int i, t_list **a, char **s)
{
	int	k;

	while (av[i])
	{
		check_sign(av[i]);
		s = ft_split(av[i], 32);
		if (!s[0])
			ft_error("Error\n");
		k = 0;
		if (ft_strlen(av[i]) >= 11)
			ft_error("Error\n");
		while (s[k])
		{
			if (ft_atoi(s[k]) > 2147483647 || ft_atoi(s[k]) < -2147483648)
				ft_error("Error\n");
			ft_lstadd_back(a, ft_lstnew(ft_atoi(s[k])));
			free(s[k]);
			if (ft_doubal(*a) == 1)
				ft_error("Error\n");
			k++;
		}
		free(s);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (1);
		i++;
	}	
	return (0);
}
