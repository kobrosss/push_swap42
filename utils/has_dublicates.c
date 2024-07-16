/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_dublicates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:52:58 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/07/16 21:53:42 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

int	has_duplicates(char **args, int current_index, int value)
{
	int	j;

	j = 0;
	while (j < current_index)
	{
		if (ft_strcmp(args[j], ft_itoa(value)) == 0)
			return (1);
		j++;
	}
	return (0);
}
