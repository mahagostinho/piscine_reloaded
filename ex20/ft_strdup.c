/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:37:52 by coder             #+#    #+#             */
/*   Updated: 2022/11/07 12:59:00 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	ptr = malloc(sizeof(char) * ft_strlen(src));
	if (ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		i = 0;
		while (src[i] != '\0')
		{
			*(ptr + i) = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

