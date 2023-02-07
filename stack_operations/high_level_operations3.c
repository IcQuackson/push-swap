/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   high_level_operations3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:53:26 by quackson          #+#    #+#             */
/*   Updated: 2023/02/06 17:24:12 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_operations.h"

void	reverse_rotate_ab(t_list *head_a, t_list *head_b)
{
	write(1, "---------------------------------------\n", 40);
	write(1, "Exec rrr:\n", 10);
	double_reverse_rotate(head_a, head_b);
}
