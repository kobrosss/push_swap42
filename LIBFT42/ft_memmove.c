/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:04:26 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/03/17 20:24:03 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_clone;
	unsigned char		*dest_clone;
	size_t				i;

	dest_clone = (unsigned char *)dest;
	src_clone = (unsigned const char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest_clone > src_clone)
		while (n-- > 0)
			dest_clone[n] = src_clone[n];
	else
	{
		while (i < n)
		{
			dest_clone[i] = src_clone[i];
			i++;
		}
	}
	return (dest);
}
