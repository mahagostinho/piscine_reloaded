/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:02:36 by coder             #+#    #+#             */
/*   Updated: 2022/11/07 12:51:41 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb >= 0 && nb < 13)
	{
		if (nb == 0 || nb == 1)
			return (1);
		else
		{
			while (nb != 1 && nb > 0)
			{
				result = result * (nb - 1);
				nb--;
			}
			return (result);
		}
	}
	else
		return (0);
}

