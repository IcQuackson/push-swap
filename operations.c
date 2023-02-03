/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:17:52 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/01 19:26:13 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include <assert.h>
#include <stdio.h>

t_list	*get_node(t_list *head, int i)
{
	if (!head || i < 0)
		return (NULL);
	while (head && i-- > 0)
		head = head->next;
	if (head)
		return (head);
	return (NULL);
}

void	swap(t_list *head, int i, int j)
{
	t_list	*node1;
	t_list	*node2;
	int		temp;

	if (i == j || i < 0 || j < 0)
		return ;
	if (!head)
		return ;
	node1 = get_node(head, i);
	node2 = get_node(head, j);
	if (!node1 || !node2)
		return ;
	temp = node1->content;
	node1->content = node2->content;
	node2->content = temp;
}

/* int	get_size(t_list *head)
{
	int	i;

	if (!head)
		return (-1);
	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (-1);
}
 */
/* 
void	swap(t_list **head, int i, int j)
{
	t_list	*temp;
	t_list	*prev1;
	t_list	*prev2;
	t_list	*curr1;
	t_list	*curr2;

	if (i == j || i < 0 || j < 0)
		return ;
	if (!head || !(*head))
		return ;
	prev1 = NULL;
	curr1 = *head;
	while (curr1 && i-- > 0)
	{
		printf("i = %d\n", i);
		prev1 = curr1;
		curr1 = curr1->next;
	}
	prev2 = NULL;
	curr2 = *head;
	while (curr2 && j-- > 0)
	{
		prev2 = curr2;
		curr2 = curr2->next;
	}
	if (!curr1 || !curr2)
		return ;
	if (prev1 != NULL)
		prev1->next = curr2;
	else
	{
		*head = curr2;
		printf("head changed\n");
	}
	if (prev2 != NULL)
		prev2->next = curr1;
	else
	{
		*head = curr1;
		printf("head changed\n");
	}
	temp = curr2->next;
	curr2->next = curr1->next;
	curr1->next = temp;
}
 */

void	push(t_list **popped_head, t_list **pushed_head)
{
	t_list	*temp;

	if (!popped_head || !(*popped_head) || !pushed_head)
		return ;
	// Stored popped head in temp and make second element the new head
	temp = *popped_head;
	*popped_head = temp->next;
	// Insert new head in the other stack
	temp->next = *pushed_head;
	*pushed_head = temp;
}

void	rotate(t_list	*head)
{
	int		i;
	t_list	*head_cpy;

	if (!head)
		return ;
	i = 0;
	head_cpy = head;
	while (head->next)
	{
		swap(head_cpy, i, i + 1);
		head = head->next;
		i++;
	}
}

void	reverse_rotate(t_list	*head)
{
	t_list	*head_cpy;
	int		i;

	i = 0;
	head_cpy = head;
	while (head_cpy->next)
	{
		head_cpy = head_cpy->next;
		i++;
	}
	while (i > 0)
	{
		swap(head, i, i - 1);
		i--;
	}
}
