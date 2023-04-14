/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:14:04 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/29 09:41:13 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*n;

	n = malloc (sizeof(t_list));
	if (n == NULL)
	{
		return (NULL);
	}
	n->index = -1;
	n->content = content;
	n->next = NULL;
	return (n);
}
