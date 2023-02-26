/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:43:15 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/25 14:22:16 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*next_node;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{	
		next_node = (*lst)->next;
		free(*lst);
		*lst = next_node;
	}
	lst = NULL;
}
