/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:06:02 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/03/17 20:25:59 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	size_t	i;
	size_t	j;
	size_t	zero;

	l_len = 0;
	i = 0;
	j = 0;
	zero = 0;
	if (*little == '\0')
		return ((char *)big);
	while (little[l_len] != '\0')
		l_len++;
	while (big[i] != '\0' && i < len)
	{
		j = zero;
		while (big[i + j] == little[j] && big[i + j] != '\0'
			&& little[j] != '\0' && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*int main() {
    // Тестовые строки
    const char *haystack = "12345";
    const char *needle = "23";
    size_t len = 1;

    // Вызов тестируемой функции
    

    // Проверка результата

        printf("'%s' found clea\n", ft_strnstr(haystack, needle, len));

    

    return 0;
}*/
