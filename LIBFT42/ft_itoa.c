/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:24:44 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/04/23 17:08:32 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_symbols(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	len = ft_count_symbols(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
		*res = '-';
	res[len] = '\0';
	while (n)
	{
		if (n > 0)
			res[--len] = n % 10 + '0';
		else
			res[--len] = n % 10 * -1 + '0';
		n /= 10;
	}
	return (res);
}