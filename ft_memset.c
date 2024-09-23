/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:10:42 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/23 14:25:40 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  //SUSTITUIR LIBRERIA CON LIBFT.H
void	*ft_memset(void *s, int c, size_t n)
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
