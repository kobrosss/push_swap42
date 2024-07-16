/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:34:24 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/16 21:56:16 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

// Actions
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_b, t_list **list_a);
void	r(t_list **list);
void	ra(t_list **list_a);
void	rb(t_list **list_b);
void	rr(t_list **list_a, t_list **list_b);
int		s(t_list **list);
int		sa(t_list **list_a);
int		sb(t_list **list_b);
int		ss(t_list **list_a, t_list **list_b);
int		reverse_r(t_list **list);
int		rra(t_list **list_a);
int		rrb(t_list **list_b);
int		rrr(t_list **list_a, t_list **list_b);
// Help functions
char	*ft_itoa(int n);
void	error_exit(char *message);
void	free_list(t_list **list);
void	free_array(t_list *head);
void	shit_sort(t_list **list_a, t_list **list_b);
void	indexation(t_list **list);
void	print_list_nums(t_list *head);
void	put_in_tail(t_list **list, t_list *new_node);
void	put_in_head(t_list **list, t_list *new_node);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	*ft_calloc(size_t count, size_t size);
void	radix(t_list **list_a, t_list **list_b);
void	until_3(t_list **list_a);
void	until_4(t_list **list_a, t_list **list_b);
void	until_5(t_list **list_a, t_list **list_b);
void	free_args(char **str);
void	check_args(int ac, char **av);
char	**ft_split(char const *s, char c);
int		has_duplicates(char **args, int current_index, int value);
int		ft_strcmp(char *s1, char *s2);
int		get_min(t_list **list, int index);
int		list_size(t_list *head);
int		ft_atoi(const char *nptr);
int		find_distance(t_list **list, int index);
int		ft_isdigit(int c);
int		is_smtng_here(int num, char **av, int i);
int		isnum(char *num);
int		sort_check(t_list **list);
t_list	*find_tail(t_list *head);
t_list	*make_new_node(int value);
#endif
