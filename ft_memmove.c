/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrui-ha <chrui-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:49:36 by chrui-ha          #+#    #+#             */
/*   Updated: 2024/07/02 21:01:01 by chrui-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_pt;
	unsigned char		*new_dst;
	const unsigned char	*src_pt;

	new_dst = dst;
	dst_pt = (unsigned char *) dst;
	src_pt = (unsigned char *) src;
	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			(dst_pt)[len] = (src_pt)[len];
	}
	else
	{
		while (len--)
			*dst_pt++ = *src_pt++;
	}
	return (dst);
}
