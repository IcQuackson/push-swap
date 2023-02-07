/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:59:48 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/06 17:20:36 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHERS_H
# define OTHERS_H

# include "lst_operations/lst_operations.h"
# include "unistd.h"

/* List aux functions */
int		ft_isdigit(int c);
long	ft_atol(const char *nptr);
t_list	**add_new_node(char *n, t_list **stack_a_head);
void	free_stack(t_list *head);
void	print_stacks(t_list *head_a, t_list *head_b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

/* argv checkers */
int		check_arguments(int argc, char **argv);
int		check_if_duplicate(int n, int *values);
int		check_if_zero(char *nptr);

#endif