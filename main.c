/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:26:21 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/02 17:22:05 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "lst_operations/lst_operations.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*stack_a_head;
	t_list	*stack_b_head;
	int		i;

	if (argc > 1)
	{
		stack_a_head = NULL;
		stack_b_head = NULL;
		i = 0;
		if (!check_if_int_duplicate(argc, argv))
		{
			printf("Failed\n");
			return (0);
		}
		/* if (!check_if_duplicate(argc, argv))
		{
			printf("Failed\n");
			return (0);
		} */
		while (++i < argc)
		{
			if (!add_new_node(argv[i], &stack_a_head))
			{
				printf("Failed\n");
				free_stack(stack_a_head);
				return (0);
			}
		}
		print_stacks(stack_a_head, stack_b_head);
		// Swap a
		/* swap(stack_a_head, 0, 1);
		printf("swap a\n");
		print_stacks(stack_a_head, stack_b_head);
		swap(stack_a_head, 0, 1);
		printf("swap a\n");
		print_stacks(stack_a_head, stack_b_head); */
		/* stack_a_head = swap(stack_a_head);
		printf("swap a\n");
		print_stacks(stack_a_head, stack_b_head); */
		// Push b
		/* printf("push b\n");
		push(&stack_a_head, &stack_b_head);
		print_stacks(stack_a_head, stack_b_head);
		printf("push b\n");
		push(&stack_a_head, &stack_b_head);
		print_stacks(stack_a_head, stack_b_head);
		printf("push b\n");
		push(&stack_a_head, &stack_b_head);
		print_stacks(stack_a_head, stack_b_head);
		
		// Push a
		printf("push a\n");
		push(&stack_b_head, &stack_a_head);
		print_stacks(stack_a_head, stack_b_head); */

		// Get node
		/* printf("Get first node\n");
		t_list *node = get_node(stack_a_head, 0);
		if (node)
			printf("%d\n", node->content);
		printf("Get last node\n");
		node = get_node(stack_a_head, 4);
		if (node)
			printf("%d\n", node->content); */
		// Rotate a
		/* printf("Rotate a\n");
		rotate(stack_a_head);
		print_stacks(stack_a_head, stack_b_head);
		printf("Rotate a\n");
		rotate(stack_a_head);
		print_stacks(stack_a_head, stack_b_head);
		printf("Rotate a\n");
		rotate(stack_a_head);
		print_stacks(stack_a_head, stack_b_head); */
		// Reverse Rotate a
		/* printf("Reverse Rotate a\n");
		reverse_rotate(stack_a_head);
		print_stacks(stack_a_head, NULL);
		
		printf("Rotate a\n");
		rotate(stack_a_head);
		print_stacks(stack_a_head, NULL); */

		/* printf("Push b 5 times\n");
		push(&stack_a_head, &stack_b_head);
		push(&stack_a_head, &stack_b_head);
		push(&stack_a_head, &stack_b_head);
		push(&stack_a_head, &stack_b_head);
		push(&stack_a_head, &stack_b_head);
		print_stacks(stack_a_head, stack_b_head); */

		// Push b
		/* printf("push b\n");
		push(&stack_a_head, &stack_b_head);
		print_stacks(stack_a_head, stack_b_head); */
		/* printf("Swap a and b\n");
		double_swap(stack_a_head, stack_b_head);
		print_stacks(stack_a_head, stack_b_head);

		printf("Double Rotate\n");
		double_rotate(stack_a_head, stack_b_head);
		print_stacks(stack_a_head, stack_b_head);

		printf("Double Reverse Rotate\n");
		double_reverse_rotate(stack_a_head, stack_b_head);
		print_stacks(stack_a_head, stack_b_head); */
	}
}
