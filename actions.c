/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:13:55 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/10 21:26:26 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	s(t_list **list)
{
	t_list	*first_element;
	t_list	*second_element;
	int	first_buff_value;

	if (list_size(*list) < 2)
		return(-1);
	first_element = *list;
	second_element = first_element->next;
	if (!first_element && !second_element)
	{
		ft_putstr_fd("Error while swapping\n", 1);
		exit(0);
	}
	first_buff_value = first_element->value;
	first_element->value = second_element->value;
	second_element->value = first_buff_value;
	return (0);
}

int	sa(t_list **list_a)
{
	if (s(list_a) == -1)
		return (-1);
	ft_putstr_fd("sa\n", 1);
	return (0);
}

int	sb(t_list **list_b)
{
	if (s(list_b) == -1)
		return (-1);
	ft_putstr_fd("sb\n", 1);
	return (0);
}

int ss (t_list **list_a, t_list **list_b)
{
	if ((list_size(*list_a) < 2) || (list_size(*list_b )< 2))
	{
		ft_putstr_fd("One of stacks have less than 2 variables", 1);
		return (-1);
	}
	s(list_a);
	s(list_b);
	ft_putstr_fd("ss\n", 1);
	return (0);
}

/*int p(t_list **list_in, t_list **list_out)
{
	t_list	*buff_out;
	t_list	*first_element_in;
	t_list	*first_element_out;

	if (list_size(*list_out) == 0)
		return (-1);
	first_element_in = *list_in;
	first_element_out = *list_out;
	buff_out = first_element_out;
}*/