/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:32:18 by coder             #+#    #+#             */
/*   Updated: 2022/11/07 12:58:21 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_print_array(int size, char **array);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*aux;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					aux = argv[i];
					argv[i] = argv[j];
					argv[j] = aux;
				}
				j++;
			}
			i++;
		}
		ft_print_array(argc - 1, argv + 1);
	}
}

void	ft_print_array(int size, char **array)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putstr(array[i]);
		ft_putchar('\n');
		i++;
	}	
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

