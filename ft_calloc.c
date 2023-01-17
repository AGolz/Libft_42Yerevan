/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:49:37 by emaksimo          #+#    #+#             */
/*   Updated: 2023/01/17 20:53:59 by emaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char			*dst;
	unsigned int	i;
	unsigned int	sum;

	sum = number * size;
	dst = malloc(sum);
	if (!dst)
		return (NULL);
	i = 0;
	while (sum--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
