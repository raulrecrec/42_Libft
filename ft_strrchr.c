/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:26:27 by rexposit          #+#    #+#             */
/*   Updated: 2024/10/03 14:33:39 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	long	aux;

	i = 0;
	aux = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			aux = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (aux != -1)
		return ((char *)&s[aux]);
	return (NULL);
}
