/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzior <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 04:55:59 by tzior             #+#    #+#             */
/*   Updated: 2017/10/05 04:56:04 by tzior            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	int			j;
	size_t		dst_len;
	size_t		src_len;

	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dst_len + 1)
		return (src_len + size);
	if (size > dst_len + 1)
	{
		while (i < size - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dst_len + src_len);
}
