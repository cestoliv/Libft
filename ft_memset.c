/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:14:19 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/04 14:04:16 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cur;
	char	*data;

	cur = 0;
	data = (char *)b;
	while (cur < len)
	{
		data[cur] = c;
		cur++;
	}
	data[cur] = 0;
	return (data);
}
