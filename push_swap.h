/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:06:41 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/07 02:49:11 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list {
	int				index;
	int				content;
	struct s_list	*next;
}	t_list;

typedef struct s_list2 {
	int	down;
	int	index;
	int	mid;
	int	start;
	int	end;
	int	offset;
	int	i;
}	t_list2;

t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
size_t	ft_strlen(const char *s);
int		get_max(t_list *stack);
int		get_min(t_list *stack);
char	**ft_split(char const *s, char c);
void	ft_putstr(char *s);
long	ft_atoi(char *str);
void	sb_swap_b(t_list *b, int k);
void	sa_swap_a(t_list *a, int k);
void	ss_sa_sb(t_list *a, t_list *b);
void	ft_ra_a(t_list **a, int k);
void	ft_rb_b(t_list **b, int k);
void	ft_rr(t_list **a, t_list **b);
void	ft_rra_a(t_list **a, int k);
void	ft_rrb_b(t_list **b, int k);
void	ft_rrr(t_list **a, t_list **b);
void	ft_pb_b(t_list **a, t_list **b);
void	ft_pa_a(t_list **a, t_list **b);
void	sort2(t_list **a);
void	sort3(t_list **a);
void	sort5(t_list **a, t_list **b);
int		ft_lstsize(t_list *stack);
int		min_index(t_list *a, int min);
int		chech_sort(t_list *a);
void	sort_nb(t_list *a);
void	sort_num(t_list **a, t_list **b);
void	print_stack(t_list *list);
void	ft_error(char *a);
t_list	*aray(t_list *a);
int		t_list_a(t_list *a);
int		check_max_index_b(t_list	*a, int max);
void	chaeck_c(t_list **a, t_list **b, t_list2 val);
void	chaeck_c_ff(t_list **a, t_list **b, t_list2 val);
void	sort_ff(t_list **a, t_list **b);
#endif