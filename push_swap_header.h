/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:34:24 by rkobelie          #+#    #+#             */
/*   Updated: 2024/07/08 19:30:11 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include "../push_swap42/LIBFT42/libft.h"
# include <stdio.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

t_list	*NewNode(int value);
void	PrintListNums(t_list *head);
int	ListSize(t_list *head);



#endif