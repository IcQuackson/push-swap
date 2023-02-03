/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:43:15 by pedgonca          #+#    #+#             */
/*   Updated: 2023/01/31 16:23:54 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst_operations.h"

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
