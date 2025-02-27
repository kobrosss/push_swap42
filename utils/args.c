/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:29:01 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/18 18:42:32 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

void	free_args(char **args)
{
	int	i;

	i = 0;
	if (args == NULL)
		return ;
	while (args[i] != NULL)
	{
		free(args[i]);
		i++;
	}
	free(args);
}

int	isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static void	handle_error(int ac, char **args, char *message)
{
	ft_putstr_fd(message, 1);
	if (ac == 2)
		free_args(args);
	exit(0);
}

void	check_args(int ac, char **av)
{
	int		i;
	int		tmp;
	char	**args;

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
		if (!isnum(args[i]))
			handle_error(ac, args, "ERROR\n");
		tmp = ft_atoi(args[i]);
		if (has_duplicates(args, i, tmp))
			handle_error(ac, args, "ERROR\n");
		i++;
	}
	if (ac == 2)
		free_args(args);
}
