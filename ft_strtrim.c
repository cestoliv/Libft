/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:17:27 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/09 11:10:00 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_in_set(char const c, char const *set)
{
	int	cur;

	cur = -1;
	while (set[++cur])
		if (set[cur] == c)
			return (1);
	return (0);
}

static char	*rev_str(char const *str)
{
	char	*rev;
	size_t	str_len;
	size_t	cur;

	str_len = ft_strlen(str);
	rev = (char *)malloc(str_len * sizeof(char));
	if (!rev)
		return (NULL);
	cur = 0;
	while (str[cur])
	{
		rev[str_len - 1] = str[cur];
		cur++;
		str_len--;
	}
	return (rev);
}

static char	*empty_string(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, "", 1);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	s1_len;
	char	*trim;
	char	*s1_rev;

	start = 0;
	while (is_in_set(s1[start], set))
		start++;
	s1_rev = rev_str(s1);
	if (!s1_rev)
		return (NULL);
	end = 0;
	s1_len = ft_strlen(s1);
	if (start == s1_len)
		return (empty_string());
	while (is_in_set(s1_rev[end], set))
		end++;
	end = ft_strlen(s1) - end;
	trim = malloc((end - start + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, (s1 + start), (end - start + 1));
	free(s1_rev);
	return (trim);
}
