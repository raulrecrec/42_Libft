/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:51:47 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/20 12:13:35 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  //SUSTITUIR LIBRERIA CON LIBFT.H
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_cpy;
	unsigned char	c_cpy;

	i = 0;
	c_cpy = (unsigned char) c;
	s_cpy = (unsigned char *) s;
	while (i < n)
	{
		if (s_cpy[i] == c_cpy)
			return ((void *)&s_cpy[i]);
		i++;
	}
	return ((void *) 0);
}
