/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:29:01 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/15 20:10:37 by rkobelie         ###   ########.fr       */
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
		args[i] = NULL;
		i++;
	}
	free(args);
}

int	is_smtng_here(int num, char **av, int i)
{
	while (av[i])
	{
		if (ft_atoi(av[i]) == num)
			return (1);
		i++;
	}
	return (0);
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

static void	handle_error(char *message)
{
	ft_putstr_fd(message, 1);
	exit(0);
}

void	check_args(int ac, char **av)
{
	int		i;
	long	tmp;
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
		tmp = ft_atoi(args[i]);
		if (!isnum(args[i]))
			handle_error("ERROR: It`s not number");
		if (!is_smtng_here(tmp, args, i))
			handle_error("ERROR: It`s empty");
		if (tmp < -2147483648 || tmp > 2147483647)
			handle_error("ERROR: Number isn`t in INT limits");
		i++;
	}
	if (ac == 2)
		free_args(args);
}
