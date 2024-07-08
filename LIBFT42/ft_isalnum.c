/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:47:10 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/03/17 20:23:21 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	i;

	i = 0;
	if (c >= 65 && c <= 90)
	{
		i++;
	}
	else if (c >= 97 && c <= 122)
	{
		i++;
	}
	else if (c >= 48 && c <= 57)
	{
		i++;
	}
	if (i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
