/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 11:03:37 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/12 16:54:07 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chk_ltr( char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	slen;
	size_t	a;
	char	*rslt;

	if (!s1)
		return (NULL);
	i = 0;
	slen = ft_strlen(s1);
	while (s1[i] && chk_ltr(s1[i], set))
		i++;
	while (slen > i && chk_ltr(s1[slen - 1], set))
		slen--;
	rslt = malloc ((slen - i + 1) * sizeof(char));
	if (!rslt)
		return (NULL);
	a = 0;
	while (i < slen)
		rslt[a++] = s1[i++];
	rslt[a] = 0;
	return (rslt);
}
