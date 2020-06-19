/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:13:06 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/19 16:30:28 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ft_putchar(int n );

void ft_print_numbers(void)
{
	int first_number = 0;

	while (first_ number <= 9 )
	{
		ft_putchar( first_number );
		first_number++;
	}
}

int main()
{
	ft_print_numbers();
	return(0);
}
