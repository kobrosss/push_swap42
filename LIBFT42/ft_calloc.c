/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:37:09 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/03/18 20:00:22 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*data;
	size_t	mem;

	mem = nmemb * size;
	if (mem && mem / nmemb != size)
		return (0);
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	if (nmemb > 2147483647 / size)
		return (NULL);
	data = malloc(nmemb * size);
	if (!data)
		return (NULL);
	ft_bzero(data, nmemb * size);
	return (data);
}
