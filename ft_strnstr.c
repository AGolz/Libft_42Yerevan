/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:50:47 by emaksimo          #+#    #+#             */
/*   Updated: 2023/01/17 23:33:09 by emaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	slen;
	unsigned int	i;

	if (!*little)
		return ((char *)big);
	slen = 0;
	while (big[slen] != '\0' && (size_t)slen < len)
	{
		if (big[slen] == little[0])
		{
			i = 1;
			while (little[i] != '\0' && big[slen + i] == little[i] && \
					(size_t)(slen + i) < len)
				++i;
			if (little[i] == '\0')
				return ((char *)&big[slen]);
		}
		++slen;
	}
	return (NULL);
}