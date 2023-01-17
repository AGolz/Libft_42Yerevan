/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:50:24 by emaksimo          #+#    #+#             */
/*   Updated: 2023/01/18 00:00:33 by emaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	if (str[i] == ch)
		return ((char *)&str[i]);
	while (str[i] != 0)
	{
		if (str[i + 1] == ch)
			return ((char *)&str[i + 1]);
		i++;
	}
	return (NULL);
}
