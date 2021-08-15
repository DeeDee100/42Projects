/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:30:51 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/12 16:53:58 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rslt;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	rslt = malloc((len + 1) * sizeof (char));
	if (!rslt || !f)
		return (NULL);
	while (s[i])
	{
		rslt[i] = f(i, s[i]);
		i++;
	}
	rslt[i] = 0;
	return (rslt);
}
