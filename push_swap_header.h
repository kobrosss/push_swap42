/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:34:24 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/14 21:12:45 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int			value;
	int			index;
	struct s_list	*next;
}				t_list;

// Actions
int	s (t_list **list);
int	sa(t_list **list_a);
int	sb(t_list **list_b);
int	ss (t_list **list_a, t_list **list_b);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_b, t_list **list_a);
void	r(t_list **list);
void	ra(t_list **list_a);
void	rb(t_list **list_b);
void	rr(t_list **list_a, t_list **list_b);
int	reverse_r(t_list **list);
int	rra(t_list **list_a);
int	rrb(t_list **list_b);
int	rrr(t_list **list_a, t_list **list_b);
// Help functions
int	list_size(t_list *head);
static t_list	*get_last_min(t_list **list);
static int	get_min(t_list **list, int val);
int	find_distance(t_list **list, int index);
static void	until_3(t_list **list_a);
static int	get_max_bits(t_list **stack);
/*static void	until_4(t_list **list_a, t_list **list_b);
static void	until_5(t_list **list_a, t_list **list_b);*/
void	shit_sort(t_list **list_a, t_list **list_b);
void	indexation(t_list **list);
void	print_list_nums(t_list *head);
void	put_in_tail(t_list **list, t_list *new_node);
void	put_in_head (t_list **list, t_list *new_node);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	radix(t_list **list_a, t_list **list_b);
t_list	*find_tail(t_list *head);
t_list	*make_new_node(int value);
int	sort_check(t_list **list);
void	free_list(t_list **list);
void free_array(t_list *head);




#endif