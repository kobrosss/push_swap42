/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:21:53 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/14 09:54:13 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
#include "actions/push.c"
#include "actions/swaps.c"
#include "actions/rotate.c"
#include "actions/reverse_rotate.c"
#include "utils/list_operations.c"
#include "utils/list_operations2.c"
#include "utils/libft_utils.c"
#include "utils/radix.c"
#include "utils/indexation.c"

void print_list(t_list *head) {
	while (head)
	{
	printf("Value: %d, Index: %d\n", head->value, head->index);
	head = head->next;
	}
}

int main ()
{
	t_list *list1 = make_new_node(22);
	list1 -> next = make_new_node(998);
	list1 ->next->next = make_new_node(228);

	indexation(&list1);

	print_list(list1);
}