/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:21:53 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/14 21:19:36 by rkobelie         ###   ########.fr       */
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
#include "utils/sort_until_5.c"

void    print_list(t_list *list)
{
    while (list)
    {
        printf("%d ", list->value);
        list = list->next;
    }
    printf("\n");
}

int     main()
{


    // Создаем список с элементами
	t_list *list_a = make_new_node(789);
	list_a->next =  make_new_node(189);
	list_a->next->next =  make_new_node(88);
	list_a->next->next->next =  make_new_node(99);
	list_a->next->next->next->next =  make_new_node(228);
	list_a->next->next->next->next->next =  make_new_node(208);
	list_a->next->next->next->next->next->next =  make_new_node(799);
	list_a->next->next->next->next->next->next->next =  make_new_node(228);







   t_list *list_b = NULL;
    printf("Original list: ");
    print_list(list_a);

    // Сортируем список
	indexation(&list_a);
	print_list(list_a);
	if(list_size(list_a) <= 5)
    	shit_sort(&list_a, &list_b);
	else
		radix(&list_a, &list_b);

    printf("Sorted list: ");
    print_list(list_a);
	free_array(list_a);
	free_array(list_b);

    return 0;
}