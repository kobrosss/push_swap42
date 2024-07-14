/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 08:52:48 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/14 15:25:29 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

static t_list	*get_last_min(t_list **list)
{
	t_list	*head;
	t_list	*min;

	min = NULL;
	head = *list;
	if (head)
	{
		while (head)
		{
			if((head->index == -42) && (min == NULL || head->value < min->value))
				min = head;
			head = head->next;
		}
	}
	return(min);
}

void	indexation(t_list **list)
{
	t_list	*head;
	int	index;

	index = 0;
	head = get_last_min(list);
	while(head)
	{
		head->index = index++;
		head = get_last_min(list);
	}
}