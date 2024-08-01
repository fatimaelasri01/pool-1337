/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 09:29:31 by fel-asri          #+#    #+#             */
/*   Updated: 2024/07/07 10:21:24 by fel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
    char    *f;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			s = str;
			f = to_find;
			while (*f && *str && *f == *str)
			{
				str++;
				f++;
			}
			if (!(*f))
				return (s);
			str = s;
		}
		str++;
	}
	return (0);
}
