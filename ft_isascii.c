/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagonza <amagonza@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:50:57 by amagonza          #+#    #+#             */
/*   Updated: 2021/08/04 17:50:58 by amagonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	else
		return (0);
}
