/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:49:36 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/11 20:01:14 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

int	r(t_list **list)
{
	t_list	*head;
	t_list	*tail;

	if (list_size(*list) < 2)
		return (-1);
	head = *list;
	tail = find_tail(head);
	*list = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_list **list_a)
{
	if (r(list_a) == -1)
		return (-1);
	ft_putstr_fd("ra\n", 1);
	return (0);
}

int	rb(t_list **list_b)
{
	if (r(list_b) == -1)
		return (-1);
	ft_putstr_fd("rb\n", 1);
	return (0);
}

int	rr(t_list **list_a, t_list **list_b)
{
	if ((list_size (*list_a) < 2) || (list_size(*list_b) < 2))
		return (-1);
	r(list_a);
	r(list_b);
	ft_putstr_fd("rr\n", 1);
	return (0);
}
