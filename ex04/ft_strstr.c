/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:22:46 by alejhern          #+#    #+#             */
/*   Updated: 2024/04/02 14:02:14 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
			j++;
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
	}
	if (i == 0 && str[0] == to_find[0])
		return (&str[0]);
	return (0);
}
