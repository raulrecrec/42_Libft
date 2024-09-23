/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:24:02 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/23 16:41:09 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  //SUSTITUIR LIBRERIA CON LIBFT.H PARA FT_MEMSET Y SIZE_T
#include <stdlib.h> //REVISAR SI BORRAR O DEJARLO
char	*ft_strdup(const char *s)
{
	size_t	mem_size;
	char	*ptr;
	
	mem_size = ft_strlen(s) + 1;
	ptr = malloc(mem_size);
	ft_memmove(ptr, (void *) s, mem_size);
	return (ptr);
}
