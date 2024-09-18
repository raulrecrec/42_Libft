/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:10:42 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/17 21:10:16 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  //SUSTITUIR LIBRERIA CON LIBFT.H
void	*memset(void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			len;

	aux = (unsigned char *) s;
	len = 0;
	while (len < n)
	{
		aux[len] = (unsigned char) c;
		len++;
	}
	return (s);
}
