/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:30:00 by emaksimo          #+#    #+#             */
/*   Updated: 2023/02/02 21:39:19 by emaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnchar_fd(char c, int times, int fd)
{
	char	buf[16];

	ft_memset(buf, c, 16);
	while (times > 16)
	{
		write(fd, buf, 16);
		times -= 16;
	}
	if (times > 0)
		write(fd, buf, times);
}
