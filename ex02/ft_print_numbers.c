/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:13:06 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/21 09:53:10 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  ft_putchar(char c );

void ft_print_numbers(void)
{
	char first_number;

	first_number = 48;

	while (first_number <= 57 )
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
