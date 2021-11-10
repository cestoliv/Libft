/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:22:13 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/10 09:09:57 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (ft_strlen(s) < start)
		return ("");
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	sub[len] = 0;
	while (len-- > 0)
		sub[len] = s[start + len];
	return (sub);
}
