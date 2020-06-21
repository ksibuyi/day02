/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:01:31 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/21 12:29:36 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar( char c);

void ft_print_comb2(void)
{
	char a;
	char b;

	for( a = 48; a <= 57;  a++){
	  for( b = 48; b <= 57; b++){

		  ft_putchar(a);
	      ft_putchar(b);
		  ft_putchar(' ');
	  }
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
