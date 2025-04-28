#include <unistd.h>

void	ft_putchar(z)
{
	write(1, &z, 1);
}
