/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:20:06 by mguyout           #+#    #+#             */
/*   Updated: 2016/11/11 18:59:20 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (src < dst)
		while ((int)--len >= 0)
			*((char*)dst + len) = *((char*)src + len);
	else
		while (i < len)
		{
			*((char*)dst + i) = *((char*)src + i);
			i++;
		}
	return (dst);
}
