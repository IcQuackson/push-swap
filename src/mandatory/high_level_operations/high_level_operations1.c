/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   high_level_operations1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:28:09 by quackson          #+#    #+#             */
/*   Updated: 2023/02/25 19:26:38 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_list *head_a)
{
	write(1, "sa\n", 3);
	swap(head_a, 0, 1);
}

void	swap_b(t_list *head_b)
{
	write(1, "sb\n", 3);
	swap(head_b, 0, 1);
}

void	push_a(t_list **popped_head, t_list **pushed_head)
{
	write(1, "pa\n", 3);
	push(popped_head, pushed_head);
}

void	push_b(t_list **popped_head, t_list **pushed_head)
{
	write(1, "pb\n", 3);
	push(popped_head, pushed_head);
}

void	swap_ab(t_list *head_a, t_list *head_b)
{
	write(1, "ss\n", 3);
	double_swap(head_a, head_b);
}
