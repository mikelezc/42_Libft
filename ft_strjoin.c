/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlezcano <mlezcano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:53:47 by mlezcano          #+#    #+#             */
/*   Updated: 2023/09/24 20:34:33 by mlezcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

/*
Reserva (con malloc(3)) y devuelve una nueva 
string, formada por la concatenación de ’s1’ y ’s2’.

-Parámetros:
s1: La primera string.
s2: La string a añadir a ’s1’.

-Retorna:
La nueva string.
NULL si falla la reserva de memoria.
*/