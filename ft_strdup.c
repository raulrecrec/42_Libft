/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:24:02 by rexposit          #+#    #+#             */
/*   Updated: 2024/10/01 16:02:02 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	mem_size;
	char	*ptr;

	mem_size = ft_strlen(s) + 1;
	ptr = malloc(mem_size);
	ft_memmove(ptr, (void *) s, mem_size);
	return (ptr);
}
