/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:45:30 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/19 16:04:31 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c );

void ft_print_reverse_alphabet(void)
{
	char last_letter = 'z';
	while ( last_letter >= 'a' )
	{
		ft_putchar( last_letter );
		last_letter --;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return (0);
}
