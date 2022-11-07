/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:55:24 by coder             #+#    #+#             */
/*   Updated: 2022/11/07 12:52:16 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb >= 0 && nb < 13)
		return (result * ft_recursive_factorial(nb - 1));
	else
		return (0);
}

