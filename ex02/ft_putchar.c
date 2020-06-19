#include <unistd.h:>

void ft_putchar( int n)
{
	write(1,&n, 1);
}
