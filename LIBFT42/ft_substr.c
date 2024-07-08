/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:53:51 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/03/19 20:56:37 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	substr_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start < s_len)
	{
		if (start + len > s_len)
			substr_len = s_len - start;
		else
			substr_len = len;
	}
	else
		substr_len = 0;
	ptr = malloc(substr_len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s + start, substr_len);
	ptr[substr_len] = '\0';
	return (ptr);
}
