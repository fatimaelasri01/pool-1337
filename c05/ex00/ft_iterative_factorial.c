/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:56:27 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/10 14:24:08 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	if (nb < 0)
		return (0);
	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
