/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   high_level_operations2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:44:52 by quackson          #+#    #+#             */
/*   Updated: 2023/02/25 19:26:45 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_list *head_a)
{
	write(1, "ra\n", 3);
	rotate(head_a);
}

void	rotate_b(t_list *head_b)
{
	write(1, "rb\n", 3);
	rotate(head_b);
}

void	rotate_ab(t_list *head_a, t_list *head_b)
{
	write(1, "rr\n", 3);
	double_rotate(head_a, head_b);
}

void	reverse_rotate_a(t_list *head_a)
{
	write(1, "rra\n", 4);
	reverse_rotate(head_a);
}

void	reverse_rotate_b(t_list *head_b)
{
	write(1, "rrb\n", 4);
	reverse_rotate(head_b);
}
