/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_dublicates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:52:58 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/07/17 21:34:24 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

int	has_duplicates(char **args, int current_index, int value)
{
	int		j;
	char	*value_str;

	j = 0;
	value_str = ft_itoa(value);
	if (value_str == NULL)
		return (0);
	while (j < current_index)
	{
		if (ft_strcmp(args[j], value_str) == 0)
		{
			free(value_str);
			return (1);
		}
		j++;
	}
	free(value_str);
	return (0);
}
