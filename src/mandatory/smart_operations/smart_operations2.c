/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_operations2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:41:58 by quackson          #+#    #+#             */
/*   Updated: 2023/02/26 15:57:25 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_lst_to_bot(t_list *head, int value,
void (*r)(t_list*), void (*rr)(t_list*))
{
	int		i;
	int		size;

	size = ft_lstsize(head);
	if (size <= 0)
		return ;
	i = 0;
	if (!get_node_by_value(head, value, &i))
		return ;
	if (i == size)
		return ;
	if (i < size / 2)
	{
		while (i-- >= 0)
			r(head);
	}
	else
	{
		while (i++ < size - 1)
			rr(head);
	}
}
