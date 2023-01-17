/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:49:10 by emaksimo          #+#    #+#             */
/*   Updated: 2023/01/17 20:28:52 by emaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' \
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

static int	ft_skipspace(const char *s)
{
	int	i;

	i = 0;
	while (ft_isspace(s[i] && s[i] != 0))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long int	num;
	int			negative;
	int			i;

	num = 0;
	i = ft_skipspace(str);
	negative = 1;
	while (str[i] == '-' && ft_isdigit(str[i + 1]))
	{
		negative = 1;
		i++;
	}
	if (str[i] == '+' && ft_isdigit(str[i + 1]))
		i++;
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + str[i] - 48;
		if (num != -2147483648 && num < 0 && negative == -1)
			return (0);
		else if (num != -2147483648 && num < 0)
			return (-1);
		i++;
	}
	return (num * negative);
}
