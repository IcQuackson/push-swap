/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:28:39 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/25 14:21:40 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	double_swap(t_list *head_a, t_list *head_b)
{
	swap(head_a, 0, 1);
	swap(head_b, 0, 1);
}

void	double_rotate(t_list *head_a, t_list *head_b)
{
	rotate(head_a);
	rotate(head_b);
}

void	double_reverse_rotate(t_list *head_a, t_list *head_b)
{
	reverse_rotate(head_a);
	reverse_rotate(head_b);
}
