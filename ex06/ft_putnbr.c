/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:35:48 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/21 13:39:52 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c );

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		ft_putchar(nb);
	}
	if(nb > 0)
	{
		ft_putchar(nb + 48);
	}
}

int main()
{
	ft_putnbr(1);
	return 0;
}
