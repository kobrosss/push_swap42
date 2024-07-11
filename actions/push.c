/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:47:47 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/11 20:01:05 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

int	p(t_list **list_in, t_list **list_out)
{
	t_list	*buff_out;
	t_list	*first_element_in;
	t_list	*first_element_out;

	if (list_size(*list_out) == 0)
		return (-1);
	first_element_in = *list_in;
	first_element_out = *list_out;
	buff_out = first_element_out;
	first_element_out = first_element_out->next;
	*list_out = first_element_out;
	if (!first_element_in)
	{
		first_element_in = buff_out;
		first_element_in->next = NULL;
		*list_in = first_element_in;
	}
	else
	{
		buff_out->next = first_element_in;
		*list_in = buff_out;
	}
	return (0);
}

int	pa(t_list **list_a, t_list **list_b)
{
	if (p(list_a, list_b) == -1)
		return (-1);
	ft_putstr_fd("pa\n", 1);
	return (0);
}

int	pb(t_list **list_b, t_list **list_a)
{
	if (p(list_b, list_a) == -1)
		return (-1);
	ft_putstr_fd("pb\n", 1);
	return (0);
}
