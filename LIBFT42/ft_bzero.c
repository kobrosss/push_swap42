/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:08:37 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/03/17 20:28:13 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char		*p;
	size_t				i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i++] = 0;
	}
}
