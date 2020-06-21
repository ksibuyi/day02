/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__print_comb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 10:23:20 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/21 10:52:45 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_print_comb(void)
{
	int numbers[3] = {48, 48, 48};

	while (numbers[0] <= 57)
	{
		if ((numbers[0] < numbers[1]) && ( numbers[1] < numbers[2]))
		{
			ft_putchar(numbers[0]);
			ft_putchar(numbers[1]);
			ft_putchar(numbers[2]);
			if (numbers[0] != 55){
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (numbers[2]++ >=57)
		{
			numbers[2] = 48;
			numbers[1]++;
		}
		if (numbers[1] == 58)
		{
			numbers[1] = 48;
			numbers[0]++;
		}
	}
}

int main()
{
	ft_print_comb();
	return 0;
}

