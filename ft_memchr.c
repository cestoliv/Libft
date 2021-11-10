/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:54:33 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/10 09:04:17 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cur;
	char	*data;

	cur = 0;
	data = (char *)s;
	while (data[cur] && cur < n - 1)
	{
		if (data[cur] == c)
			return ((void *)(data + cur));
		cur++;
	}
	if (data[cur] == c)
		return ((void *)(s + cur));
	return (0);
}
