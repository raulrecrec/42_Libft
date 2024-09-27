/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:39:25 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/27 20:46:09 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> //SUSTITUIR LIBRERIA CON LIBFT.H
#include <stdlib.h> //REVISAR SI BORRAR O DEJARLO
int	ft_strlen(const char *str);

int	strcmp_temp(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i + j] != set[j])
	{
		j = 0;
		while (s1[i + j] != set[j] && set[j] != '\0')
			j++;
		i++;
	}
	return (s1[i + j] != set[j]);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	str_start;
	size_t	str_end;
	char	*s1_trim;

	i = 0;
	j = 0;
	str_start = 0;
	str_end = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i + j] == set[j])
				str_start++;
			j++;
		}
		i++;
	}
}
