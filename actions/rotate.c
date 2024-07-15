/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:49:36 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/15 19:29:58 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

void	r(t_list **list)
{
	t_list	*first;
	t_list	*last;

	first = *list;
	last = *list;
	if (!list || !*list || !(*list)->next)
		return ;
	while (last->next)
		last = last->next;
	*list = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_list **list_a)
{
	r(list_a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **list_b)
{
	r(list_b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **list_a, t_list **list_b)
{
	r(list_a);
	r(list_b);
	ft_putstr_fd("rr\n", 1);
}
