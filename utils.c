/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:21:23 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/03 14:36:27 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "lst_operations/lst_operations.h"

#include <stdio.h>


void	print_stack(t_list *head)
{
	while (head)
	{
		printf("%d\n", head->content);
		head = head->next;
	}
}

void	print_stacks(t_list *head_a, t_list *head_b)
{
	while (head_a != NULL || head_b != NULL)
	{
		if (head_a != NULL)
		{
			printf("%d ", head_a->content);
			head_a = head_a->next;
		}
		else
			printf("  ");
		if (head_b != NULL)
		{
			printf("%d", head_b->content);
			head_b = head_b->next;
		}
		printf("\n");
	}
}

t_list	**add_new_node(char *n, t_list **head)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = (int) ft_atol((const char *) n);
	ft_lstadd_back(head, new_node);
	return (head);
}

void	free_stack(t_list *head)
{
	t_list	*temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
