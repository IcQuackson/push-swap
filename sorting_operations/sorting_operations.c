/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:35:41 by quackson          #+#    #+#             */
/*   Updated: 2023/02/07 00:16:46 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting_operations.h"

#include <stdio.h>

void	sort(t_list *head_a, t_list *head_b)
{
	int	size;

	(void) head_b;
	size = ft_lstsize(head_a);
	if (size == 2)
	{
		if (head_a->content > (head_a->next)->content)
			swap_a(head_a);
	}
	if (size == 3)
		sort_3(head_a);
}

void	sort_2(t_list *head_a)
{
	//printf("content:%d  next:%d\n", head_a->content, (head_a->next)->content);
	if (head_a->content > (head_a->next)->content)
		swap_a(head_a);
}

void	sort_3(t_list *head_a)
{
	int	max;

	max = 0;
	get_index_of_max_value(head_a, &max);
	if (max == -1)
		return ;
	//printf("max=%d\n", max);
	get_lst_to_bot(head_a, max, rotate_a, reverse_rotate_a);
	sort_2(head_a);
}
