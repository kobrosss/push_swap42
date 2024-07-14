/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_until_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:10:29 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/14 22:03:29 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

static int get_min(t_list **list, int index) {
	t_list *head = *list;
	int min = __INT_MAX__;

	while (head)
	{
		if ((head->index < min) && (head->index != index))
			min = head->index;
		head = head->next;
	}
	return (min);
}

static void	until_3(t_list **list_a)
{
	t_list	*head;
	int		min;
	int		next_min;

	head = *list_a;
	min = get_min(list_a, -42);
	next_min = get_min(list_a, min);
	if (sort_check(list_a))
		return ;
	if (head->index == min && head->index != next_min)
	{
		ra(list_a);
		sa(list_a);
		rra(list_a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			sa(list_a);
		else
			rra(list_a);
	}
	else
	{
		if (head->next->index == min)
			ra(list_a);
		else
		{
			sa(list_a);
			rra(list_a);
		}
	}
}

static void	until_4(t_list **list_a, t_list **list_b)
{
	int	distance;

	if (sort_check(list_a))
		return ;
	distance = find_distance(list_a, get_min(list_a, -42));
	if(distance == 1)
		ra(list_a);
	else if (distance == 2)
	{
		ra(list_a);
		ra(list_a);
	}
	else if (distance == 3)
		rra(list_a);
	if (sort_check(list_a))
		return ;
	pb(list_a, list_b);
	until_3(list_a);
	pa(list_a, list_b);
}

static void	until_5(t_list **list_a, t_list **list_b)
{
	int	distance;

	if (sort_check(list_a))
		return ;
	distance = find_distance(list_a, get_min(list_a, -42));
	if (distance == 1)
		ra(list_a);
	else if (distance == 2)
	{
		ra(list_a);
		ra(list_a);
	}
	else if (distance == 3)
	{
		rra(list_a);
		rra(list_a);
	}
	else if (distance == 4)
		rra(list_a);
	if (sort_check(list_a))
		return ;
	pb(list_a, list_b);
	until_4(list_a, list_b);
	pa(list_a, list_b);
}

void	shit_sort(t_list **list_a, t_list **list_b)
{
	int size;

	if (sort_check(list_a) || list_size(*list_a) == 0
		|| list_size(*list_a) == 0)
		return ;
	size = list_size(*list_a);
	if(size == 2)
		sa(list_a);
	else if(size == 3)
		until_3(list_a);
	else if(size == 4)
		until_4(list_a, list_b);
	else if(size == 5)
		until_5(list_a, list_b);
}