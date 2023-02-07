/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:05:14 by quackson          #+#    #+#             */
/*   Updated: 2023/02/06 17:10:42 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_OPERATIONS_H
# define STACK_OPERATIONS_H

# include "../lst_operations/lst_operations.h"
# include "unistd.h"

/* High level operations */
void	swap_a(t_list *head_a);
void	swap_b(t_list *head_b);
void	swap_ab(t_list *head_a, t_list *head_b);
void	push_a(t_list **popped_head, t_list **pushed_head);
void	push_b(t_list **popped_head, t_list **pushed_head);
void	rotate_a(t_list *head_a);
void	rotate_b(t_list *head_b);
void	rotate_ab(t_list *head_a, t_list *head_b);
void	reverse_rotate_a(t_list *head_a);
void	reverse_rotate_b(t_list *head_b);
void	reverse_rotate_ab(t_list *head_a, t_list *head_b);

/* List single operations */
t_list	*get_node(t_list *head, int i);
void	swap(t_list *head, int i, int j);
void	push(t_list **popped_head, t_list **pushed_head);
void	rotate(t_list	*head);
void	reverse_rotate(t_list	*head);

/* List double operations */
void	double_swap(t_list *head_a, t_list *head_b);
void	double_rotate(t_list *head_a, t_list *head_b);
void	double_reverse_rotate(t_list *head_a, t_list *head_b);

#endif