/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:33:54 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/15 20:10:51 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*p;
	size_t	total_size;

	p = NULL;
	total_size = 0;
	ptr = malloc(count * size);
	if (ptr != NULL)
	{
		p = ptr;
		total_size = count * size;
		while (total_size--)
			*p++ = 0;
	}
	return (ptr);
}
