/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:59:15 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/19 15:34:37 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar();

void ft_print_alphabet(void)
{
	char first_letter;
	first_letter = 'a';
	while( first_letter  <=  'z' )
	{
		ft_putchar(first_letter);
		first_letter ++;
	}
}

int main()
{
	ft_print_alphabet();;
	return 0;
}
