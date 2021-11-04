/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:57:31 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/04 13:45:20 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cur1;
	size_t	cur2;

	cur1 = 0;
	cur2 = 0;
	while (dst[cur1])
		cur1++;
	if (dstsize <= cur1)
		return (ft_strlen(src) + dstsize);
	while (src[cur2] && (cur1 + cur2) < (dstsize - 1))
	{
		dst[cur1 + cur2] = src[cur2];
		cur2++;
	}
	dst[cur1 + cur2] = 0;
	return (ft_strlen(src) + cur1);
}
