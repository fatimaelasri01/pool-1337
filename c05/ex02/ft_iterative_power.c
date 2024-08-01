/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:15:40 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/10 15:45:47 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		p;

	i = 1;
	p = 1;
	if (nb < 0 || power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		p *= nb;
		i++;
	}
	return (p);
}
