/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_operations.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:15:26 by pedgonca          #+#    #+#             */
/*   Updated: 2023/01/31 16:23:22 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_OPERATIONS_H
# define LST_OPERATIONS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

void			ft_lstadd_back(t_list **lst, t_list *new_lst);
void			ft_lstadd_front(t_list **lst, t_list *new_lst);
void			ft_lstclear(t_list **lst);
void			ft_lstdelone(t_list *lst);
void			ft_lstiter(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstnew(int content);
int				ft_lstsize(t_list *lst);

#endif