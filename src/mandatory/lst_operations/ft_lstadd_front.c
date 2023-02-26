/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:42:48 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/25 14:22:16 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new_lst)
{
	if (!new_lst || !lst)
		return ;
	if (*lst != NULL)
		new_lst->next = *lst;
	*lst = new_lst;
}
