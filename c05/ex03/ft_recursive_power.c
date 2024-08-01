/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:49:08 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/10 15:59:10 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb < 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
