/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:52:53 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/06 11:53:11 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		s_len;
	char				*result;

	s_len = ft_strlen(s);
	result = (char *)malloc((s_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[s_len] = 0;
	while (--s_len > 0)
		result[s_len] = f(s_len, s[s_len]);
	result[s_len] = f(s_len, s[s_len]);
	return (result);
}
