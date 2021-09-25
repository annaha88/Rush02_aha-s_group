/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aha <aha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:28:48 by aha               #+#    #+#             */
/*   Updated: 2021/09/25 17:16:23 by aha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

typedef	struct s_dict
{
	char* key;
	char* value;
	struct s_dict* next;
}t_dict;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char* str)
{
	while (*str)
		ft_putchar(*(str++));
}

int	ft_strcmp(char* s1, char* s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_print_value_by_key(t_dict *head, char *to_find)
{
	t_dict	*curr;
	int	ret_cmp;

	curr = head;
	ret_cmp = -1;
	while (ret_cmp != 0 && curr)
	{
		curr = curr -> next;
		ret_cmp = ft_strcmp(curr->key, to_find);
	}
	ft_putstr(curr->value);
}