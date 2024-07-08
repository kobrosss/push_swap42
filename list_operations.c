/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:51:00 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/08 20:54:24 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

t_list	*NewNode(int value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(*new_node));
	if(!new_node)
		return(NULL);
	new_node->value = value;
	new_node->index = -42;
	new_node->next = NULL;
	return(new_node);
}

void	PrintListNums(t_list *head)
{
	t_list	*buff;

	buff = head;
	while(buff != NULL)
	{
		ft_putnbr_fd(buff->value, 1);
		write(1," -> ", 4);
		buff = buff->next;
	}
}

int	ListSize(t_list *head)
{
	int	i;
	t_list	*buff;

	i = 0;
	buff = head;
	while(buff)
	{
		buff = buff->next;
		i++;
	}
	return(i);
}

void	PutInHead (t_list **list, t_list *new_node)
{
	new_node->next = *list;
	*list = new_node;
}

t_list	*FindTail(t_list *head)
{
	t_list	*buff;

	while(buff->next)
		buff = buff->next;
	return(buff);
}

void	PutInTail(t_list **list, t_list *new_node)
{
	t_list	*last_node;

	if(*list)
	{
		last_node = FindTail(*list);
		last_node->next = new_node;
		new_node->next = NULL;
	}
	else
	{
		*list = new_node;
		(*list)->next = NULL;
	}
}