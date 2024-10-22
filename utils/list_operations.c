/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:51:00 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/12 16:54:32 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

t_list	*make_new_node(int value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -42;
	new_node->next = NULL;
	return (new_node);
}

void	print_list_nums(t_list *head)
{
	t_list	*buff;

	buff = head;
	while (buff != NULL)
	{
		ft_putnbr_fd(buff->value, 1);
		write (1, " -> ", 4);
		buff = buff->next;
	}
}

void	put_in_head(t_list **list, t_list *new_node)
{
	new_node->next = *list;
	*list = new_node;
}

t_list	*find_tail(t_list *head)
{
	t_list	*buff;

	buff = head;
	while (buff->next)
	{
		buff = buff->next;
		if (buff->next == NULL)
			return (buff);
	}
	return (buff);
}

void	put_in_tail(t_list **list, t_list *new_node)
{
	t_list	*last_node;

	if (*list)
	{
		last_node = find_tail(*list);
		last_node->next = new_node;
		new_node->next = NULL;
	}
	else
	{
		*list = new_node;
		(*list)->next = NULL;
	}
}
