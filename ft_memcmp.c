/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:16:17 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/20 12:30:42 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  //SUSTITUIR LIBRERIA CON LIBFT.H
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*s1_cpy;
	unsigned char	*s2_cpy;

	x = 0;
	s1_cpy = (unsigned char *) s1;
	s2_cpy = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (x < n)
	{
		if (s1_cpy[x] != s2_cpy[x])
			return (s1_cpy[x] - s2_cpy[x]);
		x++;
	}
	return (0);
}
