/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_checkers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quackson <quackson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:40:17 by pedgonca          #+#    #+#             */
/*   Updated: 2023/02/26 16:02:17 by quackson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_arguments(int argc, char **argv)
{
	int		i;
	int		*values;
	long	content;

	values = malloc((argc - 1) * sizeof(int));
	if (!values)
		return (0);
	i = 1;
	while (i < argc)
	{
		content = ft_atol((const char *) argv[i]);
		if (content == LONG_MAX || content > INT_MAX || content < INT_MIN)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		values[i - 1] = (int) content;
		i++;
	}
	return (check_if_duplicate(argc - 1, values));
}

int	check_if_duplicate(int n, int *values)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (values[i] == values[j])
				return (0);
			j++;
		}
		i++;
	}
	free(values);
	return (1);
}
