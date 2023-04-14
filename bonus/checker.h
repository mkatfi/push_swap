/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:44:55 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/08 13:46:19 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"

typedef struct s_list {
	int				index;
	int				content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
char	**ft_split(char const *s, char c);
void	ft_putstr(char *s);
long	ft_atoi(char *str);
void	sb_swap_b(t_list *b);
void	sa_swap_a(t_list *a);
void	ss_sa_sb(t_list *a, t_list *b);
void	ft_ra_a(t_list **a);
void	ft_rb_b(t_list **b);
void	ft_rr(t_list **a, t_list **b);
void	ft_rra_a(t_list **a);
void	ft_rrb_b(t_list **b);
void	ft_rrr(t_list **a, t_list **b);
void	ft_pb_b(t_list **a, t_list **b);
void	ft_pa_a(t_list **a, t_list **b);
int		ft_lstsize(t_list *stack);
void	ft_error(char *a);
void	put_to_stack(char **av, int i, t_list **a, char **s);
int		ft_strcmp(char *str1, char *str2);
#endif
