/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:59:48 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/02 17:21:43 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "lst_operations/lst_operations.h"

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

/* List aux functions */
int		ft_isdigit(int c);
long	ft_atol(const char *nptr);
t_list	**add_new_node(char *n, t_list **stack_a_head);
void	free_stack(t_list *head);
void	print_stacks(t_list *head_a, t_list *head_b);
void	print_stack(t_list *head);

/* argv checkers */
int		check_if_int_duplicate(int argc, char **argv);
int		check_if_duplicate(int n, int *values);
int		check_if_zero(char *nptr);

#endif