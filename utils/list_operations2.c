/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:52:41 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/12 18:08:13 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

int	list_size(t_list *head)
{
	int		i;
	t_list	*buff;

	i = 0;
	buff = head;
	while (buff)
	{
		buff = buff->next;
		i++;
	}
	return (i);
}

void	free_list(t_list **list)
{
	t_list	*head;
	t_list	*buff;

	head = *list;
	while (head)
	{
		buff = head;
		head = head->next;
		free(buff);
	}
	free(list);
}

int	sort_check(t_list **list)
{
	t_list	*head;

	head = *list;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}
