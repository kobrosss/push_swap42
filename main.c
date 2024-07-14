/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:21:53 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/14 22:03:45 by rkobelie         ###   ########.fr       */
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

static void	init_list(t_list **list, int ac, char **av)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{
		new = make_new_node(ft_atoi(args[i]));
		put_in_tail(list, new);
		i++;
	}
	indexation(list);
	if (ac == 2)
		free_list(args);
}

static void	sort_stack(t_list **list_a, t_list **list_b)
{
	if (list_size(*list_a) <= 5)
		shit_sort(list_a, list_b);
	else
		radix(list_a, list_b);
}

int	main(int ac, char **av)
{
	t_list	**list_a;
	t_list	**list_b;

	if (ac < 2)
		return (-1);
	check_args(ac, av);
	list_a = (t_list **)malloc(sizeof(t_list));
	list_b = (t_list **)malloc(sizeof(t_list));
	*list_a = NULL;
	*list_b = NULL;
	init_list(list_a, ac, av);
	if (sort_check(list_a))
	{
		free_list(list_a);
		free_list(list_b);
		return (0);
	}
	sort_stack(list_a, list_b);
	free_list(list_a);
	free_list(list_b);
	return (0);
}
