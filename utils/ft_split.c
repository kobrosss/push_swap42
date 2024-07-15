/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:45:56 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/07/15 19:32:58 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

static void	*ft_free(char **result, size_t position)
{
	while (position != 0)
	{
		free(result[position]);
		position--;
	}
	free(result[position]);
	free(result);
	return (NULL);
}

static void	ft_word(char const *s, size_t *first, size_t *last, char c)
{
	*first = *last;
	while (s[*first] == c)
		*first = *first + 1;
	*last = *first;
	while (s[*last] != c && s[*last] != '\0')
		*last = *last + 1;
}

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;
	size_t	first;
	size_t	last;

	count = 0;
	first = 0;
	last = 0;
	while (s[last] != '\0')
	{
		ft_word(s, &first, &last, c);
		if (last == first)
			break ;
		else
			count++;
	}
	return (count);
}

static char	*ft_fill(char const *s, size_t first, size_t last)
{
	char	*word;
	size_t	position;

	position = 0;
	word = ft_calloc(last - first + 1, sizeof(char));
	if (word == NULL)
		return (NULL);
	while (first < last)
	{
		word[position] = s[first];
		position++;
		first++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	first;
	size_t	last;
	size_t	position;

	result = ft_calloc(ft_countwords(s, c) + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	result[ft_countwords(s, c)] = NULL;
	last = 0;
	first = 0;
	position = 0;
	while (position < ft_countwords(s, c))
	{
		ft_word(s, &first, &last, c);
		if (last == first)
			break ;
		result[position] = ft_fill(s, first, last);
		if (result[position] == NULL)
			return (ft_free(result, position));
		position++;
	}
	return (result);
}
