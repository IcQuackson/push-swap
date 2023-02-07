/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   high_level_operations2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:44:52 by quackson          #+#    #+#             */
/*   Updated: 2023/02/07 00:06:54 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_operations.h"

void	rotate_a(t_list *head_a)
{
	/* write(1, "---------------------------------------\n", 40); */
	write(1, "ra\n", 3);
	rotate(head_a);
}

void	rotate_b(t_list *head_b)
{
	write(1, "---------------------------------------\n", 40);
	write(1, "Exec rb:\n", 9);
	rotate(head_b);
}

void	rotate_ab(t_list *head_a, t_list *head_b)
{
	write(1, "---------------------------------------\n", 40);
	write(1, "Exec rr:\n", 9);
	double_rotate(head_a, head_b);
}

void	reverse_rotate_a(t_list *head_a)
{
	/* write(1, "---------------------------------------\n", 40); */
	write(1, "rra\n", 4);
	reverse_rotate(head_a);
}

void	reverse_rotate_b(t_list *head_b)
{
	write(1, "---------------------------------------\n", 40);
	write(1, "Exec rrb:\n", 10);
	reverse_rotate(head_b);
}
