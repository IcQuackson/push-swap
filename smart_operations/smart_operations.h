/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_operations.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:10:32 by quackson          #+#    #+#             */
/*   Updated: 2023/02/06 23:48:23 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SMART_OPERATIONS_H
# define SMART_OPERATIONS_H

# include "../lst_operations/lst_operations.h"
# include "../stack_operations/stack_operations.h"

t_list	*get_node_by_value(t_list *head, int value, int *index);
void	get_lst_to_top(t_list *head, int value, void (*r)(t_list*),
			void (*rr)(t_list*));
void	get_lst_to_bot(t_list *head, int value,
			void (*r)(t_list*), void (*rr)(t_list*));
int		get_index_of_max_value(t_list *head, int *max);
int		get_index_of_min_value(t_list *head, int *min);


#endif