/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:27:41 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/18 20:57:01 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//SUSTITUIR LIBRERIA CON LIBFT.H Y ELIMINAR LA FUNCION FT_STRLEN
#include <stddef.h> 
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;
	size_t			i;

	if (dest == NULL || src == NULL || n == 0)
		return (dest);
	src_cpy = (unsigned char *) src;
	dest_cpy = (unsigned char *) dest;
	i = 0;
	if (dest_cpy < src_cpy)
	{
		while (i < n)
		{
			dest_cpy[i] = src_cpy[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			dest_cpy[n] = src_cpy[n];
		}
	}
	return (dest);
}
