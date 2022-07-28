/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:53:50 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/28 15:29:00 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	compt;
	int		return_int;

	compt = 1;
	while (compt * compt <= nb)
	{
		if (compt * compt == nb)
		{
			return_int = compt;
			return (return_int);
		}
		compt++;
	}
	return (0);
}
