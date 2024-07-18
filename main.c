/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:21:53 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/18 18:08:09 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

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
		free_args(args);
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

	if (ac == 1)
		error_exit("ERROR: It`EMPTY\n");
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
