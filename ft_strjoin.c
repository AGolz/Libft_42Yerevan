/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:48:47 by emaksimo          #+#    #+#             */
/*   Updated: 2023/01/18 00:48:48 by emaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*buf;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	buf = malloc(sizeof(char) * (len1 + len2 + 1));
	if (buf == NULL)
		return (NULL);
	ft_strcpy(buf, s1);
	ft_strcat(buf, s2);
	return (buf);
}
