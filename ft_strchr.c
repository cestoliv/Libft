/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:54:33 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/10 09:08:21 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		cur;

	cur = 0;
	while (s[cur])
	{
		if (s[cur] == c)
			return ((char *)(s + cur));
		cur++;
	}
	if (s[cur] == c)
		return ((char *)(s + cur));
	return (0);
}
