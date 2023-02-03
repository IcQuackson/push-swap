/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:42:48 by pedgonca          #+#    #+#             */
/*   Updated: 2023/01/31 16:23:49 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst_operations.h"

void	ft_lstadd_front(t_list **lst, t_list *new_lst)
{
	if (!new_lst || !lst)
		return ;
	if (*lst != NULL)
		new_lst->next = *lst;
	*lst = new_lst;
}
