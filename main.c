/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:21:53 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/11 20:13:06 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
#include "actions/push.c"
#include "actions/swaps.c"
#include "actions/rotate.c"
#include "actions/reverse_rotate.c"
#include "utils/list_operations.c"
#include "utils/libft_utils.c"

int main()
{
	t_list *list1 = make_new_node(42);
	list1->next = make_new_node(20);
	list1->next->next = make_new_node(30);
	t_list *list2 = make_new_node(10);
	list2->next = make_new_node(30);
	list2->next->next = make_new_node(32);

	printf("Original list1:\n");
	print_list_nums(list1);
	write(1, "\n", 1);
	print_list_nums(list2);
	printf("\n");

	printf("After swap:\n");
	rrr(&list2, &list1);
	print_list_nums(list1);
	write(1, "\n", 1);
	print_list_nums(list2);


	t_list *tmp;
	while (list1)
	{
		tmp = list1;
		list1 = list1->next;
		free(tmp);
	}
	return 0;
}