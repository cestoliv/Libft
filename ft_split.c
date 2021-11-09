/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:43:49 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/09 11:11:14 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	numwords(char const *s, char c)
{
	int	cur;
	int	word_num;

	cur = 0;
	word_num = 0;
	while (s[cur] != 0)
	{
		if (s[cur] != c && (s[cur + 1] == c || s[cur + 1] == 0))
			word_num++;
		cur++;
	}
	return (word_num);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		cur;
	int		w_cur;
	int		s_cur;

	result = malloc(sizeof(char *) * (numwords(s, c) + 1));
	cur = 0;
	w_cur = 0;
	s_cur = 0;
	while (s[cur])
	{
		if (s[cur] == c || s[cur] == 0)
			s_cur = cur + 1;
		if (s[cur] != c && (s[cur + 1] == c || s[cur + 1] == 0))
		{
			result[w_cur] = malloc(sizeof(char) * (cur - s_cur + 2));
			ft_strlcpy(result[w_cur], (s + s_cur), cur - s_cur + 2);
			w_cur++;
		}
		cur++;
	}
	result[w_cur] = 0;
	return (result);
}
