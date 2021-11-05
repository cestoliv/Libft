/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:12:17 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/04 14:32:00 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cur;
	char	*data_dst;
	char	*data_src;

	cur = 0;
	data_dst = (char *)dst;
	data_src = (char *)src;
	while ((int)(len - cur) >= 0)
	{
		data_dst[len - cur] = data_src[len - cur];
		cur++;
	}
	return (dst);
}
