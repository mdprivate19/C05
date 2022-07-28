/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumergu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:33:00 by mdumergu          #+#    #+#             */
/*   Updated: 2022/07/28 10:02:37 by mdumergu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	fois;

	fois = 2;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (fois <= nb)
	{
		result = fois * result;
		fois++;
	}
	return (result);
}
