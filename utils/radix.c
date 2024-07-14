/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:49:42 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/14 20:11:08 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

static int get_max_bits(t_list **stack) {
    t_list *head = *stack;
    int max = head->index;
    int max_bits = 0;

    while (head) {
        if (head->index > max)
            max = head->index;
        head = head->next;
    }
    while ((max >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

void radix(t_list **stack_a, t_list **stack_b) {
    t_list *head_a;
    int i = 0;
    int j;
    int size = list_size(*stack_a);
    int max_bits = get_max_bits(stack_a);

    while (i < max_bits) {
        j = 0;
        while (j++ < size) {
            head_a = *stack_a;
            if (((head_a->index >> i) & 1) == 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
        }
        while (list_size(*stack_b) != 0)
            pa(stack_a, stack_b);
        i++;
    }
}
