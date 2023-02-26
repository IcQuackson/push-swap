/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:35:41 by quackson          #+#    #+#             */
/*   Updated: 2023/02/26 16:09:28 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_list **head_a, t_list **head_b)
{
	int	size;

	size = ft_lstsize(*head_a);
	if (size == 2)
		sort_2(*head_a);
	else if (size == 3)
		sort_3(*head_a);
	else if (size == 4)
		sort_4(head_a, head_b);
	else if (size == 5)
		sort_5(head_a, head_b);
	else if (size > 5 && size <= 100)
		sort_between_5_and_100(head_a, head_b);
	else if (size > 100)
		sort_more_than_100(head_a, head_b, size);
}

void	sort_2(t_list *head_a)
{
	if (head_a->content > (head_a->next)->content)
		swap_a(head_a);
}

void	sort_3(t_list *head_a)
{
	int	max;

	max = get_max_value(head_a);
	get_lst_to_bot(head_a, max, rotate_a, reverse_rotate_a);
	sort_2(head_a);
}

void	sort_4(t_list **head_a, t_list **head_b)
{
	int	min;

	min = get_min_value(*head_a);
	get_lst_to_top(*head_a, min, rotate_a, reverse_rotate);
	push_b(head_a, head_b);
	sort_3(*head_a);
	push_a(head_b, head_a);
}

void	sort_5(t_list **head_a, t_list **head_b)
{
	int	min;
	int	max;

	max = get_max_value(*head_a);
	min = get_min_value(*head_a);
	get_lst_to_top(*head_a, max, rotate_a, reverse_rotate);
	push_b(head_a, head_b);
	get_lst_to_top(*head_a, min, rotate_a, reverse_rotate);
	push_b(head_a, head_b);
	sort_3(*head_a);
	push_a(head_b, head_a);
	push_a(head_b, head_a);
	rotate_a(*head_a);
}
