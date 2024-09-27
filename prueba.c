/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:46:25 by rexposit          #+#    #+#             */
/*   Updated: 2024/09/27 20:54:46 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> //SUSTITUIR LIBRERIA CON LIBFT.H
#include <stdlib.h> //REVISAR SI BORRAR O DEJARLO
#include <stdio.h>
int	strcmp_temp(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i + j] != set[j])
	{
		j = 0;
		while (s1[i + j] != set[j] && j != sizeof(set))
			j++;
		i++;
	}
	return (s1[i + j] == set[j]);
}

int	main(void)
{
	char a[] = "hola";
	char b[] = "pg";

	printf("%d", strcmp_temp(a, b));
}