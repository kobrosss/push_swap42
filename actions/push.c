/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:47:47 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/15 18:59:01 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*first_a;

	first_a = *list_a;
	if (!list_a || !*list_a)
		return ;
	*list_a = (*list_a)->next;
	first_a->next = *list_b;
	*list_b = first_a;
	ft_putstr_fd("pb\n", 1);
}

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*first_b;

	first_b = *list_b;
	if (!list_b || !*list_b)
		return ;
	*list_b = (*list_b)->next;
	first_b->next = *list_a;
	*list_a = first_b;
	ft_putstr_fd("pa\n", 1);
}
