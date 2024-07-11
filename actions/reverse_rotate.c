/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:52:06 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/11 20:01:10 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

int	reverse_r(t_list **list)
{
	t_list	*head;
	t_list	*tail;

	if (list_size(*list) < 2)
		return (-1);
	head = *list;
	tail = find_tail(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *list;
	*list = tail;
	return (0);
}

int	rra(t_list **list_a)
{
	if (reverse_r(list_a) == -1)
		return (-1);
	ft_putstr_fd("rra\n", 1);
	return (0);
}

int	rrb(t_list **list_b)
{
	if (reverse_r(list_b) == -1)
		return (-1);
	ft_putstr_fd("rrb\n", 1);
	return (0);
}

int	rrr(t_list **list_a, t_list **list_b)
{
	if ((list_size(*list_a) < 2) || (list_size(*list_b) < 2))
		return (-1);
	reverse_r(list_a);
	reverse_r(list_b);
	ft_putstr_fd("rrr\n", 1);
	return (0);
}
